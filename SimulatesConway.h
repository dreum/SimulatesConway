#ifndef SIMULATESCONWAY_H
#define SIMULATESCONWAY_H

class GeneratesWorldInterface;
class SimulatesConway
{
public:
    SimulatesConway(const GeneratesWorldInterface& worldGenerator);
    void Simulate();
private:
    SimulatesConway(const SimulatesConway&);
    const SimulatesConway& operator=(const SimulatesConway&);

    const GeneratesWorldInterface& WorldGenerator;
};

#endif // SIMULATESCONWAY_H
