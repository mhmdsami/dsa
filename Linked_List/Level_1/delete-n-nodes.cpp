#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL, *ptr, *new_node;
struct node *ptr;
int n, i;

void create()
{
    scanf("%d", &n);

    new_node = (struct node *)malloc(sizeof(struct node));

    scanf("%d", &new_node->data);
    new_node->next = NULL;
    start = new_node;
    n--;
    while (n--)
    {
        new_node = (struct node *)malloc(sizeof(struct node));

        scanf("%d", &new_node->data);
        new_node->next = NULL;

        ptr = start;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = new_node;
    }
}

int main()
{
    create();

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        ptr = start;
        start = ptr->next;
        free(ptr);
    }

    ptr = start;
    printf("Linked List:");
    while (ptr != NULL)
    {
        printf("->%d", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}