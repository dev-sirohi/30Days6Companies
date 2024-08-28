// I do not yet understand why I needed to sort the final_list here and not in cpp but I will find out.
// I understand. It has nothing to do with my code, and everything to do with the crappy build code the GFG developers/contributors have injected into their website that work differently for each language and creates complications for the innocent user.

class Solution {
    Anagrams(n, string_list){
        let final_list = [];
        let dict = {};
        
        string_list.forEach((v, i, arr) => {
            let key = v.split("").sort().join("");
            if (!dict[key]) {
                dict[key] = [];
            }
            dict[key].push(v);
        });
        
        for (const prop in dict) {
            final_list.push(dict[prop]);
        }
        
        return final_list.sort();
    }
}
