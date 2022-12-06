/*Written by Zubaydah Koelemeij, 06/12/2022*/

#pragma once

#include <string>
#include <vector>
#include <iostream>
using namespace std;

//queue template class
template<typename T>
class LineUp 
{
public:
    LineUp() {};

    void Put(T input) 
    {
        newLineUp.push_back(input);
    };
    void Get() 
    {
        for (auto a : newLineUp) 
        {
            cout << a << endl;
        }
    };
    int Size() 
    {
        return newLineUp.size();
    };

private:
    vector<T> newLineUp;
};



