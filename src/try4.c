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
        int max_vol =0 ;
        long min_vol =1000000;
        int diff_vol;
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
            int volume = box.length*box.breadth*box.height;
          /*  if(max_vol = -1)
                max_vol = volume;
            else    
                max_vol = max_vol < volume ? volume : max_vol;
            if(min_vol = -1)
                min_vol =volume;
            else    
                min_vol = min_vol > volume ? min_vol : volume;    
*/
            if(volume > max_vol)
                max_vol = volume;

            if(volume < min_vol)
                min_vol = volume;

            box_volume = box_volume + volume;
            printf("Volume is: %d\n",volume);
        }
        box_avg_vol = box_volume/num_of_box;
        diff_vol = max_vol - min_vol;
       
        printf("Average volume is : %d\n",box_avg_vol);
        printf("Maximum volume is : %d\n",max_vol);
        printf("Minimum volume is : %d\n",min_vol);
        printf("The difference of max and min volume is : %d\n",diff_vol);
        return 0;
    
    
}


