#include "AddUrl.h"
#include "BloomFilter.h"

// constuctor
AddUrl::AddUrl(BloomFilter *bF) : bF(bF) {}

// add the given URL to the BF
void AddUrl::execute(string url)
{
    this->bF->addUrl(url);
}