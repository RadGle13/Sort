#ifndef test_hh
#define test_hh
#include "generate.hh"
#include "quick_sort.hh"
#include "merge_sort.hh"
#include "heap_sort.hh"
#include "show.hh"
#include "intro_sort.hh"
#include "save_txt.hh"
#include "enum.hh"
#include "time.hh"



using namespace std;


template<typename T>
void automaticTest (sortingAlgorithm SA,int size,int amount,float percentage,int alreadySorted,bool show)
{
        double calkowity_czas;
        calkowity_czas = 0;
    
           for(int i=0;i<amount;i++)
           {
              
               
               switch (SA) {
                   
                   case 1:{
                      
                       calkowity_czas=chechTime<T>(SA, amount, percentage, alreadySorted, size, calkowity_czas,show);
                       
                       break;
                   }
                   case 2:{
                       
                       calkowity_czas=chechTime<T>(SA, amount, percentage, alreadySorted, size, calkowity_czas,show);

                       break;}
                       
                   case 3 :{
                       
                     calkowity_czas=chechTime<T>(SA, amount, percentage, alreadySorted, size, calkowity_czas,show);
                      
                       break;}
                       
                   case 4:{
                       
                    calkowity_czas=chechTime<T>(SA, amount, percentage, alreadySorted, size, calkowity_czas,show);
                      
                       break;}
                       
                   default:{
                       break;}
               }
           }
              
               switch (SA) {
                       
                   case 1:{
                       
                       saveData(SA, amount, percentage, alreadySorted, size, calkowity_czas);
                       
                       break;
                   }
                   case 2:{
                       
                       saveData(SA, amount, percentage, alreadySorted, size, calkowity_czas);
                       
                       break;}
                       
                   case 3 :{
                       
                      saveData(SA, amount, percentage, alreadySorted, size, calkowity_czas);
                       
                       break;}
                       
                   case 4:{
                       
                       saveData(SA, amount, percentage, alreadySorted, size, calkowity_czas);
                       
                       break;}
                       
                   default:{
                       break;}

           }
    
}

// Test dla roznych rozmiarow tablic

template <typename Type>
void differentSizesTest (int size,sortingAlgorithm SA)
{
    
    switch (SA) {
            
        case 1 :
            
            automaticTest<Type>(quickSort, size, 5, 0.0, 0,0);
            automaticTest<Type>(quickSort, size, 5, 25.0, 0,0);
            automaticTest<Type>(quickSort, size, 5, 50.0, 0,0);
            automaticTest<Type>(quickSort, size, 5, 75.0, 0,0);
            automaticTest<Type>(quickSort, size, 5, 95.0, 0,0);
            automaticTest<Type>(quickSort, size, 5, 99.0, 0,0);
            automaticTest<Type>(quickSort, size, 5, 99.7, 0,0);
            automaticTest<Type>(quickSort, size, 5, 100.0, 1,0);
            
            
            break;
            
            
        case 2 :
            
            
            automaticTest<Type>(mergeSort, size, 30, 0.0, 0,0);
            automaticTest<Type>(mergeSort, size, 30, 25.0, 0,0);
            automaticTest<Type>(mergeSort, size, 30, 50.0, 0,0);
            automaticTest<Type>(mergeSort, size, 30, 75.0, 0,0);
            automaticTest<Type>(mergeSort, size, 30, 95.0, 0,0);
            automaticTest<Type>(mergeSort, size, 30, 99.0, 0,0);
            automaticTest<Type>(mergeSort, size, 30, 99.7, 0,0);
            automaticTest<Type>(mergeSort, size, 30, 100, 1,0);
            
            
            break;
            
        case 4 :
            
            
            automaticTest<Type>(introSorting, size, 5, 0.0, 0,0);
            automaticTest<Type>(introSorting, size, 5, 25.0, 0,0);
            automaticTest<Type>(introSorting, size, 5, 50.0, 0,0);
            automaticTest<Type>(introSorting, size, 5, 75.0, 0,0);
            automaticTest<Type>(introSorting, size, 5, 95.0, 0,0);
            automaticTest<Type>(introSorting, size, 5, 99.0, 0,0);
            automaticTest<Type>(introSorting, size, 5, 99.7, 0,0);
            automaticTest<Type>(introSorting, size, 5, 100.0, 1,0);
            
            
            break;
            
            
        default:
            break;
    }
    
}

// Test calkowity

template <typename Type>
void saveData ()
{
    //cout << "Zaczalem dla mergeSorta : " << endl;
    
    //differentSizesTest<Type>(10000, mergeSort);
    //differentSizesTest<Type>(50000, mergeSort);
    //differentSizesTest<Type>(100000, mergeSort);
    //differentSizesTest<Type>(500000, mergeSort);
    //differentSizesTest<Type>(1000000, mergeSort);
    
    //cout << "Skonczylem dla mergeSorta." << endl;
    
    cout << "Zaczalem dla quickSorta : " << endl;
    
    differentSizesTest<Type>(10000, quickSort);
    differentSizesTest<Type>(50000, quickSort);
    differentSizesTest<Type>(100000, quickSort);
    differentSizesTest<Type>(500000, quickSort);
    differentSizesTest<Type>(1000000, quickSort);
    
    cout << "Skonczylem dla quickSorta." << endl;
    
    cout << "Zaczalem dla introSorta :" << endl;
    
    differentSizesTest<Type>(10000, introSorting);
    differentSizesTest<Type>(50000, introSorting);
    differentSizesTest<Type>(100000, introSorting);
    differentSizesTest<Type>(500000, introSorting);
    differentSizesTest<Type>(1000000, introSorting);
    
    cout << "Skonczylem dla introSorta." << endl;
}

#endif /* do_test_hpp */
