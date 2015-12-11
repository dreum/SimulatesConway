#ifndef OUTPUTWORLDMOCK_H
#define OUTPUTWORLDMOCK_H

#include "OutputWorldInterface.h"
#include "World.h"
#include <gmock/gmock.h>

class OutputWorldMock : public OutputWorldInterface
{
public:
   OutputWorldMock();

   MOCK_METHOD1(Output, void(const World&));
};

#endif // OUTPUTWORLDMOCK_H
