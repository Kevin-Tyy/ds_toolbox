#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int d)
  {
    data = d;
    next = NULL;
  }
};
void printNodes(Node *n)
{
  while (n != NULL)
  {
    cout << n->data << endl;
    n = n->next;
  }
}

int main()
{
  Node *n1 = new Node(1);
  Node *n2 = new Node(2);
  Node *n3 = new Node(3);
  Node *n4 = new Node(4);
  Node *n5 = new Node(5);

  n1->next = n2;
  n2->next = n3;
  n3->next = n4;
  n4->next = n5;

  Node *head = NULL;
  Node *node_to_insert = new Node(6);
  node_to_insert->next = n1;
  head = node_to_insert;

  printNodes(head);
}