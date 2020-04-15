/*GOAL: Practice writing and calling functions
*/

#include "main.hpp"

const int CLASS_SIZE = 6;

int main(){
    //Use two classes, student and courseEnrollment
    Student studentsInClass[CLASS_SIZE];
    CourseEnrollment course1;
    
    //there are 6 students to be enrolled
    static int studentNumber = 1000;
    int grade;

    //assign student id to each student
    for(int i = 0; i < CLASS_SIZE; i++){
        studentsInClass[i].setStudentID(studentNumber);
        studentNumber++;
    }

    //assign grades to all students
    for(int i = 0; i < CLASS_SIZE; i++){
      for(int j = 0; j < 10 ; j++){
            scanf("%d", &grade);
            studentsInClass[i].setGrade(j, grade);
        }  
    }
    
    //print out all students grades
    for(int i = 0; i < CLASS_SIZE; i++){
        studentsInClass[i].printGrades();
        cout<<"\nMin grade = "<<studentsInClass[i].getMin()<<"\n";
        cout<<"Max grade = "<<studentsInClass[i].getMax()<<"\n";
        cout<<"Grade Average = "<<studentsInClass[i].getAverageGrade()<<"\n\n";
    }
    
    course1.addStudents(studentsInClass);
    
    int *allGrades;
    allGrades = course1.getAllGrades();
    allGrades = course1.sortAllGrades();
    cout<<"ALLGRADES\n";
    cout<<"Lowest grade for entire course = "<<course1.getMinGrade()<<"\n";
    cout<<"Highest grade for entire course = "<<course1.getMaxGrade()<<"\n";
    cout<<"Avg grade for entire course = "<<course1.getAvgGrade()<<"\n";
    return 0;
}