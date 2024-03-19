#include <stdio.h>
int main(void){
    char my_email[]="bo.zhang-17@student.manchester.ac.uk";
    int n=0;
	printf("Enter an integer:");
	scanf("%d", &n);
	
	
	// Your code below here
    if(my_email[n]=='a')
	{printf("Vowel"); }// place as needed in the code. You can use more than once.
	else if(my_email[n]=='e')
	{printf("Vowel"); }
    else if(my_email[n]=='i')
	{printf("Vowel"); }
    else if(my_email[n]=='o')
	{printf("Vowel"); }
    else if(my_email[n]=='u')
	{printf("Vowel"); }
    else{printf("Not vowel"); }
	// Do not edit below here
	return 0;
}