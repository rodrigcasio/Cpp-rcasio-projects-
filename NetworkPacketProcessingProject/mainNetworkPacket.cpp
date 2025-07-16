// building a network packet processing system by using enums
// to represent a packet type, protocol and status. 
#include <iostream>
#include "h_Packet.hpp"

int main(){

    // 1st packet
    Packet udpPacket(PacketType::DATA, Protocol::UDP);  // 26.
    
    udpPacket.displayInfo();    // status not assigned yet.
    udpPacket.validatePacket(); // assigning status to packet.
    udpPacket.displayInfo();    // demonstrating status applied. output : VALID

std::cout << "---" << std::endl;

    // 2nd packet
    Packet tcpPacket(PacketType::CONTROL, Protocol::TCP);
    
    tcpPacket.displayInfo();
    tcpPacket.validatePacket();
    tcpPacket.displayInfo();

std::cout << "---" << std::endl;

    // 3rd packet
    Packet unknownPacket(PacketType::UNKNOWN, Protocol::TCP);
    
    unknownPacket.displayInfo();
    unknownPacket.validatePacket();
    unknownPacket.displayInfo();

std::cout << "---" << std::endl;

    // 4th packet
    Packet errorPacket(PacketType::ERROR, Protocol::HTTP);

    errorPacket.displayInfo();
    errorPacket.validatePacket();
    errorPacket.displayInfo();

std::cout << "---" << std::endl;

    // 5th packet
    Packet groupPacket(PacketType::GROUP, Protocol::IGMP);
    
    groupPacket.displayInfo();
    groupPacket.validatePacket();
    groupPacket.displayInfo();

std::cout << "---" << std::endl;

    // 6th packet
    Packet resolutionPacket(PacketType::RESOLUTION, Protocol::ARP);

    resolutionPacket.displayInfo();
    resolutionPacket.validatePacket();
    resolutionPacket.displayInfo();
   
    return 0;
}