#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    long double minimiseMaxDistance(vector<int>& arr, int k) {
        long double low = 0;
        long double high = arr.back() - arr.front();

        for(int i = 0; i < 100; i++) {
            long double mid = low + (high - low) / 2;

            if(fx(arr, k, mid)) {
                high = mid;
            }
            else {
                low = mid;
            }
        }

        return high;
    }

    bool fx(vector<int>& arr, int k, long double mid) {
        int stations = 0;

        for(int i = 0; i < arr.size() - 1; i++) {
            long double gap = arr[i + 1] - arr[i];

            stations += ceil(gap / mid) - 1;

            if(stations > k)
                return false;
        }

        return true;
    }
};
