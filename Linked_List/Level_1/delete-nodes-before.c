#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *ptr, *new_node;
int i, n, data;

void create()
{
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data);
        new_node = malloc(sizeof(struct node));
        new_node->data = data;
        new_node->next = NULL;

        if (head == NULL)
            head = new_node;

        else
        {
            ptr = head;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = new_node;
        }
    }
}

void del()
{
    scanf("%d", &data);

    ptr = head;
    while (ptr->data != data && ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    if (ptr->data == data)
    {
        head = ptr;
    }

    else
        printf("Node not found! ");
}

void display()
{
    ptr = head;
    printf("Linked List:->");
    while (ptr != NULL)
    {
        if (ptr->next != NULL)
            printf("%d->", ptr->data);
        else
            printf("%d", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    create();
    del();
    display();
    return 0;
}