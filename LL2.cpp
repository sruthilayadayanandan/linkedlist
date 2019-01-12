#include <iostream>

using namespace std;

 

class node{

          //type

    public:

    // Data

    string name;

    // Pointer to the next Node

    node * next;

    // Construct

    node(){

        next = NULL;

    }

 

};

 

   class LinkedList{

       //type

       public:

       // Head -> Node type ptr

       node * head;

       node * tail;

       // Construct

       LinkedList(){

          head = NULL;

          tail = NULL;

    }

  

  

  

    // Insert

    void insert(string n){

       // addition of first node

       node * temp = new node;

       // Insert value in the node

       temp -> name = n;

       // for first node

       if(head == NULL){

            head = temp;

       }

       // for other nodes

       else{

            tail->next = temp;

       }

       tail = temp;

    }

 

 

     //insertAt

     void insertAt(int pos, string n){

        // Reach the place before the pos

        node *p = head;

        int i =1;

       

        while(i < pos-1){

            i++;

            p = p->next;

        }

 

        // Create a node

        node*temp = new node;

        temp->name = n;

 

        // pointers moving

        temp->next = p->next;

        p->next = temp;

       

       

 

    }

 

    // Deletion of last element

    void delet(){

        // store the tail in temp

        node * temp = tail;

        // before tail has to point to null

        node *p = head;

        while(p->next != tail){

            p = p->next;

        }

       p->next = NULL;

 

        // update tail

        tail = p;

        // delete temp

         delete temp;

    }

   

    //count

    void count(){

          node*p=head;

          int i=1;

          while(p!=tail)

          {

                    p=p->next;

          i++;

                    }

                    cout<<i<<endl;

          }

       

       

        //deletAt

   

    void deletAt(int pos){

        // Reach the place before the pos

        node * p = head;

        int i =1;

       

        while(i < pos-1){

            i++;

            p = p->next;

        }

 

        // delet a node

        node*del = p->next;

        p->next=del->next;

        delete del ;

    }

 

      

       

        // Display

    void display(){

        node * p = head;

        while(p!= NULL){

            cout << p->name << "->";

            p = p->next;

        }

        cout << endl;

    }

};

 

 

int main(){

    LinkedList l1;

    l1.insert("s");

    l1.insert("r");

    l1.insert("u");

    l1.insert("t");
    
    l1.insert("h");

    l1.insert("i");

    l1.display();

    l1.delet();

    l1.display();

    l1.insertAt(4,"d");

    l1.display();

    l1.count();

    l1.display();

   l1.deletAt(2);

    l1.display();

   

    return 0;

}