//
// Created by Akhil  Govan on 2024/09/19.
//
#pragma once

#include <string>
#include <vector>
#include <iostream>
class Student {
public:
    Student(unsigned int zid, std::string name = "Unkown") : mZid{zid}, mName{name}  {}
    unsigned int getZid() const;
    std::string getName() const;
    void addGrade(int grade, std::string courseCode, std::string courseName);
    void setName(std::string name);
    void printTranscript() const;
    double calculateWAM() const;
private:
    const unsigned int mZid;
    std::string mName;
    std::vector<std::tuple<int, std::string, std::string>> mGrades;
};

