// This code is working fine for minor testcases. I have not been able to check with major testcases because the fucking GFG site was developed by underdeveloped coders with learning disabilities.

class Solution {
  public:
    string encode(string s) {
        string finalStr = "";
        if (s.empty()) {
            return "";
        }
        char currChar = s[0];
        int count = 1;
        
        for (int i = 1; i < s.length(); i++) {
            if (s[i] != currChar) {
                finalStr.push_back(currChar);
                finalStr += to_string(count);
                currChar = s[i];
                count = 1;
                continue;
            }
            
            count++;
        }
        
        finalStr.push_back(currChar);
        finalStr += to_string(count);
        
        return finalStr;
    }
};
