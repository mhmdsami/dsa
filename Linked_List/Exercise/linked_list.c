#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
void create_ll();
void print_ll();

int main()
{
    int option;
    do
    {
        printf("[1] Create a linked list\n[2] View the linked list\nEnter an option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            create_ll();
            break;

        case 2:
            print_ll();
            break;

        default:
            printf("%d is an invalid option", option);
            break;
        }
    } while (option < 3 && option > 0);
    return 0;
}

void create_ll()
{
    int num;
    printf("How many element do you want to have: ");
    scanf("%d", &num);

    if (num > 0)
        printf("Enter the elements one by one:\n");

    int val;
    struct node *ptr, *new_node;
    while (num--)
    {
        new_node = (struct node *)malloc(sizeof(struct node));

        scanf("%d", &val);
        new_node->data = val;
        new_node->next = NULL;

        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
            ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }

            ptr->next = new_node;
        }
    }
}

void print_ll()
{
    struct node *ptr;

    ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}
