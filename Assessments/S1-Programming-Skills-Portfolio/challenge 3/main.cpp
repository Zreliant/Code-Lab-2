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

while (getline(file, id, ',') &&
       getline(file, name, ',') &&
       file >> coursework) {

        file.ignore(1, ',');
        file >> exam;
        file.ignore();

        students.push_back(Student(id, name, coursework, exam));
    }

    int choice;

    do {

        cout << "\n----- Student Management System -----";
        cout << "\n1. View all students";
        cout << "\n2. View individual student";
        cout << "\n3. Calculate final mark";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";

        cin >> choice;

        if (choice == 1) {
            if (students.empty()) {
                cout << "No students found." << endl;
            }
            else {
                for (Student s : students) {
                    s.display();
                }
            }
        }

        else if (choice == 2 || choice == 3) {
            cout << "Enter Student ID: ";
            cin >> id;

            bool found = false;

            // looks in vector for student ID
            for (Student s : students) {
                if (s.id == id) {
                    found = true;

                    if (choice == 2) {
                        s.display();
                    }

                    else {
                        cout << "\nStudent: " << s.name;
                        cout << "\nFinal Mark: " << s.final();
                        cout << "\nGrade: " << s.grade() << endl;
                    }
                }
            }

            if (!found) {
                cout << "Student not found." << endl;
            }
        }

        else if (choice == 4) {
            cout << "Goodbye!" << endl;
        }

        else {
            cout << "Invalid choice." << endl;
        }

    } while (choice != 4);

    return 0;
}