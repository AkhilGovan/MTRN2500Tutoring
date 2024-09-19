#include <iostream>

#include "Student.h"

int main() {
    Student s{5392515, "Akhil"};
    s.addGrade(85, "Mtrn2500", "Coding for mtrn");
    s.addGrade(100, "Mtrn1500", "Coding for robots");
    s.printTranscript();
    return 0;
}