# Final Project - Open Flights

## Video Link
https://www.youtube.com/watch?v=E88QfiWdWwI&ab_channel=JayZhang

## Group Members
- shujie2
- suwenw2
- jiewenw2
- yijiag3

## Leading Question
Our program uses data from Open Flights to find the shortest path between two airports. We use BFS Traversal to find the shortest airports can land to and Dijkstra's algorithm to calculate the total distances of the trip.

## How to use our Program?
To download our program, please copy and paste this line to your terminal:
```bash
git clone https://github-dev.cs.illinois.edu/cs225-sp21/shujie2-suwenw2-jiewenw2-yijiag3.git
```
### First you need to edit input:
Open input.txt, enter IATA codes of desired airports (3-letter codes ex. Chicago Midway -> MDW). Capitalization does not matter, and invalid airports will be filtered by program. Each code must be on its own line in input.txt
- To change starting airport for BFS, enter IATA code at top of input.txt file (location is noted in file and these instructions are also seen in file)
- To change airports for shortest path algorithms:
Each test case must have 3 airports, in following order: Starting location; Destination location; Landmark location;

### Second, run:
```bash
make
```
in the terminal.
The makefile will create a executable file which is named 'flight' Run this command in the terminal:
```bash
./flight
```
Your results will export automatically in terminal window or you can open the output.txt file which is located in your root folder.
