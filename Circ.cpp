#include<iostream>
#include<string>
#include"head.h"
using namespace std;
template<typename T>
void Circ<T>::addFront(const T & item)
{
	Cnode<T>*temp=new Cnode<T>;
	Cnode<T>*p=Cursor;
	temp->data=item;
	temp->next=NULL;
	temp->prev=NULL;
	if(empty())
	{

		Cursor=temp;
		Cursor->next=temp;
		Cursor->prev=temp;
		n++;
		return;
	}
	if(!empty())
	{
		temp->next=Cursor->next;
		Cursor->next=temp;
		temp->prev=Cursor;
		Cursor=temp;
		n++;
	}
}

template<typename T>
bool Circ<T>::remove()
{
	if(empty())
	{
		cout<<"ERROR IS Empty"<<endl;
		return false;
	}
	
	else
	{
		if(Cursor->next==Cursor&&Cursor->prev==Cursor)
			delete Cursor;
			Cursor=NULL;
			n--;
			return true;
	}

	{
		Cnode<T>*t=Cursor;
		Cnode<T>*w=Cursor;
		while(t->next!=Cursor)
		{
			w = t->next->next;
			delete t->next;
				t=w;
			n--;
		}
		delete Cursor;
			Cursor=NULL;
			n--;
		}
}
			

template<typename T>
Circ<T>::~Circ()
{
	remove();
}

template<typename T>
void Circ<T>::display()
{
	if(empty())
	{
	
		cout<<" IS Empty"<<endl;
		return;
	}
	else
	{
		Cnode<T>*t=Cursor;
	while(t!=Cursor->prev)
	{
		cout<<t->data<<endl;
		t=t->next;

	}
	cout<<t->data<<endl;
	}
}