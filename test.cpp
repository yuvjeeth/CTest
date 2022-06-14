#include<iostream>
#include<conio.h>
#include<string>

bool isPalindrome(int x){
    int temp = x;
    int ctr = 0;
    char numstr[100] = "";
    while(temp > 0){
        numstr[ctr] = char(temp % 10);
        temp = temp / 10;
        ctr++;
    }
    temp = x;
    for(int i = 0, j = ctr-1; i < ctr/2; i++, j--){
        if(numstr[i] != numstr[j]){
            return false;
        }
    }
    return true;
}

int main(){
   if(isPalindrome(-121) == true){
       std::cout<<"Palindrome";
    return 1;
   }
   else{
       std::cout<<"Not Palindrome";
       return 0;
   }
}