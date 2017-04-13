// bubblesort_doublylinkedlist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"Sort.h"
Sort* sort = new Sort;

int main()
{
	int n, num;
	char i;
	cout << "Enter the number of elements you want to enter:";
	cin >> n;
	for (int i = 0; i != n; i++) {
		cout << "Enter the " << i + 1 << "th number:";
		cin >> num;
		sort->addnode(num);
	}
	sort->sort();
	cout << "Sorted Linked list is:-" << endl;
	sort->printlist();
	system("pause");
	return 0;
}


