/*
Problem Statement
The algorithms prioritize the processes that must be carried out and schedule them accordingly. 
A higher-priority process will receive CPU priority first, and this will continue until all of 
the processes are finished. Due to the process’ greater priority, the Priority Scheduling 
Algorithm is in charge of transferring it from the ready queue to the work queue.

Input:
{{1, 10, 2}, {2, 5, 0}, {3, 8, 1}}

Output:
Order in which processes get executed 
1 3 2

Processes Burst time Waiting time Turn around time
1 10 0 10
3 8 10 18
2 5 18 23

Average waiting time = 9.33333
Average turn around time = 17

*/
// Start your code here