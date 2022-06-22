#include<iostream>
#include<string> 

bool isValid(std::string s) {
    std::string str1 = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            str1 += s[i];
        }
        else if (s[i] == ')'){
            if(str1.back() == '('){
                str1.pop_back();
            }
            else{
                return false;
            }
        }
        else if (s[i] == '}'){
            if(str1.back() == '{'){
                str1.pop_back();
            }
            else{
                return false;
            }
        }
        else if (s[i] == ']'){
            if(str1.back() == '['){
                str1.pop_back();
            }
            else{
                return false;
            }
        }
        
    }
    if(str1 == ""){
            return true;
        
        } else{
            return false;
        }
}
 

int main() {
    std::string testcase = "([)]";
    std::string output = isValid(testcase)?"True":"False";
    std::cout<<output;
    return 0;
}
        