//Need to use a FILE pointer, which keeps track of file being access
FILE *fp;

FILE *fopen(const char *filename, const char *mode);

//fopen modes 
r - open for reading 
w - open for writing (file need not exist)