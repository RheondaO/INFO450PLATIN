//main.cpp
//  PigLatin

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdio>
#include <string.h>

using namespace std;

int translateToPigLatin(char word[50]);

int main()
{
    char play = 'y';
    
    while (play == 'y' || play == 'Y')
    {
        char word[50];
        
        cout << endl;
        cout << "Enter your word: ";
        cin >> word;
        
        translateToPigLatin(word);
        
        cout << endl;
        cout << "Would You Like To Enter Another Word? (Y or N) ";
        cin.get(word, 49);
        cin.clear();
        
        break;
    }
    return 0;
}

int translateToPigLatin(char word[50])
{
    int i;
    
    if (strlen(word) > 50)
    {
        cout << "Error: Too Many Characters Entered" << endl;
        
        return -1;
    } else
    {
        for (i=0; word[i]; i++)
        {
            if  (word[i] == '1' || word[i] == '2' || word[i] == '3' || word[i] == '4' || word[i] == '5' ||
                 word[i] == '6' ||word[i] == '7' || word[i] == '8' || word[i] == '9' || word[i] == '0')
            {
                cout << "Error: Numerical Value Entered" << endl;
                
                return -1;
            }
            else if (strlen(word) < 3)
            {
                cout << word;
                cout << endl;
                
                return 0;
            }
            else if (!strcmp("the", word)  || !strcmp("and", word)  ||!strcmp("but", word) ||
                     !strcmp("for", word)  || !strcmp("nor", word)  || !strcmp("yet", word))
            {
                cout << word;
                cout << endl;
                
                return 0;
            }
        }
        char vowel[] = "aeiou";
        char cons[] = "bcdfghjklmnpqrstvwxyz";
        char * cch;
        char * vch;
        
        //cout << word << "ay" << endl;
        
        cch = strpbrk (word, cons);
        vch = strpbrk (word, vowel);
        
        if (word[0] != 'a' || word[0] != 'e' || word[0] != 'i' || word[0] != 'o' || word[0] != 'u')
        {
            while (cch != NULL)
            {
                cch = strpbrk (cch+1,cons);
                cout << word << "ay" << endl;
                
                return 0;
            }
        }else
        {
            
            while(vch != NULL)
            {
                vch = strpbrk (vch+1, vowel);
                string x = word;
                string newWord;
                
                
                cout << newWord << "ay" << endl;
                
                return 0;
            }
        }
        return 0;
    }
}

void move(int spot, int place, char word[])
{
    int s = spot, p = place;
    
    for (int k = 0; k < place; k++)
    {
        word[s+p] = word[s];
        p++;
        s++;
    }
}

/*if (word[0] == strcspn(word, cons))
 {
 cout << word << "ay" << endl;
 }
 else
 {
 cout << word << "pi" << endl;
 }
 
 cout << c << endl;
 }
 return 0;
 }
 
 
 else if (!strcmp(" ", word)
 {
 cout << "Error: No Word Entered" << endl;
 return -1; } */

