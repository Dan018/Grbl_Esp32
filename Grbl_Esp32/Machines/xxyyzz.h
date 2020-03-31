/*
    xxyyzz.h
    Part of Grbl_ESP32

    Grbl_ESP32 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Grbl is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Grbl_ESP32.  If not, see <http://www.gnu.org/licenses/>.
*/

#define MACHINE_NAME    "XXYYZZ_TMC"

#define USE_TRINAMIC
#define USE_GANGED_AXES
#define USE_RMT_STEPS
#define USE_TRINAMIC_ENABLE     // Use SPI enable instead of the enable pin. The hardware enable pin is tied to ground
#define TRINAMIC_DAISY_CHAIN
#define CS_PIN                  GPIO_NUM_  //chip select

#define X_TRINAMIC              // using SPI control
#define X_DRIVER_TMC2130        // Which Driver Type?
#define X_RSENSE                0.11f   // .11 Ohm
#define X_CS_PIN                CS_PIN
#define X_STEP_PIN              GPIO_NUM_
#define X_DIRECTION_PIN         GPIO_NUM_
/*
#define X2_TRINAMIC             // using SPI control
#define X2_DRIVER_TMC2130       // Which Driver Type?
#define X2_RSENSE               0.11f   // .11 Ohm
#define X2_CS_PIN               CS_PIN
#define X2_STEP_PIN             GPIO_NUM_
#define X2_DIRECTION_PIN        GPIO_NUM_
*/
#define Y_TRINAMIC              // using SPI control
#define Y_DRIVER_TMC2130        // Which Driver Type?
#define Y_RSENSE                0.11f   // .11 Ohm
#define Y_CS_PIN                CS_PIN
#define Y_STEP_PIN              GPIO_NUM_
#define Y_DIRECTION_PIN         GPIO_NUM_

#define Y2_TRINAMIC             // using SPI control
#define Y2_DRIVER_TMC2130       // Which Driver Type?
#define Y2_RSENSE               0.11f   // .11 Ohm
#define Y2_CS_PIN               CS_PIN
#define Y2_STEP_PIN             GPIO_NUM_
#define Y2_DIRECTION_PIN        GPIO_NUM_

#define Z_TRINAMIC              // using SPI control
#define Z_DRIVER_TMC2130        // Which Driver Type?
#define Z_RSENSE                0.11f   // .11 Ohm
#define Z_CS_PIN                CS_PIN
#define Z_STEP_PIN              GPIO_NUM_
#define Z_DIRECTION_PIN         GPIO_NUM_

#define Z2_TRINAMIC             // using SPI control
#define Z2_DRIVER_TMC2130       // Which Driver Type?
#define Z2_RSENSE               0.11f   // .11 Ohm
#define Z2_CS_PIN               CS_PIN
#define Z2_STEP_PIN             GPIO_NUM_
#define Z2_DIRECTION_PIN        GPIO_NUM_

//#define SPINDLE_PWM_BASE_FREQ 5000 // Hz
#define SPINDLE_PWM_PIN             GPIO_NUM_ //LASER PWM
#define SPINDLE_ENABLE_PIN          GPIO_NUM_
#define SPINDLE_PWM_CHANNEL         0
#define SPINDLE_PWM_BIT_PRECISION   8

#define COOLANT_FLOOD_PIN       GPIO_NUM_
#define DEFAULT_LASER_MODE      1 //Laser mode enabled

// #define CONTROL_SAFETY_DOOR_PIN GPIO_NUM_35

#define X_LIMIT_PIN     GPIO_NUM_
#define Y_LIMIT_PIN     GPIO_NUM_
#define Z_LIMIT_PIN     GPIO_NUM_
#define LIMIT_MASK      B111

// === Homing cycles
// The default homing order is Z first (HOMING_CYCLE_0),
// then X (HOMING_CYCLE_1), and finally Y (HOMING_CYCLE_2)
// For machines that need different homing order, you can
// undefine HOMING_CYCLE_n and redefine it accordingly.
// For example, the following would first home X and Y
// simultaneously, then A and B simultaneously, and Z
// not at all.

// #undef HOMING_CYCLE_0
// #define HOMING_CYCLE_0 ((1<<Z_AXIS))

// #undef HOMING_CYCLE_1
// #define HOMING_CYCLE_1 ((1<<X_AXIS)|(1<<Y_AXIS))

// #undef HOMING_CYCLE_2
// #endif