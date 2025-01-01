#include "List.h"
void List::insert(int val)
{
    Node* newNode = new Node(val);
    if (newNode == nullptr) {
        throw runtime_error("Memory allocation failed");
    }
}
void List::remove()
{

}
