#include <gui/screen1_screen/Screen1View.hpp>
#include "stm32h7rsxx_hal.h"

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

//LED Toggle function
void Screen1View::ToggleLED()
{
	//Turn on and off the touch screen
	if(toggleButton1.getState())
		HAL_GPIO_WritePin(GPIOO, GPIO_PIN_1, GPIO_PIN_SET); //Turn on LD1
	else
		HAL_GPIO_WritePin(GPIOO, GPIO_PIN_1, GPIO_PIN_RESET); //Turn off LD1

}
