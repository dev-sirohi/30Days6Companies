// This was pretty basic but you have to understand how the cycle is working. Seem you have to -1 the offset because what if K is 1? In that case you'll have to add 1 to ans which will then return the wrong ans because the offset in that case will be 0.

class Solution {
  public:
    int findPosition(int N , int M , int K) {
        int offset = K % N - 1;
        if (offset == -1) offset = N - 1;
        int ans = M % N;
        if (ans == 0) ans = N;
        ans = (ans + offset) % N;
        if (ans == 0) ans = N;
        return ans;
    }
};
