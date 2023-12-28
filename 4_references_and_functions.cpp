#include <iostream>

using namespace std;

// Link to python tutor (Copy and paste it, don't click it):
// https://pythontutor.com/render.html#code=%23include%20%3Ciostream%3E%0A%0A%0Ausing%20namespace%20std%3B%0A%0A%0Avoid%20changeArray%28int%20array%5B%5D%29%20%7B%0A%20%20%20%20array%5B0%5D%20%3D%2010%3B%0A%20%20%20%20%0A%7D%0A%0Avoid%20modifyNumber%28int%26%20number%29%20%7B%0A%20%20%20%20number%20%3D%2010%3B%0A%7D%0A%0Avoid%20modifyNumber2%28int*%20number%29%20%7B%0A%20%20%20%20*number%20%3D%2020%3B%0A%7D%0A%0Avoid%20modifyNumber3%28int%20number%29%20%7B%0A%20%20%20%20number%20%3D%2030%3B%0A%7D%0A%0Avoid%20calculateMaxAndMin%28int%20array%5B%5D,%20int%20size,%20int%26%20max,%20int%26%20min%29%20%7B%0A%20%20%20%20max%20%3D%20array%5B0%5D%3B%0A%20%20%20%20min%20%3D%20array%5B0%5D%3B%0A%20%20%20%20for%20%28int%20i%20%3D%201%3B%20i%20%3C%20size%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20%20%20%20%20if%20%28array%5Bi%5D%20%3E%20max%29%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20max%20%3D%20array%5Bi%5D%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%20%20%20%20if%20%28array%5Bi%5D%20%3C%20min%29%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20min%20%3D%20array%5Bi%5D%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%7D%0A%7D%0A%0Aint%20main%28%29%20%7B%0A%0A%20%20%20%20/*%0A%20%20%20%20In%20c%2B%2B,%20references%20are%20used%20to%20avoid%20copying%20the%20value%20of%20a%20variable%0A%20%20%20%20when%20passing%20it%20as%20an%20argument%20to%20a%20function.%20We%20would%20like%20to%20avoid%20copying%20the%20value%0A%0A%20%20%20%20When%20we%20pass%20an%20array%20to%20a%20function,%20we%20are%20passing%20a%20pointer%20to%20the%20first%20element%20of%20the%20array.%0A%20%20%20%20*/%0A%0A%20%20%20%20int%20array%20%5B%5D%20%3D%20%7B1,%202,%203,%204,%205%7D%3B%0A%0A%20%20%20%20changeArray%28array%29%3B%0A%0A%0A%0A%20%20%20%20/*To%20use%20references%20in%20functions,%20we%20need%20to%20use%20the%20%26%20operator%20in%20the%20function%20declaration.%0A%20%20%20%20We%20can%20also%20use%20the%20*%20operator%20in%20the%20function%20declaration%20to%20pass%20a%20pointer%20to%20a%20variable.%0A%20%20%20%20If%20we%20don't%20use%20the%20%26%20operator%20or%20the%20*%20operator%20in%20the%20function%20declaration,%20we%20are%20passing%0A%20%20%20%20a%20copy%20of%20the%20value%20of%20the%20variable%20to%20the%20function.%0A%20%20%20%20*/%0A%0A%20%20%20%20int%20number%20%3D%205%3B%0A%0A%20%20%20%20modifyNumber%28number%29%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20number%20after%20the%20function%20call%20modifyNumber%20is%3A%22%20%3B%0A%20%20%20%20cout%20%3C%3C%20number%20%3C%3C%20endl%3B%0A%0A%20%20%20%20//%20As%20modifyNumber2%20receives%20a%20pointer%20to%20a%20variable,%20%0A%20%20%20%20//%20we%20need%20to%20pass%20the%20memory%20address%20of%20the%20variable%0A%20%20%20%20modifyNumber2%28%26number%29%3B%0A%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20number%20after%20the%20function%20call%20modifyNumber2%20is%3A%22%20%3B%0A%20%20%20%20cout%20%3C%3C%20number%20%3C%3C%20endl%3B%0A%0A%20%20%20%20//%20As%20modifyNumber3%20receives%20a%20copy%20of%20the%20value%20of%20the%20variable,%0A%20%20%20%20//%20the%20value%20of%20the%20variable%20is%20not%20modified%0A%0A%20%20%20%20%0A%20%20%20%20modifyNumber3%28number%29%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20number%20after%20the%20function%20call%20modifyNumber3%20is%3A%22%20%3B%0A%20%20%20%20cout%20%3C%3C%20number%20%3C%3C%20endl%3B%0A%20%20%20%20%0A%20%20%20%20int%20max,%20min%3B%0A%20%20%20%20calculateMaxAndMin%28array,%205,%20max,%20min%29%3B%0A%0A%20%20%20%20cout%20%3C%3C%20%22The%20maximum%20value%20of%20the%20array%20is%3A%20%22%20%3C%3C%20max%20%3C%3C%20endl%3B%0A%20%20%20%20cout%20%3C%3C%20%22The%20minimum%20value%20of%20the%20array%20is%3A%20%22%20%3C%3C%20min%20%3C%3C%20endl%3B%0A%20%20%20%20%0A%20%20%20%20return%200%3B%0A%7D&cppShowMemAddrs=true&cumulative=false&curInstr=52&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D&textReferences=false
void changeArray(int array[]) {
    array[0] = 10;
    
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void modifyNumber(int& number) {
    number = 10;
}

void modifyNumber2(int* number) {
    *number = 20;
}

void modifyNumber3(int number) {
    number = 30;
}

void calculateMaxAndMin(int array[], int size, int& max, int& min) {
    max = array[0];
    min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }
}

int main() {

    /*
    In c++, references are used to avoid copying the value of a variable
    when passing it as an argument to a function. We would like to avoid copying the value

    When we pass an array to a function, we are passing a pointer to the first element of the array.
    */

    int array [] = {1, 2, 3, 4, 5};

    changeArray(array);

    printArray(array, 5);

    /*To use references in functions, we need to use the & operator in the function declaration.
    We can also use the * operator in the function declaration to pass a pointer to a variable.
    If we don't use the & operator or the * operator in the function declaration, we are passing
    a copy of the value of the variable to the function.
    */

    int number = 5;

    modifyNumber(number);
    cout << "The value of number after the function call modifyNumber is:" ;
    cout << number << endl;

    // As modifyNumber2 receives a pointer to a variable, 
    // we need to pass the memory address of the variable
    modifyNumber2(&number);

    cout << "The value of number after the function call modifyNumber2 is:" ;
    cout << number << endl;

    // As modifyNumber3 receives a copy of the value of the variable,
    // the value of the variable is not modified

    
    modifyNumber3(number);
    cout << "The value of number after the function call modifyNumber3 is:" ;
    cout << number << endl;

    //Modifying the value of a variable in a function is called side effect.
    //Side effects are not desirable in functions, but sometimes they are necessary.
    
    //References are also used to return more than one value from a function.
    //For example, we can use references to return the maximum and minimum values of an array.

    int max, min;
    calculateMaxAndMin(array, 5, max, min);

    cout << "The maximum value of the array is: " << max << endl;
    cout << "The minimum value of the array is: " << min << endl;

    
    return 0;
}