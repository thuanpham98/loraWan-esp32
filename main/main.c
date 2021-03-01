#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"

static char *TAG="lorawan";

void app_main(void)
{
    ESP_LOGI(TAG,"hello thuan");
    uint8_t a =0;
    while(1)
    {
        ESP_LOGI(TAG,"%d",a);
        a++;
        vTaskDelay(100/portTICK_PERIOD_MS);
    }
}