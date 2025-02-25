


int memory_addressing(){
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person?)
    // memory address = the address of where a memory block is located (house address)
 
    //how many bytes do the different data types use? char, int, long, double, short, etc..
    //what happens if you put a short into an array? 
 
    char a = 'X';
    int b;
    short c = 'Y';
    long d = 'Z';
    double e;
 
    char arrayOfChars[1];
    char arrayOfInts[1];
    char arrayOfShorts[1];
    char arrayOfLongs[1];
    char arrayOfDoubles[1];
    
     
    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));
 
     printf("%p\n", &a);
     printf("%p\n", &b);
     printf("%p\n", &c);
 
 
     return 0;
 }
 
 int pointers_practice() {
     
     
     return 0;
 }

 int main(){

    memory_addressing();

    pointers_practice();


    return 0;
 }