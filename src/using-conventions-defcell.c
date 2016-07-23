#include <stdio.h>
#include "conventions.h"

DefCell(int, CELL, LIST);

// becomes
// typedef struct CELL *LIST;

// struct CELL {
//    int element;
//    LIST next;  
// }

main() {
    struct CELL c;  // a single cell
    LIST L;
    
    c.element = 12;
    c.next = NULL;

    L = &c;
    
    printf("TRUE's value is %d\n", TRUE);
    printf("c.element is %d\n", c.element);

    printf("L's element is %d\n", (*L).element);

}
