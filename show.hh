#ifndef show_hh
#define show_hh
#include <iostream>





template <typename T>
void show_array (T *array,int size)
{
    for(int i=0;i<size;i++)
    {
        std::cout << array[i];
        std::cout << " ";
    }
        std::cout << "\n";
}

#endif
