#pragma once

#include <fastrtps/rtps/reader/ReaderListener.h>

#include "AMMPubSubTypes.h"


/** Common listeners that can be implemented **/
class ListenerInterface : public ReaderListener {
public:
    ListenerInterface() = default;;

    virtual ~ListenerInterface() {};

    virtual void onNewNodeData(AMM::Physiology::Node n) {};

    virtual void onNewTickData(AMM::Simulation::Tick t) {};

    virtual void onNewCommandData(AMM::PatientAction::BioGears::Command c) {};

    virtual void onNewStatusData(AMM::Capability::Status s) {};

    virtual void onNewConfigData(AMM::Capability::Configuration cfg) {};

    std::string sysPrefix = "[SYS]";
    std::string actPrefix = "[ACT]";
    std::string loadPrefix = "LOAD_STATE:";
};