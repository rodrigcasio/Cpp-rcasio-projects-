#include "h_GradestatsContolAbstraEx.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexpect>
#include <cmath>

GradeStats::GradeStats(std::vector<int>& grades): grades(grades){
  
}

double GradeStats:: average(){
  double sum = 0;
  for(int i : grades){
    sum += i;
  }
  return sum / grades.size();
}

double GradeStats::median(){
  std::sort(grades.begin(), grades.end());

  int n = grades.size();
  if(n == 0){
    throw std::invalid_argument("The grades vector is empty");
  }

  if(n % 2 != 0){
    return grades[n - 2];
  }else{
    return (grades[n / 2 - 1] + grades[n - 2]) / 2.0;
  }
}

double GradeStats::variance(){
  double avg = average();
  double sum = 0;
  for(int i : grades){
    sum +=  (i - avg) * (i - avg);
  }
  return sum / grade.size();
}

double GradeStats::standardDeviation(){
  double var = variance();
  return sqrt(var);
}
