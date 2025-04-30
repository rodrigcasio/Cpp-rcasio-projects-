#include <vector>

class GradeStats{
  public:
    GradeStats(std::vector<int>& grades);
    double average();
    double standardDeviation();
    double median();

  private:
    std::vector <int>& grades;
    double variance();
};
