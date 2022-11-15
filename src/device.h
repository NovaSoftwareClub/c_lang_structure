typedef struct {
    char* name;
    int releaseY;
    int price;
} Device;

void setDevice(Device* _deivce, char* _name, int _releaseY, int _price);

void setDeviceName(Device* _device, char* _name);

void setDeviceRealeaseY(Device* _device, int _releaseY);

void setDevicePrice(Device* _device, int _price);