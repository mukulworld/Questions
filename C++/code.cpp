/* Question:  https://www.hackerrank.com/challenges/counting-valleys/problem 
*/

#include <bits/stdc++.h>
#include<vector>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);


int countingValleys(int steps, vector<string> v) {
string m;
for(int i=0;i<steps;i++){
    cin>>m;
    v.push_back(m);
}
  int ptr=10,valley=0;
  for(int i=0;i<steps;i++) 
  {
      if(v[i]=="D" && ptr==10 ){
      ptr=ptr-1;
      valley +=1;
      }
      if(v[i]=="U"){
      ptr=ptr+1;
      }
    if(v[i]=="D" && ptr!=10 ){
      ptr=ptr-1;
      }
  } 
  cout<<valley;
  return valley;
}

int main()
{
   int steps;
   cin>>steps;
   vector<string>v;
   countingValleys(steps, v);
   
   
   return 0;
}
