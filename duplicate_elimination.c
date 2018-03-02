#include <stdio.h>

int read[20] = {};
int inputCounter = 0;
int elementsInArray = 0;

//function declaration 
void checkInputs(int p);

//main function 
void main()		{
	int input;
	
	while(inputCounter < 20)	{
		printf("Enter a number between 10 & 100: ");
		scanf("%d", &input);
		
		checkInputs(input); // check if input is already added to array 
		inputCounter++; // increment the number of inputs so far
	}
	
	//prints the results 
	int i;
	for(i = 0; i < sizeof(read); i++)	{
		if(read[i] == 0)	{
			i++;
		}
		else if(i == 20)	{
			printf("%d ", read[i]);
		}
		else	{
			printf("%d ,", read[i]);
		}
	
	}
	printf("\n");
}//end main 


//checks if input p is already in the array 
void checkInputs(int p)	{
	int found = 0;
	int i;
	
	//value p is already in the array foune == 1
	for(i = 0; i < sizeof(read); i++)	{
		if(read[i] == p)	
 			found = 1;
	}

	//value p isnt in array so add it to the array
	if(found == 0)	{
		read[elementsInArray] = p;
		elementsInArray++;
	}
}




