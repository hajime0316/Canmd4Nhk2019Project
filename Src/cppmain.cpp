#include "cppmain.hpp"

#include "main.h"
#include "can.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"

// モジュールのインクルード
#include "stm32_printf/stm32_printf.h"

void setup(void) {
    // ハードウェアモジュールスタート
    stm32_printf_init(&huart1);
}

void loop(void) {
    stm32_printf("Hello world!\r\n");
}
