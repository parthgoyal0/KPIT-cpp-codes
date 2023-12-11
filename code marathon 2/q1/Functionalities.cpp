#include "Functionalities.h"
#include <iostream>
#include "device.h"
using Container = std::vector<std::shared_ptr<Device>>;

Container CreateObjects() {
    Container devices;

    devices.push_back(std::make_shared<Device>(1, "Mobile1", 500.0f, DeviceType::MOBILE));
    devices.push_back(std::make_shared<Device>(2, "Mobile2", 600.0f, DeviceType::MOBILE));
    devices.push_back(std::make_shared<Device>(3, "Workstation1", 1500.0f, DeviceType::WORKSTATION));
    devices.push_back(std::make_shared<Device>(4, "Accessory1", 30.0f, DeviceType::Accessory));
    devices.push_back(std::make_shared<Device>(5, "Workstation2", 2000.0f, DeviceType::WORKSTATION));

   return devices;
}

void FindDiscountPrice(Device& device) {
    float discount = 0.0f;
    if (device.GetType() == DeviceType::MOBILE || device.GetType() == DeviceType::WORKSTATION) {
        discount = 0.1f * device.GetPrice();
    } else if (device.GetType() == DeviceType::Accessory) {
        discount = 0.2f * device.GetPrice();
    }

    std::cout << "Discount Price for " << device.GetName() << ": " << device.GetPrice() - discount << std::endl;
}

void FindTaxAmount(Device& device) {
    float tax = 0.0f;
    if (device.GetSarValue() >= 1.0f && device.GetSarValue() <= 1.5f) {
        tax = 0.18f * device.GetPrice();
    } else if (device.GetSarValue() > 1.5f && device.GetSarValue() <= 2.0f) {
        tax = 0.28f * device.GetPrice();
    }

    std::cout << "Tax Amount for " << device.GetName() << ": " << tax << std::endl;
}
