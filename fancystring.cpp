#include<iostream>
#include<string> 
 
 std::string makeFancyString(std::string s) {
        std::string answer = "";
        int ctr = 0;
        char testChar = s[0];
        for(int i = 0; i < s.size(); i++){
            if(s[i] != testChar){
                testChar = s[i];
                answer += s[i];
                ctr = 1;
            }
            else{
                if(ctr < 2){
                    answer += s[i];
                    ctr++;
                }
                else{
                    continue;
                }
            }
        }
        return answer;
    }

    
    int main(){
        std::string testcase = "aaabaaaa";
        std::string output = makeFancyString(testcase);
        std::cout<<output;
        return 0;
    }
