#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;
 
#define ll long long
 
typedef struct{
	int x;
	int y;
} point;


int manDist(int x1, int y1, int x2, int y2);
void qs(int *item, int left, int right);
 
int main(){
	int n,k;
	cin>>n>>k;
	point *points = (point *) malloc(sizeof(point)*n);
	for(int i=0;i<n;i++){
		cin>>points[i].x>>points[i].y;
	}
	
	ll limit = (n*(n-1))/2;
	int arr[limit];
	//arr.resize(limit*100);
	int num = 0;
 
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1; j<n;j++){
			arr[num] = manDist(points[i].x, points[i].y, points[j].x, points[j].y);
			num++;
		}
 
	}
	free(points);

	qs(arr, 0, limit);

	cout << arr[k-1]<<endl;
 
	return 0;
}

void qs(int *item, int left, int right){
	int i,j;
	int x, y;
	i = left;	j = right;
	x = item[(left+right)/2];
	do {
		while(item[i]<x && i<right)	i++;
		while(x<item[j] && j>left) 	j++;
		if(i<=j) {
			y = item[i];
			item[i] = item[j];
			item[j] = y;
			i++;	j--;
		}
	} while(i<=j);
	if(left<j)	qs(item, left, j);
	if(i<right)	qs(item,i,right);
}

int manDist(int x1, int y1, int x2, int y2){
	return (((x1-x2)<0)?(-(x1-x2)):(x1-x2)) + (((y1-y2)<0)?(-(y1-y2)):(y1-y2));
}