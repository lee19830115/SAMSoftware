/*****************************************************************************
 * MIDI DIY Testing 2_Core2.c
 *****************************************************************************/

#include "Startup_Code_Core2.h"

#include <sys/platform.h>
#include <sys/adi_core.h>
#include "adi_initialize.h"

#include "..\..\..\..\Simple_Drivers\sysctrl_simple\simple_sysctrl.h"

/** 
 * If you want to use command program arguments, then place them in the following string. 
 */
char __argv_string[] = "";

int main(int argc, char *argv[])
{
	/**
	 * Initialize managed drivers and/or services that have been added to 
	 * the project.
	 * @return zero on success 
	 */
	adi_initComponents();
	
    // Call Arduino-style setup() and loop functions()
	setup();

	while(1) {
		loop();
	}
}
