#include <iostream>

using namespace std;

//Link to python tutor (Copy and paste it, don't click it):
// https://pythontutor.com/render.html#code=%23include%20%3Ciostream%3E%0A%0A%0Ausing%20namespace%20std%3B%0A%0Avoid%20func3%28%29%20%7B%0A%20%20%20%20char%20letter%20%3D%20'D'%3B%0A%7D%0A%0A%0Avoid%20func2%28%29%20%7B%0A%20%20%20%20char%20letter%20%3D%20'C'%3B%0A%20%20%20%20func3%28%29%3B%0A%7D%0A%0Avoid%20func1%28%29%20%7B%0A%20%20%20%20char%20letter%20%3D%20'B'%3B%0A%20%20%20%20func2%28%29%3B%0A%7D%0A%0A%0Aint%20main%28%29%7B%0A%20%20%20%0A%20%20%20%20char%20letter%20%3D%20'A'%3B%0A%20%20%20%20%0A%20%20%20%20func1%28%29%3B%0A%20%20%20%20%0A%20%20%20%20char*%20pointer%20%3D%20%26letter%3B%0A%20%20%20%20%0A%20%20%20%20%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20variable%20letter%20is%3A%20%22%20%3C%3C%20letter%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20of%20the%20variable%20letter%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20%26letter%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20pointer%20is%3A%20%22%20%3C%3C%20%28int*%29%20pointer%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20variable%20pointed%20by%20pointer%20is%3A%20%22%20%3C%3C%20*pointer%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3Cendl%3B%0A%0A%20%20%20%20char%20**pointerToPointer%20%3D%20%26pointer%3B%0A%20%20%20%20char%20***pointerToPointerToPointer%20%3D%20%26pointerToPointer%3B%0A%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20variable%20pointed%20by%20pointer%20is%3A%20%22%20%3C%3C%20**pointerToPointer%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20variable%20pointed%20by%20pointerToPointer%20is%3A%20%22%20%3C%3C%20***pointerToPointerToPointer%20%3C%3C%20endl%3B%0A%0A%20%20%0A%20%20%20%20return%200%3B%0A%7D&cppShowMemAddrs=true&cumulative=false&curInstr=24&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D&textReferences=false
void func3() {
    char letter = 'D';
}


void func2() {
    char letter = 'C';
    func3();
}

void func1() {
    char letter = 'B';
    func2();
}


int main(){
    
    /*
    Variables created in stack memory
    Variables declared with an identifier are stored in stack memory. 
    */
   
    char letter = 'A';
    
    /*
    When a function is called, the variables declared in the function are stored in stack memory.
    The variables have a local scope,
    which means that they can only be accessed inside the function.
    When the function returns, the variables are deleted from stack memory.
    */
    func1();
    
    //in this case, the pointer is pointing to the memory address 
    //of the variable letter
    char* pointer = &letter;
    
    //the value of the variable letter is printed
    cout << "The value of the variable letter is: " << letter << endl;
    //the & operator returns the memory address of the variable
    cout << "The value of the memory address of the variable letter is: " << (int *) &letter << endl;
    //if we print the pointer, we will get the memory address of the variable letter
    cout << "The value of the memory address pointed by pointer is: " << (int*) pointer << endl;
    //the * operator returns the value of the variable pointed by the pointer
    cout << "The value of the variable pointed by pointer is: " << *pointer << endl;
    cout <<endl;

    //The * which is before the pointer is called the dereference operator
    //Sometimes we will find more than one * in a row, like ** or ***.
    //This is used to create pointers to pointers, or pointers to pointers to pointers, and so on.

    char **pointerToPointer = &pointer;
    char ***pointerToPointerToPointer = &pointerToPointer;

    //The value of the variable pointed by pointer is printed
    cout << "The value of the variable pointed by pointer is: " << **pointerToPointer << endl;
    //The value of the variable pointed by pointerToPointer is printed
    cout << "The value of the variable pointed by pointerToPointer is: " << ***pointerToPointerToPointer << endl;

    //This is useful when we want to create dynamic arrays, 
    // or when we want to create multi-dimensional arrays. We will see that in the next examples.

    return 0;
}