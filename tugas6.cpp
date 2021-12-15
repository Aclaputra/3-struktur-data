/**
 * Apakah Circular atau Grounded ? jika diketahui :
 * Polinomial P(X) = 3x9 - 2x8 + 1x6 + 5x5 - 7x4 + 9x4 – 3x1 + 7x2 - 9x6 + 4
 * 
 * Header Node = 0  dan  -1
 * POLI dimulai dari Address = 9
 * AVAIL memori mulai dari = 5
 * LNK vertikal dari atas ke bawah : 5, 8, 13, 11, 10, 12, 0, 14, 4, 15, 2, 3, 1, 6, 7 
 */
#include <iostream>
using namespace std;
/**
 * deklarasi class Node
 * definisikan Node pada Linkedlist basenya seperti apa ?
 */
class Node {
    public:
        int key;
        int data;
        Node* next;

        Node()
        {
            key = 0;
            data = 0;
            next = NULL;
        }
        Node(int k, int d)
        {
            key = k;
            data = d;
        }
};
/**
 * deklarasi class SinglyLinkedList
 * buat method untuk mengakses Linkedlist
 * 1. cek apakah ada berapa node di linkedlists
 * 2. append/tambahkan node baru di akhir linkedlist 
 */
class SinglyLinkedList {
    public:
        Node* head;

        SinglyLinkedList()
        {
            head = NULL;
        }
        SinglyLinkedList(Node *n)
        {
            head = n;
        }

        // 1.Check if node exists using key value
        Node* nodeExists(int k)
        {
            Node* temp = NULL;

            // buat pointer
            Node* ptr = head;
            while(ptr!=NULL)
            {
                // cari berdasarkan key value
                if(ptr->key == k)
                {
                    temp = ptr;
                }
                ptr = ptr->next;
            }
            return temp;
        }
        // 2. Append a node to the list
        void appendNode(Node* n)
        {
            if(nodeExists(n->key)!=NULL)
            {
                cout << "Node with key " << n->key << " already exists." << endl;
            }
            else
            {
                // jika linkedlist kosong masukkan nilai head dari parameter n
                if(head == NULL)
                {
                    head = n;
                    cout << "Node Appended" << endl;
                }
                // jika linkedlist tidak kosong masukkan nilai head dari parameter n ke node terakhir
                else
                {
                    Node* ptr = head;
                    while(ptr->next!=NULL)
                    {
                        ptr = ptr->next;
                    }
                    ptr->next = n;
                    cout << "Node Appended" << endl;
                }
            }
        }
        // 3. Prepend Node - Attach a node at the start
        void prependNode(Node* n)
        {
            if(nodeExists(n->key)!=NULL)
            {
                cout << "Node with key " << n->key << " already exists." << endl;
            }
            else
            {
                n->next = head;
                head = n;
                cout << "Node Prepended" << endl;
            }
        }
        // 4. Insert Node - Insert a node at a given position
        void insertNodeAfter(int k, Node *n)
        {
            Node* ptr = nodeExists(k);
            if(ptr == NULL)
            {
                cout << "Node with key " << k << " does not exist." << endl;
            }
            else
            {
                if(nodeExists(n->key)!=NULL)
                {
                    cout << "Node with key " << n->key << " already exists." << endl;
                }
                else
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    cout << "Node Inserted" << endl;
                }
            }
        }
        // 5. Delete Node - Delete a node at a given position
        void deleteNodeByKey(int k)
        {
            if(head == NULL)
            {
                cout << "Singly Linked List already Empty. Cant delete"<< endl;
            }
            else if(head!=NULL)
            {

                if(head->key==k)
                {
                    head = head->next;
                    cout<<"Node UNLINKED with keys value : "<<k<<endl;
                }
                else
                {
                    Node* temp = NULL;
                    Node* prevptr = head;
                    Node* currentptr = head->next;
                    while(currentptr!=NULL)
                    {
                        if(currentptr->key==k)
                        {
                            temp = currentptr;
                            prevptr->next = currentptr->next;
                            cout<<"Node UNLINKED with keys value : "<<k<<endl;
                            break;
                        }
                        prevptr = currentptr;
                        currentptr = currentptr->next;
                    }
                    if(temp!=NULL)
                    {
                        prevptr->next=temp->next;
                        cout<<"Node UNLINKED with keys value : "<<k<<endl;
                    } 
                    else
                    {
                        cout<<"Node with keys value : "<<k<<" not found"<<endl;
                    }
                }
            }
        }
        // 6. Update Node - Update a node at a given position
        void updateNodeByKey(int k, int d)
        {
            Node* ptr = nodeExists(k);
            if(ptr == NULL)
            {
                cout << "Node with key " << k << " does not exist." << endl;
            }
            else
            {
                ptr->data = d;
                cout << "Node Updated" << endl;
            }
        }
        // 7. Print Linked List
        void printList()
        {
            Node* ptr = head;
            while(ptr!=NULL)
            {
                cout << "(" << ptr->key << "," << ptr->data << ") ";
                ptr = ptr->next;
            }
            cout << endl;
        }
};
/**
 * Nama: M. Acla Alamsyah Putra
 * Nim: 1922423380
 */
int main() {
    SinglyLinkedList s;
    int option;
    int key1, k1, data1;
    do
    {
        cout<<"\nWhat operation do you want to perform? Select Option nmber. Enter 0 to exit"<<endl;
        cout<<"1. Append Node"<<endl;
        cout<<"2. Prepend Node"<<endl;
        cout<<"3. Insert Node After"<<endl;
        cout<<"4. Delete Node By Key"<<endl;
        cout<<"5. Update Node By Key"<<endl;
        cout<<"6. Print Linked List"<<endl;
        cout<<"7. Clear Screen"<<endl;

        cin >> option;
        Node* n1 = new Node();

        switch(option)
        {
            case 0:
                break;
            case 1:
                cout<<"Append Node Operation \nEnter key & data of the Node to be Appended"<<endl;
                cout<<"Enter key value: ";
                cin>>key1;
                cout<<"Enter data value: ";
                cin>>data1;
                n1->key = key1;
                n1->data = data1;
                s.appendNode(n1);
                break;
            case 2:
                cout<<"Prepend Node Operation \nEnter key & data of the Node to be Prepended"<<endl;
                cout<<"Enter key value: ";
                cin>>key1;
                cout<<"Enter data value: ";
                cin>>data1;
                n1->key = key1;
                n1->data = data1;
                s.prependNode(n1);
                break;
            case 3:
                cout<<"Insert Node After Operation \nEnter key & data of the Node to be Inserted"<<endl;
                cout<<"Enter key value: ";
                cin>>key1;
                cout<<"Enter data value: ";
                cin>>data1;
                n1->key = key1;
                n1->data = data1;
                s.insertNodeAfter(key1, n1);
                break;
            case 4:
                cout<<"Delete Node By Key Operation \nEnter key of the Node to be Deleted"<<endl;
                cout<<"Enter key value: ";
                cin>>key1;
                s.deleteNodeByKey(key1);
                break;
            case 5:
                cout<<"Update Node By Key Operation \nEnter key & data of the Node to be Updated"<<endl;
                cout<<"Enter key value: ";
                cin>>key1;
                cout<<"Enter data value: ";
                cin>>data1;
                n1->key = key1;
                n1->data = data1;
                s.updateNodeByKey(key1, data1);
                break;
            case 6:
                cout<<"Print Linked List Operation"<<endl;
                s.printList();
                break;
            case 7:
                system("cls");
                break;
            default:
                cout<<"Invalid Option"<<endl;
        }
    }while(option!=0);

    return 0;
}