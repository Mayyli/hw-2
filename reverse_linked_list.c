//
// Created by mali on 23.05.2019.
//

#include "reverse_linked_list.h"
#include <stdlib.h>
#include <stdio.h>



SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *tail, *t;
    tail = NULL;
    while (head != NULL) {
        t = head->next;
        head->next = tail;
        tail = head;
        head = t;
    }
    return tail;



}