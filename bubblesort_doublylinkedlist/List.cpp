#include "stdafx.h"
#include "List.h"


List::List() :head(NULL), curr(NULL), y(0), i(0)
{
}


List::~List()
{
}

void List::addnode(int addnum)
{
	nodeptr n = new node;
	n->next = NULL; n->prev = NULL;
	n->num = addnum;
	if (head != NULL) {
		curr = head;
		while (curr->next != NULL)
			curr = curr->next;
		n->prev = curr;
		curr->next = n;
	}
	else head = n;
}

void List::printlist()
{
	curr = head;
	while (curr != NULL) {
		cout << curr->num << endl;
		curr = curr->next;
	}
}

