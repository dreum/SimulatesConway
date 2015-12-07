#include "SimulatesConway.h"
#include "GeneratesWorldMock.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace testing;

class SimulatesConwayTest : public Test 
{
public:
    SimulatesConwayTest()
        : Simulation(MyGeneratesWorld)
    {}
    GeneratesWorldMock MyGeneratesWorld;
    SimulatesConway Simulation;
};

TEST_F(SimulatesConwayTest, SimulateCallsGeneratesSeedWorld)
{
    World seedWorld;
    EXPECT_CALL(MyGeneratesWorld, Generate()).Times(AtLeast(1)).WillOnce(Return<World>(seedWorld));
    Simulation.Simulate();
}
