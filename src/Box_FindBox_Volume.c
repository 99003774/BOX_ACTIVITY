/**
 * @file Box_Main.c
 * @author Rajat Kumar Singh (rajat.singh@ltts.com)
 * @brief Box Volume and Find the Box is AVilable or not
 * @version 0.1
 * @date 2021-02-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Box_Main.h"

struct Box_Details{
 char Box_color[50];
    
    int Box_Id;
    float Box_length,Box_breadth,Box_height,Box_weight,Number_Box;
};


//    int Box_Volume(struct Box_Details box)

int Box_Volume(Box_Details);

    int  Box_Volume(Box_length,Box_height,Box_weight,Box_breadth)
        {
                int VolumeFind;
                int Avg_Volume;

                VolumeFind=Box_weight*Box_length*Box_height*Box_breadth;
                    
                    return VolumeFind;
        }
    int Box_FindBox(Box_id)
    {
         int Id_Box[]={101,102,103,104,105};
         int len=sizeof(Id_Box);
         
         for(int loop=0;loop<len;loop++)
         {
                if(Id_Box[loop]==Box_id)
                {
                return Box_id ;
                }
         }
        
       
    }
    int Count_Color(box_color) 
{
    char color[100]={'Red', 'Pink', 'Blue', 'Red'};
    
    int len=strlen(color);
    
    

   
    for(i=0;i<len;i++)
    {
        if(color[i]==box_color)
        {
           count++;
        }
    }
        return count;


}

