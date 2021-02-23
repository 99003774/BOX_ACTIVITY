void ADDarray(int argc, char *argv[])

{

    int choice;

    while (1)

    {

        printf("MENU:\n");

        printf("1.Add Unique Id: \n");

        printf("2.Display the file\n");

        printf("3.Update the record\n");

        printf("Enter your choice:");

        scanf("%d", &choice);

 

        switch(choice)

        {

        case 1:

            add_rec(argv[1]);

            break;

        case 2:

            display(argv[1]);

            break;

        case 3:

            update_rec(argv[1]);

            break;

        case 4:

            exit(0);

        default:

            printf("Wrong choice!!!\nEnter the correct choice\n");

        }

    }

}

 

void add_rec(char *a)

{

    FILE *fp;

    fp = fopen(a, "a+");

    struct emp *temp = (struct emp *)malloc(sizeof(struct emp));

    temp->name = (char *)malloc(50*sizeof(char));

    if (fp == NULL)

        printf("Error!!!");

    else

    {

        printf("Enter the unique id\n");

        scanf("%d", &temp->unique_id);

        fwrite(&temp->empid, sizeof(int), 1, fp);

        printf("enter the box color\n");

        scanf(" %[^\n]s", temp->color);

        fwrite(temp->name, 50, 1, fp);
        printf("Enter the length of the box:\n");

        scanf("%d", &temp->length);

        fwrite(&temp->length, sizeof(int), 1, fp);

         printf("Enter the width of the box:\n");

        scanf("%d", &temp->width);

        fwrite(&temp->width, sizeof(int), 1, fp);
        printf("Enter the height of the box:\n");

        scanf("%d", &temp->height);

        fwrite(&temp-height, sizeof(int), 1, fp);
        count++;

    }

    fclose(fp);

    free(temp);

    free(temp->name);

}

 

void display(char *a)

{

    FILE *fp;

    char ch;

    int rec = count;

    fp = fopen(a, "r");

    struct emp *temp = (struct emp *)malloc(sizeof(struct emp));

    temp->name = (char *)malloc(50*sizeof(char));

    if (fp == NULL)

        printf("Error!!");

    else

    {

        while (rec)

        {

            fread(&temp->empid, sizeof(int), 1, fp);

            printf("%d", temp->empid);

            fread(temp->name, 50, 1, fp);

            printf(" %s\n", temp->name);

            rec--;

        }

    }

    fclose(fp);

    free(temp);

    free(temp->name);

}