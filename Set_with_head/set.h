#ifndef SET_H_INCLUDED
#define SET_H_INCLUDED

typedef int Entrytype ;
typedef struct node
{
    struct node *next ;
    Entrytype info;
} Node;

typedef struct
{
    Node *head;
    int size;
} settype;

void create(settype *s);
int AddElement(settype *s, Entrytype elemment );
int SubtractElement(settype *s, Entrytype element );
int SubtractSet(settype *s1, settype *s2 );
int Union(settype *s1, settype *s2, settype *s3 );
int Intersection(settype *s1, settype *s2, settype *s3 );
int cardinality(settype *s);
int is_in_set(settype *s, Entrytype e);
void display(settype *s);
#endif // SET_H_INCLUDED
