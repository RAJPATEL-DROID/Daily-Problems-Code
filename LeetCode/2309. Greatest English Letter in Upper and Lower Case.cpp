// Given a string of English letters s, return the greatest English letter which occurs as both a lowercase and uppercase letter in s. The returned letter should be in uppercase. If no such letter exists, return an empty string.

// An English letter b is greater than another letter a if b appears after a in the English alphabet.

// Concept used : hashmap or array with stl function

// Solution :
class Solution {
public:
    string greatestLetter(string s) {
    
    // without hashmap;   
		// string ans="";
		// pair<bool,bool> cnt[26];
		// for(auto i:s){
		// char up= toupper(i);
		// if(islower(i)) cnt[tolower(i)-'a'].first=true;   
		// else cnt[tolower(i)-'a'].second=true;
		// //if both are true
		// if(cnt[tolower(i)-'a'].first and cnt[tolower(i)-'a'].second) ans= max(ans,{up});
		// }
		// return ans;
		// }
//      //with hashmap
//         unordered_map<char,int> m;
//         for(auto i:s){
//             m[i]++;
//         }
//         sort(s.begin(),s.end());
//         string ans = "";
//         for(int i =0;i<s.length();i++){
//             char lower = tolower(s[i]);
//             char uper = toupper(s[i]);
            
//             if(m[lower] && m[uper]){
//                 ans = uper;
//             }
//         }
//         return ans;
    }
};
