
#include <stdio.h>
#include <math.h>
#include <string.h>   
#include<stdlib.h>
struct box_cuboid{
    int id; char name[50];char color[50];
    float width;
    float length;float height;float volume;
    
}box;

int main()
{
struct box_cuboid *ptr;
    int i, noOfRecords;
    int id;
    printf("\nEnter the number of Box: ");
    scanf("%d", &noOfRecords);

    // Memory allocation for noOfRecords structures
    ptr = (struct box_cuboid *)malloc(noOfRecords * sizeof(struct box_cuboid));
    for (i = 0; i < noOfRecords; ++i) 
     {
    
    printf("-------------------------------------------------------------\n");
    printf("Enter value of  width, length & height of the cuboids:\n");
    scanf("%f%f%f", &box.width, &box.length, &box.height);
    box.volume = box.width * box.length * box.height;
    printf("Enter Name of BOX: ");
    scanf("%s", box.name);
    printf("Enter Uniqe ID of BOX: ");
    scanf("%d", &box.id);
    printf("Enter Color of BOX: ");
    scanf("%s", box.color);
    printf("\n Volume of cuboids is : %.3f", box.volume);
    printf("\n ID of cuboids is : %.3d", box.id);
    printf("\n Name of cuboids is : %s", box.name);
    printf("\n color of cuboids is : %s\n\n", box.color);
    printf("-------------------------------------------------------------\n");
     }
     printf("\nDetails of Box \n\n");
     
for(i=0;i<noOfRecords;i++)

//printf("\n\n%f\t%d\t%s",ptr[i].volume,ptr[i].id,ptr[i].color);
printf("\n%f\t%d\t%s",(ptr+i)->volume,(ptr+i)->id,(ptr+i)->color);
//printf("%s\t%d\n", (ptr+i)->subject, (ptr+i)->marks);
return 0;
}
