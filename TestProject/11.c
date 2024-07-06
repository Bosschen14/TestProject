//#include <stdio.h>
//#include <string.h>
//
///*
// * Name : <Insert name>
// * Program to experiment with files
// */
//
//FILE* inFile;
//FILE* outFile;
//void Reverse(char str[]);
//int main()
//{
//    char line[120];
//    errno_t err;
//
//    // Open the input file
//    err = fopen_s(&inFile, "F:/code/TestPorject/TestProject/TestProject/test.txt", "r");
//    if (err != 0 || inFile == NULL)
//    {
//        printf("Unable to open file %s\n", "test.txt");
//        return 1;
//    }
//
//    // Open the output file
//    err = fopen_s(&outFile, "F:/code/TestPorject/TestProject/TestProject/testout.txt", "r+");
//    if (err != 0 || outFile == NULL)
//    {
//        printf("Unable to open file %s\n", "testout.txt");
//        return 1;
//    }
//
//    // While we are not at the end of the file
//    while (fgets(line, sizeof(line), inFile) != NULL)
//    {
//        // Remove the newline at the end of the line
//        if (line[strlen(line) - 1] == '\n')
//            line[strlen(line) - 1] = '\0';
//
//        //printf("%s\n", line);
//        Reverse(line);
//        //printf("%s\n", line);
//        fprintf(outFile, "%s\n", line);
//    }
//    fseek(outFile, 0, SEEK_SET);
//
//    while (fgets(line, sizeof(line), outFile) != NULL)
//    {
//
//        printf("%s", line);
//
//    }
//
//
//    fclose(inFile);
//    fclose(outFile);
//
//    return 0;
//}
//void Reverse(char str[])
//{
//    int front = 0;
//    int back = strlen(str) - 1;
//    char t;             /* A temporary place to put a character */
//
//    while (front < back)
//    {
//        t = str[front];
//        str[front] = str[back];
//        str[back] = t;
//        front++;
//        back--;
//    }
//}