# ReverseLinkedList
Reverse a C language, singly-linked list in place.

Answer to an interview question: how would you represent a list in C? Write a function that, given a list in that representation, 
returns a list in the reverse order. It is OK to reuse the list that's passed in.

My initial reaction was to read the list into a stack, then create a new list from popping the stack. But a more efficient program
wuold just walk the list from front to back, updating the "next" pointer as it goes, and return the former tail of the list as the
head of a reversed list.
