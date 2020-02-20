//C programs MUST open a file before accessing it 

//Can use the fOpen function to return a pointer to required file 
//If file CANNOT be opened, NULL value gets returned 

#include <stdio.h>

int main()
{
    if((output_file = fopen("output_file", "w")) == NULL) 
    {
        fprintf(stderr, "Cannot Open %s\n", "output_file");
    }
}

//"r" = Open file for READING PRIVILEGES
//"w" = Open file for WRITING PRIVILEGES 
//"a" = Open file for APPENDING