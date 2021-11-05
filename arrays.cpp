#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#include<vector>
#include<stdlib.h>
#define MOD 1000000007
#define INF 1e18
using namespace std;
#define debug(x) cout << #x << " " << x << endl;
#define debug1(x) cout  << x << " ";
typedef long long int ll;
typedef long double lld;
#define timeset ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
/*#define debug(x);
printf(x);*/
 
void init()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt" , "r"  ,stdin); 
  freopen("output.txt" , "w" ,stdout);
  #endif
 
}
 
void  debugger()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt" , "r"  ,stdin); 
  freopen("output.txt" , "w" ,stdout);
  #endif
  #ifdef debugger
  #define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
  #else
  #define debugger(x);
  #endif
} 
 
 
const int MAXN = (int)((1e5) + 100);
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
 
 
void precision(int a) 
{
  cout << setprecision(a) << fixed;
}
 
 
//** pritishcf307 **//
//**------------------------------------------------------------------------------------------------------**//
/*
basically in the peak we have to consider 4 cases
1- if number of elements=1
2-if(0) element is greater than the 1 elements
3-if(n-1) element is greater than the n-2 elements
4-if any element is theree such that this thing appends*/


int main()
{
  init();
  ll n;
  cin >> n;
  ll arr[n];

  bool found=false;

  for(int i=0;i<n;i++)
  {
    cin >> arr[i];
  }

  if(n==1)
  {
    found=false;
  }


  if(arr[0] >= arr[1])
  {
    found=true;
    break;
  }

  if(arr[n-1] >= arr[n-2])
  {
    found=true;
  }

  for(int i=1;i<n;i++)
  {
    if((arr[i] >= arr[i-1]) && (arr[i]  >= arr[i+1]))
    {
      found=true;
      break;
    }
  }

  if(found==true)
  {
    cout << "1" << endl;
  }
  else
  {
    cout << "0" << endl;
  }
}


int main()
{
  init();
  ll n;
  cin >> n;
  ll arr[n];
  
  for(int i=0;i<n;i++)
  {
    cin >> arr[i];
  }
  ll max=0;

  for(int i=0;i<n;i++)
  {
    if(arr[i] > max)
    {
      max=arr[i];
    }
  }


  ll min=arr[0];

  for(int i=0;i<n;i++)
  {
    if(arr[i] < min)
    {
      min=arr[i];
    }
  }

  cout << max <<  " " << min << endl;
}


int main()
{
  init();
  string s;
  cin >> s;

  ll n=s.length();

  for(int i=0;i<n/2;i++)
  {
    swap(s[i],s[n-i-1]);
  }

  cout << s << endl;
}

int main()
{
  init();
  ll n;
  cin >> n;
  ll arr[n];
  ll temp;
  
  for(int i=0;i<n;i++)
  {
    cin >> arr[i];
  }


  ll k;
  cin >> k;

  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-1;j++)
    {
      if(arr[j] > arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }

  cout << arr[k-1] << endl;

}

int main()
{
  init();

  ll n;
  cin >> n;
  vector<int> v;

  for(int i=0;i<n;i++)
  {
    ll a; 
    cin >> a;
    v.push_back(a);
  }

  map<int,int> mp;

  for(int i=0;i<n;i++)
  {
    mp[v[i]]++;
  }

  ll k;
  cin >> k;

  for(auto i:mp)
  {
    if(i.first==k)
    {
      cout << i.second << endl;
    } 
  }

  return 0;
}


int main()
{
  init();
  ll n;
  cin >> n;
  ll arr[n];
  
  for(int i=0;i<n;i++)
  {
    cin >> arr[i];
  }


  ll temp;

  for(int  i=0;i<n-1;i++)
  {
    for(int j=0;j<n-1;j++)
    {
      if(arr[j] > arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }

  for(int i=0;i<n;i++)
  {
    cout << arr[i] << "  ";
  }
  return 0;
}


int main()
{
  init();

  ll n;
  cin >> n;

  vector<int> v;

  for(int i=0;i<n;i++)
  {
   ll a;
   cin >> a;
   v.push_back(a);
  }

  ll temp[n];
  int j=0;

  for(int  i=0;i<n;i++)
  {
    if(v[i]>=0)
    {
      temp[j++]=v[i];
    }
  }



  for(int  i=0;i<n;i++)
  {
    if(v[i]<=0)
    {
      temp[j++]=v[i];
    }
  }

  for(int i=0;i<n;i++)
  {
    cout << temp[i] << "  ";
  }
  return 0;
}


int main()
{
  init();
  ll n;
  cin >>  n;
  vector<int>  v;
  vector<int>  v1;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  for(int i=0;i<n;i++)
  {
    ll b;
    cin >> b;
    v1.push_back(b);
  }  

  set<int> s;
  set<int> s1;

  for(int i=0;i<n;i++)
  {
    s.insert(v[i]);
  }


  for(int i=0;i<n;i++)
  {
    s1.insert(v1[i]);
  }

  for(auto i:s)
  {
    cout << i << " ";
  }

  for(auto i:s1)
  {
    cout << i << " ";
  }

  cout << endl;

  for(auto i:s)
  {
    if(s1.find(i)!=s1.end())
    {
      cout << i << " ";
    }
  }

  cout << endl;
  return 0;
}


int main()
{
  init();
  ll n;
  cin >> n;
  ll arr[n];
  
  for(int i=0;i<n;i++)
  {
    cin >> arr[i];
  }

  ll x=arr[n-1];

  for(int i=n-1;i>0;i--)
  {
    arr[i]=arr[i-1];
  }

  arr[0]=x;

  for(int i=0;i<n;i++)
  {
    cout << arr[i] << "  ";
  }

}

int main()
{
  init();
  ll n;
  cin >> n;
  ll arr[n];
  ll sum=0;
  
  for(int i=0;i<n-1;i++)
  {
    cin >> arr[i];
    sum+=arr[i];
  }

  ll ans=n*(n+1);
  ans/=2;

  cout << ans-sum << endl;
  return 0;
}

int main()
{
  init();
  ll n;
  cin >> n;

  vector<int>  v;

  for(int  i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  map<int,int> mp;

  for(int i=0;i<n;i++)
  {
    mp[v[i]]++;
  }

  ll sum=0;
  ll count=0;

  cin >> sum;

  for(int i=0;i<n;i++)
  {
    count+=mp[sum-v[i]]; 
    if(sum-v[i]==v[i])
    {
      count--;
    }
  }

cout << count/2 << endl;
}

int main()
{
  init();
  ll n;
  cin >> n;

  vector<int>  v;

  for(int  i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  map<int,int> mp;

  for(int i=0;i<n;i++)
  {
    mp[v[i]]++;
  }

  for(auto i:mp)
  {
    if(i.second  > 1)
    {
      cout <<  i.first << " ";
    }
  }
}



int main()
{
  init();
  ll n;
  cin >> n;

  vector<int>  v1;
  vector<int>  v2;
  vector<int>  v3;

  for(int  i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v1.push_back(a);
  }


  for(int  i=0;i<n;i++)
  {
    ll b;
    cin >> b;
    v2.push_back(b);
  }


  for(int  i=0;i<n;i++)
  {
    ll c;
    cin >> c;
    v3.push_back(c);
  }

  set<int> s1;
  set<int> s2;
  set<int> s3;
  set<int> s4;

  for(int i=0;i<n;i++)
  {
    s1.insert(v1[i]);
    s2.insert(v2[i]);
    s3.insert(v3[i]);
  }

  for(auto i:s1)
  {
    if(s2.find(i)!=s2.end())
    {
      s4.insert(i);
    }
  }

  for(auto i:s4)
  {
    if(s3.find(i)!=s3.end())
    {
      cout <<  i  << " ";
    }
  }
  return 0;
}


int main()
{
  init();
  ll n;
  cin >> n;
  vector<int> v;
  bool found=false;
  ll index=0;

  for(int  i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

   unordered_map<int, int> mp;
   set<int>s;

   for(int i=n-1;i>=0;i--)
   {
    if(s.find(v[i])!=s.end())
    {
      found=true;
      index=i;
    }
    else
    {
       s.insert(v[i]);
     }   
   }

   cout << v[index] << endl;
   return 0;
}

int main()
{
  init();
  ll n;
  cin >> n;
  vector<int> v;
  bool found=false;
  ll index=0;

  for(int  i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

   unordered_map<int, int> mp;
   set<int>s;
   for (int i = 0; i < n; i++)
   {
      mp[v[i]]++;
   }
   for (int i = 0; i < n; i++)
   {
      if(mp[v[i]] ==1)
      {
        cout << v[i] << endl;
        break;
      }
   }

   return 0;
}


int main()
{
  init();
   ll n;
  cin >> n;
  vector<int> v;

  for(int  i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  int temp[n];
  ll j=0;
  
  for(int i=0;i<n;i++)
  {
    if(v[i] > 0)
    {
      temp[j+=2]=v[i];
    }
  }

  ll k=1;

  for(int i=1;i<n;i++)
  {
    if(v[i] < 0)
    {
      temp[k+=2]=v[i];
    }
  }
   for(int i=0;i<n;i++)
  {
    cout << temp[i] << "  ";
  }
  return 0;
}



bool  check(vector<int> v)
{
  bool helper=true;
  ll n=v.size();
  set<int> s;
  ll sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=v[i];
    // debug(sum)

  // for(auto i:s)
  // {
  //   debug(i);
  // }
    if(sum==0)
    {
      helper=true;
    }
    else if(s.find(sum)!=s.end())
    {
      helper=true;
    }
    else
    {
      s.insert(sum);
    }
  }

  // for(auto i:s)
  // {
  //   debug(i);
  // }
  if(helper==true)
  {
    return true;
  }
  else
  {
    return false;
  }  
}
int main()
{
  init();
  ll n;
  cin >> n;

  vector<int> v;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  bool helper2=check(v);
  if(helper2)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

}


int main()
{
  init();
  ll n;
  cin >> n;
  vector<int> v;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }


  ll count=0;
  for(int i=0;i<n;i++)
  {
    if(v[i] < 0)
    {
      count++;
    }
  }
  if(count==n)
  {
    sort(v.begin(),v.end(),greater<int>());
    cout << v[0] << endl;
  }
  
else
{
  ll currsum=0;
  ll maxsum=0;

  for(int i=0;i<n;i++)
  {
    currsum+=v[i];
    if(currsum > maxsum)
    {
      maxsum=currsum;
    }
    if(currsum <=0)
    {
      currsum=0;
    }
  }
  cout << maxsum << endl;
}

int main()
{
  init();
  ll n;
  cin >> n;
  vector<int> v;

  for(int i=1;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  ll maxx=v[0];
  ll mx=v[0];
  ll mn=v[0];

  for(int i=0;i<n;i++)
  {
    if(v[i] < 0)
    {
      swap(mx,mn);
    }
    mx=max(v[i],mx*v[i]);
    mn=min(v[i],mn*v[i]);
    maxx=max(maxx,mx);
  }

  cout << maxx << endl;
}

int main()
{
  init();
  vector<int> v;

  ll n;
  cin >> n;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  map<int,int> mp;

  for(int i=0;i<n;i++)
  {
    mp[v[i]]++;
  }

  for(auto i:mp)
  {
    if(i.second > (n/2))
    {
      cout << i.first << endl;
    }
  }
  return 0;
}

 int main()
 {
  init();

  ll n;
  cin >> n;
  vector<int> v;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  set<int> s;

  ll mx=*max_element(v.begin(),v.end());
  vector<int> v1;

  for(int i=0;i<n;i++)
  {
    if(v[i] > 0)
    {
      v1.push_back(v[i]);
    }
  }

  bool found=false;
  ll helper=0;

  sort(v1.begin(),v1.end());

  // for(int i=0;i<v1.size();i++)
  // {
  //   cout << v1[i] << endl;
  // }

  for(int i=1;i<v1.size();i++)
  {
    if(v1[i]-v1[i-1] != 1)
    {
      found=true;
      helper=v1[i-1];
      break;
    }
  }

  if(found==true)
  {
    cout << helper+1 << endl;
  }
  else
  {
    cout << mx+1 << endl;
  }

 }

int main()
{
  init();
  ll n;
  cin >> n;
  vector<int> v;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  sort(v.begin(),v.end());

  for(int i=0;i<n-1;i+=2)
  {
    swap(v[i],v[i+1]);
  }

  for(auto i:v)
  {
    cout << i << " ";
  }
}



// can be done by using sets also
// traverse from one part to other then find ai find aj subtract to find  in a set


bool helper(vector<int> v,vector<int> v1)
{
  bool helper1=false;
  ll n1=v.size();
  ll n2=v1.size();

  for(int i=0;i<v1.size();i++)
  {
    ll count=0;
    ll currsum=0;

    for(int j=0;j<n2;j++)
    {
      map<int,int> mp;
      currsum=v1[i];
      count+=(currsum-v[j]);
      if(currsum-v[j]==v[j])
      {
        count--;
      }
    }
    if(count > 0)
    {
      helper1=true;
    }
    else
    {
      helper1=false;
    }
  }

  if(helper1==true)
  {
    return true;
  }
  else
  {
    return false;
  }
}



int main()
{
  init();

  ll n;
  cin >> n;

  vector<int> v;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  vector<int> v1;
  ll sum=0;
  cin >> sum;

  for(int i=0;i<n;i++)
  {
    if(sum > v[i])
    {
      v1.push_back(sum-v[i]);   
    }
  }


  bool helpermain=helper(v1,v);

  if(helpermain==true)
  {
    cout << "YES" << endl;
  }

  else
  {
    cout << "NO" << endl;
  }

}

int main()
{
  init();
  ll n;
  cin >> n;

  vector<int> v;
  vector<int> v1;
  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }
  ll ans=0;
  ll count=1;

  set<int> s;

  for(int i=0;i<n;i++)
  {
    s.insert(v[i]);
  }

  for(auto i:s)
  {
    v1.push_back(i);
  }

  for(int i=1;i<v1.size();i++)
  {
    if(v1[i]==(v1[i-1]+1))
    {
      count++;
    }

    else
    {
      count=1;
    }
    ans=max(ans,count);
  }

  cout << ans << endl;
}



vector<int> helper(vector<int>  v)
{
  ll n=v.size();
  ll x;
  x=v[n-1];
  for(int i=n-1;i>=0;i--)
  {
    v[i]=v[i-1];
  }

  v[0]=x;
  return v;
}

ll helper1(vector<int> v)
{
  ll sum=0;
  for(int i=0;i<v.size();i++)
  {
    sum+=i*v[i];
  }
  return sum;
}

int main()
{
  init();
  ll n;
  cin >> n;
  vector<int> v;
  ll sum=0;
  ll ans=0;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  ll q=v.size();
  vector<int> v1=helper(v);
  // debug(q)
  while(q--)
  {
    v1=helper(v1);
    for(int i=0;i<n;i++)

    {
      cout << v1[i] << " ";
    }
    sum=helper1(v1);
    ans=max(sum,ans);
    cout << endl;
  }

  cout << ans << endl;
}

int main()
{
  init();
  ll n1,n2;
  cin >> n1 >> n2;
  ll count=0;

  vector<int> v1;
  vector<int> v2;

  for(int i=0;i<n1;i++)
  {
    ll a;
    cin >> a;
    v1.push_back(a);
  }

    for(int i=0;i<n2;i++)
  {
    ll b;
    cin >> b;
    v2.push_back(b);
  }

  set<int> s1;
  set<int> s2;

  for(int i=0;i<n1;i++)
  {
    s1.insert(v1[i]);
  }


  for(int i=0;i<n2;i++)
  {
    s2.insert(v2[i]);
  }

  for(auto i:s1)
  {
    if(s2.find(i)!=s2.end())
    {
      count++;
    }
  }

  if(count==n2)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}


int main()
{
  init();
  ll n;
  cin >> n;

  vector<int> v;
  vector<int> v1;
  vector<int> v2;
  ll ans=0;
  ll diff=0;


  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }
  map<int,int> mp;

  for(int i=0;i<n;i++)
  {
    mp[v[i]]=i;
  }



  // for(auto i:mp)
  // {
  //   debug1(i.first);
  //   debug1(i.second);
  //   cout << endl;
  // }

  for(auto i:mp)
  {
    v1.push_back(i.second);
   }
  //  for(auto i:v1)
  // {
  //   debug1(i);
  // }

  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(v[j] > v[i])
      {
        diff=j-i;
        // debug(j);
        // debug(i);
        // debug(diff);
        ans=max(diff,ans);
      }
    }
    v2.push_back(ans);
  }

  // for(auto i:v2)
  // {
  //   debug1(i);
  // }

  ll maxc=*max_element(v2.begin(), v2.end());
  cout << maxc <<  endl;
}


int main()
{
  init(); 

  ll n;
  cin >> n;
  vector<int> v;
  ll sum=0;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
    sum+=a; 
  }

  map<int,int> mp;

  for(int i=0;i<n;i++)
  {
    mp[v[i]]++;
  }

  for(auto i:mp)
  {
    if(i.second  > 1)
    {
      cout << i.first << endl;
      break;
    }
  }
  ll k=(n)*(n+1);
  k/=2;

  cout << abs(sum-k) << endl;
}

int main()
{
  init();
  ll n;
  cin >> n;
  vector<int> v;
  ll ans=0;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  ll diff=0;

  for(int i=1;i<n;i++)
  {
    diff=v[i]-v[i-1];
    ans=max(diff,ans);
  }

  cout << ans << endl;
}


int main()
{
  init();
  ll n;
  cin >> n;
  vector<int> v;
  ll sum=0;
  ll x;
  cin >> x;
  ll ans1=0;
  ll ans2=0;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
    sum+=a;
  }
  // debug(sum);
  sort(v.begin(),v.end());

  ll lo=0;
  ll hi=n-1;
  ll mid;
  ll diff=INT_MAX;
    //  debug(v[lo])
    // debug(v[hi])
  debug(x);
  ll rf=0;
  ll lf=0;

  while(hi > lo)
  {
    if(v[hi]+v[lo]-x > diff)
    {
      lf=lo;
      rf=hi;
      diff=abs(v[hi]+v[lo]-x);
 
    }
   if(v[hi]+v[lo] > x)
   {
    hi--;
   }
   else
   {
    lo++;
   }
  }

 cout << hi << " " << lo << endl;

}


int main()
{
  init();
  ll n;
  cin >> n;
  vector<int> v;
  ll count=1;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  sort(v.begin(), v.end());

  vector<int> v1;

  // for(int i=0;i<v.size();i++)
  // {
  //   debug1(v[i]);
  // }
  ll ans=0;

  for(int i=1;i<n;i++)
  {
    if(v[i]==v[i-1]+1)
    {
      count++;
      // ans=max(ans,count);
    }
    else
    {
      ans=max(ans,count);
      count=1;
    }
  }
  cout << ans << endl;

  // remember this point that in the else part we have to write 
  // else count=1 and increment the anwser

}


int main()
{
  init();
  int n;
  cin >> n;

  ll ans=0;
  ll count=0;

  vector<int> v;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);  
  }

  for(int i=1;i<n-1;i++)
  {
    if(v[i] > v[i-1] && v[i] > v[i+1])
    {
      count ++;
    }
    else
    {
      ans=max(count,ans);
      count=1;
    }
  }

  cout << count << endl;
  return 0;
}


int main()
{
  init();

  ll n;
  cin >> n;
  ll m;
  cin >> m;

  vector<int> v;
  vector<int> v1;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  sort(v.begin(),v.end());
  ll diff;

  for(int i=0;i+m-1<n;i++)
  {
    diff=v[i+m-1]-v[i];
    v1.push_back(diff);
  }

  ll mn=*min_element(v1.begin(), v1.end());
  cout << mn << endl;
}




// top 50 question of arrays anyone seeing will help him a lot

