#ifndef insertion_Sort_hh
#define insertion_Sort_hh



template <typename T>
T* insertion_sort (T *array ,int size)
{
    for(int i=1;i<size;i++)
    {
        T tmp = array[i];
        
        while( (array[i-1]>tmp) && ((i-1)>=0) )
        {
            array[i]=array[i-1];
            i--;
        }
        array[i]=tmp;
    }
    
    return array;
}

#endif 
