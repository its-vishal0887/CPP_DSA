/*
Example 1:

Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
Example 2:

Input: s = "cccaaa"
Output: "aaaccc"
Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
Note that "cacaca" is incorrect, as the same characters must be together.
Example 3:

Input: s = "Aabb"
Output: "bbAa"
Explanation: "bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.
*/
#include<bits/stdc++.h>
using namespace std;

typedef pair<char,int>P;

string frequencySort(string s){
  unordered_map<char, int>freq;

  for(char c: s){
    freq[c]++;
  }

  vector<P>arr(freq.begin(), freq.end());

  auto lambda = [&](P &p1, P &p2){
    return p1.second > p2.second;
  };

  sort(arr.begin(), arr.end(), lambda);

  string ans = "";
  for(auto &p : arr){
    ans.append(p.second, p.first);
  }

  return ans;
}

int main(){
  string s = "Aabb";
  string newS = frequencySort(s);
  cout<<newS<<" ";
}

/*
notes:- 
1) unordered_map<char,int> freq;

Ek hash map banta hai jisme key = character, value = uski frequency (count).

Fast lookup/increment — O(1) average.

2) for(char c: s) { freq[c]++; }

String s ke har character pe loop.

Jo character aata hai, uska count 1 se badh jaata hai.

Example: s = "tree" → after loop: {'t':1, 'r':1, 'e':2}.

3) vector<P> arr(freq.begin(), freq.end());

P ek typedef pair<char,int> hai.

freq map ke sab (char,int) pairs ek vector me copy kar diye jaate hain.

Vector ab iterable aur sortable hai.

Note: unordered_map ka iteration order undefined hota — lekin hum sort kar denge, so order matters nahi.

4) Lambda comparator:
auto lambda = [&](P &p1, P &p2){
  return p1.second > p2.second;
};


Ye comparator batata hai kaise sort karna hai.

p1.second aur p2.second frequencies hain.

return p1.second > p2.second; matlab descending order by frequency (highest pehle).

sort(arr.begin(), arr.end(), lambda); is comparator ka use karke vector ko sort karta hai.

5) string ans = "";

Final answer string banegi yahan.

6) for(auto &p : arr){ ans.append(p.second, p.first); }

p.first = character, p.second = frequency.

ans.append(count, char) special overload use hota — ye given character ko count times append karta hai.

Example sorted arr agar {{'e',2}, {'t',1}, {'r',1}} ho to loop:

append(2,'e') → "ee"

append(1,'t') → "eet"

append(1,'r') → "eetr"

Final: "eetr" (ya kisi order me same-freq characters interchange ho sakte hain — dono valid).

7) return ans;

Sorted-by-frequency string wapas.
*/