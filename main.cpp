#include <iostream>
using namespace std;
#include <string>
#include <set>
#include <unordered_map>
int main() {
	
	set<char> c;
	int start = 0;
	int minleft = 0;
	int count = 0;
	int length = 200000;
	unordered_map<char, int> mp ;
	string str = "aabcbcdbca";
	
	for(int a = 0 ; a < str.length();a++)
	{
	    c.insert(str[a]);
	}
	
	int size = c.size();
	cout << "size is " << size << endl;
	for(int i = 0; i < str.length();i++)
	{
	    if(mp[str[i]] == 0)
	    { 
	        count++;
	        mp[str[i]] +=1;
	    }
	    else if(mp[str[i]] >= 1)
	    {
	        mp[str[i]] +=1;
	    }
        cout << "count is " << count << " at index " << i << endl;
	    while(count == size)
	   {
	       if(length > i -start +1)
	       {
	           
	           length = i - start +1; 
	           minleft = start;
	           cout << "changing length "<< length << "and minleft "<< minleft <<endl;
	       }
	       
	       if(mp[str[start]] == 1 )
	            {
	                cout << "reducing count at " << start << " idx " << i << endl; 
	                count--;
	                mp[str[start]]--;
	            }
	       else
	            {
	               mp[str[start]]--;
	            }

        start++;
        cout << i << " and start at" << start << endl;
	   }
	}
	cout << minleft << "and" << length;
	cout << str.substr(minleft, length) << endl;
	
	return 0;
}
