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
// Face Buttons
    constexpr const uint8_t Button_Face_A = 0x01;
    constexpr const uint8_t Button_Face_B = 0x02;
    constexpr const uint8_t Button_Face_X = 0x03;
    constexpr const uint8_t Button_Face_Y = 0x04;
// Directional Pad
    constexpr const uint8_t Button_Dpad_Up = 0x05;
    constexpr const uint8_t Button_Dpad_Down = 0x06;
    constexpr const uint8_t Button_Dpad_Left = 0x07;
    constexpr const uint8_t Button_Dpad_Right = 0x08;
// Bumpers
    constexpr const uint8_t Button_Bumper_RB = 0x09;
    constexpr const uint8_t Button_Bumper_LB = 0x0A;
// Right Stick
    constexpr const uint8_t RightStick_X = 0x16;
    constexpr const uint8_t RightStick_Y = 0x17;
    constexpr const uint8_t Button_RightStick = 0x15;
// Left Stick
    constexpr const uint8_t LeftStick_X = 0x20
    constexpr const uint8_t LeftStick_Y = 0x21
    constexpr const uint8_t Button_LeftStick = 0x1F;
// Gyro
    constexpr const uint8_t GyroDegrees = 0x3D
    constexpr const unit8_t Rumble = 0x3E
// Triggers
    constexpr const uint8_t TriggerLeft = 0x29
    constexpr const uint8_t TriggerRight = 0x2A
}
#ENDIF
