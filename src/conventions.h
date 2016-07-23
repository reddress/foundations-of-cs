#define TRUE 1
#define FALSE 0

typedef int BOOLEAN;

#define DefCell(EltType, CellType, ListType)   \
    typedef struct CellType *ListType;         \
    struct CellType {                          \
        EltType element;                       \
        ListType next;                         \
    }

