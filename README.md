# ofxRealsense - openFrameworks addon for working with Intel Realsense 415,435,435i cameras

## 바꾼것.
원본 애드온은 https://github.com/perevalovds/ofxRealsense
거기에..얼라인 기능 사용 위해 https://github.com/P-A-N/ofxLibRealSense2P의 src를 덮었음. 
따라서 example-pointcloud는 작동 안함..이건 원본 것임..
덮어쓴 ofxLibRealSense2P의 example을 추가함.


Author: Denis Perevalov

## Installing

Just use Project Generator to add addon.

No additional installation is required.

In *docs* folder see Intel's document describing camera specifics.

In *tools* folder located *realsense-viewer.exe* file from Intel SDK for checking that camera is working. 


## Examples

Addons comes with *example-pointcloud* example, which shows point cloud, colored depth images, IR and RGB images.

Use mouse to rotate, scale and move point cloud, double click - reset to default position.

![example-pointcloud](https://github.com/perevalovds/ofxRealsense/raw/master/docs/example-pointcloud_shot.jpg "example-pointcloud screenshot")


## Supported OS, oF version

Windows 10, oF 0.10.1, Visual Studio C++ 2017, 64/32 bit

Used Intel Realsense SDK version: Intel.RealSense.SDK-WIN10-2.30.0.1174.

By default, addon is configured to 64 bit.

For switching to 32 bit, comment/uncomment "vs" part of addon_config.mk for enabling 32 bit, and copy to libs/Win32 folder lib and dlls from libs-32-copy-if-need.

## Credits

Intel Realsense SDK link: https://github.com/IntelRealSense/librealsense

During development, I used ideas and links from analogous addons: 
* https://github.com/hiroMTB/ofxRealsense2 
* https://github.com/tecartlab/ofxRSSDK 
* http://www.ofxaddons.com/contributors/tyhenry 

but designed the addon by my own taste.
