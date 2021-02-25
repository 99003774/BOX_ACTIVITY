
// #include <stdio.h>
// #include <math.h>
// #include <string.h>   
// #include<stdlib.h>


#include "Box_Main.h"


struct Box_details{
    int id; char name[50];char color[50];
    float Box_breadth,Box_weight;
    float Box_length;float Box_height;float volume;
    
};

int Box_Max_Height(Box_details);

int Box_Max_Height(Box_length,Box_breadth,Box_height,Box_weight)
{
    int MaxHeight;
    int Avg_Volume;

    struct Box_details *ptr;
    int i, noOfRecords;
    int  n, highest = 0;


        n = sizeof(ptr)/sizeof(*ptr);
    for(i=0;i<n;++i){
    
        scanf("%f",&ptr[i].height);
        if(ptr[highest].height < ptr[i].height)
            highest = i;
            ptr++;
    }
    return ptr[highest].height);
}

int Box_Avg_Volume(Box_details);

int Box_Avg_Volume(Box_length,Box_breadth,Box_height,Box_weight)
    float sum =ptr[i].volume;
      struct Box_details *ptr;
    int i, noOfRecords;
    int  n, highest = 0;
        {
            ptr=initial;
             
             sum=(sum + ptr[i].volume)/noOfRecords;
            // printf("%f\n",sum);
             ptr++;
             return sum;
}