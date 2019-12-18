================================================================
ASSIGNMENT 2 (QUESTION 2)- README.TXT
================================================================


FILES INCLUDES WITH THIS PROJECT:
================================================================

	client.c	header.h	implement.c
	readme.txt	testcase.txt	makefile


PROGRAM
================================================================

INTRODUCTION
-------------

	This program performs the division of polynomials represented in memeory with by doubly linked
lists. The entire program is written in three files. Comments have been added frequently to help in 
understanding the logic behind implementation. Two polynomials have to inputted as (power, coefficient)
pairs. This program performs the divison of the first polynomial by the second and outputs the quotient
 and remainder in (power, coefficient) pairs. This program repeats indefinitely till exited manually.


OPERATING SYSTEM AND SOFTWARE REQUIRMENTS
------------------------------------------

	The entire program was developed in Ubuntu operating system using C language. It is highly recommeneded 
to use the Ubuntu system to execute the program. The program requires gcc compiler to compile, build and 
execute the program. The OS and compiler version used for developing the code are :
		Operating system 	: Ubuntu 18.04.1 
		gcc compiler verison	: gcc version 7.4.0


FUNCTIONS IN THE PROGRAM
------------------------

get_polynomial()- Takes the address of a linked list and stores the inputted (power, coefficient) pair in it.

add_last()	- Adds the elements specified in argument to a node and links it to the last node of a list.

division()	- Performs the division operation on the polynomials (first polynomial/ second polynomial).

find()		- Finds and returns the coefficient value at a particular index of a linked list.

update()	- Finds and updates the coefficient value at a particular index of a linked list.

put_polynomial()- Displays the polynomial as (power, coefficient) pair on the screen.

delete_list()	- Deletes the linked list passed to free up space in memory.


PROGRAM EXECUTION
-----------------

	The function when executed expects the user to input two polynomials on which division has to be operated. 
The degree of polynomials has to be inputtted first, which should be following by the (power, coefficient) value pairs.
No cofficient of polynomial should be zero and the value pairs should be inputted in decreasing order of powers. Failing
to adhere to these conditions would result in termination of the program. After both polynomials are inputted the 
division() performs the division and stores the quotient and remainder in two lists. They are printed on screen as
(power, coefficient) pairs and then the lists are deleted to free up used space. 


TEST CASES
----------

	The "testcode.txt" contains the 5 test cases. Comments have been added to guide through the test case 
file to identify where to input data. 


INSTRUCTIONS TO RUN
--------------------

	Open the terminal, make the program and run it. Enter the values from the file (or custom values) 
as requested during exectuion of the program.


CONTACT
========
Developed by
Name	 : Vineeth S
