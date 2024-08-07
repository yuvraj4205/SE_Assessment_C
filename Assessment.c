#include<stdio.h>
#include<string.h>
#include<ctype.h>

void reverseString(char str[])
{
    int i=0,j,len=strlen(str);
    for(j=len-1;i<j;j--)
	{
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
    }
    printf("Reversed string: %s\n",str);
}
void concatenateStrings(char str1[],char str2[])
{
    strcat(str1,str2);
    printf("Concatenated string: %s\n",str1);
}
int isPalindrome(char str[])
{
    int i,j,len=strlen(str);
    for(i=0,j=len-1;i<j;i++,j--)
	{
        if(str[i]!=str[j])
            return 0;
    }
    return 1;
}
void copyString(char str1[],char str2[])
{
    strcpy(str1,str2);
    printf("Copied string : %s\n",str1);
}
int stringLength(char str[])
{
    int len = strlen(str);
    printf("Length of the string: %d\n",len);
    return len;
}
int characterFrequency(char str[],char ch)
{
    int i,count=0;
    for(i=0;str[i]!='\0';i++)
	{
        if(str[i]==ch)
            count++;
    }
    printf("Frequency of '%c' : %d\n",ch,count);
    return count;
}
void countVowelsConsonants(char str[])
{
    int i,vowels=0,consonants=0;
    for(i=0;str[i]!='\0';i++)
	{
        char ch=tolower(str[i]);
        if(ch=='a'&&'A' || ch=='e'&&'E' || ch=='i'&&'I' || ch=='o'&&'O' || ch=='u'&&'U')
            vowels++;
        else if(isalpha(ch))
            consonants++;
    }
    printf("Vowels : %d, Consonants : %d\n",vowels,consonants);
}
void countSpacesDigits(char str[])
{
    int i,spaces=0,digits=0;
    for(i=0;str[i]!='\0';i++)
	{
        if(str[i]==' ')
		{
            spaces++;
		}
		else if(isdigit(str[i]))
		{
            digits++;
        }
    }
    printf("Spaces : %d, Digits : %d\n",spaces,digits);
}


main()
{
    char str[100],str2[100];
    int choice,continue_op=1;

    while(continue_op)
	{
        printf("\nMain Menu:\n");
        printf("\t1. Reverse a string\n");
        printf("\t2. Concatenate strings\n");
        printf("\t3. Check for palindrome\n");
        printf("\t4. Copy a string\n");
        printf("\t5. Find string length\n");
        printf("\t6. Find character frequency\n");
        printf("\t7. Count vowels and consonants\n");
        printf("\t8. Count spaces and digits\n");
        printf("\nPlease Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
		{
            case 1:
                printf("Enter a string : ");
                scanf("%s",&str);
                reverseString(str);
                break;
            case 2:
                printf("Enter first string : ");
                scanf("%s",&str);
                printf("Enter second string : ");
                scanf("%s",&str2);
                concatenateStrings(str,str2);
                break;
            case 3:
                printf("Enter a string : ");
                scanf("%s",&str);
                if(isPalindrome(str))
                    printf("The string is a palindrome.\n");
                else
                    printf("The string is not a palindrome.\n");
                break;
            case 4:
                printf("Enter a string : ");
                scanf("%s",&str2);
                copyString(str,str2);
                break;
            case 5:
                printf("Enter a string : ");
                scanf("%s",&str);
                stringLength(str);
                break;
            case 6:
                printf("Enter a string : ");
                scanf("%s",&str);
                char ch;
                printf("Enter a character : ");
                scanf(" %c",&ch);
                characterFrequency(str,ch);
                break;
            case 7:
                printf("Enter a string : ");
                scanf("%s",str);
                countVowelsConsonants(str);
                break;
            case 8:
                printf("Enter a string : ");
                scanf("%d",&str);
                gets(str);
                countSpacesDigits(str);
                break;
            default:
                printf("Invalid choice!\n");
        }
        printf("\nDo you want to continue(any number for yes, 0 for no)? - ");
        scanf("%d",&continue_op);
    }
}
