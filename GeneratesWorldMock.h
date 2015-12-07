#ifndef GENERATESWORLDMOCK_H
#define GENERATESWORLDMOCK_H

#include "GeneratesWorldInterface.h"
#include <gmock/gmock.h>

class GeneratesWorldMock : public GeneratesWorldInterface
{
public:
    GeneratesWorldMock();

    MOCK_CONST_METHOD0(Generate, const World());
};

#endif // GENERATESWORLDMOCK_H
