#include "h_Packet.hpp"
#include <string>
#include <iostream>

Packet::Packet(PacketType pType, Protocol ptrcl): type(pType), protocol(ptrcl){ // 8.

}

const std::string Packet::getPacketTypeName() const{
    switch(type){   // 12
        case UNKNOWN: return "UNKNOWN"; break;  // 13.
        case DATA: return "DATA"; break;
        case CONTROL: return "CONTROL"; break;
        case ERROR: return "ERROR"; break;
        default: return "UNKNOWN";  // 14.
    }
}

const std::string Packet::getStatusName() const{
    switch(packetStatus){   // 15.
        case Status::PENDING: return "PENDING"; break;  // 16.
        case Status::VALID: return "VALID"; break;
        case Status::INVALID: return "INVALID"; break;
        case Status::TIMEOUT: return "TIMEOUT"; break;
        default: return "Unknown Packet Status";    // 17.
    }
}

// setting packetType outside the cosntructor
void Packet::setType(PacketType newType){   // 5.
    type = newType;
}

const std::string Packet::getProtocolName() const{  
    switch(protocol){   // 9. 
        case Protocol::TCP: return "TCP"; break;    // 10.
        case Protocol::UDP: return "UDP"; break;
        case Protocol::HTTP: return "HTTP"; break;
        case Protocol::FTP: return "FTP"; break;
        default: return "Unknown Protocol";     // 11.
    }
}

// assigning a status to current packet
void Packet::validatePacket(){  // 18. 
    switch(type){   
        case DATA:  // 19.
            if(protocol == Protocol::TCP || protocol == Protocol::UDP){
                packetStatus = Status::VALID;
            }else{
                packetStatus = Status::INVALID;
            }
            break;
        case CONTROL:   // 20.
            if(protocol == Protocol::TCP){
                packetStatus = Status::VALID;
            }else{
                packetStatus = Status::INVALID;
            }
            break;
        case ERROR: // 21.
            packetStatus = Status::VALID;
            break;
        case UNKNOWN:   // 22.
            packetStatus = Status::INVALID;
            break;
        default:    // 23.
            packetStatus = Status::INVALID;
    }
}

bool Packet::isError(){    // 24. determine if Packet is invalid for logging or error handling purposes.
    if(packetStatus == Status::INVALID) return true;
    // if VALID:
    return false;  
}

void Packet::displayInfo() const{
    std::cout << "\t=== Packet ===" << std::endl
              << "Packet Type Name: " << getPacketTypeName() << std::endl
              << "Protocol Name: " << getProtocolName() << std::endl
              << "Status Name: " << getStatusName() << std::endl;
}


