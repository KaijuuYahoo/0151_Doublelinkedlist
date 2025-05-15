#include<iostream>
#include<string>
using namespace std;

class node {
    public:
        int noMhs;
        node *next;
        node *prev;
};

class DoubleLinkedList{
    private:
        node *START;
    public:
        DoubleLinkedList(){
            START = NULL;
        }

        void addnode(){
            int nim;
            cout << "\nEnter roll number of the student : ";
            cin >> nim;

            //step 1 : Allocate memory for new node
            node *newnode = new node();
            //step 2 : Assign value to the data fields
            newnode ->noMhs = nim;

            //step 3 :Insert at the beginning if list is the empty or nim is smallest 
            if (START == NULL || nim <= START ->noMhs)
            {
                if (START != NULL && nim == START->noMhs)
                {
                    cout << "\nDuplicate number not allowed";
                }
                //step 4 : newnode.next=START
                newnode->next = START;
                //step 5 : START.prev = newnode (if START exists)
                if (START != NULL)
                {
                    START -> prev = newnode;
                }
                //step 6 : newnode.prev = NULL
                newnode -> prev = NULL;
                //step 7 : START =newnode
                START = newnode;
                return;   
            }

            //INSERT in between node
            //step 8 : Locate position fro insertion
            node *current = START;
            while (current -> next != NULL && current->next->noMhs < nim)
            {
                current = current->next; 
            }
            if (current ->next !=NULL && nim == current->next->noMhs )
            {
                cout << "\nDuplicate roll number not allowed\n";
                return ;
            }
            //step 9 : Insert between current and current -> next
            newnode -> next = current -> next; //step 9a : newnode -> next = current
            newnode -> prev = current;         // step 9b : newnode -> prev = current;

            //Insert Last node
            if (current -> next !=NULL )
                current->next->next = newnode;//step 9c : current.next.prev = newnode
            current->next =newnode;// step 9d : current.next = newnode
        }

        void Deletion(){
            if (START == NULL)
            {
                cout << "\nList is Empty\n";
                return;
            }

            cout <<"/nMasukkan NIM yang akan dihapus : ";
            int rollNo;
            cin >> rollNo;
            node *current = START;
            //Step 1 : Traverse the list to find the node
            while ( current != NULL && current -> noMhs != rollNo)
            {
                current = current -> next;
                return;
            }

            //step 2 : if node is at the beginning
            if (current == START) {
                START = current ->next;// Step 2a : START = current.next
                if (START != NULL)
                {
                    START->prev = NULL ; //Step 2b : START.prev = NULL
                }
                else 
                {
                    //step 3 : Link previous node to tnext of current
                    current->prev->next= current->next;

                    //step 4 : if current is not the last node
                    if (current->next !=NULL)
                        current->next->prev = current->prev;   
                }
                delete current;
                cout<<"Record with roll number " << rollNo << "deleted\n" ;
                
            }

            
        }
        void traverse(){
            if (START == NULL)
            {
                cout << "\nList is empty\n";
                return;
            }
            //step 1 : Mark first node as currentnode
            node *currentnode = START;

            //Step 2 : Repeat until currentnode == NULL
            cout << "\nRecords in ascending order of roll number are : \n";
            int i = 0;
            while (currentnode != NULL)
            {
                cout << i + 1 << ". " << currentnode->noMhs << " " << endl;
                //step 3 : Move to next node
                currentnode = currentnode->next;
                i++;
            } 
        }

        void revtraverse(){
            if (START == NULL)
            {
                cout << "\nList is empty";
            }
            //step 1 : Move to last mode
            node *currentnode = START;
            int i = 0;
            while (currentnode ->next != NULL)
            {
                currentnode = currentnode->next;
                i++;
            }
            //step 2 : Traverse Backward
            cout << "\nRecords in descending order of roll number are : \n ";
            while (currentnode != NULL)
            {
                cout << i + 1 << ". " << currentnode->noMhs << " " << endl;
                //step 3 : Move to previous node
                currentnode = currentnode->next;
                i--;
            } 
        }

        void searchdata(){
            if (START == NULL)
            {
                cout << "\nList is empty";
                return ;
            }
            int rollNo;
            cout << "\nEnter the roll number to search : ";
            cin >> rollNo;

            node *current = START ;

            //step 1 : Traverse to find matching roll number 
            while (current != NULL && current->noMhs != rollNo)
            {
                current = current ->next;
            }
            //step 2 : Output result 
            if (current == NULL)
            {
                cout<< "Record not found\n";
            }
            

            
            
        }

};


int main (){
    }