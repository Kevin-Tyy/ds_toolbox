#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data) : data(data), next(NULL) {}
};

void insertAtPosition(Node *head, int data, int position)
{

  if (position < 1)
  {
    cout << "Invalid position." << std::endl;
    return;
  }
  Node *newNode = new Node(data);
  if (position == 1)
  {
    newNode->next = head;
    head = newNode;
  }
  else
  {
    Node *current = head;
    for (int i = 1; i < position - 1 && current != NULL; i++)
    {
      current = current->next;
    }
  }
}

int main()
{
}
