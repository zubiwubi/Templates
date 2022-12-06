/*Written by Zubaydah Koelemeij, 06/12/2022*/

#include <algorithm>
#include <array>
#include "Queue.h"
#include "Arrange.h"

//creating the arrays
array <string, 6> Fruits = { "Apple", "Dragon Fruit", "Banana", "Coconut", "Zucchini", "Yumberry"};
array <float, 7> Numbers = { 1.50, 3.75, 4.25, 7.75, 6.10, 5.05, 2.30 };

int main() 
{
    //both arrays get sorted alphabetically and ascending
    Arrange(Fruits); 
    Arrange(Numbers);

    cout << "-----------------------------" << endl; 

    LineUp <int> newLineUp;
    for (int i : {10, 35, 5, 7, 1, 9, 1, 3, 9, 7}) 
    {
        newLineUp.Put(i);
    }
    newLineUp.Get();
    cout << "Queue length: " << newLineUp.Size() << endl;

    return 0;
}