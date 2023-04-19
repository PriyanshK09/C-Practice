// Read/Write file with fseek and change y to x

#include <stdio.h>
#include <stdlib.h>

{
    FILE *fp;
    char ch;
    int i;
    fp = fopen("test.txt", "r+");
    fseek(fp, 0, SEEK_END);
    i = ftell(fp);
