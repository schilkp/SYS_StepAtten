#include <sys_stepatten.h>

int main(void)
{
	// determine UI mode from config jumper position
	static const UI_MODE_T config_ui_select[INPUT_COUNT] = {mode_cycle, mode_cycle_toggle, mode_select, mode_cycle};

	// TODO external ctrl

	// Get previously selected input from flash
	uint32_t current_input = flash_read_state();

	systick_init(); // Configure the SysTsick
  	gpio_init();    // Configre all GPIOs
	adc_init();     // Configure the ADC

	// Read the current config jumper setting to determine UI mode
	const UI_MODE_T ui_mode = config_ui_select[gpio_read_config()];

	ui_setup(ui_mode, current_input);

	while(1){
		ui_update(ui_mode, &current_input);
		flash_update_state(current_input);
		systick_dlyms(100);
	}
}