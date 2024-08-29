// reduce didn't work because then I would have had to take care of the increasing substring of the counts.

class Solution {
    encode(s) {
        var finalString = "";
        var currChar = s.charAt(0);
        var currCount = 1;
        
        [...s].forEach((v, i, arr) => {
            if (i > 0) {
                if (v == currChar) {
                   currCount++;
                } else {
                   finalString += currChar + currCount;
                   currChar = v;
                   currCount = 1;
                }
            }
        });
        
        return finalString + currChar + currCount;
    }
}
