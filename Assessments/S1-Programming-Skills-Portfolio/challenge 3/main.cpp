#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Student {
public:
    string id, name;
    double coursework, exam;

    double final() {
        return (coursework * 0.4) + (exam * 0.6);
    }

    string grade() {
        double mark = final();

        if (mark >= 70) return "First";
        if (mark >= 60) return "Upper Second";
        if (mark >= 50) return "Lower Second";
        if (mark >= 40) return "Third";
        return "Fail";
    }

    void display() const {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nCoursework: " << coursework;
        cout << "\nExam: " << exam << endl;
    }

    Student(string i, string n, double c, double e) {
        id = i;
        name = n;
        coursework = c;
        exam = e;
    }
};

int main() {
    vector<Student> students;


    ifstream file("resources/studentMarks.txt");

    string id, name;
    double coursework, exam;

    if (!file) {
        cout << "Error opening studentMarks.txt!" << endl;
        return 1;
    }

getline(file, id);

    return 0;
}