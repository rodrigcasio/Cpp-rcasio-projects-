#ifndef TABLE_MEMORY_MANAGAMENT_HPP
#define TABLE_MEMORY_MANAGAMENT_HPP

class Table{
  private:
    int number;
    bool isAvailable;

  public:
    explicit Table(int num);
    void reserve();
    void release();
    bool getIsAvailable() const;
    int getTableNumber() const;
};

#endif
