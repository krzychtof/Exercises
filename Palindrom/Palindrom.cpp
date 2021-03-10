#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

bool isPalindrome(const std::string & text)
{
    return std::equal(text.cbegin(), text.cbegin() + text.size()/2, text.crbegin());
}

int main()
{
    std::vector<std::string> palindroms 
    {
        "kajak", 
        "abacada", 
        "ala", 
        "neveroddoreven", 
        "mikakika"
    };

    for (auto elem : palindroms) 
    {    
        if(isPalindrome(elem)) 
        {
            std::cout << "Is a palindrome\n";
        }
        else
        {
            std::cout << "Isn`t a palindrome\n";
        }
    }
}