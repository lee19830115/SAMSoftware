/*****************************************************************************
 * Startup_Code_Core0.c
 *****************************************************************************/

#include "Startup_Code_Core0.h"

#include <sys/platform.h>
#include <services/mcapi/mcapi.h>
#include <sys/adi_core.h>

#include "../system/adi_initialize.h"
#include "..\..\..\..\Simple_Drivers\sysctrl_simple\simple_sysctrl.h"
#include "..\..\multicore_audio_simple\multicore_audio_simple.h"

int main(int argc, const char* argv[] )
{
	/**
	 * Initialize managed drivers and/or services that have been added to 
	 * the project.
	 * @return zero on success 
	 */
 	adi_initComponents();
	
 	if (!checkSharedMemoryStructureSizes()) {
 		printf("multicore_audio_simple: one of the structures is too big");
 		while(1) {}
 	}


	/**
	 * The default startup code does not include any functionality to allow
	 * core 0 to enable core 1 and core 2. A convenient way to enable
	 * core 1 and core 2 is to use the adi_core_enable function. 
	 */
	adi_core_enable(ADI_CORE_SHARC0);
	adi_core_enable(ADI_CORE_SHARC1);

	// Initialize clocks, GPIO
	simple_sysctrl_init(true, 0);


	// Call Arduino-style setup() and loop functions()
	setup();

	while(1) {
		loop();	
	}
}



