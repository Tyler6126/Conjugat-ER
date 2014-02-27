#include <iostream>
#include <string>
using namespace std;

int main()
{
	while(true)
    {
    
    	/*
    	First 6 strings and string[] are initiated, and the string[] are given values. The string[] stores the French 			pronouns and word endings used in conjugating (First person singular, First person plural, etc.)
    	*/
    
        string word;
        string wordRoot;
        string wordSuffix;

        string wordPronouns[] = {"Je ", "Tu ", "Il, Elle, On ", "Nous ", "Vous ", "Ils, Elles, Ons "};
        string wordEndings_ER[] = {"e", "es", "e", "ons", "ez", "ent"};
        string wordEndings_RE[] = {"s", "s", " ", "ons", "ez", "ent"};

        cout << "Enter a word to conjugate: ";
        getline(cin, word);

		/*
		Takes the variable 'word' from the 'getline()' function and breaks it into two parts - the word root, stored by 		the variable 'wordRoot', and it's suffix, held by 'wordSuffix'
		*/
		
        wordRoot = word.substr(0, word.length() - 2);
        wordSuffix = word.substr(word.length() - 2);

        if(wordSuffix == "er")
        {
            for(int x = 0; x < 6; x++)
            {
                cout << wordPronouns[x] + wordRoot + wordEndings_ER[x] << endl;
            }
        }
        else if (wordSuffix == "re")
        {
            for(int x = 0; x < 6; x++)
            {
                cout << wordPronouns[x] + wordRoot + wordEndings_RE[x] << endl;
            }
        }
        else if (wordSuffix == "ir")
        {
            cout << "-IR verbs aren't supported yet! Sorry!" << endl;
        }
        else
        {
            cout << "Please enter a valid word!" << endl;
        }
        cout << endl;
    }
}
