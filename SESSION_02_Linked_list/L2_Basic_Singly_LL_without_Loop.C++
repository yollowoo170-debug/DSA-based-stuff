// C version
#include <bits/stdc++.h>

struct n
{
    int d;
    struct n *nA;
};

int main(void)
{
    struct n *head;
    struct n *first = NULL;
    struct n *secound = NULL;
    struct n *third = NULL;
    struct n *fourth = NULL;
    struct n *fifth = NULL;

    first = (struct n *)malloc(sizeof(struct n)); // Malloc keeps 28 bytes of space.
    secound = (struct n *)malloc(sizeof(struct n));
    third = (struct n *)malloc(sizeof(struct n));
    fourth = (struct n *)malloc(sizeof(struct n));
    fifth = (struct n *)malloc(sizeof(struct n));

    first->d = 88;
    secound->d = 27;
    third->d = 104;
    fourth->d = 22;
    fifth->d = 803;

    first->nA = secound;
    secound->nA = third;
    third->nA = fourth;
    fourth->nA = fifth;
    fifth->nA = NULL;

    head = first;

    struct n *temp;
    temp = head;

    while (temp != NULL)
    {
        printf("%d", temp->d);
        temp = temp->nA;
    }
    return 0;
}

// C++ version
#include <iostream>

struct n
{
    int d;
    n *nA;
};

int main(void)
{
    n *head;
    n *first = nullptr;
    n *secound = nullptr;
    n *third = nullptr;
    n *fourth = nullptr;
    n *fifth = nullptr;

    first = new n();
    secound = new n();
    third = new n();
    fourth = new n();
    fifth = new n();

    first->d = 88;
    secound->d = 27;
    third->d = 104;
    fourth->d = 22;
    fifth->d = 803;

    first->nA = secound;
    secound->nA = third;
    third->nA = fourth;
    fourth->nA = fifth;
    fifth->nA = nullptr;

    head = first;

    n *temp;
    temp = head;

    while (temp != nullptr)
    {
        std::cout << temp->d;
        temp = temp->nA;
    }

    delete first;
    delete secound;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}