#include "h_ScienceTeacherReviewAbstraction.hpp"
#include <iostream>

ScienceTeacher::ScienceTeacher(std::string teacherName, std::string topic): Teacher(teacherName, "Science"), favTopic(topic){

}
std::string ScienceTeacher::getFavoriteTopic(){
	return favTopic;
}
void ScienceTeacher::chat(){
	std::cout << "Hello young one!, my name is " << getName() << ". I would say my favorite topic for "
			  << getSubject() << " class, would be " << getFavoriteTopic() << " ! It is fascinating and so interesting to learn it in the long run!" 
			  << std::endl << std::endl;
}