#include <string>
#include "h_PacketType.hpp"
#include "h_Protocol.hpp"
#include "h_Status.hpp"

class Packet {
    private:
        
        PacketType type;

        const std::string getPacketTypeName() const;
        const std::string getStatusName() const;
        
    public:
        
        const std::string getProtocolName() const;
        void validatePacket();
        bool isError();
        void displayInfo();

        
    
};
