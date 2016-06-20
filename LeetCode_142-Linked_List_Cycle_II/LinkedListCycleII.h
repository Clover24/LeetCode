#include <iostream>

using namespace std;

/*
142. Linked List Cycle II
Difficulty: Medium
Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

Note: Do not modify the linked list.

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
	ListNode *detectCycle(ListNode *head) {
		ListNode *meetingNode = hasCycle(head);
		if (meetingNode == NULL)
			return NULL;
		ListNode *pNode = meetingNode;
		int lenofcycle = 1;
		while (pNode->next != meetingNode) {
			pNode = pNode -> next;
			lenofcycle++;
		}
		ListNode *fast = head;
		ListNode *slow = head;
		for (int i = 0; i < lenofcycle; ++i)
			fast = fast->next;
		while (fast != slow) {
			fast = fast->next;
			slow = slow->next;
		}
		return fast;
	}
	ListNode *hasCycle(ListNode *head) {
		if (head == NULL)
			return NULL;
		struct ListNode *slow = head->next;
		if (slow == NULL)
			return NULL;
		struct ListNode *fast = slow->next;
		while (fast != NULL && slow != NULL) {
			if (fast == slow)
				return fast;
			slow = slow->next;
			fast = fast->next;
			if (fast != NULL)
				fast = fast->next;
		}
		return NULL;
	}
};