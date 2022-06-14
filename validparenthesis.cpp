#include<iostream>
#include<string> 

bool checkValidString(std::string s) {
    int openCtr = 0;
    int closeCtr = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                openCtr++;
            }
            else if(s[i] == ')'){
                closeCtr++;
            }
            else{
                if(s[i] == '*' && openCtr > closeCtr){
                    openCtr--;
                }
                if(s[i] == '*' && openCtr < closeCtr){
                    closeCtr--;
                }
            }
        }
        if(openCtr == closeCtr){
            return true;
        }
        else{
            return false;
        }
}

int main(){
        std::string testcase = "(*)";
        std::string output = checkValidString(testcase)?"True":"False";
        std::cout<<output;
        return 0;
    }