#pragma once
#include <unordered_map>
#include <fstream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <tuple>
//#include "map.h"
#include "fmap.h"
using namespace std;

enum airlineCSVMeanings {
    AIRLINE_ID,
    AIRLINE_NAME,
    AIRLINE_ALIAS,
    AIRLINE_IATA,
    AIRLINE_ICAO
};

class OpenFlights {
    public:
        OpenFlights(const string &airportFile, const string &routeFile);
        vector<string> BFS(int start);
        vector<string> BFS(int start, int destination);
        tuple<vector<string>,double> dijkstra(int start, int destination);
        tuple<vector<string>,double> landmark(int start, int landmark, int destination);
        int convertToId(string location);
    
    private:
        string airportFile_;
        string routeFile_;
        FMap flightMap_;
        
        void constructMap();
        void insertAirports();
        void insertFlights();

        vector<string> parseCSVLine(const string &line);
};
