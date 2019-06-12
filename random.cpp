#include <iostream>
#include "random.hh"





int random (int min,int max)
{
    max -= min;
    return (rand()%max)+min;
};



float random (float min,float max)
{
    float tmp_max = max;
    max -= min;
    int tmp = (int)max;
    float random_float;
    
    do{
       random_float = ((float)(rand()%tmp)+min) + ( ( (float)((rand()%100)-50)) /100 );
    }while((random_float>=tmp_max)||(random_float<=min));
        
    return random_float;
};

