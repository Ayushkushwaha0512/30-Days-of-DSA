int findMin(vector<int>& arr)
{
	// Write your code here.
	int n=arr.size();
	if(n==1) return arr[0];
	int low=0,high=n-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if((arr[mid]<=arr[mid+1] && arr[mid]<=arr[mid-1])){
			return arr[mid];
		}
		else if(arr[low]<=arr[mid]){
			if(arr[low]>arr[high]){
				low=mid+1;
			}
			else{
				return arr[low];
			}
		}
		else{
			if(arr[low]>=arr[mid]){
				high=mid-1;
			}
			else{
				return arr[low];
			}
		}
	}
}
