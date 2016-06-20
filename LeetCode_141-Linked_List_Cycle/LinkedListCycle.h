#include <iostream>

using namespace std;

/*
141. Linked List Cycle
Difficulty: Easy
Given a linked list, determine if it has a cycle in it.

Follow up:
Can you solve it without using extra space?
*/

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	bool hasCycle(ListNode *head) {
		if (head == NULL)
			return false;
		struct ListNode *slow = head->next;
		if (slow == NULL)
			return false;
		struct ListNode *fast = slow->next;
		while (fast != NULL && slow != NULL) {
			if (fast == slow)
				return true;
			slow = slow->next;
			fast = fast->next;
			if (fast != NULL)
				fast = fast->next;
		}
		return false;
	}
};