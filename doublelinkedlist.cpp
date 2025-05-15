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
                //step 5 : START.prev = nenode (uf START exists)
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
            while (current -> next != NULL && current->next->noMhs <)
            {
                /* code */
            }
            
            
        }

};