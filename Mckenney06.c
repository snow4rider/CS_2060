//Matthew Mckenney
//CS2060.002
//Assignment 6
//Due: Dec 4 2018
//Synopsis: take provided code and maninpulate it

//comments from original code
//File IO
//Thanks to Stepen Watson for this compact code
//NOTE: I have declared variables in the code that uses them.
//I do not consider this good practice and will take off if
//you do this.  I did it to help break the code down for 
//learning purposes.

#include <stdlib.h>   //malloc()
#include <stdio.h>

#define MAX 1024		//limit on string size

FILE * openInputFile(FILE * fp);
void openOutputFile(FILE ** fp);

int main()
{
	FILE * inFile = NULL;		//declare input file pointer
	FILE * myOutput = NULL;		//declare output file pointer
	char * myString = NULL;		//Create the string
	
    //Open the intput file   
    //Open the output file
    inFile = openInputFile(inFile);
    openOutputFile(&myOutput);
	
	
    myString=(char *)malloc(sizeof(char)*MAX);
    
    //get first line of inFile and store in myString
    //fgets( ) is finished when it encounters
    // 1st occurance of '\n', or MAX-1 chars read, or EOF
    //(EOF - end of file)
     fgets(myString, MAX, inFile);
   
    while(myString != NULL)		//spot the memory leak
    {
        printf("%s",myString);
        fprintf(myOutput,"%s",myString);			//print to file
        myString = fgets(myString, MAX, inFile);	//read ine for file
    }
    
    //read in a string with spaces
    char name[50] = "James kirk";
	
	
    //these next 2 lines of code are here to take care of a leftover 
    //char in the buffer from the last scanf(). It would not be
    //needed, if we had not asked for the filenames in the functions
    // (because there would) be nothing in the buffer.
    char temp = '\0';			
    scanf("%c", &temp);
    printf("\nInput name > ");
    fgets(name, 50, stdin);
    printf("%s", name);
    fprintf(myOutput,"\n%s", name);
    
    //Close files
    fclose(inFile);
    fclose(myOutput);
    
    return 0;
}


FILE * openInputFile(FILE * fp)
{//open file for read, the file pointer is passed in

    char name[25];
	
    printf("\nInput file name to open for read > ");
    scanf("%s", name);
	
    if ((fp=fopen(name, "r")) == NULL)
    {
        printf("Error. Can't open ");
        printf(name);
        printf("!\n");
    }
    return fp;
}


// passes file pointer by value
void openOutputFile(FILE ** fp){


    char name[25];
	
    printf("\nInput file name to open for write  > ");
    scanf("%s", name);
	
    if ((*fp=fopen(name, "w")) == NULL)  //notice fp
    {//"w" will destroy the file, if it already exists.  Use "a" to append to end
        printf("Error. Can't open ");
        printf(name);
        printf("!\n");
    }
}
