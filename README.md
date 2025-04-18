# 📘 DSA_PROJECT: Dijkstra-Based Travel Route Planner

## 🚀 Project Title
DSA_PROJECT – Optimal Travel Route Planner Using Dijkstra's Algorithm
---
## 👨‍💻 Team Members
- Rohit Mourya (B23ES1029)  
- Vishwaksen (B23BB1009)
---
## 📂 Description
This project implements a travel route planner using Dijkstra’s algorithm to compute the shortest or cheapest path between cities. It parses data from CSV files representing cities and available travel routes (with time, cost, and mode of transport), then generates a Google Maps visualization of the optimal route.
---
## ✨ Key Features
- Dijkstra's algorithm for optimal pathfinding (cost-based or time-based)  
- Real-world geographical data (latitudes and longitudes)  
- Input: Custom CSV files for cities and routes  
- Output: Dynamic HTML file with Google Maps visualization  
- User input: Select origin, destination, and optimization preference  
- Object-oriented design (classes for City, Route, Graph)  
- Modular file structure  
---
## 📁 Folder Structure
```
.
├── Main.cpp              → Entry point and main workflow  
├── GraphFunctions.h      → Dijkstra’s algorithm and graph utilities  
├── Location.h            → City node class  
├── Route.h               → Travel route class (bus/train/plane)  
├── Parser.h              → File parsing functions for CSV  
├── FileOperations.h      → I/O utilities for CSV and route handling  
├── output.html           → Generated Google Maps route (auto-created)  
├── cities.csv            → Input CSV of cities with lat/lon info  
├── routes.csv            → Input CSV of inter-city travel routes  
├── travel.make           → Makefile for compiling the project  
├── README.md             → Project documentation  
```
---

## 🧠 Data Structures Used
- Graph (Adjacency List)  
- Priority Queue (for Dijkstra’s algorithm)  
- Stack (to reconstruct and reverse paths)  
- Object-Oriented Classes:
  - Location (City node)
  - Route (Edge)
  - Graph (Main algorithm controller)
---
## 📊 CSV Input Format
### cities.csv
```
Country, City, Latitude, Longitude
```
Example:
```
India, Delhi, 28.6139, 77.2090
```
### routes.csv
```
Origin, Destination, TransportType, Time(Hrs), Cost($)
```
Example:
```
Delhi, Mumbai, train, 14, 80
```
---

## ⚙️ How to Run
1. Clone this repository or download the source code.  
2. Ensure g++ is installed on your system.  
3. Compile the project using:
```bash
make -f travel.make
```
4. Run the executable:
```bash
./travel_planner
```
5. Follow the prompts to enter:
- Origin city  
- Destination city  
- Preference: fastest or cheapest  
---
## 📌 Sample Run
### Input:
```
Origin: Delhi  
Destination: Mumbai  
Preference: cheapest
```
### Output:
```
✓ Optimal path found  
✓ Time: 14 hours  
✓ Cost: $80  
✓ output.html opened with Google Maps showing the path
```
---
## 🌐 Google Maps Integration
- Adds markers for each city  
- Draws polylines for routes  
- Clickable segments show mode, time, and cost  
- Powered by Google Maps JavaScript API  
---
## 📦 Compilation and Build
Use the provided Makefile to build the project:
```bash
make -f travel.make
```
This compiles all necessary .cpp and .h files into an executable.
---

## 🛠️ File Descriptions

| File               | Description                                           |
|--------------------|-------------------------------------------------------|
| Main.cpp           | Main execution logic                                  |
| Location.h         | City node class with coordinates and routes           |
| Route.h            | Travel edge class (bus/train/plane)                   |
| Parser.h           | Parses city and route data from CSV files             |
| FileOperations.h   | File utilities and data linkage                       |
| GraphFunctions.h   | Dijkstra's algorithm and graph traversal logic        |
| output.html        | Generated map-based visualization                     |
| travel.make        | Makefile for easy compilation                         |
---
## 📌 Technologies Used
- C++  
- STL (Vectors, Priority Queue, Maps, Stacks)  
- HTML + Google Maps JavaScript API  
---
## ✅ Assumptions and Constraints
- Cities are uniquely named (no duplicates)  
- All routes are directed and weighted  
- User must enter valid city names  
- Optimization is based on time or cost (only one at a time)  
---
## 💡 Learning Outcomes
- Implementation of Dijkstra’s algorithm using priority queues  
- Modular design with object-oriented programming in C++  
- File I/O operations for CSV parsing  
- Integration with web technologies (Google Maps API)  
- Debugging and managing multi-file C++ projects  
---
## 📅 Project Status
- ✅ Completed  
- 📄 Tested  
- 📁 All input/output formats verified  
- 🌐 Map output works offline (with embedded script and API call)  
---
## 🙌 Acknowledgements
- Google Maps API  
- C++ Standard Template Library  
- Online references for Dijkstra’s algorithm and graph traversal techniques
