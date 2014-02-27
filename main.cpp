#include <iostream>
#include <string>
using namespace std;

int main()
{
    while(true)
    {
    	
    	/*
    	Initiate all the strings and string[]s, and assign a value to the static arrays. This prevents a previous word from being used multiple times in the same code. Arrays store static variables such as 'Pronouns' and 'Endings', allowing the use of more compace and efficient code.
    	*/
    	
        string word;
        string wordRoot;
        string wordSuffix;

        string wordPronouns[] = {"Je ", "Tu ", "Il, Elle, On ", "Nous ", "Vous ", "Ils, Elles, Ons "};
        string wordEndings_ER[] = {"e", "es", "e", "ons", "ez", "ent"};
        string wordEndings_RE[] = {"s", "s", " ", "ons", "ez", "ent"};
        string wordEndings_IR[] = {"is", "is", "it", "issons", "issez", "issent"};

		/*
		Gets input from the user, and stores it in the variable 'word'. The function 'getline()' is used rather than 'cin' for my prefered input method. Then, it takes the variable 'word' and splits it into 'wordRoot' and 'wordSuffix',  so the program can determine how to conjugate the word.
		*/
		
        cout << "Enter a word to conjugate: ";
        getline(cin, word);

        wordRoot = word.substr(0, word.length() - 2);
        wordSuffix = word.substr(word.length() - 2);

		/*
		Checks to see what main verb type the word is, by comparing the 'wordSuffix' to the type. The three types are 'er', 'ir', and 're', and are all supported. For future use, this section will change over-time, especially when the UI update comes in a month.
		
		Then, it sets an integer, 'x', to the values 0-6, letting it read the length of all the arrays, rather than having multiple loops. It than prints 'wordPronouns' to the value of 'x', the 'wordRoot', and 'wordEndings_TYPE' to the value of 'x'
		*/
		
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
            for(int x = 0; x < 6; x++)
            {
                cout << wordPronouns[x] + wordRoot + wordEndings_IR[x] << endl;
            }
        }
        else
        {
            cout << "Please enter a valid word!" << endl;
        }
        cout << endl;
    }
}
