// FCFS
// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long int

// void findwaitingtime(int n, int bt[], int wt[]){
//     wt[0] = 0;

//     for(int i = 1; i < n; i++){
//         wt[i] = bt[i-1] + wt[i-1];
//     }
// }

// void findturnaroundtime(int n, int bt[], int wt[], int tat[]){
//     for(int i = 0; i < n; i++){
//         tat[i] = bt[i] + wt[i];
//     }
// }

// void findavgtime(int n, int bt[]){
//     int wt[n], tat[n], total_wt = 0, total_tat = 0;

//     findwaitingtime(n, bt, wt);
//     findturnaroundtime(n, bt, wt, tat);

//     cout << "Processes " << " Burst time " << " Waiting time "
//         << " Turn around time " << endl;

//     for(int i = 0; i < n; i++){
//         total_wt += wt[i];
//         total_tat += tat[i];
//         cout << i+1 << "\t\t" << bt[i] << "\t" << wt[i] << "\t\t" << tat[i] << endl;
//     }

//     cout << "Average waiting time = " << (float)total_wt/ (float)n << endl;
//     cout << "Average turn around time = " << (float)total_tat/ (float)n << endl;
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int processes[] = {1, 2, 3};
//     int n = sizeof processes / sizeof processes[0];

//     int bt[] = {10, 5, 8};

//     findavgtime(n, bt);

//     return 0;

// }

// //Round robin
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of processes ";
//     cin >> n;

//     int at[n], ct[n], bt[n], wt[n], tat[n];

//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         tat[i] = ct[i] - at[i];/////////////////////////
//         cout << "Turn around time for the process " << (i+1) << " is : " << tat[i];

//     }
//     int total_tat = 0;
//     for (int i = 0; i < n; i++){
//         total_tat += tat[i];
//     }
//     int avg_tat = total_tat/n;
//     cout << "Total turn around time is : " << total_tat << endl;
//     cout << "Average turn around time is : " << avg_tat << endl;

//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         wt[i] = tat[i] - bt[i];////////////////////////////
//         cout << "Waiting time for process " << (i+1) << " is :" << wt[i] << endl;
//     }
//     int total_wt = 0;
//     for (int i = 0; i < n; i++){
//         total_wt += wt[i];
//     }
//     int avg_wt = total_wt/n;
//     cout << "Total waiting time is : " << total_wt << endl;
//     cout << "Average waiting time is : " << avg_wt << endl;

//     return 0;

// }

// // FIFO
// #include <bits/stdc++.h>
// using namespace std;

// int pageFaults(int pages[], int n, int capacity)
// {
//     unordered_set<int> s;
//     queue<int> indexes;

//     int page_faults = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (s.size() < capacity)
//         {
//             if (s.find(pages[i]) == s.end())
//             {
//                 s.insert(pages[i]);
//                 page_faults++;
//                 indexes.push(pages[i]);
//             }
//         }
//         else{
//             if(s.find(pages[i]) == s.end()){
//                 int val = indexes.front();
//                 indexes.pop();
//                 s.erase(val);

//                 s.insert(pages[i]);
//                 indexes.push(pages[i]);
//                 page_faults++;
//             }
//         }
//     }
//     return page_faults;
// }

// int main()
// {
//     int pages[] = {7, 0, 1, 2, 3, 0, 4, 2, 3, 0, 3, 2, 3};
//     int n = sizeof(pages) / sizeof(pages[0]);
//     int capacity = 3;
//     cout << pageFaults(pages, n, capacity);
//     return 0;
// }












// // LRU2
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int capacity = 4;
//     int arr[] = {7, 0, 1, 2, 0, 4, 2, 3, 0, 3, 2, 3};

//     deque<int> q(capacity);
//     int count = 0;
//     int page_faults = 0;
//     deque<int>::iterator itr;
//     q.clear();

//     for(int i : arr){
//         itr = find(q.begin(), q.end(), i);
//         if(itr == q.end()){
//             ++page_faults;

//             if(q.size() == capacity){
//                 q.erase(q.begin());
//                 q.push_back(i);
//             }
//             else{
//                 q.push_back(i);
//             }
//         }
//         else{
//             q.erase(itr);
//             q.push_back(i);
//         }
//     }
//     cout << page_faults;

//     return 0;
// }













#include <bits/stdc++.h>
using namespace std;

void optimalPage(int pg[], int pn, int fn){
    vector<int> fr;

    int hit = 0;
}

int main(){
    
    int pg[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int pn = sizeof(pg)/sizeof(pg[0]);
    int fn = 4;
    optimalPage(pg, pn, fn);

    return 0;
}