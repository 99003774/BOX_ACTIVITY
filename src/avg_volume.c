/**
 * @file avg_volume.c
 * @author Himanshu Kumar(himanshu.kumar@ltts.com)
 * @brief Avg Volume of Box
 * @version 0.1
 * @date 2021-02-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Box_Main.h"


struct Box_details{
    int id; char name[50];char color[50];
    float Box_breadth,Box_weight;
    float Box_length;float Box_height;float volume;
    
};


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
