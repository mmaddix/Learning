#include <iostream>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* l3 = new ListNode();
        bool firstPass = true;
        int tempValue;
        int carry = 0;
        ListNode* ptr;

        while (l1 != NULL || l2 != NULL) {
            
            if (carry != 0 && l2 != NULL && l1 != NULL) {
                tempValue = l1->val + l2->val + carry;
                carry = 0;
            }
            else if (l2 == NULL) {
                if (carry != 0) {
                    tempValue = l1->val + carry;
                    carry = 0;
                }
                else {
                    tempValue = l1->val;
                }
            }
            else if (l1 == NULL) {
                if (carry != 0) {
                    tempValue = l2->val + carry;
                    carry = 0;
                }
                else {
                    tempValue = l2->val;
                }
            }
            else {
                tempValue = l1->val + l2->val;
            }

            if (tempValue > 9) {
                carry = 1;
                tempValue = tempValue - 10;
            }

            ListNode* temp = new ListNode(tempValue);

            if (firstPass) {
                l3 = temp;
                firstPass = false;
            }
            else {
                ptr = l3;
                while (ptr->next != NULL) {
                    ptr = ptr->next;
                }
                ptr->next = temp;
            }
            if (l1 != NULL) {
                l1 = l1->next;
            }
            if (l2 != NULL) {
                l2 = l2->next;
            }
            
        }
        if (carry == 1) {
            ListNode* temp = new ListNode(carry);
            ptr = l3;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
        return l3;
    }
};

int main() {

    Solution a;

    ListNode* ptr;

    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    ptr = l1;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = new ListNode(3);
    

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    ptr = l2;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = new ListNode(4);
    

    ListNode* answer = a.addTwoNumbers(l1, l2);

}