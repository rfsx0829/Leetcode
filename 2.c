#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* sub(struct ListNode* l1, struct ListNode* l2, int cover);

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    return sub(l1, l2, 0);
}

struct ListNode* sub(struct ListNode* l1, struct ListNode* l2, int cover) {
    struct ListNode* p = NULL;
    if(l1 == NULL && l2 == NULL) {
        if(cover) {
            p = (struct ListNode*)malloc(sizeof(struct ListNode));
            p->val = cover;
            p->next = NULL;
        }
        return p;
    }
    
    if(l1 == NULL) {
        if(cover == 0) {
            return l2;
        }
        
        l2->val += 1;
        cover = l2->val / 10;
        l2->val %= 10;
        
        p = (struct ListNode*)malloc(sizeof(struct ListNode));
        p->val = l2->val;
        p->next = sub(NULL, l2->next, cover);
        return p;
    }
    
    if(l2 == NULL) {
        if(cover == 0) {
            return l1;
        }
        
        l1->val += 1;
        cover = l1->val / 10;
        l1->val %= 10;
        
        p = (struct ListNode*)malloc(sizeof(struct ListNode));
        p->val = l1->val;
        p->next = sub(l1->next, NULL, cover);
        return p;
    }
    
    p = (struct ListNode*)malloc(sizeof(struct ListNode));
    p->val = l1->val + l2->val + cover;
    p->next = sub(l1->next, l2->next, p->val/10);
    p->val %= 10;
    return p;
}
