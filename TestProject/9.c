//#include <stdio.h>
//
///*
// * Name : <Insert name>
// * Program to experiment with character arrays
// */
//
//#define MaxWord 20
//
//int main()
//{
//    int len = 0;
//    char c;
//    char str[MaxWord + 1];
//    int sum = 0;
//    int numberStr = 0;
//    int maxlen = 0;
//    puts("Enter text. Include a dot ('.') to end a sentence to exit:");
//    do
//    {
//        c = getchar();
//
//        if (c != ' ' && c != '.' && len < MaxWord)
//        {
//            /* This is a character of a word */
//            str[len] = c;
//            len++;
//
//        }
//
//        else
//        {
//            /* The word is done */
//           /* The word is done */
//            str[len] = 0;
//            printf("%d\n", len);
//            //printf("%s\n", str);
//            if (maxlen < len)
//            {
//                maxlen = len; 
//            }
//            
//
//            numberStr++;
//            //printf("%d\n", numberStr);
//            sum += len;
//            //printf("%d\n", sum);
//
//            len = 0;
//
//        }
//    } while (c != '.');
//    double average = 0;
//    average = sum / (numberStr);
//    printf("average%.0lf\n", average);
//    printf("maxlen: %d\n", maxlen);
//
//}