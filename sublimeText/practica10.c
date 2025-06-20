/*
    Rodrigo Casio García
    Ingeniería en sistemas y tecnologías de la información.
    3er Cuatrimestre
    Prof. Irving Edgar Mendoza Ayala
    Diseño y programación de estructura de software
    Universidad del Valle de Atemajac 
    Práctica 10 - String.h.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//funciones prototipos
void strcpyFun1(void);
void strncpyFun2(void);
void strcatFun3(void);
void strncatFun4(void);
void strcmpFun5(void);
void strcollFun6(void);
void cadenaFun7(void);
void strxfrmFun8(void);
void strcspnFun9(void);
void strrchrFun10(void);
void strspnFun11(void);
void strstrFun12(void);
void strtokFun13(void);
void strlenFun14(void);

//
int respFun;

int main() {
    
        printf("Escoge que función quieres realizar\n");
    do{
        printf("1. strcpy\n");
        printf("2. strncpy\n");
        printf("3. strcat\n");
        printf("4. strncat\n");
        printf("5. strcmp\n");
        printf("6. strcoll\n");
        printf("7. cadena\n");
        printf("8. strxfrm\n");
        printf("9. strcspn\n");
        printf("10. strrchr\n");
        printf("11. strspn\n");
        printf("12. strstr\n");
        printf("13. strtok\n");
        printf("14. strlen\n");
        scanf("%d", &respFun);
        
        if(respFun > 14 || respFun <= 0){
            printf("Escoge una opción de (1-14)\n");
        }
    }
    while(respFun > 14);
    
    switch(respFun){
        case 1:
            strcpyFun1();
        break;

        case 2:
            strncpyFun2();
        break;
        
        case 3:
            strcatFun3();
        break;
        
        case 4:
            strncatFun4();
        break;
        
        case 5:
            strcmpFun5();
        break;
        
        case 6:
            strcollFun6();
        break;
        
        case 7:
            cadenaFun7();
        break;
        
        case 8:
            strxfrmFun8();
        break;
        
        case 9:
            strcspnFun9();
        break;
        
        case 10:
            strrchrFun10();
        break;
        
        case 11:
            strspnFun11();
        break;
        
        case 12:
            strstrFun12();
        break;
        
        case 13:
            strtokFun13();
        break;
        
        case 14:
            strlenFun14();
        break;
        
    }

    return 0;
}

//definiciones de funciones: 
void strcpyFun1(void){
    char str1[]="Sample string";
    char str2[40];
    char str3[40];
    strcpy (str2,str1);
    strcpy (str3,"copy successful");
    printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
}
void strncpyFun2(void){
      char str1[]= "To be or not to be";
      char str2[40];
      char str3[40];
    
      /* copy to sized buffer (overflow safe): */
      strncpy ( str2, str1, sizeof(str2) );
      /* partial copy (only 5 chars): */
      strncpy ( str3, str2, 5 );
      str3[5] = '\0';   /* null character manually added */
    
      puts (str1);
      puts (str2);
      puts (str3);
}

void strcatFun3(void){
    char str[80];
  strcpy (str,"these ");
  strcat (str,"strings ");
  strcat (str,"are ");
  strcat (str,"concatenated.");
  puts (str);
}

void strncatFun4(void){
    char str1[20];
  char str2[20];
  strcpy (str1,"To be ");
  strcpy (str2,"or not to be");
  strncat (str1, str2, 6);
  puts (str1);
}

void strcmpFun5(void){
    char key[] = "apple";
  char buffer[80];
  do {
     printf ("Guess my favorite fruit? ");
     fflush (stdout);
     scanf ("%79s",buffer);
  } while (strcmp (key,buffer) != 0);
  puts ("Correct answer!");
}

void strcollFun6(void){
    char str1[13];
    char str2[13];
    int ret;
 
    strcpy(str1, "geeksforgeeks");
    strcpy(str2, "GEEKSFORGEEKS");
 
    ret = strcoll(str1, str2);
 
    if (ret > 0) {
        printf("str1 is greater than str2");
    } else if (ret < 0) {
        printf("str1 is lesser than str2");
    } else {
        printf("str1 is equal to str2");
    }
}

void cadenaFun7(void){
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
}

void strxfrmFun8(void){
    char src[20], dest[200];
    int len;
    strcpy(src, " hello geeksforgeeks");
    len = strxfrm(dest, src, 20);
    printf("Length of string %s is: %d", dest, len);
}

void strcspnFun9(void){
    char str[] = "fcba73";
    char keys[] = "1234567890";
    int i;
    i = strcspn (str,keys);
    printf ("The first number in str is at position %d.\n",i+1);
}
void strrchrFun10(void){
    char str[] = "This is a sample string";
    char * pch;
    pch=strrchr(str,'s');
    printf ("Last occurence of 's' found at %d \n",pch-str+1);
}

void strspnFun11(void){
    int i;
    char strtext[] = "129th";
    char cset[] = "1234567890";

    i = strspn (strtext,cset);
    printf ("The initial number has %d digits.\n",i);
}

void strstrFun12(void){
    char str[] ="This is a simple string";
    char * pch;
    pch = strstr (str,"simple");
    if (pch != NULL)
    strncpy (pch,"sample",6);
    puts (str);
}

void strtokFun13(void){
    char str[] ="- This, a sample string.";
    char * pch;
    printf ("Splitting string \"%s\" into tokens:\n",str);
    pch = strtok (str," ,.-");
    while (pch != NULL){
        printf ("%s\n",pch);
        pch = strtok (NULL, " ,.-");
    }
}
    
void strlenFun14(void){
    char three[] = "This is an example of using the strcpy and strlen, copying the string into an empty string, the empty string must have enough space.";
    int len = strlen(three)+ 1;  // 2. checkpoint.
    char four[len];
    strcpy(four, three);
    printf("%s\n", three);
}