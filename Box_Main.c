#include<stdio.h>
#include<string.h>

struct Box_Details{
    char Box_color[50];
     int Box_length,Box_id,Box_breadth,Box_height,Box_weight,Number_Box;;

}box;

void Box_Display(struct Box_Details box[] );
void Box_FindBox(struct Box_Details box[]);
void Box_Volume(struct Box_Details box[]);

int main()
{
     struct Box_Details Box1[100];
    int box_D=box.Number_Box;
    printf("Enter number of boxes:\n");
     scanf("%d \n",&box_D);
    
  
     for(int i=0;i<box_D;i++)
    {
            printf("Enter Unique Id of Boxes\n");
            scanf("%d",&Box1[i].Box_id);

            printf("Enter length of Boxes\n");
            scanf("%d",&Box1[i].Box_length);

             printf("Enter color of Boxe\n");
            scanf("%d",&Box1[i].Box_color);

            printf("Enter Breadth of Box\n");
            scanf("%d",&Box1[i].Box_breadth);
            
             printf("Enter height of Boxes\n");
            scanf("%d",&Box1[i].Box_height);

             printf("Enter weight of Boxes\n");
            scanf("%d",&Box1[i].Box_weight);
   
    }
    Box_Display(Box1);
    Box_FindBox(Box1);
     Box_Volume(Box1);
}

void Box_Display(struct Box_Details box[] )
{       int Dis_box;
        printf("How much box Details want to See:\n");
        scanf("%d",&Dis_box);
 for(int i=0;i<Dis_box;i++)
 {
        printf("Id of the Box is\n  %d\n",box[i].Box_id);
        printf("Breadth of the Box is\n %d\n",box[i].Box_breadth);
        printf("Color of the Box is \n",box[i].Box_color);
        printf("Height of the Box is\n%d\n",box[i].Box_height);
        printf("Length of the Box is\n %d\n",box[i].Box_length);
        printf("Weight of the Box is\n%d\n",box[i].Box_weight);
 }
}


   void Box_FindBox(struct Box_Details box[])
    {
         int find_Details;
        printf("Enter Unique Id for Search thr box Details\n");
        scanf("%d",&find_Details);
        int loop,k=2;
        for(loop=0;loop<k;loop++)
        {
            int f=box[loop].Box_id;
            if(f==find_Details)
            {
                printf("Id of the Box is\n  %d\n",box[loop].Box_id);
                printf("Breadth of the Box ID is\n %d\n",box[loop].Box_breadth);
                printf("Height of the Bos\n%d\n",box[loop].Box_height);
                printf("Length of the Bx is\n %d\n",box[loop].Box_length);
                printf("Weight of the ox is\n%d\n",box[loop].Box_weight);
            }
             
        }
    }


    void Box_Volume(struct Box_Details box[10] )
        {
                int VolumeFind[10];
                int Avg_Volume=1;
                for(int i=0;i<2;i++)
                {
                        VolumeFind[i]=box[i].Box_weight*box[i].Box_length*box[i].Box_height*box[i].Box_breadth;
                        Avg_Volume=(Avg_Volume*VolumeFind[i]);
                    
                }
                    Avg_Volume/=2;
                    
                    printf(" Avg  %d",Avg_Volume);    
        }

