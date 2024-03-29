// mz8023yt@163.com 20180321 begin >>> [11/11] add usb net driver
#ifndef __USB4640_H__
#define __USB4640_H__

#define USB4640_NAME "usb4640"

enum usb4640_mode {
	USB4640_MODE_UNKNOWN = 1,
	USB4640_MODE_HUB,
	USB4640_MODE_STANDBY,
};

struct usb4640_platform_data {
	enum usb4640_mode	initial_mode;
	int			gpio_reset;
};

#endif
// mz8023yt@163.com 20180321 end   <<< [11/11] add usb net driver