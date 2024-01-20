#include <iostream>

using namespace std;

struct student {
    string name;
    int age;
    float grade;
};

struct classRoom {
    int numberOfStudents;
    student* students;
};




float getRandomNumber(int min, int max) {
    return min + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(max-min)));
}

float getRandomGrade() {
    //return grade with 2 decimals
    return ceill(getRandomNumber(3, 10) * 10) / 10;
}

int getRandomAge() {
    return (int) getRandomNumber(18, 25);
}



// Link to python tutor (Copy and paste it, don't click it):
// https://pythontutor.com/render.html#code=%23include%20%3Ciostream%3E%0A%23include%20%3Ccmath%3E%20%20//%20Add%20this%20line%20to%20include%20the%20%3Ccmath%3E%20header%0A%0Ausing%20namespace%20std%3B%0A%0Astruct%20student%20%7B%0A%20%20%20%20string%20name%3B%0A%20%20%20%20int%20age%3B%0A%20%20%20%20float%20grade%3B%0A%7D%3B%0A%0Astruct%20classRoom%20%7B%0A%20%20%20%20int%20numberOfStudents%3B%0A%20%20%20%20student*%20students%3B%0A%7D%3B%0A%0A%0A%0A%0Afloat%20getRandomNumber%28int%20min,%20int%20max%29%20%7B%0A%20%20%20%20return%20min%20%2B%20static_cast%20%3Cfloat%3E%20%28rand%28%29%29%20/%28%20static_cast%20%3Cfloat%3E%20%28RAND_MAX/%28max-min%29%29%29%3B%0A%7D%0A%0Afloat%20getRandomGrade%28%29%20%7B%0A%20%20%20%20//return%20grade%20with%202%20decimals%0A%20%20%20%20return%20ceil%28getRandomNumber%283,%2010%29%20*%2010%29%20/%2010%3B%0A%7D%0A%0Aint%20getRandomAge%28%29%20%7B%0A%20%20%20%20return%20%28int%29%20getRandomNumber%2818,%2025%29%3B%0A%7D%0A%0A%0A%0A//%20Link%20to%20python%20tutor%20%28Copy%20and%20paste%20it,%20don't%20click%20it%29%3A%0A//%20%0Aint%20main%28%29%20%7B%0A%0A%20%20%20%20/*%0A%20%20%20%20As%20you%20may%20imagine,%20structs%20can%20have%20pointers%20as%20members.%0A%20%20%20%20This%20is%20useful%20when%20we%20want%20to%20create%20a%20structure%20that%20has%20a%20variable%20number%20of%20elements.%0A%20%20%20%20In%20this%20example,%20we%20will%20create%20a%20structure%20that%20represents%20a%20classroom.%20%0A%20%20%20%20Also,%20we%20will%20have%20an%20array%20of%20classrooms.%0A%20%20%20%20%0A%20%20%20%20*/%0A%0A%20%20%20%20int%20numberOfClassrooms%20%3D%202%3B%0A%20%20%20%20//We%20create%20an%20array%20of%20classrooms%0A%20%20%20%20classRoom*%20classrooms%20%3D%20new%20classRoom%5BnumberOfClassrooms%5D%3B%0A%0A%20%20%20%20//We%20create%20a%20variable%20classrooms%20with%20distinct%20number%20of%20students%0A%20%20%20%20//In%20this%20case,%20we%20will%20have%2010,%2020%20and%2030%20students%20in%20each%20classroom%0A%20%20%20%20for%20%28int%20i%20%3D%200%3B%20i%20%3C%20numberOfClassrooms%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20%20%20%20%20int%20numberOfStudents%20%3D%20i%2B1%3B%0A%20%20%20%20%20%20%20%20classrooms%5Bi%5D.numberOfStudents%20%3D%20numberOfStudents%3B%0A%20%20%20%20%20%20%20%20student*%20studentPtr%20%3D%20new%20student%5BnumberOfStudents%5D%3B%0A%20%20%20%20%20%20%20%20classrooms%5Bi%5D.students%20%3D%20studentPtr%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20//We%20fill%20the%20array%20of%20students%0A%20%20%20%20for%20%28int%20i%20%3D%200%3B%20i%20%3C%20numberOfClassrooms%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20%20%20%20%20for%20%28int%20j%20%3D%200%3B%20j%20%3C%20classrooms%5Bi%5D.numberOfStudents%3B%20j%2B%2B%29%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20classrooms%5Bi%5D.students%5Bj%5D.name%20%3D%20%22Student%22%20%2B%20to_string%28j%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20classrooms%5Bi%5D.students%5Bj%5D.age%20%3D%20getRandomAge%28%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20classrooms%5Bi%5D.students%5Bj%5D.grade%20%3D%20getRandomGrade%28%29%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%7D%0A%0A%20%20%20%20//We%20print%20the%20array%20of%20students%0A%0A%20%20%20%20for%20%28int%20i%20%3D%200%3B%20i%20%3C%20numberOfClassrooms%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20%20%20%20%20cout%20%3C%3C%20%22Classroom%20%22%20%3C%3C%20i%20%3C%3C%20endl%3B%0A%20%20%20%20%20%20%20%20for%20%28int%20j%20%3D%200%3B%20j%20%3C%20classrooms%5Bi%5D.numberOfStudents%3B%20j%2B%2B%29%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20cout%20%3C%3C%20%22Student%20%22%20%3C%3C%20j%20%3C%3C%20%22%20%22%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20cout%20%3C%3C%20%22Name%3A%20%22%20%3C%3C%20classrooms%5Bi%5D.students%5Bj%5D.name%20%3C%3C%20%22%20%22%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20cout%20%3C%3C%20%22Age%3A%20%22%20%3C%3C%20classrooms%5Bi%5D.students%5Bj%5D.age%20%3C%3C%20%22%20%22%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20cout%20%3C%3C%20%22Grade%3A%20%22%20%3C%3C%20classrooms%5Bi%5D.students%5Bj%5D.grade%20%3C%3C%20endl%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%20%20%20%20cout%20%3C%3C%20endl%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20//We%20need%20to%20delete%20the%20array%20of%20students%0A%20%20%20%20for%20%28int%20i%20%3D%200%3B%20i%20%3C%20numberOfClassrooms%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20%20%20%20%20delete%5B%5D%20classrooms%5Bi%5D.students%3B%0A%20%20%20%20%20%20%20%20classrooms%5Bi%5D.students%20%3D%20nullptr%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20//We%20need%20to%20delete%20the%20array%20of%20classrooms%0A%20%20%20%20delete%5B%5D%20classrooms%3B%0A%20%20%20%20classrooms%20%3D%20nullptr%3B%0A%0A%0A%0A%20%20%20%0A%20%20%20%20return%200%3B%0A%7D&cppShowMemAddrs=true&cumulative=false&curInstr=108&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D&textReferences=

int main() {

    /*
    As you may imagine, structs can have pointers as members.
    This is useful when we want to create a structure that has a variable number of elements.
    In this example, we will create a structure that represents a classroom. 
    Also, we will have an array of classrooms.
    
    */

    int numberOfClassrooms = 3;
    //We create an array of classrooms
    classRoom* classrooms = new classRoom[numberOfClassrooms];

    //We create a variable classrooms with distinct number of students
    //In this case, we will have 10, 20 and 30 students in each classroom
    for (int i = 0; i < numberOfClassrooms; i++) {
        classrooms[i].numberOfStudents = 10 * (i+1);
        classrooms[i].students = new student[classrooms[i].numberOfStudents];
    }

    //We fill the array of students
    for (int i = 0; i < numberOfClassrooms; i++) {
        for (int j = 0; j < classrooms[i].numberOfStudents; j++) {
            classrooms[i].students[j].name = "Student" + to_string(j);
            classrooms[i].students[j].age = getRandomAge();
            classrooms[i].students[j].grade = getRandomGrade();
        }
    }

    //We print the array of students

    for (int i = 0; i < numberOfClassrooms; i++) {
        cout << "Classroom " << i << endl;
        for (int j = 0; j < classrooms[i].numberOfStudents; j++) {
            cout << "Student " << j << " ";
            cout << "Name: " << classrooms[i].students[j].name << " ";
            cout << "Age: " << classrooms[i].students[j].age << " ";
            cout << "Grade: " << classrooms[i].students[j].grade << endl;
        }
        cout << endl;
    }

    //We need to delete the array of students
    for (int i = 0; i < numberOfClassrooms; i++) {
        delete[] classrooms[i].students;
        classrooms[i].students = nullptr;
    }

    //We need to delete the array of classrooms
    delete[] classrooms;
    classrooms = nullptr;






   
    return 0;
}