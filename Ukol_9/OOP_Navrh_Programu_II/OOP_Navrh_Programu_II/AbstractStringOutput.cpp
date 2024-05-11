#include "AbstractStringOutput.h"

AbstractStringOutput::AbstractStringOutput()
{}

AbstractStringOutput::~AbstractStringOutput()
{
    if (__DEBUG) std::cout << "AbstractStringOutput::~AbstractStringOutput()" << std::endl;
}
