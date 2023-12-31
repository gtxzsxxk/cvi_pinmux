//
// Created by hanyuan on 2023/9/27.
//
#include <stdio.h>
#include <string.h>

#include "../include/pinmux.h"

struct pin_func pin_functions[] = {
        {"SD0_CLK0",          "SDIO0_CLK"},
        {"SD0_CLK1",          "IIC1_SDA"},
        {"SD0_CLK2",          "SPI0_SCK"},
        {"SD0_CLK3",          "XGPIOA_7"},
        {"SD0_CLK5",          "PWM_15"},
        {"SD0_CLK6",          "EPHY_LNK_LED"},
        {"SD0_CLK7",          "DBG_0"},
        {"SD0_CMD0",          "SDIO0_CMD"},
        {"SD0_CMD1",          "IIC1_SCL"},
        {"SD0_CMD2",          "SPI0_SDO"},
        {"SD0_CMD3",          "XGPIOA_8"},
        {"SD0_CMD5",          "PWM_14"},
        {"SD0_CMD6",          "EPHY_SPD_LED"},
        {"SD0_CMD7",          "DBG_1"},
        {"SD0_D00",           "SDIO0_D_0"},
        {"SD0_D01",           "CAM_MCLK1"},
        {"SD0_D02",           "SPI0_SDI"},
        {"SD0_D03",           "XGPIOA_9"},
        {"SD0_D04",           "UART3_TX"},
        {"SD0_D05",           "PWM_13"},
        {"SD0_D06",           "WG0_D0"},
        {"SD0_D07",           "DBG_2"},
        {"SD0_D10",           "SDIO0_D_1"},
        {"SD0_D11",           "IIC1_SDA"},
        {"SD0_D12",           "AUX0"},
        {"SD0_D13",           "XGPIOA_10"},
        {"SD0_D14",           "UART1_TX"},
        {"SD0_D15",           "PWM_12"},
        {"SD0_D16",           "WG0_D1"},
        {"SD0_D17",           "DBG_3"},
        {"SD0_D20",           "SDIO0_D_2"},
        {"SD0_D21",           "IIC1_SCL"},
        {"SD0_D22",           "AUX1"},
        {"SD0_D23",           "XGPIOA_11"},
        {"SD0_D24",           "UART1_RX"},
        {"SD0_D25",           "PWM_11"},
        {"SD0_D26",           "WG1_D0"},
        {"SD0_D27",           "DBG_4"},
        {"SD0_D30",           "SDIO0_D_3"},
        {"SD0_D31",           "CAM_MCLK0"},
        {"SD0_D32",           "SPI0_CS_X"},
        {"SD0_D33",           "XGPIOA_12"},
        {"SD0_D34",           "UART3_RX"},
        {"SD0_D35",           "PWM_10"},
        {"SD0_D36",           "WG1_D1"},
        {"SD0_D37",           "DBG_5"},
        {"SD0_CD0",           "SDIO0_CD"},
        {"SD0_CD3",           "XGPIOA_13"},
        {"SD0_PWR_EN0",       "SDIO0_PWR_EN"},
        {"SD0_PWR_EN3",       "XGPIOA_14"},
        {"SPK_EN3",           "XGPIOA_15"},
        {"UART0_TX0",         "UART0_TX"},
        {"UART0_TX1",         "CAM_MCLK1"},
        {"UART0_TX2",         "PWM_4"},
        {"UART0_TX3",         "XGPIOA_16"},
        {"UART0_TX4",         "UART1_TX"},
        {"UART0_TX5",         "AUX1"},
        {"UART0_TX6",         "JTAG_TMS"},
        {"UART0_TX7",         "DBG_6"},
        {"UART0_RX0",         "UART0_RX"},
        {"UART0_RX1",         "CAM_MCLK0"},
        {"UART0_RX2",         "PWM_5"},
        {"UART0_RX3",         "XGPIOA_17"},
        {"UART0_RX4",         "UART1_RX"},
        {"UART0_RX5",         "AUX0"},
        {"UART0_RX6",         "JTAG_TCK"},
        {"UART0_RX7",         "DBG_7"},
        {"SPINOR_HOLD_X1",    "SPINOR_HOLD_X"},
        {"SPINOR_HOLD_X2",    "SPINAND_HOLD"},
        {"SPINOR_HOLD_X3",    "XGPIOA_26"},
        {"SPINOR_SCK1",       "SPINOR_SCK"},
        {"SPINOR_SCK2",       "SPINAND_CLK"},
        {"SPINOR_SCK3",       "XGPIOA_22"},
        {"SPINOR_MOSI1",      "SPINOR_MOSI"},
        {"SPINOR_MOSI2",      "SPINAND_MOSI"},
        {"SPINOR_MOSI3",      "XGPIOA_25"},
        {"SPINOR_WP_X1",      "SPINOR_WP_X"},
        {"SPINOR_WP_X2",      "SPINAND_WP"},
        {"SPINOR_WP_X3",      "XGPIOA_27"},
        {"SPINOR_MISO1",      "SPINOR_MISO"},
        {"SPINOR_MISO2",      "SPINAND_MISO"},
        {"SPINOR_MISO3",      "XGPIOA_23"},
        {"SPINOR_CS_X1",      "SPINOR_CS_X"},
        {"SPINOR_CS_X2",      "SPINAND_CS"},
        {"SPINOR_CS_X3",      "XGPIOA_24"},
        {"JTAG_CPU_TMS0",     "JTAG_TMS"},
        {"JTAG_CPU_TMS1",     "CAM_MCLK0"},
        {"JTAG_CPU_TMS2",     "PWM_7"},
        {"JTAG_CPU_TMS3",     "XGPIOA_19"},
        {"JTAG_CPU_TMS4",     "UART1_RTS"},
        {"JTAG_CPU_TMS5",     "AUX0"},
        {"JTAG_CPU_TMS6",     "UART1_TX"},
        {"JTAG_CPU_TCK0",     "JTAG_TCK"},
        {"JTAG_CPU_TCK1",     "CAM_MCLK1"},
        {"JTAG_CPU_TCK2",     "PWM_6"},
        {"JTAG_CPU_TCK3",     "XGPIOA_18"},
        {"JTAG_CPU_TCK4",     "UART1_CTS"},
        {"JTAG_CPU_TCK5",     "AUX1"},
        {"JTAG_CPU_TCK6",     "UART1_RX"},
        {"IIC0_SCL0",         "JTAG_TDI"},
        {"IIC0_SCL1",         "UART1_TX"},
        {"IIC0_SCL2",         "UART2_TX"},
        {"IIC0_SCL3",         "XGPIOA_28"},
        {"IIC0_SCL4",         "IIC0_SCL"},
        {"IIC0_SCL5",         "WG0_D0"},
        {"IIC0_SCL7",         "DBG_10"},
        {"IIC0_SDA0",         "JTAG_TDO"},
        {"IIC0_SDA1",         "UART1_RX"},
        {"IIC0_SDA2",         "UART2_RX"},
        {"IIC0_SDA3",         "XGPIOA_29"},
        {"IIC0_SDA4",         "IIC0_SDA"},
        {"IIC0_SDA5",         "WG0_D1"},
        {"IIC0_SDA6",         "WG1_D0"},
        {"IIC0_SDA7",         "DBG_11"},
        {"AUX00",             "AUX0"},
        {"AUX03",             "XGPIOA_30"},
        {"AUX04",             "IIS1_MCLK"},
        {"AUX06",             "WG1_D1"},
        {"AUX07",             "DBG_12"},
        {"GPIO_ZQ3",          "PWR_GPIO_24"},
        {"GPIO_ZQ4",          "PWM_2"},
        {"PWR_VBAT_DET0",     "PWR_VBAT_DET"},
        {"PWR_RSTN0",         "PWR_RSTN"},
        {"PWR_SEQ10",         "PWR_SEQ1"},
        {"PWR_SEQ13",         "PWR_GPIO_3"},
        {"PWR_SEQ20",         "PWR_SEQ2"},
        {"PWR_SEQ23",         "PWR_GPIO_4"},
        {"PWR_WAKEUP00",      "PWR_WAKEUP0"},
        {"PWR_WAKEUP01",      "PWR_IR0"},
        {"PWR_WAKEUP02",      "PWR_UART0_TX"},
        {"PWR_WAKEUP03",      "PWR_GPIO_6"},
        {"PWR_WAKEUP04",      "UART1_TX"},
        {"PWR_WAKEUP05",      "IIC4_SCL"},
        {"PWR_WAKEUP06",      "EPHY_LNK_LED"},
        {"PWR_WAKEUP07",      "WG2_D0"},
        {"PWR_BUTTON10",      "PWR_BUTTON1"},
        {"PWR_BUTTON13",      "PWR_GPIO_8"},
        {"PWR_BUTTON14",      "UART1_RX"},
        {"PWR_BUTTON15",      "IIC4_SDA"},
        {"PWR_BUTTON16",      "EPHY_SPD_LED"},
        {"PWR_BUTTON17",      "WG2_D1"},
        {"XTAL_XIN0",         "PWR_XTAL_CLKIN"},
        {"PWR_GPIO00",        "PWR_GPIO_0"},
        {"PWR_GPIO01",        "UART2_TX"},
        {"PWR_GPIO02",        "PWR_UART0_RX"},
        {"PWR_GPIO04",        "PWM_8"},
        {"PWR_GPIO10",        "PWR_GPIO_1"},
        {"PWR_GPIO11",        "UART2_RX"},
        {"PWR_GPIO13",        "EPHY_LNK_LED"},
        {"PWR_GPIO14",        "PWM_9"},
        {"PWR_GPIO15",        "PWR_IIC_SCL"},
        {"PWR_GPIO16",        "IIC2_SCL"},
        {"PWR_GPIO17",        "IIC0_SDA"},
        {"PWR_GPIO20",        "PWR_GPIO_2"},
        {"PWR_GPIO22",        "PWR_SECTICK"},
        {"PWR_GPIO23",        "EPHY_SPD_LED"},
        {"PWR_GPIO24",        "PWM_10"},
        {"PWR_GPIO25",        "PWR_IIC_SDA"},
        {"PWR_GPIO26",        "IIC2_SDA"},
        {"PWR_GPIO27",        "IIC0_SCL"},
        {"SD1_GPIO11",        "UART4_TX"},
        {"SD1_GPIO13",        "PWR_GPIO_26"},
        {"SD1_GPIO17",        "PWM_10"},
        {"SD1_GPIO01",        "UART4_RX"},
        {"SD1_GPIO03",        "PWR_GPIO_25"},
        {"SD1_GPIO07",        "PWM_11"},
        {"SD1_D30",           "PWR_SD1_D3"},
        {"SD1_D31",           "SPI2_CS_X"},
        {"SD1_D32",           "IIC1_SCL"},
        {"SD1_D33",           "PWR_GPIO_18"},
        {"SD1_D34",           "CAM_MCLK0"},
        {"SD1_D35",           "UART3_CTS"},
        {"SD1_D36",           "PWR_SPINOR1_CS_X"},
        {"SD1_D37",           "PWM_4"},
        {"SD1_D20",           "PWR_SD1_D2"},
        {"SD1_D21",           "IIC1_SCL"},
        {"SD1_D22",           "UART2_TX"},
        {"SD1_D23",           "PWR_GPIO_19"},
        {"SD1_D24",           "CAM_MCLK0"},
        {"SD1_D25",           "UART3_TX"},
        {"SD1_D26",           "PWR_SPINOR1_HOLD_X"},
        {"SD1_D27",           "PWM_5"},
        {"SD1_D10",           "PWR_SD1_D1"},
        {"SD1_D11",           "IIC1_SDA"},
        {"SD1_D12",           "UART2_RX"},
        {"SD1_D13",           "PWR_GPIO_20"},
        {"SD1_D14",           "CAM_MCLK1"},
        {"SD1_D15",           "UART3_RX"},
        {"SD1_D16",           "PWR_SPINOR1_WP_X"},
        {"SD1_D17",           "PWM_6"},
        {"SD1_D00",           "PWR_SD1_D0"},
        {"SD1_D01",           "SPI2_SDI"},
        {"SD1_D02",           "IIC1_SDA"},
        {"SD1_D03",           "PWR_GPIO_21"},
        {"SD1_D04",           "CAM_MCLK1"},
        {"SD1_D05",           "UART3_RTS"},
        {"SD1_D06",           "PWR_SPINOR1_MISO"},
        {"SD1_D07",           "PWM_7"},
        {"SD1_CMD0",          "PWR_SD1_CMD"},
        {"SD1_CMD1",          "SPI2_SDO"},
        {"SD1_CMD2",          "IIC3_SCL"},
        {"SD1_CMD3",          "PWR_GPIO_22"},
        {"SD1_CMD4",          "CAM_VS0"},
        {"SD1_CMD5",          "EPHY_LNK_LED"},
        {"SD1_CMD6",          "PWR_SPINOR1_MOSI"},
        {"SD1_CMD7",          "PWM_8"},
        {"SD1_CLK0",          "PWR_SD1_CLK"},
        {"SD1_CLK1",          "SPI2_SCK"},
        {"SD1_CLK2",          "IIC3_SDA"},
        {"SD1_CLK3",          "PWR_GPIO_23"},
        {"SD1_CLK4",          "CAM_HS0"},
        {"SD1_CLK5",          "EPHY_SPD_LED"},
        {"SD1_CLK6",          "PWR_SPINOR1_SCK"},
        {"SD1_CLK7",          "PWM_9"},
        {"PWM0_BUCK0",        "PWM_0"},
        {"PWM0_BUCK3",        "XGPIOB_0"},
        {"ADC13",             "XGPIOB_3"},
        {"ADC14",             "KEY_COL2"},
        {"ADC16",             "PWM_3"},
        {"USB_VBUS_DET0",     "USB_VBUS_DET"},
        {"USB_VBUS_DET3",     "XGPIOB_6"},
        {"USB_VBUS_DET4",     "CAM_MCLK0"},
        {"USB_VBUS_DET5",     "CAM_MCLK1"},
        {"USB_VBUS_DET6",     "PWM_4"},
        {"MUX_SPI1_MISO1",    "UART3_RTS"},
        {"MUX_SPI1_MISO2",    "IIC1_SDA"},
        {"MUX_SPI1_MISO3",    "XGPIOB_8"},
        {"MUX_SPI1_MISO4",    "PWM_9"},
        {"MUX_SPI1_MISO5",    "KEY_COL1"},
        {"MUX_SPI1_MISO6",    "SPI1_SDI"},
        {"MUX_SPI1_MISO7",    "DBG_14"},
        {"MUX_SPI1_MOSI2",    "UART3_RX"},
        {"MUX_SPI1_MOSI3",    "IIC1_SCL"},
        {"MUX_SPI1_MOSI3",    "XGPIOB_7"},
        {"MUX_SPI1_MOSI4",    "PWM_8"},
        {"MUX_SPI1_MOSI5",    "KEY_COL0"},
        {"MUX_SPI1_MOSI6",    "SPI1_SDO"},
        {"MUX_SPI1_MOSI7",    "DBG_13"},
        {"MUX_SPI1_CS1",      "UART3_CTS"},
        {"MUX_SPI1_CS2",      "CAM_MCLK0"},
        {"MUX_SPI1_CS3",      "XGPIOB_10"},
        {"MUX_SPI1_CS4",      "PWM_11"},
        {"MUX_SPI1_CS5",      "KEY_ROW3"},
        {"MUX_SPI1_CS6",      "SPI1_CS_X"},
        {"MUX_SPI1_CS7",      "DBG_16"},
        {"MUX_SPI1_SCK1",     "UART3_TX"},
        {"MUX_SPI1_SCK2",     "CAM_MCLK1"},
        {"MUX_SPI1_SCK3",     "XGPIOB_9"},
        {"MUX_SPI1_SCK4",     "PWM_10"},
        {"MUX_SPI1_SCK5",     "KEY_ROW2"},
        {"MUX_SPI1_SCK6",     "SPI1_SCK"},
        {"MUX_SPI1_SCK7",     "DBG_15"},
        {"PAD_ETH_TXP1",      "UART3_RX"},
        {"PAD_ETH_TXP2",      "IIC1_SCL"},
        {"PAD_ETH_TXP3",      "XGPIOB_25"},
        {"PAD_ETH_TXP4",      "PWM_13"},
        {"PAD_ETH_TXP5",      "CAM_MCLK0"},
        {"PAD_ETH_TXP6",      "SPI1_SDO"},
        {"PAD_ETH_TXP7",      "IIS2_LRCK"},
        {"PAD_ETH_TXM1",      "UART3_RTS"},
        {"PAD_ETH_TXM2",      "IIC1_SDA"},
        {"PAD_ETH_TXM3",      "XGPIOB_24"},
        {"PAD_ETH_TXM4",      "PWM_12"},
        {"PAD_ETH_TXM5",      "CAM_MCLK1"},
        {"PAD_ETH_TXM6",      "SPI1_SDI"},
        {"PAD_ETH_TXM7",      "IIS2_BCLK"},
        {"PAD_ETH_RXP1",      "UART3_TX"},
        {"PAD_ETH_RXP2",      "CAM_MCLK1"},
        {"PAD_ETH_RXP3",      "XGPIOB_27"},
        {"PAD_ETH_RXP4",      "PWM_15"},
        {"PAD_ETH_RXP5",      "CAM_HS0"},
        {"PAD_ETH_RXP6",      "SPI1_SCK"},
        {"PAD_ETH_RXP7",      "IIS2_DO"},
        {"PAD_ETH_RXM1",      "UART3_CTS"},
        {"PAD_ETH_RXM2",      "CAM_MCLK0"},
        {"PAD_ETH_RXM3",      "XGPIOB_26"},
        {"PAD_ETH_RXM4",      "PWM_14"},
        {"PAD_ETH_RXM5",      "CAM_VS0"},
        {"PAD_ETH_RXM6",      "SPI1_CS_X"},
        {"PAD_ETH_RXM7",      "IIS2_DI"},
        {"GPIO_RTX1",         "VI0_D_15"},
        {"GPIO_RTX3",         "XGPIOB_23"},
        {"GPIO_RTX4",         "PWM_1"},
        {"GPIO_RTX5",         "CAM_MCLK0"},
        {"GPIO_RTX7",         "IIS2_MCLK"},
        {"PAD_MIPIRX4N1",     "VI0_CLK"},
        {"PAD_MIPIRX4N2",     "IIC0_SCL"},
        {"PAD_MIPIRX4N3",     "XGPIOC_2"},
        {"PAD_MIPIRX4N4",     "IIC1_SDA"},
        {"PAD_MIPIRX4N5",     "CAM_MCLK0"},
        {"PAD_MIPIRX4N6",     "KEY_ROW0"},
        {"PAD_MIPIRX4N7",     "MUX_SPI1_SCK"},
        {"PAD_MIPIRX4P1",     "VI0_D_0"},
        {"PAD_MIPIRX4P2",     "IIC0_SDA"},
        {"PAD_MIPIRX4P3",     "XGPIOC_3"},
        {"PAD_MIPIRX4P4",     "IIC1_SCL"},
        {"PAD_MIPIRX4P5",     "CAM_MCLK1"},
        {"PAD_MIPIRX4P6",     "KEY_ROW1"},
        {"PAD_MIPIRX4P7",     "MUX_SPI1_CS"},
        {"PAD_MIPIRX3N1",     "VI0_D_1"},
        {"PAD_MIPIRX3N3",     "XGPIOC_4"},
        {"PAD_MIPIRX3N4",     "CAM_MCLK0"},
        {"PAD_MIPIRX3N7",     "MUX_SPI1_MISO"},
        {"PAD_MIPIRX3P1",     "VI0_D_2"},
        {"PAD_MIPIRX3P3",     "XGPIOC_5"},
        {"PAD_MIPIRX3P7",     "MUX_SPI1_MOSI"},
        {"PAD_MIPIRX2N1",     "VI0_D_3"},
        {"PAD_MIPIRX2N3",     "XGPIOC_6"},
        {"PAD_MIPIRX2N5",     "IIC4_SCL"},
        {"PAD_MIPIRX2N7",     "DBG_6"},
        {"PAD_MIPIRX2P1",     "VI0_D_4"},
        {"PAD_MIPIRX2P3",     "XGPIOC_7"},
        {"PAD_MIPIRX2P5",     "IIC4_SDA"},
        {"PAD_MIPIRX2P7",     "DBG_7"},
        {"PAD_MIPIRX1N1",     "VI0_D_5"},
        {"PAD_MIPIRX1N3",     "XGPIOC_8"},
        {"PAD_MIPIRX1N6",     "KEY_ROW3"},
        {"PAD_MIPIRX1N7",     "DBG_8"},
        {"PAD_MIPIRX1P1",     "VI0_D_6"},
        {"PAD_MIPIRX1P3",     "XGPIOC_9"},
        {"PAD_MIPIRX1P4",     "IIC1_SDA"},
        {"PAD_MIPIRX1P6",     "KEY_ROW2"},
        {"PAD_MIPIRX1P7",     "DBG_9"},
        {"PAD_MIPIRX0N1",     "VI0_D_7"},
        {"PAD_MIPIRX0N3",     "XGPIOC_10"},
        {"PAD_MIPIRX0N4",     "IIC1_SCL"},
        {"PAD_MIPIRX0N5",     "CAM_MCLK1"},
        {"PAD_MIPIRX0N7",     "DBG_10"},
        {"PAD_MIPIRX0P1",     "VI0_D_8"},
        {"PAD_MIPIRX0P3",     "XGPIOC_11"},
        {"PAD_MIPIRX0P4",     "CAM_MCLK0"},
        {"PAD_MIPIRX0P7",     "DBG_11"},
        {"PAD_MIPI_TXM21",    "VI0_D_13"},
        {"PAD_MIPI_TXM22",    "IIC0_SDA"},
        {"PAD_MIPI_TXM23",    "XGPIOC_16"},
        {"PAD_MIPI_TXM24",    "IIC1_SDA"},
        {"PAD_MIPI_TXM25",    "PWM_8"},
        {"PAD_MIPI_TXM26",    "SPI0_SCK"},
        {"PAD_MIPI_TXP21",    "VI0_D_14"},
        {"PAD_MIPI_TXP22",    "IIC0_SCL"},
        {"PAD_MIPI_TXP23",    "XGPIOC_17"},
        {"PAD_MIPI_TXP24",    "IIC1_SCL"},
        {"PAD_MIPI_TXP25",    "PWM_9"},
        {"PAD_MIPI_TXP26",    "SPI0_CS_X"},
        {"PAD_MIPI_TXP27",    "IIS1_MCLK"},
        {"PAD_MIPI_TXM10",    "SPI3_SDO"},
        {"PAD_MIPI_TXM11",    "VI0_D_11"},
        {"PAD_MIPI_TXM12",    "IIS1_LRCK"},
        {"PAD_MIPI_TXM13",    "XGPIOC_14"},
        {"PAD_MIPI_TXM14",    "IIC2_SDA"},
        {"PAD_MIPI_TXM15",    "PWM_10"},
        {"PAD_MIPI_TXM16",    "SPI0_SDO"},
        {"PAD_MIPI_TXM17",    "DBG_14"},
        {"PAD_MIPI_TXP10",    "SPI3_SDI"},
        {"PAD_MIPI_TXP11",    "VI0_D_12"},
        {"PAD_MIPI_TXP12",    "IIS1_DO"},
        {"PAD_MIPI_TXP13",    "XGPIOC_15"},
        {"PAD_MIPI_TXP14",    "IIC2_SCL"},
        {"PAD_MIPI_TXP15",    "PWM_11"},
        {"PAD_MIPI_TXP16",    "SPI0_SDI"},
        {"PAD_MIPI_TXP17",    "DBG_15"},
        {"PAD_MIPI_TXM00",    "SPI3_SCK"},
        {"PAD_MIPI_TXM01",    "VI0_D_9"},
        {"PAD_MIPI_TXM02",    "IIS1_DI"},
        {"PAD_MIPI_TXM03",    "XGPIOC_12"},
        {"PAD_MIPI_TXM04",    "CAM_MCLK1"},
        {"PAD_MIPI_TXM05",    "PWM_14"},
        {"PAD_MIPI_TXM06",    "CAM_VS0"},
        {"PAD_MIPI_TXM07",    "DBG_12"},
        {"PAD_MIPI_TXP00",    "SPI3_CS_X"},
        {"PAD_MIPI_TXP01",    "VI0_D_10"},
        {"PAD_MIPI_TXP02",    "IIS1_BCLK"},
        {"PAD_MIPI_TXP03",    "XGPIOC_13"},
        {"PAD_MIPI_TXP04",    "CAM_MCLK0"},
        {"PAD_MIPI_TXP05",    "PWM_15"},
        {"PAD_MIPI_TXP06",    "CAM_HS0"},
        {"PAD_MIPI_TXP07",    "DBG_13"},
        {"PAD_AUD_AINL_MIC3", "XGPIOC_23"},
        {"PAD_AUD_AINL_MIC4", "IIS1_BCLK"},
        {"PAD_AUD_AINL_MIC5", "IIS2_BCLK"},
        {"PAD_AUD_AOUTR3",    "XGPIOC_24"},
        {"PAD_AUD_AOUTR4",    "IIS1_DI"},
        {"PAD_AUD_AOUTR5",    "IIS2_DO"},
        {"PAD_AUD_AOUTR6",    "IIS1_DO"},
        {"MUX_UART0_IP_SEL0", "SELECT_UART_IP_0"},
        {"MUX_UART0_IP_SEL1", "SELECT_UART_IP_1"},
        {"MUX_UART0_IP_SEL2", "SELECT_UART_IP_2"},
        {"MUX_UART0_IP_SEL3", "SELECT_UART_IP_3"},
        {"MUX_UART0_IP_SEL4", "SELECT_UART_IP_4"},
        {"MUX_UART1_IP_SEL0", "SELECT_UART_IP_0"},
        {"MUX_UART1_IP_SEL1", "SELECT_UART_IP_1"},
        {"MUX_UART1_IP_SEL2", "SELECT_UART_IP_2"},
        {"MUX_UART1_IP_SEL3", "SELECT_UART_IP_3"},
        {"MUX_UART1_IP_SEL4", "SELECT_UART_IP_4"},
        {"MUX_UART2_IP_SEL0", "SELECT_UART_IP_0"},
        {"MUX_UART2_IP_SEL1", "SELECT_UART_IP_1"},
        {"MUX_UART2_IP_SEL2", "SELECT_UART_IP_2"},
        {"MUX_UART2_IP_SEL3", "SELECT_UART_IP_3"},
        {"MUX_UART2_IP_SEL4", "SELECT_UART_IP_4"},
        {"MUX_UART3_IP_SEL0", "SELECT_UART_IP_0"},
        {"MUX_UART3_IP_SEL1", "SELECT_UART_IP_1"},
        {"MUX_UART3_IP_SEL2", "SELECT_UART_IP_2"},
        {"MUX_UART3_IP_SEL3", "SELECT_UART_IP_3"},
        {"MUX_UART3_IP_SEL4", "SELECT_UART_IP_4"},
        {"MUX_UART4_IP_SEL0", "SELECT_UART_IP_0"},
        {"MUX_UART4_IP_SEL1", "SELECT_UART_IP_1"},
        {"MUX_UART4_IP_SEL2", "SELECT_UART_IP_2"},
        {"MUX_UART4_IP_SEL3", "SELECT_UART_IP_3"},
        {"MUX_UART4_IP_SEL4", "SELECT_UART_IP_4"},

};

struct pin_def pin_list[] = {
        {"SD0_CLK",          0x0},
        {"SD0_CMD",          0x4},
        {"SD0_D0",           0x8},
        {"SD0_D1",           0xc},
        {"SD0_D2",           0x10},
        {"SD0_D3",           0x14},
        {"SD0_CD",           0x18},
        {"SD0_PWR_EN",       0x1c},
        {"SPK_EN",           0x20},
        {"UART0_TX",         0x24},
        {"UART0_RX",         0x28},
        {"SPINOR_HOLD_X",    0x2c},
        {"SPINOR_SCK",       0x30},
        {"SPINOR_MOSI",      0x34},
        {"SPINOR_WP_X",      0x38},
        {"SPINOR_MISO",      0x3c},
        {"SPINOR_CS_X",      0x40},
        {"JTAG_CPU_TMS",     0x44},
        {"JTAG_CPU_TCK",     0x48},
        {"IIC0_SCL",         0x4c},
        {"IIC0_SDA",         0x50},
        {"AUX0",             0x54},
        {"GPIO_ZQ",          0x58},
        {"PWR_VBAT_DET",     0x5c},
        {"PWR_RSTN",         0x60},
        {"PWR_SEQ1",         0x64},
        {"PWR_SEQ2",         0x68},
        {"PWR_WAKEUP0",      0x6c},
        {"PWR_BUTTON1",      0x70},
        {"XTAL_XIN",         0x74},
        {"PWR_GPIO0",        0x78},
        {"PWR_GPIO1",        0x7c},
        {"PWR_GPIO2",        0x80},
        {"SD1_GPIO1",        0x84},
        {"SD1_GPIO0",        0x88},
        {"SD1_D3",           0x8c},
        {"SD1_D2",           0x90},
        {"SD1_D1",           0x94},
        {"SD1_D0",           0x98},
        {"SD1_CMD",          0x9c},
        {"SD1_CLK",          0xa0},
        {"PWM0_BUCK",        0xa4},
        {"ADC1",             0xa8},
        {"USB_VBUS_DET",     0xac},
        {"MUX_SPI1_MISO",    0xb0},
        {"MUX_SPI1_MOSI",    0xb4},
        {"MUX_SPI1_CS",      0xb8},
        {"MUX_SPI1_SCK",     0xbc},
        {"PAD_ETH_TXP",      0xc0},
        {"PAD_ETH_TXM",      0xc4},
        {"PAD_ETH_RXP",      0xc8},
        {"PAD_ETH_RXM",      0xcc},
        {"GPIO_RTX",         0xd0},
        {"PAD_MIPIRX4N",     0xd4},
        {"PAD_MIPIRX4P",     0xd8},
        {"PAD_MIPIRX3N",     0xdc},
        {"PAD_MIPIRX3P",     0xe0},
        {"PAD_MIPIRX2N",     0xe4},
        {"PAD_MIPIRX2P",     0xe8},
        {"PAD_MIPIRX1N",     0xec},
        {"PAD_MIPIRX1P",     0xf0},
        {"PAD_MIPIRX0N",     0xf4},
        {"PAD_MIPIRX0P",     0xf8},
        {"PAD_MIPI_TXM2",    0xfc},
        {"PAD_MIPI_TXP2",    0x100},
        {"PAD_MIPI_TXM1",    0x104},
        {"PAD_MIPI_TXP1",    0x108},
        {"PAD_MIPI_TXM0",    0x10c},
        {"PAD_MIPI_TXP0",    0x110},
        {"PAD_AUD_AINL_MIC", 0x120},
        {"PAD_AUD_AOUTR",    0x12c},
        {"MUX_UART0_IP_SEL", 0x1d4},
        {"MUX_UART1_IP_SEL", 0x1d8},
        {"MUX_UART2_IP_SEL", 0x1dc},
        {"MUX_UART3_IP_SEL", 0x1e0},
        {"MUX_UART4_IP_SEL", 0x1e4},
};

uint32_t pin_function_get_value(char *pin, char *func) {
    uint32_t i;
    uint32_t max_fun_num = ARR_LEN(pin_functions);
    char v;

    for (i = 0; i < max_fun_num; i++) {
        if (strcmp(pin_functions[i].func, func) == 0) {
            if (strncmp(pin_functions[i].name, pin, strlen(pin)) == 0) {
                v = pin_functions[i].name[strlen(pin_functions[i].name) - 1];
                break;
            }
        }
    }

    if (i == max_fun_num) {
        printf("ERROR: invalid pin or func\n");
        return INVALID_PIN;
    }

    return (v - 0x30);
}

void pin_function_print(char *name, uint32_t value) {
    uint32_t i;
    uint32_t max_fun_num = ARR_LEN(pin_functions);
    char pinname[128];

    sprintf(pinname, "%s%d", name, value);

    printf("%s function:\n", name);
    for (i = 0; i < max_fun_num; i++) {
        if (strncmp(pinname, pin_functions[i].name, strlen(name)) == 0) {
            if (strcmp(pinname, pin_functions[i].name) == 0)
                printf("[v] %s\n", pin_functions[i].func);
            else
                printf("[ ] %s\n", pin_functions[i].func);
            // break;
        }
    }
    printf("\n");
}

void pin_function_read(char *pin) {
    uint32_t i, value;

    for (i = 0; i < ARR_LEN(pin_list); i++) {
        if (strcmp(pin, pin_list[i].name) == 0)
            break;
    }
    if (i != ARR_LEN(pin_list)) {
        value = pinmux_read_32(pin_list[i].offset);
        pin_function_print(pin, value);

        printf("register: 0x%08x\n", PINMUX_BASE + pin_list[i].offset);
        printf("value: 0x%08x\n", value);
    } else {
        printf("\nInvalid option: %s", pin);
    }
}

void pin_function_write(char *arg) {
    uint32_t i;
    char pin[32];
    char func[32];
    char *strops = strchr(arg, '/');
    if (!strops) {
        print_usage();
        return;
    }

    strncpy(pin, arg, strops - arg);
    pin[strops - arg] = '\0';
    strcpy(func, strops + 1);

    printf("pin %s\n", pin);
    printf("func %s\n", func);

    for (i = 0; i < ARR_LEN(pin_list); i++) {
        if (strcmp(pin, pin_list[i].name) == 0)
            break;
    }

    if (i != ARR_LEN(pin_list)) {
        uint32_t f_val = pin_function_get_value(pin, func);
        if (f_val == INVALID_PIN) {
            return;
        }

        printf("register: 0x%08x\n", PINMUX_BASE + pin_list[i].offset);
        printf("value: 0x%08x\n", f_val);

        pinmux_write_32(pin_list[i].offset, f_val);
    } else {
        printf("\nInvalid option: %s\n", arg);
    }
}

void pin_function_print_all() {
    printf("List of the pins:\n");
    for (uint32_t i = 0; i < ARR_LEN(pin_list); i++) {
        printf("%s\n", pin_list[i].name);
    }
}

void pin_function_print_all_detailed() {
    for (uint32_t i = 0; i < ARR_LEN(pin_list); i++) {
        uint32_t value = pinmux_read_32(pin_list[i].offset);
        pin_function_print(pin_list[i].name, value);
    }
}