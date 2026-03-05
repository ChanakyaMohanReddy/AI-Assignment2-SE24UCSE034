# Q3 – BFS and DFS Implementation (Uninformed Search)

# Aim : To implement Breadth First Search (BFS) and Depth First Search (DFS) algorithms for an Uninformed Search Problem.

# Problem Used: Water Jug Problem

Two jugs are given:

* Jug A = 4 Litres
* Jug B = 3 Litres

Initially both jugs are empty (0,0).

The goal is to obtain exactly 2 litres of water in any one of the jugs.


# State Representation

Each state is represented as:

(x, y)

Where:

x = amount of water in 4L jug
y = amount of water in 3L jug

Example states:

 (0,0) → Both jugs empty
 (4,0) → 4L jug full
 (4,3) → Both jugs full


# Operations Allowed

1. Fill 4L jug
2. Fill 3L jug
3. Empty 4L jug
4. Empty 3L jug
5. Pour water from 4L jug to 3L jug
6. Pour water from 3L jug to 4L jug


# Goal Condition

The goal is reached when:

x = 2  OR  y = 2

Meaning one of the jugs contains exactly 2 litres of water.


# Algorithms Implemented:

# Breadth First Search (BFS)

* Explores nodes level by level
* Uses a queue
* Guarantees shortest path to solution

#Output BFS:
(0 , 0)
(4 , 0)
(0 , 3)
(4 , 3)
(1 , 3)
(3 , 0)
(1 , 0)
(3 , 3)
(0 , 1)
(4 , 2)
Target reached


# Depth First Search (DFS)

 Explores nodes deep first
 Uses recursion or stack
 Uses less memory but may not give shortest path


#OUTPUT DFS:
(0 , 0)
(4 , 0)
(4 , 3)
(0 , 3)
(3 , 0)
(3 , 3)
(4 , 2)
Target reached

## Variants of BFS and DFS

| Algorithm | Variant | Description |
|----------|---------|-------------|
| BFS | Level Order BFS | Explores nodes level by level in tree structures |
| BFS | Bidirectional BFS | Performs search from both start and goal nodes |
| DFS | Depth Limited Search (DLS) | DFS with a fixed depth limit |
| DFS | Iterative Deepening DFS (IDDFS) | Repeated DFS with increasing depth limits |

# Comparison

| Algorithm | Data Structure    | Memory | Path Optimal |
| --------- | ----------------- | ------ | ------------ |
| BFS       | Queue             | High   | Yes          |
| DFS       | Stack / Recursion | Low    | Not always   |


# Conclusion

Both BFS and DFS are uninformed search strategies used in Artificial Intelligence to explore the state space of a problem.
In this program, they are applied to the Water Jug Problem to reach the target state of 2 litres.
