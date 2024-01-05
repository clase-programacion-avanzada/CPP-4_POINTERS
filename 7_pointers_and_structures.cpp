#include <iostream>

using namespace std;

struct student {
    string name;
    int age;
    float grade;
};

// Link to python tutor (Copy and paste it, don't click it):

int main() {

    /*
        In c++, we can point to any type of variable, including structures.
        We can use the arrow operator to access the members of the structure.

    */

    student* studentPointer = new student;

    studentPointer->name = "John";
    studentPointer->age = 20;
    studentPointer->grade = 8.5;

    cout << "The name of the student is: " << studentPointer->name << endl;
    cout << "The age of the student is: " << studentPointer->age << endl;
    cout << "The grade of the student is: " << studentPointer->grade << endl << endl;

    //also, we can use the dot operator to access the members of the structure

    (*studentPointer).name = "Mary";
    (*studentPointer).age = 21;
    (*studentPointer).grade = 9.5;

    cout << "The name of the student is: " << (*studentPointer).name << endl;
    cout << "The age of the student is: " << (*studentPointer).age << endl;
    cout << "The grade of the student is: " << (*studentPointer).grade << endl << endl;

    //When we are done using the structure, we need to delete it
    delete studentPointer;
    studentPointer = nullptr;

    //We can also create an array of structures
    int size = 6;

    student* studentArray = new student[size];

    //We can access the elements of the array with the [] operator or with the * operator
    for (int i = 0; i < 2; i++) {
        studentArray[i].name = "John" + to_string(i);
        studentArray[i].age = 20;
        studentArray[i].grade = 8.5;
    }

    for (int i = 2; i < 4; i++) {
        (studentArray+i)->name = "Mary" + to_string(i);
        (studentArray+i)->age = 21;
        (studentArray+i)->grade = 9.5;
    }

    for (int i = 4; i < size; i++) {
        (*(studentArray+i)).name = "Peter" + to_string(i);
        (*(studentArray+i)).age = 22;
        (*(studentArray+i)).grade = 10.0;
    }

    for (int i = 0; i < size; i++) {
        cout << "The name of the student is: " << studentArray[i].name << endl; //<- this is my preferred way 
        cout << "The age of the student is: " << (studentArray+i)->age << endl;
        cout << "The grade of the student is: " <<  (*(studentArray+i)).grade << endl;
    }

    //When we are done using the array of structures, we need to delete it
    delete[] studentArray;


    return 0;
}