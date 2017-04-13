#include "stdafx.h"
#include "Sort.h"


Sort::Sort()
{
}


Sort::~Sort()
{
}

void Sort::sort1()
{
	curr = head;
	while (curr->next != NULL) {
		curr = curr->next;
		if (curr->prev->num > curr->num) {
			temp = curr->prev->num;
			curr->prev->num = curr->num;
			curr->num = temp;
			i++;
		}
	}
}

void Sort::sort2()
{
	while (y < i) {
		sort1();
		y++;
	}
}

void Sort::sort()
{
	sort1();
	sort2();
}
