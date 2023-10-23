//Solution 
//Check if array pairs are divisible by k
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int,int>mpp;
        {
            for(auto a:arr){

                mpp[(a%k + k)% k]++;
            }
            if(mpp[0] % 2 == 1) //when remainder is 0
             return false;

             for(int i=1; i<k; i++) //k bcoz it iterating over the remainer frequies
             {
                 if(mpp[i] != mpp[k-i])
                {
                   return false;
                }
               
            }
            
            
        }
        return true;
    }
};
