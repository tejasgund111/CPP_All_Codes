#include <bits/stdc++.h>
using namespace std;

int main()
{

    // 1. number hashing
    // int arr[6] = {1,2,3,4,5,3};

    // int hashh[10] = {0}; // hashed array for storing counts

    // for(int i=0;i<6;i++){
    //     hashh[arr[i]]++;
    // }

    // for(int i=0;i<6;i++){
    //     cout << i << " "<< hashh[i] << endl;
    // }

    // maximum array size we can define in main functionn is 1e6 -> 10^6
    // maximum array size we can define globally outside main is 1e7 -> 10^7

    // 2.character hashing

    // string str = "abcdefg";
    // int hashh[26] = {0}; // we knew the string only composed of lowercase letters so size 26

    // for(int i=0;i<str.size();i++){
    //     hashh[str[i] - 'a']++;
    // }

    // for(int i=0;i<str.size();i++){
    //     cout << str[i] << " " << hashh[str[i] - 'a'] << endl;
    // }

    ////////////////////////////////////////////////////////

    // string str = "abcdefg";
    // int hashh[256] = {0}; // this is used when you dont know whether the string is composed of lowercase or capitalcase letters
    // for (int i = 0; i < str.size(); i++)
    // {
    //     hashh[str[i]]++; // it will autocast the characters to ascii values
    // }
    // for (int i = 0; i < str.size(); i++)
    // {
    //     cout << str[i] << " " << hashh[str[i]] << endl;
    // }



    // 3. map 
    // map stores all the values in sorted order
    // storing as well as fetching takes log(n) time -> n is the number of elements -> best average worst
    // int arr[7] = {2,3,4,5,3,2,8};
    // map<int, int> mp;

    // for(int i = 0;i<7;i++){
    //     mp[arr[i]]++;
    // }
    // for(int i=0;i<7;i++){
    //     cout << arr[i] << " " << mp[arr[i]] << endl;
    // }
    // for(auto i:mp){
    //     cout << i.first << "->"<< i.second << endl;
    // }

    // unordered_map takes O(1) time -> storing and fetching -> best and average case
    // O(n) -> worst case -> happens very rarely

    return 0;
}