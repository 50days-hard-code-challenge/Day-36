class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        /*int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int sum=nums[i];
            if(sum==k)
            {
                count++;
            }
            for(int j=i+1;j<n;j++){
                sum+=nums[j];
                if(sum==k){
                    count++;
                }
            }
            
        }
        return count;*/

        int n=nums.size();
        int prefix[n];
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=nums[i]+prefix[i-1];

        }
        unordered_map<int,int>mpp;
        int count=0;
        for(int i=0;i<n;i++){
            if(prefix[i]==k){
                count++;
            }
            if(mpp.find(prefix[i]-k)!=mpp.end()){
                count+=mpp[prefix[i]-k];
            }
            mpp[prefix[i]]++;
        }
        return count;


    }
    


};
