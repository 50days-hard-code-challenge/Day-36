class Solution {
    public TreeNode sortedArrayToBST(int[] nums) {
        int n=nums.length;
        return helper(nums,0,n-1);
        
    }
    public TreeNode helper(int nums[],int start,int end)
    {
       int mid=(start+end)/2;
       TreeNode head=new TreeNode(nums[mid]);
       if(start>end)
       {
           return null;
       }
     head.left= helper(nums,start,mid-1);
     head.right= helper(nums,mid+1,end);
     return head;
    }
}
