//Can close files using fclose 
    //Used to disconnect a file pointer from the file 
    //Usually done so pointer can access a different file 

//Systems have limits on how many files can be opened at once
//So its a good idea to close a file when finished with use 

//Again, explicitly define types as much as possible 
int main() 
{ 
    fclose(output_file);
}

//If files are still open when program exits, they will be closed automatically
//It is GOOD PRACTICE to close files properly to conserve & free resources for other operations or other operations 

