#include <stdio.h>
#include <malloc.h>

struct n
{
    int data;
    struct n *next;
};

struct n *h = NULL;
void insert(int data);
void display(struct n *h);

int main()
{
    int i, n;
    scanf("%d", &n);
    printf("Complete linked_list:\n");
    for (i = 1; i <= n; i++)
    {
        insert(i);
    }
    display(h);

    h = NULL;
    printf("Odd:\n");
    for (i = 1; i <= n; i += 2)
    {
        insert(i);
    }
    display(h);

    h = NULL;
    printf("Even:\n");
    for (i = 2; i <= n; i += 2)
    {
        insert(i);
    }
    display(h);
    return 0;
}

void insert(int data)
{
    struct n *new_node, *ptr;

    new_node = (struct n *)malloc(sizeof(struct n));
    new_node->data = data;
    new_node->next = NULL;

    if (h == NULL)
    {
        h = new_node;
    }

    else
    {
        ptr = h;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = new_node;
    }
}

void display(struct n *h)
{
    struct n *ptr;
    ptr = h;
    printf("[h]=>");
    while (ptr != NULL)
    {
        printf("%d=>", ptr->data);
        ptr = ptr->next;
    }
    printf("[h]\n");
}