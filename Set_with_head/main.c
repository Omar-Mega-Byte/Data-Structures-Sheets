#include <stdio.h>
#include "set.h"


int main()
{
    settype s1 ;
    settype s2;
    settype s3;
    Entrytype e ;
    create(&s1);
    create(&s2);
    create(&s3);

    printf("\n%d",AddElement(&s1,6 ));
    printf("\n%d",AddElement(&s1,4 ));
    printf("\n%d",AddElement(&s1,5 ));
    printf("\n%d",AddElement(&s1,7 ));
    printf("\n%d",AddElement(&s2,5 ));
    printf("\n%d",AddElement(&s2,4 ));
    printf("\n%d",AddElement(&s2,1 ));

    display(&s1);
    display(&s2);

    printf("\n%d",SubtractElement(&s1,6 ));
    display(&s1);

    printf("\n%d",SubtractSet(&s1,&s2));
    display(&s1);
    /*printf("%d",AddElement(&s1,3 ));
    printf("\n%d",AddElement(&s1,6 ));
    printf("\n%d",AddElement(&s1,2));
    printf("\n%d",AddElement(&s1,-1));
    printf("\n%d",AddElement(&s1,1));

    printf("\n%d",AddElement(&s2,2 ));
    printf("\n%d",AddElement(&s2,-1 ));
    printf("\n%d",AddElement(&s2,4 ));


    printf("\n%d 2 added to the set",AddElement(&s1,2 ));
    printf("\n%d 2 already exist ",AddElement(&s1,2 ));

    printf("\n%d intersection ",Intersection(&s1,&s2, &s3));

    display(&s1);
    display(&s2);
    display(&s3);
    /*printf("\n%d size of s3 ",cardinality(&s3));
    printf("\n%d union ",Union(&s1,&s2, &s3));
    printf("\n%d size of s3 ",cardinality(&s3));
    printf("\n%d in the set  ",is_in_set(&s3, 2));*/

    return 0;
}
