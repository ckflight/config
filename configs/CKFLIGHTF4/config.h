/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32F405

#define BOARD_NAME        CKFLIGHTF4
#define MANUFACTURER_ID   CUST

#define USE_GYRO
#define USE_GYRO_SPI_ICM20602
#define USE_ACC
#define USE_ACC_SPI_ICM20602
#define USE_BARO_SPI_MS5611
#define USE_MAX7456
#define USE_SDCARD

#define BEEPER_PIN           PB0
#define MOTOR1_PIN           PB5
#define MOTOR2_PIN           PB6
#define MOTOR3_PIN           PB7
#define MOTOR4_PIN           PA2

#define LED_STRIP_PIN        PC8

#define UART1_TX_PIN         PA9
#define UART1_RX_PIN         PA10

#define UART4_TX_PIN         PA0
#define UART4_RX_PIN         PA1

#define UART6_TX_PIN         PC6
#define UART6_RX_PIN         PC7

#define LED0_PIN             PC2
#define LED1_PIN             PC3

#define I2C2_SCL_PIN         PB10
#define I2C2_SDA_PIN         PB11

#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7

#define SPI2_SCK_PIN         PB13
#define SPI2_SDI_PIN         PB14
#define SPI2_SDO_PIN         PB15

#define SPI3_SCK_PIN         PC10
#define SPI3_SDI_PIN         PC11
#define SPI3_SDO_PIN         PC12

#define ADC_VBAT_PIN         PC5
#define ADC_CURR_PIN         PA4

#define SDCARD_SPI_CS_PIN    PA8
#define MAX7456_SPI_CS_PIN   PC9
#define GYRO_1_CS_PIN        PB12
#define BARO_CS_PIN          PC4

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP(0, PB5, 1, 0) \
    TIMER_PIN_MAP(1, PB6, 1, 0) \
    TIMER_PIN_MAP(2, PB7, 1, 0) \
    TIMER_PIN_MAP(3, PA2, 1, 0) \
    TIMER_PIN_MAP(4, PC8, 2, 0) \
    TIMER_PIN_MAP(5, PB0, 1, -1)


#define ADC1_DMA_OPT        1

#define MAG_I2C_INSTANCE (I2CDEV_2)

#define USE_BARO
#define BARO_SPI_INSTANCE SPI1

#define BEEPER_INVERTED

#define USE_SDCARD_SPI
#define SDCARD_SPI_INSTANCE SPI3
#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_SDCARD

#define SYSTEM_HSE_MHZ 8

#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW0_DEG
#define GYRO_1_ALIGN_YAW 0

#define MAX7456_SPI_INSTANCE SPI2

#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
