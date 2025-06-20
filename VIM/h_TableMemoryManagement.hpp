#ifndef TABLE_MEMORY_MANAGEMENT_HPP
#define TABLE_MEMORY_MANAGEMENT_HPP

class Table {
    private:
        int number;
        bool isAvailable;

    public: 
        Table(int num);
        void reserve();
        void release();
        bool getIsAvailable() const;
        int getNumber() const;
};

#endif








/*  Constructor used to create an object allocated on the heap, then
    creating a smart pointer that owns and points to that object, lastly
    we are adding the smart pointer to the vector of tables.

    Restaurant::Restaurant(int initialTableCount) : tableCount(initialTableCount){
        for(int i = 1l i <= initialTableCount; ++i){
            tables.push_back(std::make_unique<Table>(i));   // 
        }
    }
*/