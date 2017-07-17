/*****************************************************************************
 * Startup_Code_Core1.c
 *****************************************************************************/

#include "Startup_Code_Core1.h"

#include <sys/platform.h>

#include <sys/adi_core.h>
#include <services/mcapi/mcapi.h>

#include <stdio.h>

#include "..\..\..\..\Simple_Drivers\sysctrl_simple\simple_sysctrl.h"

#include "Automotive_DMA_Framework.h"



/** 
 * If you want to use command program arguments, then place them in the following string. 
 */
char __argv_string[] = "";


int section("shared_l3_data_mem") core1_TestBuffer[10];

int main(int argc, char *argv[])
{
	/**
	 * Initialize managed drivers and/or services that have been added to 
	 * the project.
	 * @return zero on success 
	 */

  	adi_initComponents();


 	// Kick off double-buffering DMA framework - when new blocks are available, our processing callback is called in Main.cpp
	ADAU1452_DMA_Framework_Start();

	// Call Arduino-style setup() and loop functions()
 	setup();

 	while(1) {
 		loop();
 	}
}


