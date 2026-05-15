class MedianFinder {
private:
priority_queue <int, vector<int>, greater<int>> minHeap;
priority_queue<int> maxHeap;

public:
    MedianFinder() {
    
    }
    
   void addNum(int num) {
        // Step 1: Route the number through maxHeap to minHeap
        maxHeap.push(num);
        minHeap.push(maxHeap.top());
        maxHeap.pop();

        // Step 2: Rebalance if minHeap becomes larger than maxHeap
        // We maintain the invariant: maxHeap.size() >= minHeap.size()
        if (maxHeap.size() < minHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    
    double findMedian() {
        // If total size is even, both heaps have the same size
        if (maxHeap.size() == minHeap.size()) {
            // Note the "2.0" to prevent integer division truncation!
            return (maxHeap.top() + minHeap.top()) / 2.0; 
        }
        
        // If total size is odd, maxHeap is guaranteed to have the extra element
        return maxHeap.top();
    }
};
