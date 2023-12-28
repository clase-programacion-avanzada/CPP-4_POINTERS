#include <iostream>

using namespace std;

// Link to python tutor (Copy and paste it, don't click it):
// https://pythontutor.com/render.html#code=%23include%20%3Ciostream%3E%0A%0A%0Ausing%20namespace%20std%3B%0A%0A%0Aint%20main%28%29%20%7B%0A%0A%20%20%0A%20%20/*%0A%20%20%20%20In%20c%2B%2B,%20arays%20and%20pointers%20are%20closely%20related.%0A%20%20%20%20When%20we%20pass%20an%20array%20to%20a%20function,%20we%20are%20passing%20a%20pointer%20to%20the%20first%20element%20of%20the%20array.%0A%20%20%20%20Also,%20arrays%20are%20pointers%20to%20the%20first%20element%20of%20the%20array.%0A%20%20%20%20*/%0A%0A%20%20%20%20int%20array%20%5B%5D%20%3D%20%7B1,%202,%203,%204,%205%7D%3B%0A%0A%20%20%20%20int*%20pointer%20%3D%20array%3B%0A%0A%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20pointer%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20pointer%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20array%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20array%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20of%20the%20first%20element%20of%20the%20array%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20%26array%5B0%5D%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20variable%20pointed%20by%20pointer%20is%3A%20%22%20%3C%3C%20*pointer%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20variable%20pointed%20by%20array%20is%3A%20%22%20%3C%3C%20*array%20%3C%3C%20endl%20%3C%3C%20endl%3B%20%0A%20%20%20%20%0A%0A%20%20%20%20/*%0A%20%20%20%20As%20memory%20addresses%20are%20numbers,%20we%20can%20perform%20arithmetic%20operations%20with%20them.%0A%20%20%20%20This%20is%20useful%20when%20we%20want%20to%20access%20the%20elements%20of%20an%20array%0A%20%20%20%20*/%0A%0A%20%20%20%20int*%20positionOne%20%3D%20array%20%2B%201%3B%0A%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20positionOne%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20positionOne%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20variable%20pointed%20by%20positionOne%20is%3A%20%22%20%3C%3C%20*positionOne%20%3C%3C%20endl%20%3C%3C%20endl%3B%0A%0A%0A%20%20%20%20for%20%28int%20i%20%3D%200%3B%20i%20%3C%205%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20%20%20int%20*%20pointerToArrayValue%20%3D%20array%20%2B%20i%3B%0A%20%20%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20array%20%2B%20%22%20%3C%3C%20i%20%3C%3C%20%22%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20%28pointerToArrayValue%29%20%3C%3C%20endl%3B%0A%20%20%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20variable%20pointed%20by%20array%20%2B%20%22%20%3C%3C%20i%20%3C%3C%20%22%20is%3A%20%22%20%3C%3C%20*%28pointerToArrayValue%29%20%3C%3C%20endl%20%3C%3C%20endl%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20/*%0A%20%20%20%20Levels%20of%20indirection%0A%20%20%20%20%0A%20%20%20%20A%20pointer%20is%20a%20variable%20that%20stores%20the%20memory%20address%20of%20another%20variable.%0A%20%20%20%20A%20pointer%20to%20a%20pointer%20is%20a%20variable%20that%20stores%20the%20memory%20address%20of%20a%20pointer.%0A%20%20%20%20We%20call%20this%20levels%20of%20indirection,%20as%20we%20are%20indirectiong%20the%20memory%20address%20of%20a%20variable.%0A%20%20%20%20We%20can%20have%20as%20many%20levels%20of%20indirection%20as%20we%20want.%0A%20%20%20%20%0A%20%20%20%20*/%0A%0A%20%20%20%20int%20value%20%3D%2060%3B%0A%20%20%20%20int*%20pointerToValue%20%3D%20%26value%3B%0A%20%20%20%20int**%20pointerToPointer%20%3D%20%26pointerToValue%3B%0A%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20pointerToPointer%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20pointerToPointer%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20of%20pointerToValue%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20%26pointerToValue%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20pointerToValue%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20pointerToValue%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20of%20value%20is%3A%20%22%20%3C%3C%20%28int%20*%29%20%26value%20%3C%3C%20endl%20%3C%3C%20endl%3B%3B%0A%0A%20%20%20%20//If%20we%20want%20to%20access%20to%20the%20value%20with%20two%20levels%20of%20indirection,%20we%20need%20to%20use%20two%20*%20operators%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20variable%20pointed%20by%20pointerToPointer%20is%3A%20%22%20%3C%3C%20**pointerToPointer%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20variable%20pointed%20by%20pointerToValue%20is%3A%20%22%20%3C%3C%20*pointerToValue%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20variable%20value%20is%3A%20%22%20%3C%3C%20value%20%3C%3C%20endl%20%3C%3C%20endl%3B%0A%0A%20%20%20%20//We%20will%20not%20use%20delete%20in%20this%20example,%20as%20we%20are%20not%20creating%20variables%20in%20the%20heap%20memory%0A%20%20%20%20%0A%20%20%20%20return%200%3B%0A%7D&cppShowMemAddrs=true&cumulative=false&curInstr=43&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D&textReferences=false

int main() {

    /*
    In c++, arays and pointers are closely related.
    When we pass an array to a function, we are passing a pointer to the first element of the array.
    Also, arrays are pointers to the first element of the array.
    */

    int array [] = {1, 2, 3, 4, 5};

    int* pointer = array;


    cout << "The value of the memory address pointed by pointer is: " << (int *) pointer << endl;
    cout << "The value of the memory address pointed by array is: " << (int *) array << endl;
    cout << "The value of the memory address of the first element of the array is: " << (int *) &array[0] << endl;
    cout << "The value of the variable pointed by pointer is: " << *pointer << endl;
    cout << "The value of the variable pointed by array is: " << *array << endl << endl; 
    

    /*
    As memory addresses are numbers, we can perform arithmetic operations with them.
    This is useful when we want to access the elements of an array
    */

    int* positionOne = array + 1;

    cout << "The value of the memory address pointed by positionOne is: " << (int *) positionOne << endl;
    cout << "The value of the variable pointed by positionOne is: " << *positionOne << endl << endl;


    for (int i = 0; i < 5; i++) {
        int * pointerToArrayValue = array + i;
        cout << "The value of the memory address pointed by array + " << i << " is: " << (int *) (pointerToArrayValue) << endl;
        cout << "The value of the variable pointed by array + " << i << " is: " << *(pointerToArrayValue) << endl << endl;
    }

    /*
    Levels of indirection
    
    A pointer is a variable that stores the memory address of another variable.
    A pointer to a pointer is a variable that stores the memory address of a pointer.
    We call this levels of indirection, as we are indirectiong the memory address of a variable.
    We can have as many levels of indirection as we want.
    
    */

    int value = 60;
    int* pointerToValue = &value;
    int** pointerToPointer = &pointerToValue;

    cout << "The value of the memory address pointed by pointerToPointer is: " << (int *) pointerToPointer << endl;
    cout << "The value of the memory address of pointerToValue is: " << (int *) &pointerToValue << endl;
    cout << "The value of the memory address pointed by pointerToValue is: " << (int *) pointerToValue << endl;
    cout << "The value of the memory address of value is: " << (int *) &value << endl << endl;;

    //If we want to access to the value with two levels of indirection, we need to use two * operators
    cout << "The value of the variable pointed by pointerToPointer is: " << **pointerToPointer << endl;
    cout << "The value of the variable pointed by pointerToValue is: " << *pointerToValue << endl;
    cout << "The value of the variable value is: " << value << endl << endl;

    //We will not use delete in this example, as we are not creating variables in the heap memory
    
    return 0;
}