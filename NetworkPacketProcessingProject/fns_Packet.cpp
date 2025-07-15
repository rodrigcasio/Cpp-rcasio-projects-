#include "h_Packet.hpp"
#include <string>
#include <iostream>

Packet::Packet(PacketType pType, Protocol ptrcl): type(pType), protocol(ptrcl){ // 8.

}

const std::string Packet::getProtocolName() const{  
    switch(protocol){   // 9. 
        case Protocol::TCP: return "TCP"; break;    // 10.
        case Protocol::UDP: return "UDP"; break;
        case Protocol::HTTP: return "HTTP"; break;
        case Protocol::FTP: return "FTP"; break;
        default: return "Unknown Protocol";       
    }
}

void Packet::setType(PacketType newType){   // 5.
    type = newType;
}
