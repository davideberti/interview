#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <bitvector.h>

int main(int argc, char* argv[])
{
    char *str = "ramar1";
    char *rev = malloc(strlen(str)+1); 

    char *ptr = str;
    char *ptrrev = rev+strlen(str);
    do {
        printf("ptr%c\n",*ptr);
        *ptrrev = *ptr++;
    } while(*ptr != '\0' && ptrrev--);
 
    if(!strncmp(ptr,rev,strlen(str)))
        printf("match\n");
    printf("ptr:%s",rev);
    printf("rev:%s",ptrrev);
    return 1;
}
