class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        //create char array
        const int N = s.length(); 
        char* arr = new char[N + 1]; 
        strcpy(arr, s.c_str()); 

        sort(arr, arr+N);

        int secondLast = N - 2;
        for (int i = 0; i < N / 2; i++) {
            char temp = arr[i];
            arr[i] = arr[secondLast - i];
            arr[secondLast - i] = temp;
        }

        return arr;
    }
};