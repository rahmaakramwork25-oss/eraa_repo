#include <iostream>
using namespace std;

class Student {
private:
    
    static int studentCount;

public:
    
    Student() {
        studentCount++;
        
    }

    
    static void printTotalStudents() {
        cout << "Total number of students: " << studentCount << endl;
    }
 
int Student::studentCount = 0;

int main() {
    
    Student s1;
    Student s2;
    Student s3;

    
    Student::printTotalStudents();

    return 0;
}}