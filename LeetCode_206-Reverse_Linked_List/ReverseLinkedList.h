#include <iostream>

using namespace std;

/*
206. Reverse Linked List
Difficulty: Easy
Reverse a singly linked list.

Hint:
A linked list can be reversed either iteratively or recursively. Could you implement both?
*/

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode *pPrev = NULL;
		ListNode *pNode = head;
		ListNode *pNext = NULL;
		while (pNode != NULL) {
			pNext = pNode->next;
			pNode->next = pPrev;
			pPrev = pNode;
			pNode = pNext;
		}
		return pPrev;
	}
};