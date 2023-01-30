#include <stdio.h>

void main(){

    FILE *fp;

    fp = fopen("mytextfile.txt", "r");

    char data[15];

    fgets(data,15,fp);
    printf("%s", data);

    fclose(fp);
}