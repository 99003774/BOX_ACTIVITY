
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char *box;
int i,l;
//box=(char*)malloc(200 * sizeof(char));
box=malloc(200 * sizeof(char));
printf("Enter Array\n");
scanf("%s",box);

l=strlen(box);
for(i=0;i<l;i++)
{
printf("%c",box[i]);
}
free(box);
return 0;
}
