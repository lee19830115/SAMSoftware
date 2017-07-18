/*****************************************************************************
 * Startup_Code_Core1.c
 *****************************************************************************/

#include "Startup_Code_Core1.h"

#include <sys/platform.h>

#include <sys/adi_core.h>
#include <stdio.h>

#include "..\..\..\..\Simple_Drivers\sysctrl_simple\simple_sysctrl.h"

#include "ADAU1761_DMA_Framework.h"


/** 
 * If you want to use command program arguments, then place them in the following string. 
 */
char __argv_string[] = "";


int main()
{
	/**
	 * Initialize managed drivers and/or services that have been added to 
	 * the project.
	 * @return zero on success 
	 */

  	adi_initComponents();

  	// Kick off double-buffering DMA framework - when new blocks are available, our processing callback is called in Main.cpp
 	ADAU1761_Start();

	// Call Arduino-style setup() and loop functions()
 	setup();

 	while(1) {
 		loop();
 	}
}


