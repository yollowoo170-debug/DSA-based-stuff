#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next_address;

    Node(int data_value)
    {
        data = data_value;
        next_address = NULL;
    }
};

class LL
{
    Node *head;
    Node *tail;

public:
    LL()
    {
        head = tail = NULL;
    }

    void front_insert(int val)
    {
        Node *new_node = new Node(val);

        if (head == NULL)
        {
            head = tail = new_node;
        }
        else
        {
            new_node->next_address = head;
            head = new_node;
        }
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next_address;
        }
        cout << endl;
    }
};

int main(void)
{
    int n, value;
    LL list;
    cout << "Number of values: ";
    cin >> n;
    cout << "Values: ";

    while (n--)
    {
        cin >> value;
        list.front_insert(value);
    }

    return 0;
}