#include "List.h"

void List::Add(int item) {

	Node* new_node = new Node();
	new_node->data = item;
	
	if (header == nullptr) {
		header = new_node;
		header->next = nullptr;
	}
	else {
		Node* temp = new Node();
		temp = header;
		while (temp->next != nullptr) { //ultimo nodo de la lista
			temp = temp->next;
		}
		//al terminar el while temp = al ultimo nodo de la lista 
		temp->next = new_node;
		new_node->next = nullptr;
	}
}
void List::Clear() {
	header = nullptr;
}
int List::Count() {
	Node* temp = new Node();
	temp = header;
	int count = 0;
	while (temp != nullptr) {
		
		temp = temp->next;
		count++;
	}
	return count;

}
bool List::Contains(int item) {
	Node* temp = new Node();
	temp = header;
	while (temp != nullptr) {
		
		if (item == temp->data) {
			return true;
		}
		temp = temp->next;
	}
	return false;
}
int List::IndexOf(int item) {

	return 0;

}
void List::Insert(int index, int item) {
	Node* new_Nodo = new Node();
	new_Nodo->data = item;
	Node* temp = new Node();
	temp = header;
	int count = 0;
	while (temp != nullptr) {

		if (index == 0) {
			new_Nodo->next = temp;
			header = new_Nodo;
			break;
		}
		if (count == index) {
			new_Nodo->next = new_Nodo;
			temp->data = new_Nodo->data;
		}
		temp = temp->next;
		count++;
	}
}
List::Node* List::GetItem(int index) {
	Node* temp = new Node();
	temp = header;
	int count = 0;
	while (temp != nullptr) { 
		
		if (count == index) {
			return temp;
		}

		temp = temp->next;
		count++;
	}
	return temp; 
}
void List::SetItem(int index, int item) {
	Node* new_Nodo = new Node();
	new_Nodo->data = item;
	Node* temp = new Node();
	temp = header;
	int count = 0;
	while (temp != nullptr) {

		if (count == index) {
			temp->data = new_Nodo->data;
			new_Nodo->next = new_Nodo;
		}
		temp = temp->next;
		count++;
	}
}
int List::LastIndexOf(int item) {

	return 0;

}
bool List::Remove(int item) {

	return false;

}
void List::RemoveAt(int index) {



}
