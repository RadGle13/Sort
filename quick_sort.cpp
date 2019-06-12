#include <iostream>
#include <cstdlib>

#include "quick_sort.hh"


//pivot jako element srodkowy tablicy


int choosePivot(int left , int right)
{
    div_t result = div((left+(right-1)),2);
    
    return result.quot;
}
