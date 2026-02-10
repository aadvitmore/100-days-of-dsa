/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int freq[1001] = {0};
    int* res = (int*)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    int k = 0;
    
    for(int i = 0; i < nums1Size; i++) {
        freq[nums1[i]]++;
    }
    
    for(int i = 0; i < nums2Size; i++) {
        if(freq[nums2[i]] > 0) {
            res[k] = nums2[i];
            k++;
            freq[nums2[i]]--;
        }
    }
    
    *returnSize = k;
    return res;
}
