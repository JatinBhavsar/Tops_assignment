#include <stdio.h>

void main(){

    FILE *fp;

    fp = fopen("mytextfile.txt", "w");

    fputs("hello", fp);

    fclose("fp");
}