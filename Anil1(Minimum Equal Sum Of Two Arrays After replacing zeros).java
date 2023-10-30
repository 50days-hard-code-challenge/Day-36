class Solution {
    public long minSum(int[] nums1, int[] nums2) {
        long sum1 = 0; 
        long sum2 = 0;
        int countzero1 = 0;
        int countzero2 = 0;

        for(int i = 0; i<nums1.length; i++){
            if(nums1[i] == 0){
                countzero1++;
            }
            else{
                sum1 = sum1 + nums1[i];
            }
        }

        for(int i = 0; i<nums2.length; i++){
            if(nums2[i] == 0){
                countzero2++;
            }
            else{
                sum2 = sum2 + nums2[i];
            }
        }
        if((countzero1 == 0) && (countzero2 == 0) && (sum1!=sum2)){
            return -1;
        }
        else if(countzero1 == 0){
            if(sum2+countzero2 > sum1){
                return -1;
            }else{
                return sum1;
            }
        }
        else if(countzero2 == 0){
            if(sum1+countzero1>sum2){
                return -1;
            }else{
                // sum2 is max just return 
                return sum2;
            }
        }
        return Math.max(sum1+countzero1, sum2+countzero2);
    }
}
