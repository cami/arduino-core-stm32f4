/*
 *******************************************************************************
 * Copyright (c) 2016, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */
#include "Arduino.h"
#include "PeripheralPins.h"

// =====
// Note: Commented lines are alternative possibilities which are not used per default.
//       If you change them, you will have to know what you do
// =====

//*** ADC ***

const PinMap PinMap_ADC[] = {
//  {PA0,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 0, 0)}, // ADC1_IN0 - D1 / TX
//  {PA0,   ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 0, 0)}, // ADC2_IN0 - D1 / Tx
//  {PA0,   ADC3,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 0, 0)}, // ADC3_IN0 - D1 / TX
//  {PA1,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC1_IN1 - D0 / RX
//  {PA1,   ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC2_IN1 - D0 / RX
//  {PA1,   ADC3,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC3_IN1 - D0 / RX
//  {PA2,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC1_IN2 - D59/A5
    {PA2,   ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC2_IN2 - D59/A5
//  {PA2,   ADC3,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC3_IN2 - D59/A5
//  {PA3,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC1_IN3 - D58/A4
//  {PA3,   ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC2_IN3 - D58/A4
    {PA3,   ADC3,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC3_IN3 - D58/A4
//  {PA4,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC1_IN4 - D66/A12 / DAC0
    {PA4,   ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC2_IN4 - D66/A12 / DAC0
//  {PA5,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC1_IN5 - D67/A13 / DAC1
    {PA5,   ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC2_IN5 - D67/A13 / DAC1
//  {PA6,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC1_IN6 - PAR_PCLK
//  {PA6,   ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC2_IN6 - PAR_PCLK
    {PA7,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC1_IN7 - D61/A7
//  {PA7,   ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC2_IN7 - D61/A7
    {PB0,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC1_IN8 - D54/A0
//  {PB0,   ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC2_IN8 - D54/A0
    {PB1,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC1_IN9 - D55/A1
//  {PB1,   ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC2_IN9 - D55/A1
//  {PC0,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC1_IN10 - SDNWE
//  {PC0,   ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC2_IN10 - SDNWE
//  {PC0,   ADC3,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC3_IN10 - SDNWE
//  {PC1,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 11, 0)}, // ADC1_IN11 - D65/A11
//  {PC1,   ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 11, 0)}, // ADC2_IN11 - D65/A11
    {PC1,   ADC3,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 11, 0)}, // ADC3_IN11 - D65/A11
//  {PC2,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 12, 0)}, // ADC1_IN12 - D62/A8
    {PC2,   ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 12, 0)}, // ADC2_IN12 - D62/A8
//  {PC2,   ADC3,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 12, 0)}, // ADC3_IN12 - D62/A8
//  {PC3,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 13, 0)}, // ADC1_IN13 - D74 / MOSI
//  {PC3,   ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 13, 0)}, // ADC2_IN13 - D74 / MOSI
//  {PC3,   ADC3,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 13, 0)}, // ADC3_IN13 - D74 / MOSI
    {PC4,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 14, 0)}, // ADC1_IN14 - D63/A9
//  {PC4,   ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 14, 0)}, // ADC2_IN14 - D63/A9
    {PC5,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 15, 0)}, // ADC1_IN15 - D57/A3
//  {PC5,   ADC2,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 15, 0)}, // ADC2_IN15 - D57/A3
//  {PF3,   ADC3,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC3_IN9 - SDRAM
//  {PF4,   ADC3,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 14, 0)}, // ADC3_IN14 - SDRAM
//  {PF5,   ADC3,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 15, 0)}, // ADC3_IN15 - SDRAM
    {PF6,   ADC3,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC3_IN4 - D56/A2
    {PF7,   ADC3,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC3_IN5 - D64/A10
//  {PF8,   ADC3,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC3_IN6 - SAI1_SCKB
//  {PF9,   ADC3,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC3_IN7 - SAI1_FSB
    {PF10,  ADC3,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC3_IN8 - D60/A6
    {NC,   NC,    0}
};

//*** DAC ***

const PinMap PinMap_DAC[] = {
    {PA4,   DAC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // DAC_OUT1 - D66/A12 / DAC0
    {PA5,   DAC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // DAC_OUT2 - D67/A13 / DAC1
    {NC,   NC,    0}
};

//*** I2C ***

const PinMap PinMap_I2C_SDA[] = {
    {PB7,   I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_PULLUP, GPIO_AF4_I2C1)}, // D70 / SDA
//  {PB9,   I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)}, // D68 / CANTX
//  {PB11,  I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)}, // D19 / RX1
//  {PC9,   I2C3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C3)}, // uSD_D1
//  {PF0,   I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)}, // SDRAM
    {PH5,   I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_PULLUP, GPIO_AF4_I2C2)}, // D20 / SDA1
    {PH8,   I2C3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_PULLUP, GPIO_AF4_I2C3)}, // I2C3_SDA
    {NC,    NC,    0}
};

const PinMap PinMap_I2C_SCL[] = {
//  {PA8,   I2C3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C3)}, // D8
    {PB6,   I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_PULLUP, GPIO_AF4_I2C1)}, // D71 / SCL
//  {PB8,   I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)}, // D69 / CANRX
//  {PB10,  I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)}, // D18 / TX1
//  {PF1,   I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)}, // SDRAM
    {PH4,   I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_PULLUP, GPIO_AF4_I2C2)}, // D21 / SCL
    {PH7,   I2C3, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_PULLUP, GPIO_AF4_I2C3)}, // I2C3_SCL
    {NC,    NC,    0}
};

//*** PWM ***

const PinMap PinMap_PWM[] = {
//  {PA0,   TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 1, 0)},  // TIM2_CH1 - D1 / TX
    {PA0,   TIM5,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM5, 1, 0)},  // TIM5_CH1 - D1 / TX
//  {PA1,   TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 2, 0)},  // TIM2_CH2 - D0 / RX
    {PA1,   TIM5,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM5, 2, 0)},  // TIM5_CH2 - D0 / RX
//  {PA2,   TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 3, 0)},  // TIM2_CH3 - D59/A5
    {PA2,   TIM5,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM5, 3, 0)},  // TIM5_CH3 - D59/A5
//  {PA2,   TIM9,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM9, 1, 0)},  // TIM9_CH1 - D59/A5
//  {PA3,   TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 4, 0)},  // TIM2_CH4 - D58/A4
    {PA3,   TIM5,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM5, 4, 0)},  // TIM5_CH4 - D58/A4
//  {PA3,   TIM9,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM9, 2, 0)},  // TIM9_CH2 - D58/A4
//  {PA5,   TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 1, 0)},  // TIM2_CH1 - D67/A13 / DAC1
    {PA5,   TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 1, 1)},  // TIM8_CH1N - D67/A13 / DAC1
//  {PA6,   TIM13,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM13, 1, 0)},  // TIM13_CH1 - PAR_PCLK
//  {PA6,   TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)},  // TIM3_CH1 - PAR_PCLK
//  {PA7,   TIM14,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM14, 1, 0)},  // TIM14_CH1 - D61/A7
//  {PA7,   TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 1, 1)},  // TIM1_CH1N - D61/A7
//  {PA7,   TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)},  // TIM3_CH2 - D61/A7
//  {PA7,   TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 1, 1)},  // TIM8_CH1N - D61/A7
    {PA8,   TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 1, 0)},  // TIM1_CH1 - D8
    {PA9,   TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 2, 0)},  // TIM1_CH2 - D9
//  {PA10,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 3, 0)},  // TIM1_CH3 - USB_OTG_FS_ID
//  {PA11,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 4, 0)},  // TIM1_CH4 - USB_OTG_FS_DM
    {PA15,  TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 1, 0)},  // TIM2_CH1 - D10
//  {PB0,   TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 2, 1)},  // TIM1_CH2N - D54/A0
    {PB0,   TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 3, 0)},  // TIM3_CH3 - D54/A0
//  {PB0,   TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 2, 1)},  // TIM8_CH2N - D54/A0
//  {PB1,   TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 3, 1)},  // TIM1_CH3N - D55/A1
    {PB1,   TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 4, 0)},  // TIM3_CH4 - D55/A1
//  {PB1,   TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 3, 1)},  // TIM8_CH3N - D55/A1
    {PB3,   TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 2, 0)},  // TIM2_CH2 - D13 / SCK1
    {PB4,   TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)},  // TIM3_CH1 - D12 / MISO1
    {PB5,   TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)},  // TIM3_CH2 - D11 / MOSI1
//  {PB6,   TIM4,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 1, 0)},  // TIM4_CH1 - D71 / SCL
//  {PB7,   TIM4,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 2, 0)},  // TIM4_CH2 - D70 / SDA
//  {PB8,   TIM10,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM10, 1, 0)},  // TIM10_CH1 - D69 / CANRX
    {PB8,   TIM4,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 3, 0)},  // TIM4_CH3 - D69 / CANRX
//  {PB9,   TIM11,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM11, 1, 0)},  // TIM11_CH1 - D68 / CANTX
    {PB9,   TIM4,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 4, 0)},  // TIM4_CH4 - D68 / CANTX
    {PB10,  TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 3, 0)},  // TIM2_CH3 - D18 / TX1
    {PB11,  TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 4, 0)},  // TIM2_CH4 - D19 / RX1
    {PB13,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 1, 1)},  // TIM1_CH1N - D51
//  {PB14,  TIM12,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM12, 1, 0)},  // TIM12_CH1 - D72 / MISO
//  {PB14,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 2, 1)},  // TIM1_CH2N - D72 / MISO
//  {PB14,  TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 2, 1)},  // TIM8_CH2N - D72 / MISO
    {PB15,  TIM12,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM12, 2, 0)},  // TIM12_CH2 - D3
//  {PB15,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 3, 1)},  // TIM1_CH3N - D3
//  {PB15,  TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 3, 1)},  // TIM8_CH3N - D3
//  {PC6,   TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)},  // TIM3_CH1 - D5
    {PC6,   TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 1, 0)},  // TIM8_CH1 - D5
//  {PC7,   TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)},  // TIM3_CH2 - D4
    {PC7,   TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 2, 0)},  // TIM8_CH2 - D4
//  {PC8,   TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 3, 0)},  // TIM3_CH3 - uSD_D0
//  {PC8,   TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 3, 0)},  // TIM8_CH3 - uSD_D0
//  {PC9,   TIM3,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 4, 0)},  // TIM3_CH4 - uSD_D1
//  {PC9,   TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 4, 0)},  // TIM8_CH4 - uSD_D1
    {PD12,  TIM4,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 1, 0)},  // TIM4_CH1 - D7
    {PD13,  TIM4,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 2, 0)},  // TIM4_CH2 - D6
//  {PD14,  TIM4,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 3, 0)},  // TIM4_CH3 - SDRAM
//  {PD15,  TIM4,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 4, 0)},  // TIM4_CH4 - SDRAM
//  {PE5,   TIM9,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM9, 1, 0)},  // TIM9_CH1 - D22
//  {PE6,   TIM9,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM9, 2, 0)},  // TIM9_CH2 - D23 / SS
//  {PE8,   TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 1, 1)},  // TIM1_CH1N - SDRAM
//  {PE9,   TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 1, 0)},  // TIM1_CH1 - SDRAM
//  {PE10,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 2, 1)},  // TIM1_CH2N - SDRAM
//  {PE11,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 2, 0)},  // TIM1_CH2 - SDRAM
//  {PE12,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 3, 1)},  // TIM1_CH3N - SDRAM
//  {PE13,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 3, 0)},  // TIM1_CH3 - SDRAM
//  {PE14,  TIM1,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM1, 4, 0)},  // TIM1_CH4 - SDRAM
    {PF6,   TIM10,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM10, 1, 0)},  // TIM10_CH1 - D56/A2
    {PF7,   TIM11,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM11, 1, 0)},  // TIM11_CH1 - D64/A10
//  {PF8,   TIM13,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM13, 1, 0)},  // TIM13_CH1 - SAI1_SCKB
//  {PF9,   TIM14,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM14, 1, 0)},  // TIM14_CH1 - SAI1_FSB
    {PH6,   TIM12,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM12, 1, 0)},  // TIM12_CH1 - D2
//  {PH9,   TIM12,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM12, 2, 0)},  // TIM12_CH2 - PAR
//  {PH10,  TIM5,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM5, 1, 0)},  // TIM5_CH1 - PAR
//  {PH11,  TIM5,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM5, 2, 0)},  // TIM5_CH2 - PAR
//  {PH12,  TIM5,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM5, 3, 0)},  // TIM5_CH3 - PAR
//  {PH13,  TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 1, 1)},  // TIM8_CH1N - D75 / WIFI_PWR
//  {PH14,  TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 2, 1)},  // TIM8_CH2N - PAR
//  {PH15,  TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 3, 1)},  // TIM8_CH3N - PAR
//  {PI0,   TIM5,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM5, 4, 0)},  // TIM5_CH4 - TOUCH_INT
//  {PI2,   TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 4, 0)},  // TIM8_CH4 - PAR
//  {PI5,   TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 1, 0)},  // TIM8_CH1 - PAR
//  {PI6,   TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 2, 0)},  // TIM8_CH2 - PAR
//  {PI7,   TIM8,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 3, 0)},  // TIM8_CH3 - PAR
    {NC,    NC,    0}
};

//*** SERIAL ***

const PinMap PinMap_UART_TX[] = {
    {PA0,   UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},  // D1 / TX
    {PA2,   USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)}, // D59/A5
//  {PA9,   USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)}, // D9
//  {PB6,   USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)}, // D71 / SCL
    {PB10,  USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)}, // D18 / TX1
    {PC6,   USART6,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_USART6)}, // D5
//  {PC10,  UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},  // uSD_D2
//  {PC10,  USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)}, // uSD_D2
//  {PC12,  UART5,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART5)},  // uSD_CLK
    {PD5,   USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)}, // D16 / TX2
//  {PD8,   USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)}, // SDRAM
//  {PE1,   UART8,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART8)},  // FMC_NBL1
//  {PE8,   UART7,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART7)},  // SDRAM
//  {PF7,   UART7,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART7)},  // D64/A10
    {PG14,  USART6,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_USART6)}, // D14 / TX3
    {NC,    NC,    0}
};

const PinMap PinMap_UART_RX[] = {
    {PA1,   UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},  // D0 / RX
    {PA3,   USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)}, // D58/A4
//  {PA10,  USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)}, // USB_OTG_FS_ID
//  {PB7,   USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)}, // D70 / SDA
    {PB11,  USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)}, // D19 / RX1
    {PC7,   USART6,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_USART6)}, // D4
//  {PC11,  UART4,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART4)},  // uSD_D3
//  {PC11,  USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)}, // uSD_D3
//  {PD2,   UART5,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART5)},  // uSD_CMD
    {PD6,   USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)}, // D17 / RX2
//  {PD9,   USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)}, // SDRAM
//  {PE0,   UART8,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART8)},  // FMC_NBL0
//  {PE7,   UART7,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART7)},  // SDRAM
//  {PF6,   UART7,   STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_UART7)},  // D56/A2
    {PG9,   USART6,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_USART6)}, // D15 / RX3
    {NC,    NC,    0}
};

const PinMap PinMap_UART_RTS[] = {
    {PA1,   USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)}, // D0 / RX
//  {PA12,  USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)}, // USB_OTG_FS_DP
    {PB14,  USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)}, // D72 / MISO
    {PD4,   USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)}, // D45
    {PD12,  USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)}, // D7
//  {PG8,   USART6,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_USART6)}, // SDCLK
    {PG12,  USART6,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_USART6)}, // D50
    {NC,    NC,    0}
};

const PinMap PinMap_UART_CTS[] = {
    {PA0,   USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)}, // D1 / TX
//  {PA11,  USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)}, // USB_OTG_FS_DM
    {PB13,  USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)}, // D51
//  {PD3,   USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)}, // D73 / SCK
    {PD11,  USART3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)}, // D40
    {PG13,  USART6,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_USART6)}, // D52
//  {PG15,  USART6,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF8_USART6)}, // SDNCAS
    {NC,    NC,    0}
};

//*** SPI ***

const PinMap PinMap_SPI_MOSI[] = {
//  {PA7,   SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)}, // D61/A7
    {PB5,   SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)}, // D11 / MOSI1
//  {PB5,   SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)}, // D11 / MOSI1
//  {PB15,  SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // D3
//  {PC1,   SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // D65/A11
//  {PC3,   SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // D74 / MOSI
//  {PC12,  SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)}, // uSD_CLK
//  {PD6,   SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI3)}, // D17 / RX2
//  {PE6,   SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)}, // D23 / SS
//  {PE14,  SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)}, // SDRAM
//  {PF9,   SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI5)}, // SAI1_FSB
//  {PF11,  SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI5)}, // SDNRAS
//  {PG14,  SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI6)}, // D14 / TX3
//  {PI3,   SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // PAR
    {NC,    NC,    0}
};

const PinMap PinMap_SPI_MISO[] = {
//  {PA6,   SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)}, // PAR_PCLK
    {PB4,   SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)}, // D12 / MISO1
//  {PB4,   SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)}, // D12 / MISO1
//  {PB14,  SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // D72 / MISO
//  {PC2,   SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // D62/A8
//  {PC11,  SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)}, // uSD_D3
//  {PE5,   SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)}, // D22
//  {PE13,  SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)}, // SDRAM
//  {PF8,   SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI5)}, // SAI1_SCKB
//  {PG12,  SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI6)}, // D50
//  {PH7,   SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI5)}, // I2C3SCL
//  {PI2,   SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // PAR
    {NC,    NC,    0}
};

const PinMap PinMap_SPI_SCLK[] = {
//  {PA5,   SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)}, // D67/A13 / DAC1
//  {PA9,   SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // D9
    {PB3,   SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)}, // D13 / SCK1
//  {PB3,   SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)}, // D13 / SCK1
//  {PB10,  SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // D18 / TX1
//  {PB13,  SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // D51
//  {PC10,  SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)}, // uSD_D2
//  {PD3,   SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // D73 / SCK
//  {PE2,   SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)}, // D24
//  {PE12,  SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)}, // SDRAM
//  {PF7,   SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI5)}, // D64/A10
//  {PG13,  SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI6)}, // D52
//  {PH6,   SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI5)}, // D2
//  {PI1,   SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // PAR
    {NC,    NC,    0}
};

const PinMap PinMap_SPI_SSEL[] = {
//  {PA4,   SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)}, // D66/A12 / DAC0
//  {PA4,   SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)}, // D66/A12 / DAC0
    {PA15,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)}, // D10 / SS1
//  {PA15,  SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)}, // D10 / SS1
//  {PB9,   SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // D68 / CANTX
//  {PB12,  SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // D53
//  {PE4,   SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)}, // D25
//  {PE11,  SPI4, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI4)}, // SDRAM
//  {PF6,   SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI5)}, // D56/A2
//  {PG8,   SPI6, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI6)}, // SDCLK
//  {PH5,   SPI5, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI5)}, // D20 / SDA1
//  {PI0,   SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)}, // TOUCH_INT
    {NC,    NC,    0}
};

//*** CAN ***

const PinMap PinMap_CAN_RD[] = {
//  {PA11,  CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN1)}, // USB_OTG_FS_DM
//  {PB5,   CAN2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN2)}, // D11 / MOSI1
    {PB8,   CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN1)}, // D69 / CANRX
//  {PB12,  CAN2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN2)}, // D53
//  {PD0,   CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN1)}, // SDRAM
//  {PI9,   CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN1)}, // PAR
    {NC,    NC,    0}
};

const PinMap PinMap_CAN_TD[] = {
//  {PA12,  CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN1)}, // USB_OTG_FS_DP
//  {PB6,   CAN2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN2)}, // D71 / SCL
    {PB9,   CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN1)}, // D68 / CANTX
//  {PB13,  CAN2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN2)}, // D51
//  {PD1,   CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN1)}, // SDRAM
//  {PH13,  CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN1)}, // D75 / WIFI_PWR
    {NC,    NC,    0}
};

const TimerMap TimerMap_CONFIG[] = {
  {TIM1,  TIM1_UP_TIM10_IRQn,       2},
  {TIM2,  TIM2_IRQn,                1},
  {TIM3,  TIM3_IRQn,                1},
  {TIM4,  TIM4_IRQn,                1},
  {TIM5,  TIM5_IRQn,                1},
  {TIM6,  TIM6_DAC_IRQn,            1},
  {TIM7,  TIM7_IRQn,                1},
  {TIM8,  TIM8_UP_TIM13_IRQn,       2},
  {TIM9,  TIM1_BRK_TIM9_IRQn,       2},
  {TIM10, TIM1_UP_TIM10_IRQn,       2},
  {TIM11, TIM1_TRG_COM_TIM11_IRQn,  2},
  {TIM12, TIM8_BRK_TIM12_IRQn,      1},
  {TIM13, TIM8_UP_TIM13_IRQn,       1},
  {TIM14, TIM8_TRG_COM_TIM14_IRQn,  1},
  {NULL,  0,  0}
};
