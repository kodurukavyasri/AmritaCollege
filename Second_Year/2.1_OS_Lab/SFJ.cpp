#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Process {
public:
    string name;
    int burst_time;
    int arrival_time;
    int remaining_time;
    int completion_time;
    int waiting_time;
    int turnaround_time;

    Process(string name, int burst_time, int arrival_time) : 
        name(name), burst_time(burst_time), arrival_time(arrival_time), 
        remaining_time(burst_time), completion_time(0), waiting_time(0), turnaround_time(0) {}
};

vector<Process> sjf_non_preemptive(vector<Process> processes) {
    // Sort processes by arrival time
    sort(processes.begin(), processes.end(), [](const Process& a, const Process& b) {
        return a.arrival_time < b.arrival_time;
    });

    int current_time = 0;
    vector<Process> completed_processes;
    vector<Process> ready_queue;

    while (completed_processes.size() < processes.size()) {
        // Add processes to the ready queue as they arrive
        for (auto& process : processes) {
            if (find(ready_queue.begin(), ready_queue.end(), process) == ready_queue.end() &&
                process.arrival_time <= current_time) {
                ready_queue.push_back(process);
            }
        }

        // Choose the process with the shortest remaining burst time
        if (!ready_queue.empty()) {
            auto shortest_process_it = min_element(ready_queue.begin(), ready_queue.end(), [](const Process& a, const Process& b) {
                return a.remaining_time < b.remaining_time;
            });
            Process& shortest_process = *shortest_process_it;

            // Execute the shortest process
            current_time += shortest_process.remaining_time;
            shortest_process.completion_time = current_time;
            shortest_process.waiting_time = shortest_process.completion_time - shortest_process.arrival_time - shortest_process.burst_time;
            shortest_process.turnaround_time = shortest_process.completion_time - shortest_process.arrival_time;

            // Remove the completed process from the ready queue and add it to the completed list
            ready_queue.erase(shortest_process_it);
            completed_processes.push_back(shortest_process);
        } else {
            current_time += 1;
        }
    }

    return completed_processes;
}

int main() {
    vector<Process> processes = {
        Process("P1", 5, 2),
        Process("P2", 2, 5),
        Process("P3", 6, 1),
        Process("P4", 3, 0),
        Process("P5", 5, 4)
    };

    vector<Process> completed_processes = sjf_non_preemptive(processes);

    cout << "Process | Burst Time | Arrival Time | Completion Time | Waiting Time | Turnaround Time" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    for (const Process& process : completed_processes) {
        cout << process.name << "       | " << process.burst_time << "       | " << process.arrival_time << "        | " << process.completion_time << "       | " << process.waiting_time << "       | " << process.turnaround_time << endl;
    }

    return 0;
}