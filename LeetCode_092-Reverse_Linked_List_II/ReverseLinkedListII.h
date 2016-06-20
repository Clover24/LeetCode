#include <iostream>

using namespace std;

/*
92. Reverse Linked List II My Submissions QuestionEditorial Solution
Total Accepted: 74819 Total Submissions: 263899 Difficulty: Medium
Reverse a linked list from position m to n. Do it in-place and in one-pass.

For example:
Given 1->2->3->4->5->NULL, m = 2 and n = 4,

return 1->4->3->2->5->NULL.

Note:
Given m, n satisfy the following condition:
1 ¡Ü m ¡Ü n ¡Ü length of list.
*/

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* reverseBetween(ListNode* head, int m, int n) {
		if (m == n)
			return head;
		ListNode *pStart = new ListNode(-1);
		pStart->next = head;
		ListNode *pPrev = pStart;
		for (int i = 0; i < m - 1; ++i) 
			pPrev = pPrev->next;
		ListNode *pNode = pPrev->next;
		ListNode *pNext = NULL;
		for (int i = 0; i < n - m; ++i) {
			pNext = pNode->next;
			pNode->next = pNext->next;
			pNext->next = pPrev->next;
			pPrev->next = pNext;
		}
		ListNode *res = pStart->next;
		delete pStart;
		return res;
	}
};