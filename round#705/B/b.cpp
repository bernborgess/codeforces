#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl


typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


bool isHappyHour(pair<int,int> q, int h, int m );
pair<int,int> smrtInc(pair<int,int> in, int h, int m);

int main(){ _
	int t;	cin>>t;
	int h,m;
	pair<int,int> time;
	string start;
	while( t-- ) {
		cin>>h>>m;
		cin>>start;
		time.f = stoi(	start.substr(0,2), nullptr, 10	);
		time.s = stoi(	start.substr(3,2), nullptr, 10	);
		// while(!isHappyHour(time,h,m))	time = { (time.s==m-1? (time.f+1)%h : time.f), (time.s==m-1? 0 : time.s+1)} ;
		while(!isHappyHour(time,h,m))	time = smrtInc(time,h,m);
		cout<<setfill('0')<<setw(2)<<time.f<<":"<<setfill('0')<<setw(2)<<time.s<<endl;
	}

	return 0;
}

bool isHappyHour(pair<int,int> q, int h, int m ) {
	if(q.f>=h || q.s >= m)	return false;

	if(	q.f/10==3||q.f/10==4||q.f/10==6||q.f/10==7||q.f/10==9	||
		q.f%10==3||q.f%10==4||q.f%10==6||q.f%10==7||q.f%10==9	||
		q.s/10==3||q.s/10==4||q.s/10==6||q.s/10==7||q.s/10==9	||
		q.s%10==3||q.s%10==4||q.s%10==6||q.s%10==7||q.s%10==9	)	return false;

	pair<int,int> inv = {0, 0};
	
	//uhi
	if(q.f/10!=2 && q.f/10!=5)	inv.s += q.f/10;
	else	inv.s += ( q.f/10==2 ? 5 : 2	);
	//dhi
	if(q.f%10!=2 && q.f%10!=5)	inv.s += 10*(q.f%10);
	else	inv.s += 10*( q.f%10==2 ? 5 : 2	);

	if(q.s/10!=2 && q.s/10!=5)	inv.f += q.s/10;
	else	inv.f += ( q.s/10==2 ? 5 : 2	);
	
	if(q.s%10!=2 && q.s%10!=5)	inv.f += 10*(q.s%10);
	else	inv.f += 10*( q.s%10==2 ? 5 : 2	);


	// cout<<"INVERT: "<<inv.f<<" "<<inv.s<<endl;
	if(inv.f>=h || inv.s >= m)	return false;
	return true;
} 

pair<int,int> smrtInc(pair<int,int> in, int h, int m) {
	char ans[10];
	sprintf(ans,"%02d:%02d",in.f,in.s);
	
	//  (to_string(in.f)+":"+to_string(in.s));

	bool done = false;
//		  01234	
// ans = "HH:MM"
	int limit,cap;
	for (int d=4;d>=0;d--) {
		if(d==2){	continue;	}
		if(d==0){	limit=h/10;	}
		if(d==1){	limit=h;	}
		if(d==3){	limit=m/10;	}
		if(d==4){	limit=10;	}
		switch(ans[d]) {
				case '0':	ans[d]='1';		done=true;	break;
				case '1': 	if(limit>2)	{
							ans[d] = '2';	done=true;
							break;
						}
				case '2':	case '3':	case '4': 	if(limit>5) {
										ans[d]= '5';	done=true;
										break;
									}
				case '5':	case '6':	case '7':	if(limit>8) {	ans[d] = '8'; 		done=true; break;		}
				default:
					ans[d]='0';
		}
		if(done)	break;
	}



	// cout<<"ANS : "<<ans<<endl;
	string outH(ans);
	pair<int,int> out;
	out.f = stoi(	outH.substr(0,2), nullptr, 10	);
	out.s = stoi(	outH.substr(3,2), nullptr, 10	);


	return out;




	// switch(ans.s) {
	// 	case 0:	ans.s=1;		done=true;	break;
	// 	case 1: if(m>2)	{
	// 				ans.s = 2;	done=true;
	// 				break;
	// 			}
	// 	case 2:	case 3:	case 4: if(m>5) {
	// 							ans.s = 5;	done=true;
	// 							break;
	// 						}
	// 	case 5:	case 6:	case 7:	if(m>8) {	ans.s = 8; 		done=true; break;		}
	// 	default:
	// 		ans.s=0;					
	// }
	// if(!done) {
	// 	switch(ans.f) {
	// 		case 0:	ans.f=1;		done=true;	break;
	// 		case 1: if(h>2)	{
	// 					ans.f = 2;	done=true;
	// 					break;
	// 				}
	// 		case 2:	case 3:	case 4: if(h>5) {
	// 								ans.f = 5;	done=true;
	// 								break;
	// 							}
	// 		case 5:	case 6:	case 7:	if(h>8) {	ans.f = 8; 		done=true; break;		}
	// 		default:
	// 			ans.f=0;	
	// 	}
	// }
	// return ans;
}





