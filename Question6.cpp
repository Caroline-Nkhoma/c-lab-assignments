#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

ifstream infile("file.txt");
 string fileData((istreambuf_iterator<char>(infile)), istreambuf_iterator<char>());

int vowelCount = 0;
    for (char c : fileData)
    {
         switch (c)
        {
         case 'a':
         case 'e':
         case 'i':
         case 'o':
         case 'u':
         case 'A':
         case 'E':
         case 'I':
         case 'O':
         case 'U':
         vowelCount++;
             break;
        }
    }  
 int wordCount = 0;
    bool inWord = false;
    for (char c : fileData)
    {
        if (isspace(c))
        {
         inWord = false;
        
        }
        else if (!inWord)
        {
         inWord = true;
             wordCount++;
        }

    }
string reversedText;
 for (int i = fileData.length() - 1; i >= 0; i--)
    {
     reversedText += fileData[i];
    }

  string capitalizedText;
     bool capitalizeNext = true;
    for (char c : fileData)
    {
         if (isspace(c))
        {
     capitalizeNext = true;
    
        }
        else if (capitalizeNext)
        {
         capitalizedText += toupper(c);
         capitalizeNext = false;
        
        }
        else
        {
capitalizedText += c;
    
        }
    }
cout << "Number of vowels: " << vowelCount << endl;
 cout << "Number of words: " << wordCount << endl;
 cout << "Reversed text: " << reversedText << endl;
cout << "Capitalized text: " << capitalizedText << endl;

return 0;
}