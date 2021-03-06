#include "DDS_Manager.h"

using namespace std;
using namespace std::chrono;

using namespace eprosima;
using namespace eprosima::fastrtps;

DDS_Manager::DDS_Manager(const char *nodeName) {
    ParticipantAttributes PParam;
    PParam.rtps.builtin.domainId = (uint32_t) domainId;
    PParam.rtps.builtin.leaseDuration = c_TimeInfinite;
    PParam.rtps.setName(nodeName);
    mp_participant = Domain::createParticipant(PParam);

    if (mp_participant == nullptr) {
        std::cout << "Unable to create FastRTPS domain participant." << endl;
        return;
    }

    RegisterTypes();

    auto *pub_listener = new DDS_Listeners::PubListener();

    config_publisher = InitializePublisher(AMM::DataTypes::configurationTopic, AMM::DataTypes::getConfigurationType(),
                                           pub_listener);

    status_publisher = InitializePublisher(AMM::DataTypes::statusTopic, AMM::DataTypes::getStatusType(),
                                           pub_listener);
}

Participant *DDS_Manager::GetParticipant() {
    return mp_participant;
}


void DDS_Manager::RegisterTypes() {
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getTickType());

    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getNodeType());
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getHighFrequencyNodeType());

    // AMM Patient Action / Intervention types
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getCommandType());

    // AMM Performance types
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getxAPIStatementType());

    // AMM Resource Requirements types
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getAirRequirementType());
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getBloodRequirementType());
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getCleaningSolutionRequirementType());
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getClearLiquidRequirementType());
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getPowerRequirementType());

    // AMM Resource Supply types
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getAirSupplyType());
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getBloodSupplyType());
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getCleaningSolutionSupplyType());
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getClearLiquidSupplyType());
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getPowerSupplyType());

    // AMM Capability types
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getConfigurationType());
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getStatusType());

    // AMM Logging types
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getDebugLogType());
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getErrorLogType());
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getWarningLogType());
    Domain::registerType(mp_participant, (TopicDataType *) AMM::DataTypes::getInfoLogType());


}

Publisher *DDS_Manager::InitializePublisher(std::string topicName, TopicDataType *topicType,
                                            PublisherListener *pub_listener) {
    PublisherAttributes wparam;
    wparam.topic.topicDataType = topicType->getName();
    wparam.topic.topicName = topicName;
    Publisher *gen_publisher = Domain::createPublisher(mp_participant, wparam, pub_listener);
    return gen_publisher;
}

Subscriber *DDS_Manager::InitializeSubscriber(std::string topicName, TopicDataType *topicType,
                                              SubscriberListener *sub_listener,
                                              TopicKind_t topicKind
) {
    SubscriberAttributes rparam;
    rparam.topic.topicDataType = topicType->getName();
    rparam.topic.topicName = topicName;
    rparam.topic.topicKind = topicKind;
    Subscriber *gen_subscriber = Domain::createSubscriber(mp_participant, rparam, sub_listener);
    return gen_subscriber;
}

void DDS_Manager::PublishModuleConfiguration(
        const std::string &module_name,
        const std::string &manufacturer,
        const std::string &model,
        const std::string &serial_number,
        const std::string &version,
        const std::string &capabilities
) {
    AMM::Capability::Configuration configInstance;
    configInstance.module_name(module_name);
    configInstance.manufacturer(manufacturer);
    configInstance.model(model);
    configInstance.serial_number(serial_number);
    configInstance.version(version);
    configInstance.capabilities(capabilities);
    PublishModuleConfiguration(configInstance);
}


void DDS_Manager::PublishModuleConfiguration(AMM::Capability::Configuration configInstance) {
  cout << "Publishing configuration.." << endl;
  
    config_publisher->write((void *) &configInstance);
}

void DDS_Manager::SetStatus(const std::string &module_name, AMM::Capability::status_values status) {
    AMM::Capability::Status statusInstance;
    statusInstance.module_name(module_name);
    statusInstance.status_value(status);
    SetStatus(statusInstance);
}

// Statuses other than OPERATIONAL can have messaging attached to them
void DDS_Manager::SetStatus(const std::string &module_name, AMM::Capability::status_values status,
                            const std::vector <std::string> &message) {
    AMM::Capability::Status statusInstance;
    statusInstance.status_value(status);
    statusInstance.message(message);
    statusInstance.module_name(module_name);
    SetStatus(statusInstance);
}

void DDS_Manager::SetStatus(AMM::Capability::Status statusInstance) {
  cout << "Setting status... " << endl;
    status_publisher->write((void *) &statusInstance);
}

string DDS_Manager::GetCapabilitiesAsString(const std::string &filename) {
    std::ifstream ifs(filename);
    std::string capabilitiesContent((std::istreambuf_iterator<char>(ifs)),
                                    (std::istreambuf_iterator<char>()));
    return capabilitiesContent;
}

string DDS_Manager::GetScenario() {
    std::ifstream t(scenarioFile);
    std::string str((std::istreambuf_iterator<char>(t)),
                    std::istreambuf_iterator<char>());
    currentScenario = str;
    cout << "[DDS_MANAGER] Current scenario is " << currentScenario << endl;
    return currentScenario;
}


void DDS_Manager::SetScenario(std::string scenario) {
    currentScenario = scenario;
    std::ofstream out(scenarioFile);
    out << currentScenario;
    out.close();

    cout << "[DDS_MANAGER] Set scenario to " << currentScenario << endl;
}
