#IFNDEF DUALSENSE_HPP
#DEFINE DUALSENSE_HPP
namespace Dualsense {
  namespace Microphone {
      constexpr const char* DeviceLocation = "/dev/dualsense/microphone0"
      constexpr const char* DriverLocation = "/opt/shadowblade/lynx.drivers/microphone.km"
      static void ConfigureDevice(DeviceID, DeviceName, Volume, Channels);
      static void EnableDevice(DeviceID);
      static void AddDevice(DeviceID);
      static void RemoveDevice(DeviceID);
      static void DisableDevice(DeviceID);
      static void MuteDevice(DeviceID);
  namespace Speaker {
    constexpr const char* DeviceLocation = "/dev/dualsense/speaker0";
    constexpr const char* DriverLocation = "/opt/shadowblade/lynx.drivers/audiodevice.km";
    static void ConfigureDevice(DeviceID, DeviceName, Volume, Channels);
    static void EnableDevice(DeviceID);
    static void AddDevice(DeviceID);
    static void RemoveDevice(DeviceID);
    static void DisableDevice(DeviceID);
}
  namespace GamepadController {
    constexpr const char* Button_Face_A = 0x01
    constexpr const char* Button_Face_B = 0x0
}
#ENDIF
