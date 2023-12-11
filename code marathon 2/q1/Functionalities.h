#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <memory>
#include <vector>
#include <functional>
#include "device.h"
using Container = std::vector<std::shared_ptr<Device>>;
Container CreateObjects();
void FindDiscountPrice(Device& device);
void FindTaxAmount(Device& device);

#endif // FUNCTIONALITIES_H
