public class Solution {
    public static boolean isValidBST(int []order){
        // Write your code here.
        int n = order.length-1;
        for(int i = 0;i<n; i++){
            if(order[i]>=order[i+1]){
                return false;
            }
        }
        return true;
    }
  
}
