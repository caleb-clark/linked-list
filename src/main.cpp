#include "linked_list.h"
#include <iostream>

int main() 
{
	linked_list<int> ll;
	for (int i = 0; i < 10; i++) {
		ll.push_back(i);
		ll.print();
	}

	int q = 0;

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 1) {
			ll.pop_front();
		} else {
			ll.pop_back();
		}
		ll.print();
	}
}