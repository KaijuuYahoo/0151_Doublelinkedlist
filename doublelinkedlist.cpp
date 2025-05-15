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
            node *newnode = new node;
        }

};