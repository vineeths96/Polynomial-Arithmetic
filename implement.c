#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int get_polynomial(struct node** poly)
{
	int i, degree = 0, flag = 0;
	float a;

	printf("\nEnter the degree of the polynomial\n");
	scanf("%d", &degree);

	printf("Enter the coefficients of polynomial on decreasing value of power\n");

	// Receiving polynomial in decreasing order of power
	for(int j = degree; j >= 0; j--)
	{	
		// Receiving comma seperated (power, coefficient) pairs
		scanf("%d,%f", &i, &a);

		// If degree and first input doesnt match
		if((j == degree) && (j != i))
		{
			printf("Degree and input power does not match. Try again.\n");
			return 1;
		}
	
		// If matches add the element to the back of the list
		flag = add_last(poly, i, a);
		if(flag)	return 1;
	}

}

int add_last(struct node** header, int i, float a)
{
	struct node* new_node = (struct node*) malloc(sizeof(struct node));

	// If coefficient is zero then return and iterate for next set of polynomials
	if(a == 0)	
	{
		printf("Coefficeint cannot be 0. Try again.\n");
		return 1;
	}

	// If non zero add element to list
	new_node->a = a;
	new_node->i = i;
	new_node->next = NULL;

	if(*header == NULL)
	{	
		*header = new_node;
		new_node->prev = NULL;
	}
	else
	{
		struct node* last = (struct node*) malloc(sizeof(struct node));	
		for(last = *header; last->next != NULL; last = last->next);
		last->next = new_node;
		new_node->prev = last;

		// If the order of power is not descending
		if(new_node->i != ((new_node->prev)->i - 1))
		{
			printf("Order of power in input is not descending\n");
			return 1;
		}
	}
	return 0;
}


void division(struct node** a_poly, struct node** b_poly)
{
	struct node* quotient = NULL;
	struct node* remainder = NULL;
	float p,q;
	
	int a_deg = (*a_poly)->i, b_deg = (*b_poly)->i;

	for(int k = (a_deg-b_deg); k >= 0; k--)
	{
		// Find quotient and add it to quotient list
		q = (find(*a_poly, (b_deg + k)))/find(*b_poly, b_deg);
		add_last(&quotient, k, q);

		for(int j = (b_deg + k -1); j >= k; j--)
		{
			p = find(*a_poly, j) - q * find(*b_poly, (j-k)); 
			update(a_poly, j, p);
		}		
	}
	
	struct node* ptr = NULL;
	int i = a_deg;

	// Assigning the remainder list
	for(ptr = *a_poly; ptr != NULL; ptr = ptr->next, i--)
	{
		if(i == (b_deg-1))	
		{	
			remainder = ptr;
			break;
		}
	}

	// Print the reuslt out	
	printf("\nQuotient : \n");
	put_polynomial(quotient);

	printf("\nRemainder : \n");
	put_polynomial(remainder);

	printf("\n\n");
}

float find(struct node* header, int index)
{
	struct node* ptr = NULL;
	int i = header->i;

	// Find and return the coefficient value and the index
	for(ptr = header; ptr != NULL; ptr = ptr->next, i--)
	{
		if(i == index)	return ptr->a;
	}
}

void update(struct node** header, int index, float val)
{
	struct node* ptr = NULL;
	int i = (*header)->i;

	// Find and update the coefficient value and the index	
	for(ptr = *header; ptr != NULL; ptr = ptr->next, i--)
	{
		if(i == index)	ptr->a = val;
	}


}

void put_polynomial(struct node* header)
{
	struct node* ptr = (struct node*) malloc(sizeof(struct node));
	
	if(header == NULL) printf("%d", 0);
	// Display the polynomial on screen
	for(ptr = header; ptr != NULL; ptr = ptr->next)
	{
		printf("(%d, %f)\n", ptr->i, ptr->a);
	}
}


void delete_list(struct node** header)
{
	struct node* prev = *header;

	// Delete the nodes of the list
	while (*header != NULL)
	{
		*header = (*header)->next;
		free(prev);
		prev = *header;
	}
}
		
