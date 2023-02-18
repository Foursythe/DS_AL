#include <cstdlib>


struct LinkedItem {

	int value;
	LinkedItem* next;
	int index;
};

struct LinkedList {
	LinkedItem* head;
	LinkedItem** items;
};

LinkedItem* createItem(int value);
LinkedList* createList();

void push(LinkedList* list, int value);
void pop(LinkedList* list);
void show(LinkedList* list);