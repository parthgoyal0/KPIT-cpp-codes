#include "device.h"
#include "deviceType.h"

Device::Device(int id, const std::string& name, float price, DeviceType type, float sar_value)
    : _id(id), _name(name), _price(price), _sar_value(sar_value), _type(type) {
}

int Device::GetId() const { return _id; }
const std::string& Device::GetName() const { return _name; }
float Device::GetPrice() const { return _price; }
float Device::GetSarValue() const { return _sar_value; }
DeviceType Device::GetType() const { return _type; }

std::ostream &operator<<(std::ostream &os, const Device &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _price: " << rhs._price
       << " _sar_value: " << rhs._sar_value
       << " _type: " << DisplayEnum(rhs._type);
    return os;
}

std::string DisplayEnum(DeviceType value){
    if(value == DeviceType::Accessory){
        return "ACCESSORY";
    }
    if(value == DeviceType::WORKSTATION){
        return "WORKSTATION";
    }
    else{
        return "MOBILE";
    }
}


