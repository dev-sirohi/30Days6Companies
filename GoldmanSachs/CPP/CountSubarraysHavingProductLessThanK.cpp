// I don't fully understand how this works, but if you dry run this code, you'll see that it perfectly counts the correct subarrays. I need someone to explain this to me (myself) via diagrams (on my iPad ;) ). Also, I made silly mistakes with the less-than-equals-to signs and keeping the variables as int. Try not to repeat such mistakes.

class Solution{
  public:
    long long countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long finalCount = 0;
        long long prod = 1;
        long long left = 0;
        
        for (long long right = 0; right < n; right++) {
            prod *= a[right];
            
            while (left <= right && prod >= k) {
                prod /= a[left++];
            }
            
            finalCount += right - left + 1;
        }
        
        return finalCount;
    }
};
