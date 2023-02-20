#include <cstdlib>


struct LinkedItem {
	int value;
	LinkedItem* next;
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

void freeList(LinkedList* list);
void freeItem(LinkedItem* item);