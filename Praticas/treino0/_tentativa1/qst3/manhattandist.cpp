#include <iostream> 

using namespace std;

#define ll long long

typedef struct{
	int x;
	int y;
} point;

int manDist(int x1, int y1, int x2, int y2);

int main(){
	int n,k;
	cin>>n>>k;
	point points[n];
	for(int i=0;i<n;i++){
		cin>>points[i].x>>points[i].y;
	}
	
	ll limit = (n*(n-1))/2;
	int arr[limit];
	int num = 0;
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1; j<n;j++){
			arr[num] = manDist(points[i].x, points[i].y, points[j].x, points[j].y);
			num++;
		}
		
	}
	
	for(int i=0;i<limit-1;i++){
		for(int j=i;j<limit;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	
	cout << arr[k-1]<<endl;
	
	return 0;
}

int manDist(int x1, int y1, int x2, int y2){
	return (((x1-x2)<0)?(-(x1-x2)):(x1-x2)) + (((y1-y2)<0)?(-(y1-y2)):(y1-y2));
}






