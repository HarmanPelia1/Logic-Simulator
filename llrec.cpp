#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot){
	
	if(head == nullptr){
		smaller = nullptr;
		larger = nullptr;
		return;
	}

	if(head->val <= pivot){
		smaller = head;
		Node* next = head->next;
		llpivot(next, smaller->next, larger, pivot);
	}
	else{
		larger = head;
		Node* next = head->next;
		llpivot(next, smaller, larger->next, pivot);
	}
	head = nullptr;
}
