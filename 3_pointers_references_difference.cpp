#include <iostream>

using namespace std;

// Link to python tutor (Copy and paste it, don't click it):
// https://pythontutor.com/render.html#code=%23include%20%3Ciostream%3E%0A%0Ausing%20namespace%20std%3B%0A%0A%0Aint%20main%28%29%20%7B%0A%20%20%0A%20%20%0A%20%20/*%0A%20%20%20%20There%20is%20a%20difference%20between%20pointers%20and%20references.%0A%20%20%20%20A%20pointer%20is%20a%20variable%20that%20stores%20the%20memory%20address%20of%20another%20variable.%0A%20%20%20%20A%20reference%20is%20an%20alias%20of%20a%20variable.%0A%20%20%20%20*/%0A%0A%20%20%20%20int*%20p%20%3D%20new%20int%3B%0A%20%20%20%20*p%20%3D%2010%3B%0A%0A%20%20%20%20int%26%20r%20%3D%20*p%3B%0A%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20p%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20p%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20r%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20%26r%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20variable%20pointed%20by%20p%20is%3A%20%22%20%3C%3C%20*p%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20variable%20pointed%20by%20r%20is%3A%20%22%20%3C%3C%20r%20%3C%3C%20endl%3B%0A%0A%20%20%20%20r%20%3D%2020%3B%0A%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20variable%20pointed%20by%20p%20is%3A%20%22%20%3C%3C%20*p%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20variable%20pointed%20by%20r%20is%3A%20%22%20%3C%3C%20r%20%3C%3C%20endl%3B%0A%0A%20%20%20%20//The%20difference%20between%20pointers%20and%20references%20is%20that%20a%20pointer%20can%20be%20reassigned%0A%20%20%20%20//to%20another%20memory%20address,%20while%20a%20reference%20can't%20be%20reassigned%20to%20another%20memory%20address.%0A%0A%20%20%20%20int*%20p2%20%3D%20new%20int%3B%0A%20%20%20%20*p2%20%3D%2020%3B%0A%0A%20%20%20%20//I%20can't%20do%20this%20with%20a%20reference%0A%20%20%20%20//int%26%20r%20%3D%20*p2%3B%0A%20%20%20%20%0A%20%20%20%20//%20References%20are%20commonly%20used%20in%20functions%20to%20avoid%20copying%20the%20value%20of%20a%20variable%0A%20%20%20%20//%20when%20passing%20it%20as%20an%20argument%20to%20a%20function.%20We%20would%20like%20to%20avoid%20copying%20the%20value%0A%20%20%20%20//%20of%20a%20variable%20when%20passing%20it%20as%20an%20argument%20to%20a%20function%20because%20it%20is%20inefficient.%0A%20%20%20%20//%20References%20are%20also%20used%20to%20return%20more%20than%20one%20value%20from%20a%20function.%0A%0A%20%20%20%20delete%20p2%3B%0A%20%20%20%20p2%20%3D%20nullptr%3B%0A%20%20%20%20delete%20p%3B%0A%20%20%20%20p%20%3D%20nullptr%3B%0A%20%20%20%20%0A%20%20%20%20return%200%3B%0A%0A%7D&cppShowMemAddrs=true&cumulative=false&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D&textReferences=false
int main() {

    /*
    There is a difference between pointers and references.
    A pointer is a variable that stores the memory address of another variable.
    A reference is an alias of a variable.
    */

    int a = 10;
    int* p = &a;
    
    int& r = a;

    cout << "The value of the memory address pointed by p is: " << (int *) p << endl;
    cout << "The value of the memory address pointed by r is: " << (int *) &r << endl;
    cout << "The value of the variable pointed by p is: " << *p << endl;
    cout << "The value of the variable pointed by r is: " << r << endl;

    r = 20;

    cout << "The value of the variable pointed by p is: " << *p << endl;
    cout << "The value of the variable pointed by r is: " << r << endl;

    //The difference between pointers and references is that a pointer can be reassigned
    //to another memory address, while a reference can't be reassigned to another memory address.

    int* p2 = new int;
    *p2 = 20;

    //I can't do this with a reference
    //int& r = *p2;

    // References are commonly used in functions to avoid copying the value of a variable
    // when passing it as an argument to a function. We would like to avoid copying the value
    // of a variable when passing it as an argument to a function because it is inefficient.
    // References are also used to return more than one value from a function.

    delete p2;
    p2 = nullptr;
    delete p;
    p = nullptr;

    return 0;
}