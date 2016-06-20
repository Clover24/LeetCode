#include "LinkedListCycleII.h"

int main()
{
	ListNode *p1 = new ListNode(1);
	ListNode *p2 = new ListNode(4);
	ListNode *p3 = new ListNode(2);
	ListNode *p4 = new ListNode(5);
	ListNode *p5 = new ListNode(3);

	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p5;
	p5->next = p3;

	Solution sol;
	p1 = sol.detectCycle(p1);
	if (p1) 
		cout << p1->val << endl;

	return 0;
}