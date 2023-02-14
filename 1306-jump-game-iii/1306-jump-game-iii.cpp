class Solution {
public:
bool canReach(vector<int>& arr, int start) 
{
	unordered_set<int>st;
    queue<int>q;
	q.push(start);
	
	while(!q.empty())
	{
	   int i = q.front();
	   st.insert(i);
	   q.pop();
	   
	   if(arr[i]==0)
	   return true;
	   
       if((i+arr[i])<0 or (i+arr[i])>=arr.size() or st.find(i+arr[i])!=st.end())
	   {
           ;	
	   }
	   else
	   {
	   	  q.push((i+arr[i]));
	   }
	   	
   	   if((i-arr[i])<0 or (i-arr[i])>=arr.size() or st.find(i-arr[i])!=st.end())
	   {
           ;	
	   }
	   else
	   {
	   	  q.push((i-arr[i]));
	   }
    }   
	return false;       
}
};