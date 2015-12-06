#include "SimulatesConway.h"
#include <gtest/gtest.h>

using namespace testing;

class SimulatesConwayTest : public Test
{
public:
    SimulatesConway Simulation;
};

TEST(SimulatesConwayTest, FailingTest)
{
    EXPECT_TRUE(false);
}
