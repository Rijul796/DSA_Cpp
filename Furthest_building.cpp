#include <bits/stdc++.h>
using namespace std;

int furthestBuilding(vector<int> &heights, int bricks, int ladders)
{
    int n = heights.size();
    if (n == 1)
        return 0;
    priority_queue<int> pq;
    int i = 0;
    for (; i < n - 1; i++)
    {
        if (heights[i + 1] <= heights[i])
            continue;
        int diff = heights[i + 1] - heights[i];
        if (bricks >= diff)
        {
            bricks -= diff;// We subtract the height difference from the bricks available, indicating that we have used these bricks to climb.
            pq.push(diff);// We push the height difference onto the priority queue pq. This records the height difference for potential future use if we need to use a ladder.
        }
        else if (ladders > 0)
        {
            if (!pq.empty())
            {
                int past_bricks = pq.top();// We retrieve the largest height difference (previously used bricks) from the priority queue.
                if (past_bricks > diff)//if the largest height difference (past bricks) is greater than the current height difference. If it is, it means that we can replace the previously used bricks with the current height difference by using a ladder.
                {
                    bricks += past_bricks;//We add the previously used bricks back to the available bricks, as we are going to use a ladder instead.
                    pq.pop();//We remove the largest height difference (previously used bricks) from the priority queue.
                    bricks -= diff;//We subtract the current height difference from the available bricks, indicating that we have used these bricks to climb.
                    pq.push(diff);//We push the current height difference onto the priority queue. This records the height difference for potential future use if we need to use another ladder.
                }
            }
            ladders--;
        }
        else
            break;
    }
    return i;
}

int main()
{
    vector<int> v;
    int n;
    int x;
    cout << "enter length of array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int bricks,ladders;
    cout<<"enter number of ladders: ";
    cin>>bricks>>ladders;
    cout<<furthestBuilding(v,bricks,ladders);
    return 0;
}