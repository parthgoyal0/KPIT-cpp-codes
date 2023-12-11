#ifndef DEVICE_H
#define DEVICE_H
#include <iostream>
#include <string>
#include "deviceType.h"


class Device {
private:
    
    int _id;
    std::string _name;
    float _price;
    float _sar_value;
    DeviceType _type;

public:
    Device(int id, const std::string& name, float price, DeviceType type, float sar_value = 1.0f);
    Device() = default;
    Device(const Device&) = delete;
    Device(Device&&) = delete;
    Device& operator=(const Device&) = delete;
    Device& operator=(Device&&) = delete;
    ~Device() = default;


    int GetId() const;
    const std::string& GetName() const;
    float GetPrice() const;
    float GetSarValue() const;
    DeviceType GetType() const;    

    // int id() const { return _id; }
    // std::string name() const { return _name; }
    // float price() const { return _price; }
    // float sarValue() const { return _sar_value; }
    // DeviceType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Device &rhs);

};
std::string DisplayEnum(DeviceType value);

#endif // DEVICE_H
