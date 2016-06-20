#include "LinkedListCycle.h"

int main()
{
	ListNode *p1 = new ListNode(1);
	ListNode *p2 = new ListNode(4);
	ListNode *p3 = new ListNode(2);
	ListNode *p4 = new ListNode(5);

	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p2;

	Solution sol;
	bool res = sol.hasCycle(p1);
	cout << res << endl;

	return 0;
}
