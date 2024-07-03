#include "RemoteControlPublisher.h"

RemoteControl::RemoteControl(string name) : Node(name)
{
    udp = new UDP();
    publisher = this->create_publisher<vida_interfaces::msg::Controls>("controls_data", 10);
    thread(&RemoteControl::publishControlsData, this).detach();
    RCLCPP_INFO(this->get_logger(), "Romote Control Has Been Started");
}

RemoteControl::~RemoteControl()
{
    delete udp;
}

void RemoteControl::publishControlsData()
{
    while (rclcpp::ok())
    {   
        auto msg = vida_interfaces::msg::Controls();

        string data = udp->read();
        istringstream dataInt(data);        

        dataInt >> msg.x;
        dataInt >> msg.y;

        publisher->publish(msg);
    }
}

int main(int argc, char **argv)
{
    init(argc, argv);                                         // inicializado o ROS
    auto node = make_shared<RemoteControl>("remote_control"); // criação do nó usando ponteiro compartilhado e o nomeando
    spin(node);                                               // gira o nó (o mantem vivo até ctrl + c)
    shutdown();
    return 0;
}
