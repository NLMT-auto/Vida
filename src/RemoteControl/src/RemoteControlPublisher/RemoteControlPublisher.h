#ifndef NUMBER_PUBLISH_H
#define NUMBER_PUBLISH_H

#include "rclcpp/rclcpp.hpp"
#include "vida_interfaces/msg/controls.hpp"
#include "../Utils/UDP.h"
#include <sstream>

using namespace std;
using namespace rclcpp;

class RemoteControl : public Node
{
private:
    UDP *udp;
    Publisher<vida_interfaces::msg::Controls>::SharedPtr publisher;
    TimerBase::SharedPtr timer;

    void publishControlsData();

public:
    RemoteControl(string name);
    ~RemoteControl();
};

#endif