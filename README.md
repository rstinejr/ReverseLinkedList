# ReverseLinkedList
Reverse a C language, singly-linked list in place.

Answer to an interview question: how would you represent a list in C? Write a function that, given a list in that representation, 
returns a list in the reverse order. It is OK to reuse the list that's passed in.

My initial reaction was to read the list into a stack, then create a new list from popping the stack. But a more efficient program
wuold just walk the list from front to back, updating the "next" pointer as it goes, and return the former tail of the list as the
head of a reversed list.

This project was built on 64-bit Mint 17.2 Rafaela, using gcc version (Ubuntu 4.9.4-2ubuntu1~14.04.1) 4.9.4.

Builds and runs on 64-bit CentOS Linux release 7.3.1611 (Core), using gcc version 4.8.5 20150623 (Red Hat 4.8.5-11).

Bonus: The build is done largely by a generic Makefile.inc that includes the magic incantations for getting gcc to generate build dependencies.  It is easy
to adapt to other projects.

## Build and Run

1. Clone ReverseLinkedList
2. cd ReverseLinkedList
3. make clean all run

On success, the console output will conclude with

```
gcc -o reverse objs/ListOps.o objs/main.o -lrt 
./reverse
Initial list: 1 2 3 4 
Reversed list: 4 3 2 1 
Done.
```
