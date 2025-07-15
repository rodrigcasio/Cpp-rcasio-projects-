#include <string>
#include "h_PacketType.hpp"
#include "h_Protocol.hpp"
#include "h_Status.hpp"

class Packet {
    private:
        
        PacketType type;    // 4.
        Protocol protocol;  // 6.
        Status packetStatus; // 7.

        const std::string getPacketTypeName() const;
        const std::string getStatusName() const;
        
    public:
        Packet(PacketType pType, Protocol ptrcl);

        void setType(PacketType newType);
        
        const std::string getProtocolName() const;
        void validatePacket();
        bool isError();
        void displayInfo() const;

        
    
};
