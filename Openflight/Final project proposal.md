1. **Leading Question** 
We would like to figure out the shortest path between two airports with the minimum number of transfers, and compare the runtime and effectiveness of our algorithms using various datasets. 

2. **Dataset Acquisition and Processing** 
After our group discussion, we decide to use the dataset from openflights.org And we will mainly focus on the Airport subset of this data as it contains the airport id, name, city, latitude,  longitude, and altitude that we need to calculate the distances and formulate the graph. The data will be stored in a .csv format after getting rid of all the unwanted/error data of the original Airport subset since we realize that real-world data can be big and messy. For our graph structure, we will use the airport id as nodes and the path between them(if any) as edges.

3. **Graph Algorithms** 

BFS + Dijkstra's Algorithm + Landmark

BFS: 
For our graph traversal, we propose to implement a BFS using a double ended queue, also known as a deck. We expect the input to our queue to be the starting airport ID node. After that, we use a loop in which while the queue is not empty, we dequeue and process the node. We continue along the loop until the queue is completely empty. If the queue is empty, that means our BFS traversal has been completed. Time Complexity of BFS = O(V+E) where V is vertices and E is edges.
 
Dijkstra’s Algorithm: 
In order to find the shortest path between two locations, we utilize Dijkstra’s Algorithm which requires the starting airport ID and destination airport ID as two parameters. Those two IDs will specify two nodes in the graph of all airports which can be used by Dijkstra’s algorithm to find the shortest path. By implementing the algorithm correctly, the shortest path between two locations should be returned. If we use the priority queue for implementing the algorithm, the time complexity will be O(V + E(log V)) and the space complexity will be O(|V| + |E|). However, the worst case of time complexity when not using priority queue will be O(V^2) instead. 
 
**Landmark Algorithm**: 
The last algorithm to find the shortest path is LandmarK Algorithm, this method is based on the Dijkstra's Algorithm, To compute the information for a landmark, we use Dijkstra’s algorithm. For a path query between nodes S and
G, a simple and quick method for path generation is to concatenate the path from S to L (called the upswing) and the path from L to G (called the downswing). The length of the concatenated path is d(S, L) + d(L, G). its time complexity  will be O(V + E(log V)) and the space complexity will be O(|V| + |E|).

4. **Timeline** 
April 7 - sync to complete project proposal and team contract
April 9 - submit project proposal and team contract
April 12 - set up initial repository and Makefile
April 19 - finish repository setup, Data cleansing
April 21 - write finddist function, readFromFile function and pass simple tests
April 27 - write BFS iterator and verify with tests
April 27 - write Dijkstra’s and verify with tests
April 27 - write landmark and verify with tests
May 5 - Powerpoint done
May 7 - finish report
May 9 - sync to record final presentation
May 11 - finish editing presentation and submit
 

5. **Workload distribution**

1 Dataset Acquisition + Processing + report video: Jay Zhang

2 BFS  Graph Algorithms + tests: Yijia Gao

3 Dijkstra's Algorithm Graph Algorithms + tests : Suwen Wang

4 Landmark Algorithms + tests ;Jiewen Wei
 
 
 
