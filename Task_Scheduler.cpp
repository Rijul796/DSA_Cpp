#include <bits/stdc++.h>
using namespace std;
int leastInterval(vector<char> &tasks, int n)
{
    unordered_map<char, int> freqMap;
    for (char task : tasks)
        freqMap[task]++; // Count the frequency of each task
    vector<int> frequencies;
    for (const auto &pair : freqMap)
        frequencies.push_back(pair.second);
    sort(frequencies.begin(), frequencies.end(), greater<int>()); // Sort the frequencies in descending order
    // Calculate the idle slots
    int maxFreq = frequencies[0];
    int idleSlots = (maxFreq - 1) * n;
    // Fill in idle slots with other tasks
    int s=frequencies.size();
    for (int i = 1; i < s; ++i)
        idleSlots -= min(maxFreq - 1, frequencies[i]);
    idleSlots = max(0, idleSlots);   // If idle slots become negative, there's no need for idle time
    return tasks.size() + idleSlots; // Total time needed is the sum of tasks and idle slots
}
int main()
{
    vector<char>v;
    int x;
    cout<<"enter number of tasks: ";
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        char a;
        cin>>a;
        v.push_back(a);
    }
    
    int n;
    cout<<"enter cooling time: ";
    cin>>n;
    cout<<leastInterval(v,n);
    return 0;
}