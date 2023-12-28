#include <iostream>

using namespace std;
//Link to python tutor (Copy and paste it, don't click it):
// https://pythontutor.com/render.html#code=%23include%20%3Ciostream%3E%0A%0Ausing%20namespace%20std%3B%0A%0A%0Aint%20main%28%29%20%7B%0A%20%20%0A%20%20%0A%20%20%20%20%0A%20%20%20%20%0A%20%20%20%20/*%0A%20%20%20%20Variables%20created%20in%20heap%20memory%0A%20%20%20%20When%20handling%20pointers,%20we%20need%20to%20be%20careful%20with%20dangling%20pointers.%0A%20%20%20%20A%20dangling%20pointer%20is%20a%20pointer%20that%20points%20to%20a%20memory%20address%20that%0A%20%20%20%20was%20previously%20deallocated.%20In%20this%20case,%20the%20pointer%20p%20points%20to%20a%0A%20%20%20%20memory%20address%20that%20was%20previously%20deallocated%20when%20we%20assigned%20a%20new%0A%20%20%20%20memory%20address%20to%20the%20pointer%20p.%0A%0A%20%20%20%20*/%0A%0A%20%20%20%20//Graphically,%20the%20memory%20looks%20like%20this%3A%0A%20%20%20%20//p%20-%3E%200x0001%20-%3E%2010%0A%20%20%20%20int*%20p%20%3D%20new%20int%3B%0A%20%20%20%20*p%20%3D%2010%3B%0A%20%20%20%20%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20p%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20p%20%3C%3C%20endl%3B%0A%20%20%20%20%0A%20%20%20%20//p%20-%3E%200x0002%20-%3E%2020%0A%20%20%20%20p%20%3D%20new%20int%3B%0A%20%20%20%20*p%20%3D%2020%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20p%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20p%20%3C%3C%20endl%3B%0A%20%20%20%20%0A%20%20%20%20//If%20we%20want%20to%20access%20the%20value%20of%20the%20first%20memory%20address,%20%0A%20%20%20%20//we%20won't%20be%20able%20to%20do%20it%20because%20we%20don't%20have%20the%20memory%20address.%0A%0A%20%20%20%20//To%20avoid%20this,%20we%20can%20use%20the%20delete%20operator%20to%20deallocate%20the%20memory%20%0A%20%20%20%20//when%20we%20don't%20need%20it%20anymore%20and%20assign%20the%20pointer%20to%20nullptr.%0A%20%20%20%20//nullptr%20is%20a%20null%20pointer,%20it%20doesn't%20point%20to%20any%20memory%20address.%0A%0A%20%20%20%20%0A%20%20%20%20%0A%20%20%20%20//In%20case%20we%20need%20to%20store%20the%20memory%20address%20of%20the%20first%20memory%20address,%0A%20%20%20%20//we%20can%20use%20another%20pointer%20to%20store%20it.%0A%0A%20%20%20%20int*%20p2%20%3D%20new%20int%3B%0A%20%20%20%20*p2%20%3D%2010%3B%0A%0A%20%20%20%20int*%20p3%20%3D%20p2%3B%0A%20%20%20%20p2%20%3D%20new%20int%3B%0A%20%20%20%20*p2%20%3D%2020%3B%0A%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20p3%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20p3%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20p2%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20p2%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20p%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20p%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20p3%20is%3A%20%22%20%3C%3C%20*p3%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20p2%20is%3A%20%22%20%3C%3C%20*p2%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20p%20is%3A%20%22%20%3C%3C%20*p%20%3C%3C%20endl%3B%0A%20%20%20%20%0A%20%20%20%20delete%20p%3B%0A%20%20%20%20p%20%3D%20nullptr%3B%0A%20%20%20%20delete%20p2%3B%0A%20%20%20%20p2%20%3D%20nullptr%3B%0A%20%20%20%20delete%20p3%3B%0A%20%20%20%20p3%20%3D%20nullptr%3B%0A%0A%20%20%20%20return%200%3B%0A%0A%7D&cppShowMemAddrs=true&cumulative=false&curInstr=24&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D&textReferences=false
int main(){

    /*
    Variables created in heap memory
    When handling pointers, we need to be careful with dangling pointers.
    A dangling pointer is a pointer that points to a memory address that
    was previously deallocated. In this case, the pointer p points to a
    memory address that was previously deallocated when we assigned a new
    memory address to the pointer p.

    */

    //Graphically, the memory looks like this:
    //p -> 0x0001 -> 10
    int* p = new int;
    *p = 10;
    
    cout << "The value of the memory address pointed by p is: " << (int *) p << endl;
    
    //p -> 0x0002 -> 20
    p = new int;
    *p = 20;
    cout << "The value of the memory address pointed by p is: " << (int *) p << endl;
    
    //If we want to access the value of the first memory address, 
    //we won't be able to do it because we don't have the memory address.

    //To avoid this, we can use the delete operator to deallocate the memory 
    //when we don't need it anymore and assign the pointer to nullptr.
    //nullptr is a null pointer, it doesn't point to any memory address.

    
    
    //In case we need to store the memory address of the first memory address,
    //we can use another pointer to store it.

    int* p2 = new int;
    *p2 = 10;

    int* p3 = p2;
    p2 = new int;
    *p2 = 20;

    cout << "The value of the memory address pointed by p3 is: " << (int *) p3 << endl;
    cout << "The value of the memory address pointed by p2 is: " << (int *) p2 << endl;
    cout << "The value of the memory address pointed by p is: " << (int *) p << endl;
    cout << "The value of the memory address pointed by p3 is: " << *p3 << endl;
    cout << "The value of the memory address pointed by p2 is: " << *p2 << endl;
    cout << "The value of the memory address pointed by p is: " << *p << endl;
    
    delete p;
    p = nullptr;
    delete p2;
    p2 = nullptr;
    delete p3;
    p3 = nullptr;

    return 0;
}