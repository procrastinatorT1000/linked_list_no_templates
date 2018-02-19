/*
 * linked_list.h
 *
 *  Created on: Feb 18, 2018
 *      Author: Slobodchikov_RS
 */

#ifndef LINKED_LIST_HPP_
#define LINKED_LIST_HPP_

#include <cstddef>

typedef struct
{
	void *ptr;
	size_t size;
}Elemen;

typedef struct Node
{
	Elemen element;
    struct Node *next;
} Node;

void push(Node **head, void *elemPtr, size_t elemSize);
size_t pop(Node **head, void *elemPtr);
void printLinkedList(const Node *head);

#endif /* LINKED_LIST_HPP_ */
