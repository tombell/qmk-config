#pragma once

//#define USE_MATRIX_I2C

// https://docs.qmk.fm/tap_hold#quick-tap-term
// #define QUICK_TAP_TERM 0
// #define TAPPING_TERM 100

#define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended

// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
#define ENABLE_RGB_MATRIX_SOLID_COLOR             // Static single hue, no speed support
#define ENABLE_RGB_MATRIX_ALPHAS_MODS             // Static dual hue, speed is hue for secondary hue
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN        // Static gradient top to bottom, speed controls how much gradient changes
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT     // Static gradient left to right, speed controls how much gradient changes
#define ENABLE_RGB_MATRIX_BREATHING               // Single hue brightness cycling animation
#define ENABLE_RGB_MATRIX_BAND_SAT                // Single hue band fading saturation scrolling left to right
#define ENABLE_RGB_MATRIX_BAND_VAL                // Single hue band fading brightness scrolling left to right
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT       // Single hue 3 blade spinning pinwheel fades saturation
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL       // Single hue 3 blade spinning pinwheel fades brightness
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT         // Single hue spinning spiral fades saturation
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL         // Single hue spinning spiral fades brightness
#define ENABLE_RGB_MATRIX_CYCLE_ALL               // Full keyboard solid hue cycling through full gradient
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT        // Full gradient scrolling left to right
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN           // Full gradient scrolling top to bottom
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN            // Full gradient scrolling out to in
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL       // Full dual gradients scrolling out to in
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON  // Full gradient Chevron shapped scrolling left to right
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL          // Full gradient spinning pinwheel around center of keyboard
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL            // Full gradient spinning spiral around center of keyboard
#define ENABLE_RGB_MATRIX_DUAL_BEACON             // Full gradient spinning around center of keyboard
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON          // Full tighter gradient spinning around center of keyboard
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS       // Full dual gradients spinning two halfs of keyboard
#define ENABLE_RGB_MATRIX_FLOWER_BLOOMING         // Full tighter gradient of first half scrolling left to right and second half scrolling right to left
#define ENABLE_RGB_MATRIX_RAINDROPS               // Randomly changes a single key's hue
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS     // Randomly changes a single key's hue and saturation
#define ENABLE_RGB_MATRIX_HUE_BREATHING           // Hue shifts up a slight ammount at the same time, then shifts back
#define ENABLE_RGB_MATRIX_HUE_PENDULUM            // Hue shifts up a slight ammount in a wave to the right, then back to the left
#define ENABLE_RGB_MATRIX_HUE_WAVE                // Hue shifts up a slight ammount and then back down in a wave to the right
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL           // Single hue fractal filled keys pulsing horizontally out to edges
#define ENABLE_RGB_MATRIX_PIXEL_FLOW              // Pulsing RGB flow along LED wiring with random hues
#define ENABLE_RGB_MATRIX_PIXEL_RAIN              // Randomly light keys with random hues
#define ENABLE_RGB_MATRIX_STARLIGHT               // LEDs turn on and off at random at varying brightness, maintaining user set color
#define ENABLE_RGB_MATRIX_STARLIGHT_DUAL_HUE      // LEDs turn on and off at random at varying brightness, modifies user set hue by +- 30
#define ENABLE_RGB_MATRIX_STARLIGHT_DUAL_SAT      // LEDs turn on and off at random at varying brightness, modifies user set saturation by +- 30
#define ENABLE_RGB_MATRIX_RIVERFLOW               // Modification to breathing animation, offset's animation depending on key location to simulate a river flowing

// enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP  // How hot is your WPM!
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN    // That famous computer simulation

// enabled only if RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
#define RGB_MATRIX_KEYPRESSES
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE      // Pulses keys hit to hue & value then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE             // Static single hue, pulses keys hit to shifted hue then fades to current hue
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE        // Hue & value pulse near a single key hit then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE   // Hue & value pulse near multiple key hits then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS       // Hue & value pulse the same column and row of a single key hit then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS  // Hue & value pulse the same column and row of multiple key hits then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS       // Hue & value pulse away on the same column and row of a single key hit then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS  // Hue & value pulse away on the same column and row of multiple key hits then fades value out
#define ENABLE_RGB_MATRIX_SPLASH                     // Full gradient & value pulse away from a single key hit then fades value out
#define ENABLE_RGB_MATRIX_MULTISPLASH                // Full gradient & value pulse away from multiple key hits then fades value out
#define ENABLE_RGB_MATRIX_SOLID_SPLASH               // Hue & value pulse away from a single key hit then fades value out
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH          // Hue & value pulse away from multiple key hits then fades value out

// RGB Matrix Effects Order

// RGB_MATRIX_SOLID_COLOR
// RGB_MATRIX_ALPHAS_MODS
// RGB_MATRIX_GRADIENT_UP_DOWN
// RGB_MATRIX_GRADIENT_LEFT_RIGHT
// RGB_MATRIX_BREATHING
// RGB_MATRIX_BAND_SAT
// RGB_MATRIX_BAND_VAL
// RGB_MATRIX_BAND_PINWHEEL_SAT
// RGB_MATRIX_BAND_PINWHEEL_VAL
// RGB_MATRIX_BAND_SPIRAL_SAT
// RGB_MATRIX_BAND_SPIRAL_VAL
// RGB_MATRIX_CYCLE_ALL
// RGB_MATRIX_CYCLE_LEFT_RIGHT
// RGB_MATRIX_CYCLE_UP_DOWN
// RGB_MATRIX_CYCLE_OUT_IN
// RGB_MATRIX_CYCLE_OUT_IN_DUAL
// RGB_MATRIX_RAINBOW_MOVING_CHEVRON
// RGB_MATRIX_CYCLE_PINWHEEL
// RGB_MATRIX_CYCLE_SPIRAL
// RGB_MATRIX_DUAL_BEACON
// RGB_MATRIX_RAINBOW_BEACON
// RGB_MATRIX_RAINBOW_PINWHEELS
// RGB_MATRIX_FLOWER_BLOOMING
// RGB_MATRIX_RAINDROPS
// RGB_MATRIX_JELLYBEAN_RAINDROPS
// RGB_MATRIX_HUE_BREATHING
// RGB_MATRIX_HUE_PENDULUM
// RGB_MATRIX_HUE_WAVE
// RGB_MATRIX_PIXEL_FRACTAL
// RGB_MATRIX_PIXEL_FLOW
// RGB_MATRIX_PIXEL_RAIN
// RGB_MATRIX_TYPING_HEATMAP
// RGB_MATRIX_DIGITAL_RAIN
// RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// RGB_MATRIX_SOLID_REACTIVE
// RGB_MATRIX_SOLID_REACTIVE_WIDE
// RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// RGB_MATRIX_SOLID_REACTIVE_CROSS
// RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
// RGB_MATRIX_SOLID_REACTIVE_NEXUS
// RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
// RGB_MATRIX_SPLASH
// RGB_MATRIX_MULTISPLASH
// RGB_MATRIX_SOLID_SPLASH
// RGB_MATRIX_SOLID_MULTISPLASH
// RGB_MATRIX_STARLIGHT
// RGB_MATRIX_STARLIGHT_DUAL_HUE
// RGB_MATRIX_STARLIGHT_DUAL_SAT
// RGB_MATRIX_RIVERFLOW
