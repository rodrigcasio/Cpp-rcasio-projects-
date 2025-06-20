#ifndef SCIENCE_TEACHER_REVIEW_ABSTRACTION_HPP
#define SCIENCE_TEACHER_REVIEW_ABSTRACTION_HPP

#include "h_TeacherReviewAbstraction.hpp"
#include <string>

class ScienceTeacher : public Teacher{
public:
	ScienceTeacher(std::string teacherName, std::string topic);
	std::string getFavoriteTopic();
	void chat() override;

private:
	std::string favTopic;
};

#endif