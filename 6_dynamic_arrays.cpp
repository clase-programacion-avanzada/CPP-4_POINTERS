#include <iostream>

using namespace std;

// Link to python tutor (Copy and paste it, don't click it):
// https://pythontutor.com/render.html#code=%23include%20%3Ciostream%3E%0A%0Ausing%20namespace%20std%3B%0A%0A%0Aint%20main%28%29%20%7B%0A%0A%20%20%20%20/*%0A%20%20%20%20In%20c%2B%2B,%20we%20can%20define%20arrays%20with%20a%20fixed%20size,%20or%20with%20a%20dynamic%20size.%0A%20%20%20%20Dynamic%20arrays%20are%20created%20in%20the%20heap%20memory,%20and%20we%20need%20to%20use%20pointers%20to%20access%20them.%0A%20%20%20%20*/%0A%0A%20%20%20%20int%20size%20%3D%205%3B%0A%20%20%20%20//We%20need%20to%20use%20the%20new%20keyword%20and%20the%20type%20of%20the%20array%20to%20create%20a%20dynamic%20array%0A%20%20%20%20int*%20dynamicArray%20%3D%20new%20int%5Bsize%5D%3B%0A%0A%20%20%20%20for%20%28int%20i%20%3D%200%3B%20i%20%3C%20size%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20%20%20%20%20dynamicArray%5Bi%5D%20%3D%20i%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20//We%20can%20access%20the%20elements%20of%20the%20array%20with%20the%20%5B%5D%20operator%20or%20with%20the%20*%20operator%0A%20%20%20%20%0A%20%20%20%20for%20%28int%20i%20%3D%200%3B%20i%20%3C%20size%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20memory%20address%20pointed%20by%20dynamicArray%20%2B%20%22%20%3C%3C%20i%20%3C%3C%20%22%20is%3A%20%22%20%3C%3C%20dynamicArray%5Bi%5D%20%3C%3C%20endl%3B%0A%20%20%20%20%7D%0A%20%20%20%20%0A%20%20%20%20for%20%28int%20i%20%3D%200%3B%20i%20%3C%20size%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20%20%20%20%20cout%20%3C%3C%20%22The%20value%20of%20the%20variable%20pointed%20by%20dynamicArray%20%2B%20%22%20%3C%3C%20i%20%3C%3C%20%22%20is%3A%20%22%20%3C%3C%20*%28dynamicArray%20%2B%20i%29%20%3C%3C%20endl%3B%0A%20%20%20%20%7D%0A%0A%0A%20%20%20%20//When%20we%20are%20done%20using%20the%20dynamic%20array,%20we%20need%20to%20delete%20it%0A%20%20%20%20//we%20use%20delete%20followed%20by%20square%20brackets%20and%20the%20name%20of%20the%20array%0A%20%20%20%20delete%5B%5D%20dynamicArray%3B%0A%20%20%20%20dynamicArray%20%3D%20nullptr%3B%0A%20%20%20%20%0A%20%20%20%20return%200%3B%0A%7D&cppShowMemAddrs=true&cumulative=false&curInstr=38&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D&textReferences=
int main() {

    /*
    In c++, we can define arrays with a fixed size, or with a dynamic size.
    Dynamic arrays are created in the heap memory, and we need to use pointers to access them.
    */

    int size = 5;
    //We need to use the new keyword and the type of the array to create a dynamic array
    int* dynamicArray = new int[size];

    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i;
    }

    //We can access the elements of the array with the [] operator or with the * operator
    
    for (int i = 0; i < size; i++) {
        cout << "The value of the memory address pointed by dynamicArray + " << i << " is: " << dynamicArray[i] << endl;
    }
    
    for (int i = 0; i < size; i++) {
        cout << "The value of the variable pointed by dynamicArray + " << i << " is: " << *(dynamicArray + i) << endl;
    }


    //When we are done using the dynamic array, we need to delete it
    //we use delete followed by square brackets and the name of the array
    delete[] dynamicArray;
    dynamicArray = nullptr;
    
    return 0;
}