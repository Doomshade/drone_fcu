#ifndef _CONFIG_H
#define _CONFIG_H
#include <Adafruit_MPU6050.h>

/// Logging
// Logs everything
#define LOG_LEVEL_ALL LOG_LEVEL_DEBUG
// Logs debug information
#define LOG_LEVEL_DEBUG (5)
// Logs mostly useful information
#define LOG_LEVEL_INFO (4)
// Logs if something shouldn't probably happen
#define LOG_LEVEL_WARN (3)
// Logs if there's something seriously wrong
#define LOG_LEVEL_ERROR (2)
// Logs if there's an unrecoverable, fatal error
#define LOG_LEVEL_FATAL (1)
// You like to live dangerously
#define LOG_LEVEL_NONE (0)

// Sets the logging level
// Use the values above (LOG_LEVEL_XXX)
#define LOG_LEVEL LOG_LEVEL_DEBUG
/// -------------------------------------------

/// Receiver config
#define RECVR_CHANNEL_PIN_THROTTLE (A0)
#define RECVR_CHANNEL_PIN_YAW (A1)
#define RECVR_CHANNEL_PIN_PITCH (A2)
#define RECVR_CHANNEL_PIN_ROLL (A3)
#define RECVR_CHANNEL_PIN_ARM (A7)
#define RECVR_ARM_THRESHOLD (1400)
/// -------------------------------------------

/// ESC config
#define ESC_MOTOR_PIN1 (9)
#define ESC_MOTOR_PIN2 (10)
#define ESC_MOTOR_PIN3 (11)
#define ESC_MOTOR_PIN4 (3)
#define ESC_IDLE_SPEED_US (1000)
#define ESC_MAX_SPEED_US (2000)
/// -------------------------------------------

/// MPU config
/// -------------------------------------------
#define MPU_ACCELEROMETER_RANGE MPU6050_RANGE_8_G
#define MPU_GYRO_RANGE MPU6050_RANGE_500_DEG
#define MPU_FILTER_BANDWIDTH MPU6050_BAND_5_HZ
#define MPU_DEBUG_MILLIS (1000)
#define MPU_CALIBRATION_TRIES (5)
#define MPU_GRAVITATIONAL_CONSTANT (9.8)

// If you have no SD card you will have to bake the
// error values into the executable via the #defines below.
// To get the error values run `mpu cal`
// You will also have to uncomment the following line:
// #define MPU_USES_BAKED_VALUES
#define MPU_ERR_ACCEL_X (0.0)
#define MPU_ERR_ACCEL_Y (0.0)
#define MPU_ERR_ACCEL_Z (0.0)
#define MPU_ERR_GYRO_X (0.0)
#define MPU_ERR_GYRO_Y (0.0)
#define MPU_ERR_GYRO_Z (9.8)
#endif  // CONFIG_H
