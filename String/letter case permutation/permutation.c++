// #include<bits/stdc++.h>
// using namespace std;

// vector<string> permutation(string s){
//     vector<string> ans;
//     int n = 0;
//     for(int i = 0 ; i < s.length() ; i++){
//         if(s[i]>='a' && s[i]<='z' || s[i] >= 'A' && s[i] <= 'Z'){
//             n++;
//         }
//     }

//     int words = pow(2,n);
//     while(words>0){
//         for(int i =0 ; i < s.length() ; i++){
//            if(s[i]>='a' && s[i]<='z'){
//             s[i] = toupper(s[i]);
//             ans.push_back(s);
//             words--;
//            }
//            else if(s[i] >= 'A' && s[i] <= 'Z'){
//             s[i] = tolower(s[i]);
//             ans.push_back(s);
//             words--;
//            }
//         }
//     }

//     return ans;
// }

// int main(){
//     string s = "abB";
//     vector<string> ans = permutation(s);
//     for(string a : ans){
//         cout<<a<<"  ";
//     }
// }