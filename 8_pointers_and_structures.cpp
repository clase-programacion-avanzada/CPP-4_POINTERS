#include <iostream>

using namespace std;

struct student {
    string name;
    int age;
    float grade;
};

// Link to python tutor (Copy and paste it, don't click it):
// https://pythontutor.com/render.html#code=%23include%20%3Ciostream%3E%0A%0Ausing%20namespace%20std%3B%0A%0Astruct%20student%20%7B%0A%20%20%20%20string%20name%3B%0A%20%20%20%20int%20age%3B%0A%20%20%20%20float%20grade%3B%0A%7D%3B%0A%0A//%20Link%20to%20python%20tutor%20%28Copy%20and%20paste%20it,%20don't%20click%20it%29%3A%0A%0Aint%20main%28%29%20%7B%0A%0A%20%20%20%20/*%0A%20%20%20%20%20%20%20%20In%20c%2B%2B,%20we%20can%20point%20to%20any%20type%20of%20variable,%20including%20structures.%0A%20%20%20%20%20%20%20%20We%20can%20use%20the%20arrow%20operator%20to%20access%20the%20members%20of%20the%20structure.%0A%0A%20%20%20%20*/%0A%0A%20%20%20%20student*%20studentPointer%20%3D%20new%20student%3B%0A%0A%20%20%20%20studentPointer-%3Ename%20%3D%20%22John%22%3B%0A%20%20%20%20studentPointer-%3Eage%20%3D%2020%3B%0A%20%20%20%20studentPointer-%3Egrade%20%3D%208.5%3B%0A%0A%20%20%20%20cout%20%3C%3C%20%22The%20name%20of%20the%20student%20is%3A%20%22%20%3C%3C%20studentPointer-%3Ename%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20age%20of%20the%20student%20is%3A%20%22%20%3C%3C%20studentPointer-%3Eage%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20grade%20of%20the%20student%20is%3A%20%22%20%3C%3C%20studentPointer-%3Egrade%20%3C%3C%20endl%20%3C%3C%20endl%3B%0A%0A%20%20%20%20//also,%20we%20can%20use%20the%20dot%20operator%20to%20access%20the%20members%20of%20the%20structure%0A%0A%20%20%20%20%28*studentPointer%29.name%20%3D%20%22Mary%22%3B%0A%20%20%20%20%28*studentPointer%29.age%20%3D%2021%3B%0A%20%20%20%20%28*studentPointer%29.grade%20%3D%209.5%3B%0A%0A%20%20%20%20cout%20%3C%3C%20%22The%20name%20of%20the%20student%20is%3A%20%22%20%3C%3C%20%28*studentPointer%29.name%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20age%20of%20the%20student%20is%3A%20%22%20%3C%3C%20%28*studentPointer%29.age%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20grade%20of%20the%20student%20is%3A%20%22%20%3C%3C%20%28*studentPointer%29.grade%20%3C%3C%20endl%20%3C%3C%20endl%3B%0A%0A%20%20%20%20//When%20we%20are%20done%20using%20the%20structure,%20we%20need%20to%20delete%20it%0A%20%20%20%20delete%20studentPointer%3B%0A%20%20%20%20studentPointer%20%3D%20nullptr%3B%0A%0A%20%20%20%20//We%20can%20also%20create%20an%20array%20of%20structures%0A%20%20%20%20int%20size%20%3D%206%3B%0A%0A%20%20%20%20student*%20studentArray%20%3D%20new%20student%5Bsize%5D%3B%0A%0A%20%20%20%20//We%20can%20access%20the%20elements%20of%20the%20array%20with%20the%20%5B%5D%20operator%20or%20with%20the%20*%20operator%0A%20%20%20%20for%20%28int%20i%20%3D%200%3B%20i%20%3C%202%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20%20%20%20%20studentArray%5Bi%5D.name%20%3D%20%22John%22%20%2B%20to_string%28i%29%3B%0A%20%20%20%20%20%20%20%20studentArray%5Bi%5D.age%20%3D%2020%3B%0A%20%20%20%20%20%20%20%20studentArray%5Bi%5D.grade%20%3D%208.5%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20for%20%28int%20i%20%3D%202%3B%20i%20%3C%204%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20%20%20%20%20%28studentArray%2Bi%29-%3Ename%20%3D%20%22Mary%22%20%2B%20to_string%28i%29%3B%0A%20%20%20%20%20%20%20%20%28studentArray%2Bi%29-%3Eage%20%3D%2021%3B%0A%20%20%20%20%20%20%20%20%28studentArray%2Bi%29-%3Egrade%20%3D%209.5%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20for%20%28int%20i%20%3D%204%3B%20i%20%3C%20size%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20%20%20%20%20%28*%28studentArray%2Bi%29%29.name%20%3D%20%22Peter%22%20%2B%20to_string%28i%29%3B%0A%20%20%20%20%20%20%20%20%28*%28studentArray%2Bi%29%29.age%20%3D%2022%3B%0A%20%20%20%20%20%20%20%20%28*%28studentArray%2Bi%29%29.grade%20%3D%2010.0%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20for%20%28int%20i%20%3D%200%3B%20i%20%3C%20size%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20%20%20%20%20cout%20%3C%3C%20%22The%20name%20of%20the%20student%20is%3A%20%22%20%3C%3C%20studentArray%5Bi%5D.name%20%3C%3C%20endl%3B%20//%3C-%20this%20is%20my%20preferred%20way%20%0A%20%20%20%20%20%20%20%20cout%20%3C%3C%20%22The%20age%20of%20the%20student%20is%3A%20%22%20%3C%3C%20%28studentArray%2Bi%29-%3Eage%20%3C%3C%20endl%3B%0A%20%20%20%20%20%20%20%20cout%20%3C%3C%20%22The%20grade%20of%20the%20student%20is%3A%20%22%20%3C%3C%20%20%28*%28studentArray%2Bi%29%29.grade%20%3C%3C%20endl%3B%0A%20%20%20%20%7D%0A%20%20%20%20%0A%20%20%20%20//When%20we%20are%20done%20using%20the%20array%20of%20structures,%20we%20need%20to%20delete%20it%0A%20%20%20%20delete%5B%5D%20studentArray%3B%0A%0A%0A%20%20%20%20return%200%3B%0A%7D&cppShowMemAddrs=true&cumulative=false&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D&textReferences=
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