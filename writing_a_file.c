#include <stdio.h>

int read_file_from_specific_location(){
    FILE *pF = fopen("C:\\Users\\120864\\Desktop\\c_documents\\poem.txt", "r");
    char buffer[255];

    // //to print a single line, the fgets command needs 3 things - the variable name, the max value, and the reference you are reading
    // fgets(buffer, 255, pF);
    // printf("%s", buffer);

    //to print all lines in the document, use a while loop and a != null method
    while (fgets(buffer, 255, pF) != NULL)
    {
        printf("%s", buffer);
    }


    fclose(pF);


}

int create_file_in_project_directory(){
    //    FILE is a type of variable value, fopen creates a new file, w=write 
    //  if you need to append to the file, or other operations, you must change the operation method from "w" to "a" or others. 

  FILE *pF = fopen("test.txt", "w"); 

  fprintf(pF, "Spongebob Squarepants!");

  fclose(pF); //close the file, make sure not to dereference it!

    return 0;
}

int create_file_in_specific_directory(){

  // if you want to save the file to a specific location on your computer you can save it to the direct filepath.

  FILE *pF = fopen("C:\\Users\\120864\\Desktop\\c_documents\\CoolNewTextFile.txt", "w");
  fprintf(pF, "Hello I am dog plz talk to me T_T");
  fclose(pF);


    return 0;
}

int delete_file(char filename[]){
//not working rn
    remove(filename);

    if (remove(filename) == 0)
    {
        printf("file removed successfully!!");
    }
    else
    {
        printf("That file was not deleted??");
    }

    return 0; 
}



int main(){
    read_file_from_specific_location();

    //delete_file("test.txt");

    return 0;
}