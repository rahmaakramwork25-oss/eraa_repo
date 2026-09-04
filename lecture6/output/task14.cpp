#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:

    
    LinkedList() {
        head = NULL;
    }

    
    bool isEmpty() {
        return head == NULL;
    }

    
    void add(int value) {

        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
        }
        else {
            Node* temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }    
    void display() {

        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
    
    bool search(int value) {

        Node* temp = head;

        while (temp != NULL) {

            if (temp->data == value) {
                return true;
            }

            temp = temp->next;
        }

        return false;
    }

    void remove(int value) {

        if (head == NULL) {
            return;
        }

        
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {

            if (temp->next->data == value) {

                Node* deletedNode = temp->next;
                temp->next = temp->next->next;

                delete deletedNode;
                return;
            }

            temp = temp->next;
        }
    }
};
int main() {

    LinkedList list;
    
    list.add(10);
    list.add(20);
    list.add(30);
    list.add(40);

    
    if (list.isEmpty()) {
        cout << "List is Empty" << endl;
    }
    else {
        cout << "List is Not Empty" << endl;
    }
    list.add(50);
    cout << "List: ";
    list.display();
    if (list.search(30)) {
        cout << "30 Found" << endl;
    }
    else {
        cout << "30 Not Found" << endl;
    }
    list.remove(20);
    cout << "After removing 20: ";
    list.display();
    return 0;
}