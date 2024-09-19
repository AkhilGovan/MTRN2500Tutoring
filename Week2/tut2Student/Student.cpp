//
// Created by Akhil  Govan on 2024/09/19.
//
#include "Student.h"

unsigned int Student::getZid() const{
    return mZid;
}

std::string Student::getName() const{
    return mName;
}

void Student::setName(std::string name) {
    mName = name;
}

void Student::addGrade(int grade, std::string courseName, std::string courseCode) {
    mGrades.push_back(std::make_tuple(grade, courseName, courseCode));
}

double Student::calculateWAM() const {
    if (mGrades.empty()) {
        return 100.0;
    }
    int sum{0};
    for (auto grade : mGrades) {
        sum += std::get<0>(grade);
    }
    return static_cast<double>(sum) / mGrades.size();
}

void Student::printTranscript() const{
    for (auto grade : mGrades) {
        std::cout<< "GRADE: " << std::get<0>(grade)
        << " CODE: " << std::get<1>(grade) << " NAME: " << std::get<2>(grade) << '\n';
    }
}
