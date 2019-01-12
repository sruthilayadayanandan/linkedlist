#include<iostream>
using namespace std;

class node{
	public:
	string name;
	node *next;

	node(){
		next=NULL;
		}
	};

class linkedlist{
	
	node *head;
	node *tail;

	public:
	linkedlist(){
			head=NULL;
			tail=NULL;

		}
	void insert(string n);			
	void display();
	void del();
	void insertat(int pos, string n);
	void countin();
	void deletat(int pos):	
	};

	void linkedlist::insert(string n){
			node *p=new node;
			
			p->name=n;
			if (head==NULL)
			{head=p;}

			else
			{tail->next=p;}
			
			tail=p;

			}
	void linkedlist::display(){
			node *p=head;
			while (p!=NULL){
					cout<<p->name<<"->";
					p=p->next;
					}
				cout<<"end"<<endl;
			}
	void linkedlist::del(){
			node *p=head,*q=tail;
			while(p->next!=tail)
			{
				p=p->next;
			}
			tail=p;
			tail->next=NULL;
			delete q;
			}
	void linkedlist ::insertat(int pos, string n){
			node *temp=new node;
			temp->name=n;

			int i=1; node *p=head;
			while(i<pos-1)
			{p=p->next;i++;}
			temp->next=p->next;
			p->next=temp;
			}
		
	void linkedlist::countin(){
			node *p=head;
			int i=1;
			while(p!=tail)
			{p=p->next;i++;}
			cout<<i<<endl;
			}			
	void linkedlist::deletat(int pos){
			int i;
			node *p=head;
			int=1;
			while(i<pos-1)
			{i++;p=p->next;}
			node *del=p->next;
			p->next=del->next;
			delete del;
			}	
			
int main(){

	linkedlist l1;
	l1.insert("s");l1.insert("r");l1.insert("u");l1.insert("t");l1.insert("h");l1.insert("i");
	
	l1.display();
	l1.del();
	l1.display();
	l1.insertat(4,"d");
	l1.display();
	l1.countin();
	l1.display();
	l1.deletat(4);
	l1.display();

return 0;
}
	

				


