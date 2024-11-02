#include <stdio.h>
#include <stdlib.h>
#include "linked_stack.h"
int main()
{
    int option;
    Stack students,teachers;
    createStack(&students);
    createStack(&teachers);
    Type item;
    do
    {
        printf("1. Push a student data.\n2. Pop a student data.\n3. Push a teacher data.\n4. Pop a teacher data.\n5. Exit.\n");
        scanf("%d", &option);
        switch(option)
        {
        case 1:
            printf("Please insert student id: ");
            scanf("%d", &item.id);
            printf("Please insert student date of birth: \n");
            printf("Day: ");
            scanf("%d", &item.data.date.day);
            printf("Month: ");
            scanf("%d", &item.data.date.month);
            printf("Year: ");
            scanf("%d", &item.data.date.year);
            push(item, &students);
            break;
        case 2:
            item = pop(&students);
            printf("The student data: id- %d and DOB- %d-%d-%d\n",item.id, item.data.date.day, item.data.date.month, item.data.date.year);
            break;
        case 3:
            printf("Please insert teacher id: ");
            scanf("%d", &item.id);
            printf("Please insert teacher salary: ");
            scanf("%d", &item.data.salary);
            push(item, &teachers);
            break;
        case 4:
            item = pop(&teachers);
            printf("The teacher dat: id- %d and salary- %d\n", item.id, item.data.salary);
            break;
        }

    }
    while(option != 5);
    return 0;
}
