#include <iostream>
#include <string>

class Student {
public:
    int Student_Roll;
    std::string Student_Name;
};

int main() {
    // Compile-time initialization
    Student student1 = {12345, "John Doe"};

    // Run-time initialization
    Student student2;
    student2.Student_Roll = 67890;
    student2.Student_Name = "Jane Smith";

    // Display student details
    std::cout << "Student 1 details:\n";
    std::cout << "Roll Number: " << student1.Student_Roll << std::endl;
    std::cout << "Name: " << student1.Student_Name << std::endl;

    std::cout << "\nStudent 2 details:\n";
    std::cout << "Roll Number: " << student2.Student_Roll << std::endl;
    std::cout << "Name: " << student2.Student_Name << std::endl;

    return 0;
}