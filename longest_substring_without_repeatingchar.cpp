#include<bits/stdc++.h>
using namespace std;


int longest_substring(string str){
   int len=0,r=0,l=0,pl=0;
   unordered_map<char, int> m;

   while(r<str.length()){
     cout<<l<<" "<<r<<"\n";
      if(m.find(str[r])!=m.end()){
          unordered_map<char, int>::iterator itr;
          itr=m.find(str[r]);
          l=itr->second+1;
          auto it = m.begin();
          while (it != m.end()) {
            if (it->second<l)
               it = m.erase(it);
            else
               it++;
          }

      }
      m.insert(pair<char, int>(str[r],r));

      for (auto it1 = m.begin(); it1!=m.end(); ++it1)
        cout << it1->first << "->" << it1->second << endl;

    cout<<endl;

      if((r-l+1)>len){
        len=r-l+1;
      }
      r++;
   }

   return len;
}
int main(){

    string str= "abcaaxbcdba";

    cout<<longest_substring(str);

return 0;
}
