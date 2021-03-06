#pragma once

#include "DDS_Manager.h"

#include "DDS_Listeners.h"

#include "ListenerInterface.h"

#include "PhysiologyThread.h"

#include <chrono>
#include <time.h>

#include <mutex>
#include <thread>


using namespace std;
using namespace std::chrono;

class PhysiologyEngineManager : public ListenerInterface {

public:

    PhysiologyEngineManager();

    ~PhysiologyEngineManager() override = default;;

    void StartSimulation();

    void StopSimulation();

    void Shutdown();

    void StartTickSimulation();

    void StopTickSimulation();

    void PublishData(bool force);

    void PrintAvailableNodePaths();

    void PrintAllCurrentData();

    void Status();

    int GetNodePathCount();

    int GetTickCount();

    bool isRunning();

    void SendShutdown();

    void WriteNodeData(string node);

    void TickLoop();

    void AdvanceTimeTick();	

    bool closed = false;
    bool paused = false;
    int lastFrame = 0;

    std::string stateFile = "./states/StandardMale@0s.xml";
    
    std::string get_filename_date(void);
    std::string get_random_string( size_t length );

    void onNewNodeData(AMM::Physiology::Node n) override;

    void onNewTickData(AMM::Simulation::Tick ti) override;

    void onNewCommandData(AMM::PatientAction::BioGears::Command cm) override;

private:
    std::map<std::string, double (PhysiologyThread::*)()> * nodePathMap;

protected:
    const char* nodeName = "AMM_PhysiologyEngine";

    DDS_Manager *mgr = new DDS_Manager(nodeName);

    Publisher *node_publisher;
    Subscriber *tick_subscriber;
    Subscriber *command_subscriber;

    PhysiologyThread *bg; //  = new PhysiologyThread("./logs/biogears.log");

    std::thread m_thread;
    std::mutex m_mutex;
    bool m_runThread;

};

