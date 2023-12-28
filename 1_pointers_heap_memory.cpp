#include <iostream>

using namespace std;

// Python tutor link (Copy and paste the link, don't click it)
// https://pythontutor.com/render.html#code=%23include%20%3Ciostream%3E%0A%0Ausing%20namespace%20std%3B%0A%0A%0Aint%20main%28%29%20%7B%0A%20%20%0A%20%20%20%20%0A%20%20%20%20%0A%20%20%20%20/*%0A%20%20%20%20Variables%20created%20in%20heap%20memory%0A%20%20%20%20To%20create%20a%20variable%20in%20heap%20memory,%20we%20need%20to%20use%20the%20new%20operator.%0A%0A%20%20%20%20The%20new%20operator%20returns%20the%20memory%20address%20%0A%20%20%20%20of%20the%20variable%20created%20in%20heap%20memory.%20In%20this%20case,%0A%20%20%20%20p%20is%20a%20pointer%20that%20points%20to%20the%20memory%20address%20of%20%0A%20%20%20%20the%20variable%20created%20in%20heap%20memory.%0A%0A%20%20%20%20*/%0A%20%20%20%20//int*%20p%20%3D%200x0001%3B%0A%20%20%20%20int*%20p%20%3D%20new%20int%3B%0A%20%20%20%20*p%20%3D%2010%3B%0A%0A%20%20%20%20//char*%20p2%20%3D%200x0005%3B%0A%20%20%20%20char*%20p2%20%3D%20new%20char%3B%0A%20%20%20%20*p2%20%3D%20'A'%3B%0A%0A%20%20%20%20//The%20size%20of%20pointers%20is%20always%20the%20same,%20%0A%20%20%20%20//in%20this%20case,%208%20bytes.%20In%20another%20hand,%0A%20%20%20%20//the%20size%20of%20the%20variables%20pointed%20by%20the%20pointers%0A%20%20%20%20//is%20different,%20in%20this%20case,%204%20bytes%20for%20the%20int%20variable%0A%20%20%20%20//and%201%20byte%20for%20the%20char%20variable.%0A%20%20%20%20cout%20%3C%3C%20%22The%20size%20of%20the%20pointer%20p%20is%3A%20%22%20%3C%3C%20sizeof%28p%29%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20p%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20p%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20size%20of%20the%20variable%20*p%20is%3A%20%22%20%3C%3C%20sizeof%28*p%29%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3Cendl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20size%20of%20the%20pointer%20p2%20is%3A%20%22%20%3C%3C%20sizeof%28p2%29%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20p2%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20p2%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20size%20of%20the%20variable%20*p2%20is%3A%20%22%20%3C%3C%20sizeof%28*p2%29%20%3C%3C%20endl%3B%0A%20%20%20%20%0A%20%20%20%20//We%20need%20to%20delete%20the%20variables%20created%20in%20heap%20memory%0A%20%20%20%20//to%20avoid%20memory%20leaks%0A%0A%20%20%20%20delete%20p%3B%0A%20%20%20%20//%20we%20need%20to%20set%20the%20pointer%20to%20nullptr%20to%20avoid%20dangling%20pointers%0A%20%20%20%20p%20%3D%20nullptr%3B%0A%20%20%20%20delete%20p2%3B%0A%20%20%20%20p2%20%3D%20nullptr%3B%0A%0A%20%20%20%20return%200%3B%0A%7D&cppShowMemAddrs=true&cumulative=false&curInstr=16&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D&textReferences=false
int main(){


    /*
    Variables created in heap memory
    To create a variable in heap memory, we need to use the new operator.

    The new operator returns the memory address 
    of the variable created in heap memory. In this case,
    p is a pointer that points to the memory address of 
    the variable created in heap memory.

    */
    //int* p = 0x0001;
    int* p = new int;
    *p = 10;

    //char* p2 = 0x0005;
    char* p2 = new char;
    *p2 = 'A';

    //The size of pointers is always the same, 
    //in this case, 8 bytes. In another hand,
    //the size of the variables pointed by the pointers
    //is different, in this case, 4 bytes for the int variable
    //and 1 byte for the char variable.
    cout << "The size of the pointer p is: " << sizeof(p) << endl;
    cout << "The value of the memory address pointed by p is: " << (int *) p << endl;
    cout << "The size of the variable *p is: " << sizeof(*p) << endl;
    cout <<endl;
    cout << "The size of the pointer p2 is: " << sizeof(p2) << endl;
    cout << "The value of the memory address pointed by p2 is: " << (int *) p2 << endl;
    cout << "The size of the variable *p2 is: " << sizeof(*p2) << endl;

    //We need to delete the variables created in heap memory
    //to avoid memory leaks

    delete p;
    // we need to set the pointer to nullptr to avoid dangling pointers
    p = nullptr;
    delete p2;
    p2 = nullptr;

    return 0;

}