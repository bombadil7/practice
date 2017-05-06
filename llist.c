#include <stdio.h>

typedef struct link {
    int num;
    struct link *next;
} link;


/***************  Main  *****************/
int main (void) 
{
    link * head = NULL;

    link firstlink;
    firstlink.num = 4;

    link secondlink;
    secondlink.num = 7;

    firstlink.next = &secondlink;
    secondlink.next = NULL;

    printf ("\nFirst number is %d, second is %d\n", 
            firstlink.num, (*firstlink.next).num);
//    link *newlink =  malloc(link);
//    delete newlink;

    return 0;
}
