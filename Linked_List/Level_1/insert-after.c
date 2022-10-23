#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *ptr, *pptr, *new_node;
int n, data, key;

struct node *create_node()
{
    scanf("%d", &data);
    new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}

void create_ll()
{
    scanf("%d", &n);
    while (n--)
    {
        new_node = create_node();

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

void insert_before()
{
    scanf("%d", &key);
    new_node = create_node();

    ptr = head;
    while (ptr->data != key && ptr->next != NULL)
    {
        pptr = ptr;
        ptr = ptr->next;
    }

    if (ptr->data == key)
    {
        pptr->next = new_node;
        new_node->next = ptr;
    }

    else
        printf("Node not found!\n");
}

void display()
{
    ptr = head;
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
    display();
    return 0;
}
