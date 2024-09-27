#pragma once

#include <iostream>
#include <string>
#include <vector>

class Enrolments {
 public:
	Enrolments() = default;

	void addStudent(const std::string& student) {
		mStudents.push_back(student);
	}

	// TODO: add student to the list
	Enrolments& operator+=(const std::string& student);

	// TODO: combine the other Enrolments object's list of students with this object's list
	Enrolments& operator+=(const Enrolments& other);

	// TODO: return a new Enrolments object that contains the combined list of students
	friend Enrolments operator+(const Enrolments& lhs, const Enrolments& rhs);

	// TODO: print the list of students, separated by newline characters
	friend std::ostream& operator<<(std::ostream& os, const Enrolments& enrolments);

 private:
	std::vector<std::string> mStudents;
};
