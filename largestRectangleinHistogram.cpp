class Solution {
public:
    int largestRectangleArea(vector<int>& ht) {
        int n = ht.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        stack<int> s;

        //right smaller
        for (int i=n-1;i>=0;i--){
            while (s.size()>0 && ht[s.top()]>=ht[i]){
                s.pop();
            }

            right[i]=s.empty()?n:s.top(); 
            s.push(i);
            //this doesnt work for bar without right/left smaller nearest values - so right ki n pettali, left leave it like that
        }

        while (!s.empty()){
            s.pop();
        }

        //left smaller
        for (int i=0;i<n;i++){
            while (s.size()>0 && ht[s.top()]>=ht[i]){
                s.pop();
            }
            left[i]=s.empty()?-1:s.top();
            s.push(i);

        }

        int ans=0;
        for (int i=0;i<n;i++){
            int width=right[i]-left[i]-1;
            int currAr = ht[i]*width;
            ans = max(ans,currAr);
        }

        return ans;
    }
};

//tc - O(n)
//sc - O(n)
