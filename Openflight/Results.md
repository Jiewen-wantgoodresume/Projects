**Results**:

Collecting and cleaning data into CSV, dat files

Implemented a Breadth-First Search

Implemented a Dijkstra’s Algorithm

Implemented a Landmark Algorithm 


In this final project, we are able to finish all of our set goals in our project proposal.In the following, we will present some of the most important implementations that are achieved in this project. 

During the data collecting and processing stage, we have mainly used two subsets of the data we get from openflights.org.
The first one is the airports subset which includes airport id, name, city, latitude, longitude, and the second one is the routes subset which includes all the possible flight routes.
What’s more, we have a helper function that allows us to calculate the spherical distance in kilometers between two airports using the Haversine formula. 

**BFS**:
Our project consists of three main algorithms. The first component is the BFS traversal which we wrote to find the route from the start airport to the destination airport and then stops the search. After that, we coded Dijkstra’s algorithm in order to find the shortest path between one airport and any other airport in our dataset.
After that, we implemented a landmark path using Dijkstra’s algorithm in order to find the shortest distance between start and destination airports going through landmarks. Our BFS traversal is the first algorithm in our project. To implement BFS, we used a queue. We first mark all our airports as not visited and initialize BFS by enqueuing or adding our source and starting node.
After that, we entered a loop in which while the queue was not empty, we processed this node, which meant deleting and printing out the node.Then, we added that node’s adjacent neighbors to the back of the queue and then continued along the loop. If the current node equals the destination node, that means our destination is reached and we should stop.
However, if our current node is not equal to the destination node, that means no path could be found between start and destination using BFS. In the end, we returned the airport code path. The BFS traversal for finding the route from the start airport and destination airport is now finished.

**Dijkstra’s Algorithm**：
The reason for us to use this algorithm is that it can be used on weighted edges to find the shortest path between two nodes, which is exactly what we need to do for this project. Then, in order to implement this algorithm, we need three things: a visited set, a tentative distance value for each node, and a priority queue.
Specifically, in our project, the parameters for this function is start and destination, two int representing the two nodes that we are trying to find the shortest path in between. At the very beginning, we will check the edge cases. Then, we used three vectors distanceFromStart, previous, and unvisited to keep track of our visited set, tentative distance value for each node, and priority queue.
Before anything else, we will set all distances to infinity since we don’t know any distance yet. At this stage, our visited vector is empty. Then we will start to deal with each specific node such as adding them to the priority queue and pop elements from the priority queue until we reach the end.
Afterwards, we will traceback from destination to start, and convert airports ids to airport code. 

**Landmark Algorithm** :
In general, there are three procedures for the Landmark algorithm:
Firstly, we determine one vertex as a landmark between two nodes. Secondly, we can calculate the shortest path between each node and landmark. For the last step, we add two parts together and choose the minimum one.
Our goal is to find the shortest distance between two airports in our project.We randomly choose one airport between the starting point and ending point.
Firstly, we use the Dijkstra Algorithm to calculate the distance from the starting airport to the landmark, the distance from the landmark to the ending airport.
Secondly, for the situation that there is no path between two airports, we will return T. Otherwise, we would add two distances together as the path we get from the Landmark Algorithm.
Compared with Dijkstra’s Algorithm, the landmark algorithm cannot guarantee to have the shortest path. Sometimes, a landmark would add more distance.
The total distance with a landmark is more than the distance we found without a landmark, and it would include more flights when we have a landmark.

All in all, our project is able to process the data from the open flights dataset and find the shortest, most efficient path between two given input airports. 

