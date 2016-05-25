#include "OddEvenLinkedList.h"

int main()
{
	ListNode *p1 = new ListNode(1);
	ListNode *p2 = new ListNode(4);
	ListNode *p3 = new ListNode(2);
	ListNode *p4 = new ListNode(5);

	p1->next = p2;
	p2->next = p3;
	p3->next = p4;

	Solution sol;
	sol.oddEvenList(p1);
	while (p1) {
		cout << p1->val << endl;
		p1 = p1->next;
	}

	return 0;
}