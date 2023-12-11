#include <iostream>
#include <functional>
#include "Functionalities.h"

using Container = std::vector<std::shared_ptr<Device>>;

int main() {
    Container device = CreateObjects();

    // Lambda function f1
    auto f1 = [](const Device& device) {
        std::cout << "SAR Value of " << device.GetName() << ": " << device.GetSarValue() << std::endl;
        std::cout << "Price of " << device.GetName() << ": " << device.GetPrice() << std::endl;
    };

    // Lambda function f2
    auto f2 = [](const Device& device) {
        switch (device.GetType()) {
            case DeviceType::MOBILE:
                std::cout << "ID of " << device.GetName() << ": " << device.GetId() << std::endl;
                break;
            case DeviceType::WORKSTATION:
                std::cout << "Name of " << device.GetName() << ": " << device.GetName() << std::endl;
                break;
            case DeviceType::Accessory:
                std::cout << "SAR Value of " << device.GetName() << ": " << device.GetSarValue() << std::endl;
                break;
        }
    };

    // ShowResults function to display information using provided functions
    auto ShowResults = [](Container& deviceContainer,
                          std::function<void(Device&)> func) {
        for (const auto& device : deviceContainer) {
            func(*device);
        }
    };

    // Invoke ShowResults with different functions
    std::cout << "Discount Prices:" << std::endl;
    ShowResults(device, FindDiscountPrice);

    std::cout << "\nTax Amounts:" << std::endl;
    ShowResults(device, FindTaxAmount);

    std::cout << "\nf1:" << std::endl;
    ShowResults(device, f1);

    std::cout << "\nf2:" << std::endl;
    ShowResults(device, f2);

    return 0;
}
