class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        int mid = start + (end-start)/2;
        while(start<=end){
            if(arr[mid]>arr[mid+1] && arr[mid] > arr[mid-1]){
                return mid;
            }else if(arr[mid]<arr[mid+1]){
                start = mid + 1;
            }else{
                end = mid -1;
            }
            mid = start + (end-start)/2;
        }
        return -1;
    }
};



// Love babbar solution
//         int s = 0;
//         int e = arr.size()-1;
//         int mid = s + (e-s)/2;
//         while(s<e){
//             if(arr[mid]<arr[mid+1]){
//                 s = mid + 1;
//             }else { 
//                 e = mid;
//             }
            
//             mid = s + (e-s)/2;
//         }
//         return s;