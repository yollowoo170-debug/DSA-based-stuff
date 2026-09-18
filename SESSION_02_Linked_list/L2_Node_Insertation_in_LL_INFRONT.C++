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