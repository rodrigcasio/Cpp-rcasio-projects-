// represent each packet status to effectively manage their different states
// they can have during it's lifecycle

enum class Status{  // 3.
    PENDING,
    VALID,
    INVALID,
    TIMEOUT

};
