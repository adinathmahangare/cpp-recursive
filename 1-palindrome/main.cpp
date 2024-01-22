#include <iostream>
#include <cctype>
using namespace std;

/* Simple code for palindrome check
bool isPalindrome(string &str, int left, int right){
    if (left>=right){
        return true;
    }
    
    if (str[left] != str[right]){
        return false;
    }
    
    return isPalindrome(str, left + 1, right -1);   //here we call the function recursively.
}
*/

bool isPalindrome(string &str, int left, int right){
    if (left>=right){
        return true;
    }
    
    while(left<right && !isalnum(str[left])){           //checking if left is empty space or not
        left++;                                         //isalnum checks wheather char is alphanumeric or not
    }
    
    while(left<right && !isalnum(str[right])){
        right--;
    }
    
    if (tolower(str[left]) != tolower(str[right])){         //condition for making code not case sensitive
        return false;
    }
    
    return isPalindrome(str, left + 1, right -1);   //here we call the function recursively.
}


int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin, str);
    
    int left = 0;
    int right = str.length() - 1;
    
    if (isPalindrome(str, left, right)){
        cout<<"String is a palindrome.";
    }else{
        cout<<"String is not a plalindrome.";
    }

    return 0;
}