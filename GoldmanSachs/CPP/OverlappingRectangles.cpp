// Simply check on each face of the alternating points are colliding or not

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // left face
        if (R2[0] < L1[0]) return 0;
        // right face
        if (L2[0] > R1[0]) return 0;
        // top face
        if (L1[1] < R2[1]) return 0;
        // bottom face
        if (R1[1] > L2[1]) return 0;
        
        return 1;
    }
};
