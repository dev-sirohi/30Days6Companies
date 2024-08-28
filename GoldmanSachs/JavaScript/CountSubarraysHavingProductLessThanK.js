class Solution {
    //Function to count number of subarrays with product less than k.
    countSubArrayProductLessThanK(a, n, k) {
        var left = 0;
        var finalCount = 0;
        var prod = 1;
        
        for (let right = 0; right < n; right++) {
            prod *= a[right];
            
            while (left <= right && prod >= k) {
                prod /= a[left++];
            }
            
            finalCount += right - left + 1;
        }
        
        return finalCount;
    }
}
