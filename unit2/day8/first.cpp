#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {
    Node* first = nullptr;
    Node* last = nullptr;

    int choice, value;

    do {
        cout << "\n\n====== Linked List Menu ======\n";
        cout << "1. Create Node\n";
        cout << "2. Display Linked List\n";
        cout << "3. Delete Node\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            cout << "Enter value: ";
            cin >> value;

            Node* newNode = new Node(value);

            if (first == nullptr) {
                first = newNode;
                last = newNode;
            }
            else {
                last->next = newNode;
                last = newNode;
            }

            cout << "Node created successfully.\n";
            break;
        }

        case 2: {
            if (first == nullptr) {
                cout << "Linked List is empty.\n";
            }
            else {
                Node* temp = first;

                cout << "Linked List: ";

                while (temp != nullptr) {
                    cout << temp->data << " ";
                    temp = temp->next;
                }

                cout << endl;
            }

            break;
        }

        case 3: {
            if (first == nullptr) {
                cout << "Linked List is empty. Nothing to delete.\n";
            }
            else {
                Node* temp = first;
                first = first->next;

                delete temp;

                if (first == nullptr) {
                    last = nullptr;
                }

                cout << "Node deleted successfully.\n";
            }

            break;
        }

        case 4: {
            cout << "Exiting program...\n";
            break;
        }
        case 5:
        {
            
        }

        default: {
            cout << "Invalid choice!\n";
        }
        }

    } while (choice != 4);

    return 0;
}