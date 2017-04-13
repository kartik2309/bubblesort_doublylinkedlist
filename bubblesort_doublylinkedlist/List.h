#pragma once
#include<iostream>
using namespace std;
class List
{
protected:
	typedef struct node {
		node* prev;
		int num;
		node* next;
	}*nodeptr; nodeptr head, curr;
	int i, y, temp;
public:
	List();
	~List();
	void addnode(int);
	void printlist();
};
