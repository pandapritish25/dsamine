#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
#include<vector>
#include<stdlib.h>
using namespace std;
#define pb push_back
typedef long long int ll;
typedef long double lld;
#define debug(x) cout << #x << " " << x << endl;
#define debug1(x) cout << #x << " " << x << " ";
#define all(v) v.begin(), v.end()

 
/*#define debug(x);
printf(x);*/
 
void init()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt" , "r"  ,stdin); 
  freopen("output.txt" , "w" ,stdout);
  #endif
 
}

 
 
const int MAXN = (int)((1e5) + 100);
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
 
 
void precision(int a) 
{
  cout << setprecision(a) << fixed;
}
 
 
//** pritishcf307 **//
//**------------------------------------------------------------------------------------------------------**//

int main()
{
  init();
  ll n;
  cin >> n;
  ll csum=0;

  ll sum=0;
  cin >> sum;

  vector<int> v;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  bool found=false;

  for(int i=0;i<n;i++)
  {
    if(v[i]==12)
    {
      found=true;
      break;
    }
  }

  set<int> s;

  for(int i=0;i<n;i++)
  {
    csum+=v[i];
    s.insert(csum);
  }
  // for(auto i:s)
  // {
  //   debug(i);
  // }  


  for(auto i:s)
  {
    if(s.find(i+sum)!=s.end())
    {
      found=true;
    }
  }

  if(found==true)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;

}

int main()
{
  init();
  ll n;
  cin >> n;
  ll csum=0;
  ll ans=0;
  ll count;

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

  for(int i=0;i<n;i++)
  {
    csum=v[i];
    count=0;
    for(int j=0;j<n;j++)
    {
      count+=mp[(csum-v[j])];
      if(csum-v[j]==v[j])
      {
        count--;
      }
    }
    ans+=(count/2);
  }

  cout << ans << endl;
}


int main()
{
  init();

  ll n;
  cin >> n;
  ll count=0;

  vector<int> v;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  for(int i=0;i<n;i++)
  {
    if(v[i] < 0)
    {
      count++;
    }
  }

  ll csum=0;
  ll msum=0;

  for(int i=0;i<n;i++)
  {
    csum+=v[i];
    msum=max(csum,msum);
    if(csum < 0)
    {
      csum=0;
    }
  }

  sort(v.begin(), v.end());

  if(count==n)
  {
    cout << v[n-1] << endl;
  }
  else
  {
    cout << msum << endl;  
  }
}

int main()
{
  init();
  ll n;
  cin >> n;
  ll sum=0;
  vector<int> v;

  for(int i=0;i<n-1;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
    sum+=a;
  }

  ll rsum=n*(n+1);
  rsum/=2;

  cout << rsum-sum << endl;

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

  ll lo=0;
  ll hi=n-1;

  for(int i=0;i<n/2;i++)
  {
    cout << v[hi] << " " << v[lo] << " ";
    lo++;
    hi--;
  }

  ll mid=(hi+lo)/2;

  if(n%2==1)
  {
    cout << v[mid] << endl;
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
  ll c=0;
  ll c1=0;
  ll c2=0;

  for(int i=0;i<n;i++)
  {
    if(v[i]==0)
    {
      c++;
    }
    else if(v[i]==1)
    {
      c1++;
    }
    else if(v[i]==2)
    {
      c2++;
    }
  }

    for(int i=0;i<c;i++)
    {
      cout << 0 << " ";
    }
    cout << endl;

    for(int i=0;i<c1;i++)
    {
      cout << 1 << " ";
    }
    cout << endl;

    for(int i=0;i<c2;i++)
    {
      cout << 2 << " ";
    }
    cout << endl;
}

int main()
{
  init();

  ll n;
  cin >> n;
  vector<int> v;

  ll csum=0;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
    csum+=a;
  }
  bool found=false;

  set<int>  s;
  ll sum=0;

  for(int i=0;i<n;i++)
  {
    sum+=v[i];
    s.insert(sum);
    if(s.find(csum-sum)!=s.end())
    {
      found=true;
      break;
    }
  }
  if(found==true)
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
  ll count=0;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  for(int i=0;i<n;i++)
  {
    count=0;
    for(int j=i+1;j<n;j++)
    {
      if(v[j] > v[i])
      {
        count++;
      }
    }
    if(count==0)
    {
      cout << v[i] << " ";
    }
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


  ll k;
  cin >> k;

  for(int i=0;i<n;i+=k)
  {
    ll left=i;
    ll right=min(i+k-1,n-1);

    while(left < right)
    {
      swap(v[left++],v[right--]);
    }
  }


 for(int i=0;i<n;i++)
 {
  cout << v[i] << " ";
 }
}

int  main()
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
  sort(v.begin(), v.end());
  ll k;
  cin >> k;
  cout << v[k-1] << endl;
}

int main()
{
  init();
  ll n;
  cin >> n;

  vector<int> v;
  ll count=0;
  bool found=false;
  ll sum=0;

  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  for(int i=0;i<n;i++)
  {
    v[i]=(v[i]*v[i]);
  }

  for(int i=0;i<n;i++)
  {
    sum+=v[i];
  }

  ll csum=0;
  map<int,int> mp;

  for(int i=0;i<n;i++)
  {
    mp[v[i]]++;
  }

  for(int i=0;i<n;i++)
  {
    count=0;
    csum=v[i];
    for(int j=0;j<n;j++)
    {
      count+=mp[csum-v[j]];
      if(csum-v[j]==v[j])
      {
        count--;
      }
    }
    if(count==2)
    {
      found=true;
      break;
    }
  }

  if(found==true)
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
  ll k;
  cin >> k;
  ll sum=0;
  vector<int> v1;


  vector<int> v;
  for(int i=0;i<n;i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }


  sort(v.begin(),v.end());

  for(int i=0;i+k-1<n;i++)
  {
    sum=v[i+k-1]-v[i];
    v1.push_back(sum);
  }

  ll mn=*min_element(v1.begin(), v1.end());

  cout << mn   << endl;
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
  }

  for(int i=1;i<n;i++)
  {
    if(v[i] > v[i-1])
    {
      sum+=v[i];
    }
    else
    {
      cout << sum+v[0] << endl;
    }
  }
}

int main()
{
  init();
  string s;
  cin >> s;
  ll index=0;
  bool found=false;
  ll n=s.length();

  for(int i=n-1;i>=0;i--)
  {
    if(s[i]=='1')
    { 
      found=true;
      index=i;
      break;
    }
  }

  if(found==true)
  {
    cout << index << endl;
  }
  else
  {
    cout << -1 << endl;
  }
}


int main()
{
  init();

  ll n;;
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

  for(int i=0;i<n;i++)
  {
    cout <<  v[i] << " ";
  }
}

int main()
{
  init();
  vector<string> v;

  ll n;
  cin >> n;

  for(int i=0;i<n;i++)
  {
    string s;
    cin >> s;
    v.push_back(s);
  }

  vector<char> s1;

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<v[i].length();j++)
    {
      s1.push_back(v[i][j]);
    }
  }

   sort(s1.begin(), s1.end(),greater<int>());

  for(int i=0;i<s1.size();i++)
  {
    cout << s1[i];
  }

}
