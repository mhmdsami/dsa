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

void delete_begin()
{
    struct node *ptr;
    int num, i;
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        ptr = start;
        start = ptr->next;
        free(ptr);
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
    delete_begin();
    print_ll();
    return 0;
}