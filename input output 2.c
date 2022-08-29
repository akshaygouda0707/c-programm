	// C program to show input and output

#include <stdio.h>

int main()
{

	// Declare string variable
	// as character array
	char str[50];

	// --- String ---
	// To read a word

	// Input the Word
	printf("Enter the Word: ");
	scanf("%s\n", str);

	// Output the Word
	printf("\nEntered Word is: %s", str);

	// --- String ---
	// To read a Sentence

	// Input the Sentence
	printf("\n\nEnter the Sentence: ");
	scanf("%[^\n]\ns", str);

	// Output the String
	printf("\nEntered Sentence is: %s", str);

	return 0;
}
