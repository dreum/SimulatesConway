#include "SimulatesConway.h"
#include "GeneratesWorldMock.h"
#include "OutputWorldMock.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace testing;

class SimulatesConwayTest : public Test 
{
public:
    SimulatesConwayTest()
        : MyGeneratesWorld()
        , MyOutputWorld()
        , Simulation(MyGeneratesWorld, MyOutputWorld)
    {}
    GeneratesWorldMock MyGeneratesWorld;
    OutputWorldMock MyOutputWorld;
    SimulatesConway Simulation;
};

TEST_F(SimulatesConwayTest, SimulateCallsGenerateWorldAndOutputWorld)
{
   World seedWorld;
   EXPECT_CALL(MyGeneratesWorld, Generate()).Times(AtLeast(1)).WillOnce(Return<World>(seedWorld));
   EXPECT_CALL(MyOutputWorld, Output(Eq(seedWorld)));
   Simulation.Simulate();
}
