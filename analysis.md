# Introduction

our group decide to choose FCFS, SJF and Priority shceduling algorithm for finding the bestclass scheduling solution

# Consideration

FCFS provides an efficient, simple and error-free process scheduling algorithm that saves valuable CPU resources. It uses nonpreemptive scheduling in which a process is automatically queued and processing occurs according to an incoming request or process order.
In Preemptive SJF Scheduling, jobs are put into the ready queue as they come. Although a process with short burst time begins, the current process is removed or preempted from execution, and the job which is shorter is executed 1st. SJF is frequently used for long term scheduling.
Priority Scheduling Algorithm.It used in Operating systems for performing batch processes. If two jobs having the same priority are READY, it works on a FIRST COME, FIRST SERVED basis. In priority scheduling, a number is assigned to each process that indicates its priority level. Lower the number, higher is the priority.
# Analysis

## FCFS
Given n course processes with their burst times and arrival times, the task is to find average waiting time and average turn around time using FCFS scheduling algorithm.
FIFO simply queues processes in the order they arrive in the ready queue. Here, the process that comes first will be executed first and next process will start only after the previous gets fully executed.

## Algo2 (SJF)

Start
scheduler selects the process from the waiting queue with the least completion time. Shortest course duration First is more desirable than FIFO algorithm because SJF is more optimal as it reduces average wait time which will increase the throughput.
This algorithm will consider with the arrival time unlike FCFS and priority scheduling.
   
Stop

## Algo3 (priority shceduling)

Priority scheduling is an unprotected algorithm and one of the most common scheduling algorithms in batch systems. Each process is scheduled for its first arrival. (Arrival steps less than before) If two processes have the same arrival time, compare with the priority. (Top Process First) Also, if two processes have the same priority, compare them with process numbers. (Less than previous process number)

This algorithm consider the importance of course unlike FCFS and SJF.

