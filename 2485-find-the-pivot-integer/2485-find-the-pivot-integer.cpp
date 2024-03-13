// class Solution {
// public:
//     int pivotInteger(int n) {
//         if(n==1)    return 1;
//         int tot = (n*(n+1))/2;
//         int ans = 0;
//         int half = tot/2;
//         int sm = 0;
//         int i = 1;
        
//         while(sm <= half){
//             sm += i;
//             i++;
//         }
//         cout<<sm<<" "<<i<<" "<<half<<" "<<sm - (i/2)<<endl;
//         if(i%2 && (sm - (i/2))==half && half*2==tot)    return i-1;
        
//         return -1;
//     }
// };
class Solution {
public:
    int pivotInteger(int n) {
        int leftValue = 1;
        int rightValue = n;
        int sumLeft = leftValue;
        int sumRight = rightValue;

        if (n == 1) return n;
        
        // Iterate until the pointers meet
        while (leftValue < rightValue) {
            // Adjust sums and pointers based on comparison
            if (sumLeft < sumRight) {
                sumLeft += ++leftValue;
            } else {
                sumRight += --rightValue;
            }

            // Check for pivot condition
            if (sumLeft == sumRight && leftValue + 1 == rightValue - 1) {
                return leftValue + 1;
            }
        }

        return -1; // Return -1 if no pivot is found
    }
};