#include "ReverseLinkedListII.h"

int main()
{
	ListNode *p1 = new ListNode(1);
	ListNode *p2 = new ListNode(2);
	ListNode *p3 = new ListNode(3);
	ListNode *p4 = new ListNode(4);
	ListNode *p5 = new ListNode(5);

	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p5;

	Solution sol;
	p1 = sol.reverseBetween(p1, 1, 4);
	while (p1) {
		cout << p1->val << endl;
		p1 = p1->next;
	}

	return 0;
}
