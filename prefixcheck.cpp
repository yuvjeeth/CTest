 #include<iostream>
 #include<string>
 #include<vector>
 
  std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string answer = "";
        int minLength = strs[0].size();
        for(int i = 0; i < strs.size(); i++){
            if(strs[i].size() < minLength){
                minLength = strs[i].size();
            }
        }
        
        for(int i = 0; i < minLength; i++){
            char commonChar = strs[0][i];
            for(int j = 0; j < strs.size(); j++){
                char tempChar = strs[j][i];
               if(strs[j][i] != commonChar){
                    return answer;           
               }
            }
            answer += commonChar;
        }
        return answer;
  }
    

    int main(){
        std::vector<std::string> testcase = {"flower","flow","flight"};
        std::string output = longestCommonPrefix(testcase);
        std::cout<<output;
        return 0;
    }
