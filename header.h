struct node
{
int i;
float a;
struct node* prev;
struct node* next;
};

int get_polynomial(struct node** poly);							// Input polynpmial		

int add_last(struct node** header, int i, float a);					// Adds the element node to back of the linked list

void division(struct node** a_poly, struct node** b_poly);				// Performs the division operation

float find(struct node* header, int index);						// Finds the coefficient value of the node index specified 

void update(struct node** header, int index, float val);				// Finds the coefficient value of the node index specified and updates it with new value

void put_polynomial(struct node* header);						// Displays the polynomial in argument on screen

void delete_list(struct node** header);							// Deletes the list to free up space
