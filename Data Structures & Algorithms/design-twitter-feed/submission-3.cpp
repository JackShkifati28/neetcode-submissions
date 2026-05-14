class Twitter {
    int time;
    unordered_map<int, unordered_set<int>> followMap;
    unordered_map<int, vector<pair<int, int>>> tweetMap;
public:
    Twitter() : time(0) {}

    void postTweet(int userId, int tweetId) {
        tweetMap[userId].push_back({time++, tweetId});
    }

    vector<int> getNewsFeed(int userId) {

        // priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> minHeap;
        priority_queue<pair<int,int>> maxHeap;

        for(auto & tw: tweetMap[userId]){
            maxHeap.push(tw);
        }

        if(followMap[userId].size() > 0){
            for(auto & id: followMap[userId]){
                for(auto & tw :tweetMap[id]){
                        maxHeap.push(tw);
                }
            }
        }
       
        vector<int> res;
        while(!maxHeap.empty() && res.size()<10){
            res.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        
        return res;
    }

    void follow(int followerId, int followeeId) {
        if (followerId != followeeId) {
            followMap[followerId].insert(followeeId);
        }
    }

    void unfollow(int followerId, int followeeId) {
        followMap[followerId].erase(followeeId);
    }
};
