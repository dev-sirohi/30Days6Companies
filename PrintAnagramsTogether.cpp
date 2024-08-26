// Decided to go with a very basic solution
// I take a hashmap that contains the sorted strings (could have also used a character array but it might not have been as optimized).
// Now, I sort each string as I traverse the array only once and put them in their respective groups.
// Then I iterate through the hashmap and pull out all the groups, sort them, and throw them out.

// MISTAKE: I sorted the final_vec in the end but it was not necessary

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> final_vec;
        
        for (int i = 0; i < string_list.size(); i++) {
            string sorted_string = string_list[i];
            sort(sorted_string.begin(), sorted_string.end());
            map[sorted_string].push_back(string_list[i]);
        }
        
        for (auto& pair : map) {
            final_vec.push_back(pair.second);
        }        
        return final_vec;
    }
};
