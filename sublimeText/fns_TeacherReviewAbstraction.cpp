#include "h_TeacherReviewAbstraction.hpp"
#include <iostream>

Teacher::Teacher(std::string teacherName, std::string teacherSubject): name(teacherName), subject(teacherSubject) {}


std::string Teacher::getName(){
	return name;
}
std::string Teacher::getSubject(){
	return subject;
}

void Teacher::setClassRoom(int room){
	classRoomNumber = room;
	std::cout << getName() << "'s classroom will be #" << getClassRoomNumber() << " for this years " << getSubject() << " class!" << std::endl << std::endl;
}
int Teacher::getClassRoomNumber(){
	return classRoomNumber;
}
void Teacher::chat(){
	std::cout << "Hi! my name is " << getName() << ". Pleasure to meet you young man" << std::endl << std::endl;
}

//evaluation:
void Teacher::addEvaluation(){ // std::to_string(grade), comment, feedback concatenate
	teacherEvaluation.push_back(std::to_string(getEvaluationGrade()) + " | " + getEvaluationComment() + " | " + getEvaluationFeedback()); 
}
//setters
void Teacher::setEvaluationGrade(int grade){
	evaluationGrade = grade;
}
void Teacher::setEvaluationComment(std::string comment){
	evaluationComment = comment;
}
void Teacher::setEvaluationFeedback(std::string feedback){
	evaluationFeedback = feedback;
}
//getters
int Teacher::getEvaluationGrade(){
	return evaluationGrade;
}
std::string Teacher::getEvaluationComment(){
	return evaluationComment;
}
std::string Teacher::getEvaluationFeedback(){
	return evaluationFeedback;
}
//display teacher evaluations individually
void Teacher::displayTeacherEvaluations(bool showHeader){
	if(teacherEvaluation.empty()){
		std::cout << getName() << " has not evaluations yet." << std::endl;
	}else{
		if(showHeader){ // to avoid header in all evaluation list
			std::cout << "-Evaluation for " << getName() << ":" << std::endl;
		}
		for(const std::string& evaluation : teacherEvaluation){
			std::cout << "- " << evaluation << std::endl;
		}
	}
}

