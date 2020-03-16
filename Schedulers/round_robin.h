#ifndef ROUND_ROBIN_H_
#define ROUND_ROBIN_H_

#include "../scheduler.h"

class RoundRobin : public Scheduler
{
private:
    unsigned long long quantum;

public:
    RoundRobin(unsigned long long quantum);
    virtual void addProcess(Process process);
    virtual vector<pair<string, unsigned long long>> generateTimeline();
};

#endif /* ROUND_ROBIN_H_ */