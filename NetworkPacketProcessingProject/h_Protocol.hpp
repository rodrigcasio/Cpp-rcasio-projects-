// system must handle various network protocols, representing these using an enum class

enum class Protocol{    // 2.
    TCP,
    UDP,
    ICMP,   // new
    IGMP,   // new
    ARP,
    HTTP,
    FTP
};
