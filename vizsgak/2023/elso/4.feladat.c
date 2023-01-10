#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *read;
    read = fopen("in.txt", "r");
    char string[100];
    int arr[1000];
    while(fgets(string,100,read)!= NULL)
    {
        //printf("%s\n",string);

    }
    char * token = strtok(string, " ");
    int num;
    int max=0;
    while( token != NULL )
    {
        printf( " %s ", token );
        token = strtok(NULL, " ");
        num=atoi(token);
        if(num>max)
        {
            max=num;
        }
    }
    //printf("\nA legnagyobb szam a %d", max);
    fclose(read);

    FILE *write;
    write = fopen("out.txt", "w");
    fprintf(write,"%d",max);
    fclose(write);

    return 0;
}
