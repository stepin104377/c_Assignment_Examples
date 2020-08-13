 #include "substring.h"
 #include "string.h"
  
 char substring(char string[100])
 {
   char splitintoSubStrings[10][10]; //can store 10 words of 10 characters
     int i,j,cnt;
     j=0; cnt=0;
     for(i=0;i<=(strlen(string));i++)
     {
         // if delimeter '_' is found, assign NULL into splitStrings[cnt]
         if(string[i]=='_'||string[i]=='\0')
         {
             splitintoSubStrings[cnt][j]='\0';
             cnt++;  //for next word
             j=0;    //for next word, init index to 0
         }
         else
         {
             splitintoSubStrings[cnt][j]=string[i];
             j++;
         }
     }
     printf("\nOriginal String is: %s",string);
     printf("\nStrings (words) after split by '_''':\n");
     for(i=0;i < cnt;i++)
         printf("%s\n",splitintoSubStrings[i]);//prints the substrings
 }

