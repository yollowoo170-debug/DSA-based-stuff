#include <bits/stdc++.h>
using namespace std;

struct n
{
    int data;
    struct n *next_address;
};

struct n *head = NULL;

void printList()
{
    struct n *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next_address;
    }
    cout << "\n";
}

void insert_begin(int d)
{
    struct n *new_node = (struct n *)new n;
    new_node->data = d;
    new_node->next_address = head;
    head = new_node;
}
void insert_end(int d)
{
    struct n *new_node = (struct n *)new n;
    new_node->data = d;
    new_node->next_address = NULL;

    if (head == NULL)

    {
        head = new_node;
        return;
    }

    struct n *ll = head; // head points to first node and so does ll here.

    while (ll->next_address != NULL)
    {
        ll = ll->next_address;
    }
    ll->next_address = new_node;
}

void insert_after(struct n *list, int d)
{
    if (list == NULL)
    {
        cout << "Error: The given node is NULL" << "\n";
        return;
    }

    struct n *new_node = (struct n *)new n;

    {
        new_node->data = d;
        new_node->next_address = list->next_address;
        list->next_address = new_node;
    };
}

void freeList()
{
    struct n *current = head;
    struct n *next_address;

    while (current != NULL)
    {
        next_address = current->next_address;
        delete current;
        current = next_address;
    }
    head = NULL;
}

int main(void)
{
    insert_begin(70);
    printList();
    insert_begin(50);
    printList();
    insert_end(100);
    printList();
    insert_end(150);
    printList();
    insert_begin(30);
    printList();
    insert_after(head->next_address->next_address, 88);
    printList();
    insert_after(head->next_address->next_address->next_address->next_address, 125);
    printList();

    freeList();

    return 0;
}