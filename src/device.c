#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "device.h"

void setDevice(Device* _device, char* _name, int _releaseY, int _price){
    setDeviceName(_device, _name);
    setDevicePrice(_device, _price);
    setDeviceRealeaseY(_device, _releaseY);
}

void setDeviceName(Device* _device, char* _name){
    (*_device).name = (char*)malloc(strlen(_name) * sizeof(char));
    strcpy((*_device).name, _name);
}

void setDeviceRealeaseY(Device* _device, int _releaseY){
    (*_device).releaseY = _releaseY;
}

void setDevicePrice(Device* _device, int _price){
    (*_device).price = _price;
}