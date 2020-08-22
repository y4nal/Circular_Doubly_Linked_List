#include<iostream>
#include"Circ.cpp"
using namespace std;
void main(void)
{
	Circ<int> s;
	s.addFront(2);
	s.addFront(3);
	s.display();
}
