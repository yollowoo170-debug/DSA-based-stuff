#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next_address;
};

node *head = NULL;
node *tail = NULL;
node *temp;

int main(void)
{
    int num;
    cout << "Number of instances: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        temp = new node;

        cin >> temp->data;
        temp->next_address = NULL;

        if (head == NULL)
        {
            head = tail = temp;
        }
        else
        {
            tail = temp->next_address;
            tail = temp;
        }
    }
    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
    }
}