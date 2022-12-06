/*Written by Zubaydah Koelemeij, 06/12/2022*/

#pragma once

//sorting template function
template<typename T>
void Arrange(T array)
{
    sort(array.begin(), array.end()); //sorts the elements in ascending order
    for (auto a : array)
    {
        cout << a << endl;
    }
}