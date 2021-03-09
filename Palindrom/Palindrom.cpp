#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

bool isPalindrome(const std::string & text)
{
    return equal(text.begin(), text.begin() + text.size()/2, text.rbegin());
}

int main()
{
    std::vector<std::string> palindroms {
        "kajak", "abacada", "ala", "neveroddoreven", "mikakika"
        };

    for (auto elem : palindroms) {
        if(isPalindrome(elem)) {
            std::cout << "Is a palindrome\n";
        }else{ 
            std::cout << "Isn`t a palindrome\n";
        }
    }
}