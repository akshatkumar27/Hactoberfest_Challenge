// Given the head of a singly linked list, reverse the list, and return the reversed list.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    if(head == NULL){
        return NULL;
    }
    
    struct ListNode *current = head;
    struct ListNode *prev = NULL;
    
    while(current!= NULL){
        struct ListNode* next = current->next;
        current->next = prev;
        
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
