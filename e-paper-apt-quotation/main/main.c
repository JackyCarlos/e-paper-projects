#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void) {
    while (1) {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
