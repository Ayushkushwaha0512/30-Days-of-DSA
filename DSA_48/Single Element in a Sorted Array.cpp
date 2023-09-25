int first(vector<int>&arr,int target){
	int low=0,high=arr.size()-1;
	int ans=-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]==target){
			ans=mid;
			high=mid-1;
		}
		else if(arr[mid]>target){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}

int last(vector<int>&arr,int target){
	int low=0,high=arr.size()-1;
	int ans=-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]==target){
			ans=mid;
			low=mid+1;
		}
		else if(arr[mid]>target){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}

int count(vector<int>&arr,int target){
	int cnt=last(arr,target)-first(arr,target)+1;
	return cnt;
}

int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int ans=0;
	for(int i=0;i<arr.size();++i){
		int cnt=count(arr,arr[i]);
		if(cnt==1){
			ans=arr[i];
			break;
		}
	}
	return ans;
}




int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	if(arr.size()==1) return arr[0];
	int low=0,high=arr.size()-1,ans=0;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(mid!=0 && mid!=arr.size()-1 && (arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1])){
			ans=mid;
			break;
		}
		if(low!=arr.size()-1 && arr[low]!=arr[low+1]){
			ans=low;
			break;
		}
		if(high!=0 && arr[high]!=arr[high-1]){
			ans=high;
			break;
		}
		low+=2;
		high-=2;
	}
	return arr[ans];
}





int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	if(arr.size()==1) return arr[0];
	int low=0,high=arr.size()-1,ans=0;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
			ans=mid;
			break;
		}
		int first=mid;
		if(arr[mid]==arr[mid-1]){
			first=mid-1;
		}
		if(first%2==0){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return arr[ans];
}
