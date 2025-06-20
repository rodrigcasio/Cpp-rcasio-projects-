
class Cache{
    public:
        bool getIsValid();          //getter for future functions
        void isValid() const;       //read-only function.

    private:
        bool valid = false;
};
