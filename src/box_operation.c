
#include <stdio.h>
#include <math.h>
#include <string.h>   
#include<stdlib.h>
struct box_cuboid{
    int id; char name[50];char color[50];
    float width;
    float length;float height;float volume;
    
};

int main()
{
    struct box_cuboid *ptr;
    int i, noOfRecords;
    int  n, highest = 0;
    
    puts("\nEnter the number of Box: ");
    scanf("%d", &noOfRecords);
   struct box_cuboid initial[noOfRecords];
    //struct box_cuboid *ptr=NULL;
    // Memory allocation for noOfRecords structures
    ptr = (struct box_cuboid *)malloc(noOfRecords * sizeof(struct box_cuboid));
    if(ptr==NULL)
    {
        printf("Insufficient Memory, Exiting... \n");
        return 0;
    }
     ptr=initial;
    for (i = 0; i < noOfRecords; ++i) 
     {
    
    puts("-------------------------------------------------------------\n");
   printf("Enter Attribute value of Box[%d] width, length & height of the cuboids:\n",i+1);
    scanf("%f%f%f", &ptr->width, &ptr->length, &ptr->height);
    ptr->volume = ptr->width * ptr->length * ptr->height;
     puts("Enter Name of BOX: ");
  scanf("%s", ptr->name);
    puts("Enter Uniqe ID of BOX: ");
   scanf("%d", &ptr->id);
   puts("Enter Color of BOX: ");
   scanf("%s", ptr->color);
    printf("\n Volume of cuboids is : %.3f", ptr->volume);
    printf("\n ID of cuboids is : %.3d", ptr->id);
    printf("\n Name of cuboids is : %s", ptr->name);
    printf("\n color of cuboids is : %s\n\n", ptr->color);
    printf("-------------------------------------------------------------\n");
    ptr++;
     }
    ptr=initial;
  printf("Displaying Information:\n");
   printf("Box_Name Uniqe_id  Box_Color  Box_Volume\n");{
   
    for (i = 0; i < noOfRecords; i++)
        printf("%s\t%d\t%s\t%f\n", (ptr+i)->name,  (ptr+i)->id, (ptr+i)->color, (ptr+i)->volume);
        ptr++;
   }
  
   printf("---------Height of Boxes------------\n");
    
         for (i = 0; i < noOfRecords;i++) {
             ptr=initial;
             printf("%f\n",(ptr+i)->height);
             ptr++;
         }
//////////////////////////////////////////////////////////////////////////
    n = sizeof(ptr)/sizeof(*ptr);
    for(i=0;i<n;++i){
      ptr=initial;
        scanf("%f",&ptr[i].height);
        if(ptr[highest].height < ptr[i].height)
            highest = i;
            ptr++;
    }
    printf("Maximum height: %f\n", ptr[highest].height);
//////////////////////////////////////////////////////////////////////////
printf("---------AVG volume of Boxes------------\n");
    float sum =ptr[i].volume;
        // for (i = 0; i < noOfRecords;i++) 
        {
            ptr=initial;
             
             sum=(sum + ptr[i].volume)/noOfRecords;
             printf("%f\n",sum);
             ptr++;
}
////////////////////////////////////////////////////////////////////////
printf("---------Differene of MINIMUM & Maximum volume of Boxes------------\n");
    float differnce_vol=ptr[i].volume;
        // for (i = 0; i < noOfRecords;i++) 
        {
            ptr=initial;
             
             differnce_vol=(differnce_vol - ptr[i].volume);
             printf("%f\n",differnce_vol);
             ptr++;
}
//////////////////////////////////////////////////////////////////////////

return 0;
}
