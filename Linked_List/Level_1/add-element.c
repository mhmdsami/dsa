#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

void create_ll()
{
    struct node *new_node, *ptr;
    int num;
    scanf("%d", &num);

    while (num--)
    {
        new_node = (struct node *)malloc(sizeof(struct node));

        scanf("%d", &new_node->data);
        new_node->next = NULL;

        if (start == NULL)
        {
            start = new_node;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
        }
    }
}

void insert_before()
{
    struct node *new_node, *ptr, *preptr;
    int val, isFound = 0;
    new_node = (struct node *)malloc(sizeof(struct node));
    scanf("%d %d", &val, &new_node->data);
    ptr = start;
    while (ptr->data != val && ptr != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
        if (ptr->next->data == val)
            isFound = 1;
    }
    if (isFound)
    {
        preptr->next = new_node;
        new_node->next = ptr;
    }
    else
    {
        printf("Node not found!\n");
    }
}

void print_ll()
{
    struct node *ptr;
    ptr = start;
    printf("Linked List:");
    while (ptr != NULL)
    {
        printf("->%d", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    create_ll();
    insert_before();
    print_ll();
    return 0;
}