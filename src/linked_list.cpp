/*
 * linked_list.c
 *
 *  Created on: Feb 18, 2018
 *      Author: Slobodchikov_RS
 */
#include "linked_list.hpp"

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <memory.h>



void LinkedList::push(void *elem, size_t elemSize)
{
	Node_c *tmp = new Node_c (elem, elemSize);

	if(head == NULL)
	{
		head = tmp;
	}
	else
	{
	    tmp->setNextNode(head);
	    head = tmp;
	}

	if(first == NULL)
	{
		first = head;
	}
}

size_t LinkedList::pop(void *elemPtr)
{
	size_t elemSize = 0;
	elemSize = head->getNodeElement(elemPtr);

	Node_c *prev = head;
	head = head->getNextNode();
	delete prev;

	return elemSize;
}

//void push(Node **head, void *elemPtr, size_t elemSize)
//{
//    Node *tmp = (Node*) malloc(sizeof(Node));
//    tmp->element.ptr = malloc(elemSize);
//    if(tmp->element.ptr == NULL || tmp == NULL)
//    {
//    	printf("Allocation ERROR!\n");
//    	return;
//    }
//
//    memcpy(tmp->element.ptr, elemPtr, elemSize);
//    tmp->element.size = elemSize;
//
//    tmp->next = (*head);
//    (*head) = tmp;
//}
//
//size_t pop(Node **head, void *elemPtr)
//{
//    Node* prev = NULL;
//    size_t size = 0;
//    if (head == NULL)
//    {
//        printf("List is empty\n");
//        return size;
//    }
//
//    prev = (*head);
//    memcpy(elemPtr, prev->element.ptr, prev->element.size);
//    free(prev->element.ptr);
//
//    size = prev->element.size;
//    (*head) = (*head)->next;
//    free(prev);
//    return size;
//}
//
//void printLinkedList(const Node *head)
//{
//	if(head == NULL)
//	{
//		printf("Is empty\n");
//		return;
//	}
//    while (head)
//    {
//    	for(int i = 0; i < head->element.size; i++)
//    		printf("%X", ((uint8_t*)head->element.ptr)[i]);
//    	printf(" ");
//        head = head->next;
//    }
//    printf("\n");
//}
