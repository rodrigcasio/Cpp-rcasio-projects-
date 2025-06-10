#ifndef TABLE_MEMORY_MANAGAMENT_HPP
#defien TABLE_MEMORY_MANAGAMENT_HPP

class Table{
  private:
    int number;
    bool isAvailable;

  public:
    Table(int num);
    void reserve();
    void release();
    bool getIsAvailable() const;
    int getTableNumber() const;
};

#endif
