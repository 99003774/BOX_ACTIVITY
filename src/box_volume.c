#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct Box{
    int unique_id;
    char name[30], color[15];
    int length, breadth, height;
}box;

int main()
{
    struct Box *input_box; 
        int num_of_box;
        printf("Enter the number of boxes :\n");
        scanf("%d",&num_of_box);
        int box_volume=0,box_avg_vol=0;
        
        input_box = (struct Box *)malloc(num_of_box * sizeof(struct Box));
        for(int i=0;i<num_of_box;i++)
        {
            printf("Enter the unique id: ");
            scanf("%d", &box.unique_id);
    
            printf("Enter the length: ");
            scanf("%d", &box.length);
            printf("Enter the breadth: ");
            scanf("%d", &box.breadth);
            printf("Enter the height: ");
            scanf("%d", &box.height);
            printf("Enter the colour: ");
            scanf("%s", &box.color);
            int volume=box.length*box.breadth*box.height;
            box_volume = box_volume +volume;
            printf("Volume is: %d\n",volume);
        }
        box_avg_vol = box_volume/num_of_box;
        printf("Average volume is : %d\n",box_avg_vol);
        return 0;
    
    
}