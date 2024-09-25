#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Process {
public:
    string name;
    int burst_time;
    int arrival_time;
    int completion_time;
    int waiting_time;
    int turnaround_time;

    Process(string name, int burst_time, int arrival_time) : 
        name(name), burst_time(burst_time), arrival_time(arrival_time), 
        completion_time(0), waiting_time(0), turnaround_time(0) {}
};

vector<Process> fcfs_scheduling(vector<Process> processes) {
    // Sort processes by arrival time (FCFS)
    sort(processes.begin(), processes.end(), [](const Process& a, const Process& b) {
        return a.arrival_time < b.arrival_time;
    });

    int current_time = 0;
    for (auto& process : processes) {
        // If a process arrives before the current time, wait until it arrives
        if (process.arrival_time > current_time) {
            current_time = process.arrival_time;
        }

        process.completion_time = current_time + process.burst_time;
        process.waiting_time = process.completion_time - process.arrival_time - process.burst_time;
        process.turnaround_time = process.completion_time - process.arrival_time;

        current_time = process.completion_time;
    }

    return processes;
}

int main() {
    vector<Process> processes = {
        Process("P1", 5, 2),
        Process("P2", 2, 5),
        Process("P3", 6, 1),
        Process("P4", 3, 0),
        Process("P5", 5, 4)
    };

    vector<Process> completed_processes = fcfs_scheduling(processes);

    cout << "Process | Burst Time | Arrival Time | Completion Time | Waiting Time | Turnaround Time" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    for (const Process& process : completed_processes) {
        cout << process.name << "       | " << process.burst_time << "       | " << process.arrival_time << "        | " << process.completion_time << "       | " << process.waiting_time << "       | " << process.turnaround_time << endl;
    }

    return 0;
}