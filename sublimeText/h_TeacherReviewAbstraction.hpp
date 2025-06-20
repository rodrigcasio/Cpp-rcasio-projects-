#ifndef TEACHER_REVIEW_ABSTRACTION_HPP
#define TEACHER_REVIEW_ABSTRACTION_HPP
#include <string>
#include <vector>

class Teacher{
public:
	Teacher(std::string teacherName, std::string teacherSubject);

	std::string getName();
	std::string getSubject();
	void setClassRoom(int room);
	int getClassRoomNumber();
	virtual void chat();

	//evaluation methods:
	void addEvaluation();
	void setEvaluationGrade(int grade);
  	void setEvaluationComment(std::string comment);
  	void setEvaluationFeedback(std::string feedback);
  	int getEvaluationGrade();
  	std::string getEvaluationComment();
  	std::string getEvaluationFeedback();
  	void displayTeacherEvaluations(bool showHeader = true); //to show header in the all eval list;

private:
	std::string name;
	std::string subject;
	int classRoomNumber;

	std::vector <std::string> teacherEvaluation;
	int evaluationGrade;
  	std::string evaluationComment;
  	std::string evaluationFeedback;
};

#endif 