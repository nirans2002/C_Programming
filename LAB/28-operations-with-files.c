// Aim: Write a program which create a file for students (name, Roll No, marks) and
// then perform the following operation
// (1) Store the name, Roll No and marks of 5 students onto file
// (2) Print the contents of the file
// (3) Add one student information into file
// (4) Display number of students in the file
// (5) Modify any student information
// Algorithm
//  Declare the Struct ‘students’ with all information of student and with
// functions ‘getdata’ and ‘printdata’
//  Open file, call the ‘getdata’ function and store in the data
//  Write to the file the data using a function – ‘write-to-file()’
//  Turn off the EOF flag
//  Add one more student data use function ‘add-data-to-file ()’
//  Display the appended file from beginning
//  Using ‘seek’ function, modify the student file
//  Display the updated file

#include<stdio.h>

FILE *student;

struct students{
    char name;
    int roll_no;
    int mark;
};

struct getdata();
struct printdata();

int main()
{
    struct students student1;
    struct students student2;
    struct students student3;
    struct students student4;
    struct students student5;
    student1 = getdata();
    printf("%s",student1.name);
    return 0;
}

struct getdata()
{
    struct students student;

    print("Enter thr roll no: ");
    scanf("%d",&student.roll_no);

    printf("Enter the name of student: ");
    gets(student.name);
    
    printf("Enter the mark: ");
    scanf("%d",&student.mark);
    return student;
}
