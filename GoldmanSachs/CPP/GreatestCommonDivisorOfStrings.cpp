// That first line is such a party trick kind of logic. Whatever though, I shall try and remember it for the rest of my time alive.
// The rest is actually pretty easy to understand. Since B will always be a direct divisor of A or made up of the direct divisor of A, we just need to find the longest string that can divide both and we will get it since the first check was true.

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) return "";
        return str1.substr(0, hcf(str1.length(), str2.length()));
    }

    int hcf(int a, int b) {
        int smaller = min(a, b);
        for (int i = smaller; i >= 0; i--) {
            if (a % i == 0 && b % i == 0) return i;
        }

        return 1;
    }
};
