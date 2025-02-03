#include <stdio.h>
#include <stdlib.h>
typedef struct a
{
    int data;
    struct a *next;
    struct a *prev;
} a;
a *head = NULL;
a *temp = NULL;
void add()
{
    a *new = (a *)malloc(sizeof(a));
    printf("Enter the data: ");
    a *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    scanf("%9d", &new->data);
    temp->next = new;
    new->prev = temp;
    new->next = NULL;
}
void del()
{
    a *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    if (temp != head)
    {
        temp->prev->next = NULL;
        free(temp);
    }
    else
    {
        puts("There's no data to delete.");
    }
}

void list_checker()
{
    a *temp = head;
    printf("%d <-> ", temp->data);
    while (temp->next != NULL)
    {
        temp = temp->next;
        printf("%d <-> ", temp->data);
    }
    puts("");
}

void list_viewer()
{
    a *temp = head;
    int sel2 = 0;
    int pre = 0;
    while (1)
    {
        if (pre == 0)
        {
            puts("===================================\nHead List");
        }
        else
        {
            printf("===================================\n%d Node\n", pre);
        }
        printf("address: %p\ndata: %d\nnext: %p\nprev: %p\n", temp, temp->data, temp->next, temp->prev);
        puts("1. Next");
        puts("2. Prev");
        puts("3. Delete This Node");
        puts("4. Close Viewer");
        printf("Select: ");
        scanf("%1d", &sel2);
        switch (sel2)
        {
        case 1:
            if (temp->next != NULL)
            {
                temp = temp->next;
                pre++;
            }
            else
            {
                puts("There's no data\n++++++++++++++++++++");
            }
            break;

        case 2:
            if (temp->prev != NULL)
            {
                temp = temp->prev;
                pre--;
            }
            else
            {
                puts("There's no data\n++++++++++++++++++++");
            }
            break;
        case 3:
            if (temp != head)
            {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                free(temp);
                puts("List Deleted!!");
                temp = head;
                pre = 0;
            }
            else
            {
                puts("You can't delete head");
            }
            break;
        case 4:
            return;
        }
    }
}

int main(void)
{
    head = (a *)malloc(sizeof(a));
    int sel = 0;
    while (1)
    {
        puts("===================================");
        puts("This is Linked List");
        puts("1. Add");
        puts("2. Delete");
        puts("3. Viewer");
        puts("4. Exit");
        list_checker();
        printf("Select: ");
        scanf("%1d", &sel);
        switch (sel)
        {
        case 1:
            add();
            break;
        case 2:
            del();
            break;
        case 3:
            list_viewer();
            break;
        case 4:
            free(head);
            while (temp != NULL)
            {
                a *next = temp->next;
                free(temp);
                temp = next;
            }

            return 0;
        default:
            puts("Invalid input");
            break;
        }
    }
    return 0;
}
