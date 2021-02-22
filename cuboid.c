#include<stdio.h>
#include<string.h>
#include<math.h>
struct cuboid
{
    char color[20], name[100];
    float length, breadth, height;
    int unique_id, volume ,Number_box ,record;
}box;

int main()
{
    struct cuboid *ptr;
    int i,volume,record,average,box_average;
    printf("How many box you want: ");
    scanf("%d",&record);

    
    for(i=0;i<record;++i)
    {

printf("Enter the Unique id of the Box :");
scanf("%d",&box.unique_id);
printf("Enter the color of the box: ");
scanf("%s",&box.color);
printf("Enter the length of the box: ");
scanf("%f",&box.length);
printf("Enter the breadth of the box: ");
scanf("%f",&box.breadth);
printf("Enter the height of the box: ");
scanf("%f",&box.height);

volume=(box.length*box.breadth*box.height);



printf("Volume of the box:%d \n",volume);
}
return 0;
}