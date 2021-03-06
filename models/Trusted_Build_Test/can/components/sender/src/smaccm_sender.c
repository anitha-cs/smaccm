/**************************************************************************
  Copyright (c) 2013, 2014, 2015 Rockwell Collins and the University of Minnesota.
  Developed with the sponsorship of the Defense Advanced Research Projects Agency (DARPA).

  Permission is hereby granted, free of charge, to any person obtaining a copy of this data,
  including any software or models in source or binary form, as well as any drawings, specifications, 
  and documentation (collectively "the Data"), to deal in the Data without restriction, including 
  without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
  and/or sell copies of the Data, and to permit persons to whom the Data is furnished to do so, 
  subject to the following conditions: 

  The above copyright notice and this permission notice shall be included in all copies or
  substantial portions of the Data.

  THE DATA IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT 
  LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
  IN NO EVENT SHALL THE AUTHORS, SPONSORS, DEVELOPERS, CONTRIBUTORS, OR COPYRIGHT HOLDERS BE LIABLE 
  FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, 
  ARISING FROM, OUT OF OR IN CONNECTION WITH THE DATA OR THE USE OR OTHER DEALINGS IN THE DATA. 

 **************************************************************************/


/**************************************************************************

   File: /home/ajgacek/may-drop-odroid/projects/smaccm/models/Trusted_Build_Test/can/components/sender/src/smaccm_sender.c
   Created on: 2015/05/05 10:43:17
   using Dulcimer AADL system build tool suite 

   ***AUTOGENERATED CODE: DO NOT MODIFY***

  This C file contains the implementations of the AADL primitives
  used by user-level declarations for thread sender.   

  The user code runs in terms of "dispatchers", which cause 
  dispatch user-level handlers to execute.  These handlers can 
  communicate using the standard AADL primitives, which are mapped
  to C functions.

  The send/receive handlers are not thread safe in CAmkES; it is 
  assumed that this is handled by the CAmkES sequentialized access 
  to the dispatch handler.  There is only one dispatch interface 
  for the component containing all of the dispatch points.

  They are thread safe for eChronos.

  The read/write handlers are thread safe because the writer comes 
  through a dispatch interface but the reader is "local" on a dispatch
  interface and so contention may occur.


 **************************************************************************/


#include <string.h>
#include <smaccm_sender.h>
#include <sender.h>

///////////////////////////////////////////////////////////////////////////
//
// Local prototypes for AADL dispatchers
//
///////////////////////////////////////////////////////////////////////////
void 
smaccm_dispatcher_periodic_1000_ms(uint64_t * periodic_1000_ms); 
void 
smaccm_sender_status_0_dispatcher(bool * status_0); 
 



/************************************************************************
 * 
 * Static variables and queue management functions for port:
 * 	status_0
 * 
 ************************************************************************/

bool smaccm_queue_status_0 [1];
bool smaccm_queue_full_status_0  = false;
uint32_t smaccm_queue_front_status_0  = 0;
uint32_t smaccm_queue_back_status_0  = 0;

bool smaccm_queue_is_full_status_0() {
	return (smaccm_queue_front_status_0 == smaccm_queue_back_status_0) && (smaccm_queue_full_status_0);
}

bool smaccm_queue_is_empty_status_0() {
	return (smaccm_queue_front_status_0 == smaccm_queue_back_status_0) && (!smaccm_queue_full_status_0); 
}

bool smaccm_queue_read_status_0(bool * status_0) {
	if (smaccm_queue_is_empty_status_0()) {
		return false;
	} else {
		*status_0 = smaccm_queue_status_0[smaccm_queue_back_status_0] ;

		smaccm_queue_back_status_0 = (smaccm_queue_back_status_0 + 1) % 1; 
		smaccm_queue_full_status_0 = false ; 
		return true;
	}
}

bool smaccm_queue_write_status_0(const bool * status_0) {
	if (smaccm_queue_is_full_status_0()) {
		return false;
	} else {
		smaccm_queue_status_0[smaccm_queue_front_status_0] = *status_0 ;

		smaccm_queue_front_status_0 = (smaccm_queue_front_status_0 + 1) % 1; 		
		if (smaccm_queue_back_status_0 == smaccm_queue_front_status_0) { 
			smaccm_queue_full_status_0 = true ; 
		}
		return true;
	}
}

/************************************************************************
 *  status_0_write_bool: 
 * Invoked by: remote interface.
 * 
 * This is the function invoked by a remote RPC to write to an active-thread
 * input event data port.  It queues the input message into a circular buffer.
 * 
 ************************************************************************/

bool status_0_write_bool(const bool * arg) {
	bool result;
	smaccm_sender_status_0_mut_lock(); 
	result = smaccm_queue_write_status_0( arg);
	smaccm_sender_status_0_mut_unlock(); 
	smaccm_dispatch_sem_post();

	return result;
}


/************************************************************************
 *  sender_read_status_0: 
 * Invoked from local active thread.
 * 
 * This is the function invoked by the active thread to read from the 
 * input event data queue circular buffer.
 * 
 ************************************************************************/

bool sender_read_status_0(bool * arg) {
	bool result; 
	smaccm_sender_status_0_mut_lock(); 
	result = smaccm_queue_read_status_0(arg);
	smaccm_sender_status_0_mut_unlock(); 
	return result;
}


/************************************************************************
 * 
 * Static variables and queue management functions for port:
 * 	status_1
 * 
 ************************************************************************/

bool smaccm_queue_status_1 [1];
bool smaccm_queue_full_status_1  = false;
uint32_t smaccm_queue_front_status_1  = 0;
uint32_t smaccm_queue_back_status_1  = 0;

bool smaccm_queue_is_full_status_1() {
	return (smaccm_queue_front_status_1 == smaccm_queue_back_status_1) && (smaccm_queue_full_status_1);
}

bool smaccm_queue_is_empty_status_1() {
	return (smaccm_queue_front_status_1 == smaccm_queue_back_status_1) && (!smaccm_queue_full_status_1); 
}

bool smaccm_queue_read_status_1(bool * status_1) {
	if (smaccm_queue_is_empty_status_1()) {
		return false;
	} else {
		*status_1 = smaccm_queue_status_1[smaccm_queue_back_status_1] ;

		smaccm_queue_back_status_1 = (smaccm_queue_back_status_1 + 1) % 1; 
		smaccm_queue_full_status_1 = false ; 
		return true;
	}
}

bool smaccm_queue_write_status_1(const bool * status_1) {
	if (smaccm_queue_is_full_status_1()) {
		return false;
	} else {
		smaccm_queue_status_1[smaccm_queue_front_status_1] = *status_1 ;

		smaccm_queue_front_status_1 = (smaccm_queue_front_status_1 + 1) % 1; 		
		if (smaccm_queue_back_status_1 == smaccm_queue_front_status_1) { 
			smaccm_queue_full_status_1 = true ; 
		}
		return true;
	}
}

/************************************************************************
 *  status_1_write_bool: 
 * Invoked by: remote interface.
 * 
 * This is the function invoked by a remote RPC to write to an active-thread
 * input event data port.  It queues the input message into a circular buffer.
 * 
 ************************************************************************/

bool status_1_write_bool(const bool * arg) {
	bool result;
	smaccm_sender_status_1_mut_lock(); 
	result = smaccm_queue_write_status_1( arg);
	smaccm_sender_status_1_mut_unlock(); 
	return result;
}


/************************************************************************
 *  sender_read_status_1: 
 * Invoked from local active thread.
 * 
 * This is the function invoked by the active thread to read from the 
 * input event data queue circular buffer.
 * 
 ************************************************************************/

bool sender_read_status_1(bool * arg) {
	bool result; 
	smaccm_sender_status_1_mut_lock(); 
	result = smaccm_queue_read_status_1(arg);
	smaccm_sender_status_1_mut_unlock(); 
	return result;
}


/************************************************************************
 * 
 * Static variables and queue management functions for port:
 * 	status_2
 * 
 ************************************************************************/

bool smaccm_queue_status_2 [1];
bool smaccm_queue_full_status_2  = false;
uint32_t smaccm_queue_front_status_2  = 0;
uint32_t smaccm_queue_back_status_2  = 0;

bool smaccm_queue_is_full_status_2() {
	return (smaccm_queue_front_status_2 == smaccm_queue_back_status_2) && (smaccm_queue_full_status_2);
}

bool smaccm_queue_is_empty_status_2() {
	return (smaccm_queue_front_status_2 == smaccm_queue_back_status_2) && (!smaccm_queue_full_status_2); 
}

bool smaccm_queue_read_status_2(bool * status_2) {
	if (smaccm_queue_is_empty_status_2()) {
		return false;
	} else {
		*status_2 = smaccm_queue_status_2[smaccm_queue_back_status_2] ;

		smaccm_queue_back_status_2 = (smaccm_queue_back_status_2 + 1) % 1; 
		smaccm_queue_full_status_2 = false ; 
		return true;
	}
}

bool smaccm_queue_write_status_2(const bool * status_2) {
	if (smaccm_queue_is_full_status_2()) {
		return false;
	} else {
		smaccm_queue_status_2[smaccm_queue_front_status_2] = *status_2 ;

		smaccm_queue_front_status_2 = (smaccm_queue_front_status_2 + 1) % 1; 		
		if (smaccm_queue_back_status_2 == smaccm_queue_front_status_2) { 
			smaccm_queue_full_status_2 = true ; 
		}
		return true;
	}
}

/************************************************************************
 *  status_2_write_bool: 
 * Invoked by: remote interface.
 * 
 * This is the function invoked by a remote RPC to write to an active-thread
 * input event data port.  It queues the input message into a circular buffer.
 * 
 ************************************************************************/

bool status_2_write_bool(const bool * arg) {
	bool result;
	smaccm_sender_status_2_mut_lock(); 
	result = smaccm_queue_write_status_2( arg);
	smaccm_sender_status_2_mut_unlock(); 
	return result;
}


/************************************************************************
 *  sender_read_status_2: 
 * Invoked from local active thread.
 * 
 * This is the function invoked by the active thread to read from the 
 * input event data queue circular buffer.
 * 
 ************************************************************************/

bool sender_read_status_2(bool * arg) {
	bool result; 
	smaccm_sender_status_2_mut_lock(); 
	result = smaccm_queue_read_status_2(arg);
	smaccm_sender_status_2_mut_unlock(); 
	return result;
}



can__can_frame_i * smaccm_tmp_array_output; 
uint32_t * smaccm_tmp_used_output;
uint32_t smaccm_max_tmp_array_output; 	
uint32_t * smaccm_tmp_used_abort;
uint32_t smaccm_max_tmp_array_abort; 	


/************************************************************************
 * periodic_1000_ms Declarations
 * 
 ************************************************************************/

bool smaccm_occurred_periodic_1000_ms;
uint64_t smaccm_time_periodic_1000_ms;

/************************************************************************
 * sender_periodic_1000_ms_write_uint64_t
 * Invoked from remote periodic dispatch thread.
 * 
 * This function records the current time and triggers the active thread 
 * dispatch from a periodic event.
 * 
 ************************************************************************/

bool sender_periodic_1000_ms_write_uint64_t(const uint64_t * arg) {
	smaccm_occurred_periodic_1000_ms = true;
	smaccm_time_periodic_1000_ms = *arg;
	smaccm_dispatch_sem_post();

	return true;
}



/************************************************************************
 *  dispatch_dispatch_periodic_1000_ms: 
 * Invoked by remote RPC (or, for active thread, local dispatcher).
 * 
 * This is the function invoked by an active thread dispatcher to 
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 * 
 ************************************************************************/

void dispatch_dispatch_periodic_1000_ms(
const uint64_t * periodic_1000_ms ,
  smaccm_can__can_frame_i_struct_1 *output_data, uint32_t * output_index 
) {
	smaccm_max_tmp_array_abort = 0;
	smaccm_max_tmp_array_output = 1;
	smaccm_tmp_used_output = output_index;
	smaccm_tmp_array_output = output_data->f; 
	*smaccm_tmp_used_output = 0; 

	send(periodic_1000_ms); 

}	


/************************************************************************
 *  dispatch_dispatch_status_0: 
 * Invoked by remote RPC (or, for active thread, local dispatcher).
 * 
 * This is the function invoked by an active thread dispatcher to 
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 * 
 ************************************************************************/

void dispatch_dispatch_status_0(
const bool * status_0 ,
  smaccm_can__can_frame_i_struct_1 *output_data, uint32_t * output_index 
) {
	smaccm_max_tmp_array_abort = 0;
	smaccm_max_tmp_array_output = 1;
	smaccm_tmp_used_output = output_index;
	smaccm_tmp_array_output = output_data->f; 
	*smaccm_tmp_used_output = 0; 

	recvStatus(status_0); 

}	



/************************************************************************
 * sender_write_output 
 * Invoked from local active or passive thread.
 * 
 * This is the comm function invoked by a user-level thread to send a message 
 * to another thread.  It enqueues the request to be sent when the user thread
 * completes execution.
 * 
 ************************************************************************/

bool sender_write_output(const can__can_frame_i * output) {
	if (smaccm_max_tmp_array_output > 0 && 
		 *smaccm_tmp_used_output < smaccm_max_tmp_array_output) {
		memcpy(&smaccm_tmp_array_output[*smaccm_tmp_used_output], output, sizeof(can__can_frame_i));

		(*smaccm_tmp_used_output)++;
		return true;
	} else {
		return false;
	}
}

/************************************************************************
 * sender_write_abort 
 * Invoked from local active or passive thread.
 * 
 * This is the comm function invoked by a user-level thread to send a message 
 * to another thread.  It enqueues the request to be sent when the user thread
 * completes execution.
 * 
 ************************************************************************/

bool sender_write_abort() {
	if (smaccm_max_tmp_array_abort > 0 && 
		 *smaccm_tmp_used_abort < smaccm_max_tmp_array_abort) {
		(*smaccm_tmp_used_abort)++;
		return true;
	} else {
		return false;
	}
}


/************************************************************************
 * 
smaccm_dispatcher_periodic_1000_ms
 * Invoked from local active thread.
 * 
 * This is the dispatcher function invoked to respond to an incoming thread 
 * stimulus: an ISR, a periodic dispatch, or a queued event.
 * 
 ******************************************************************************/
void 
smaccm_dispatcher_periodic_1000_ms(uint64_t * periodic_1000_ms) {
	smaccm_can__can_frame_i_struct_1 output_data ;
	uint32_t output_index;


	 
	// make the call: 
	dispatch_dispatch_periodic_1000_ms(  periodic_1000_ms, 
 		&output_data,
 		&output_index  
	
		); 
	 

	// call the aadl dispatchers for any generated output events.
	// to prevent misuse by malicious clients, we ensure that the number 
	// of dispatches is less than the maximum allowed dispatch count.
	uint32_t smaccm_it; 
	for (smaccm_it = 0; smaccm_it < output_index && smaccm_it < 1; smaccm_it++) {
	   // Calling an active dispatch target.
	   sender_output_write_can__can_frame_i(
	   (&(output_data.f[smaccm_it]))
	   );	

	}

}
/************************************************************************
 * 
smaccm_sender_status_0_dispatcher
 * Invoked from local active thread.
 * 
 * This is the dispatcher function invoked to respond to an incoming thread 
 * stimulus: an ISR, a periodic dispatch, or a queued event.
 * 
 ******************************************************************************/
void 
smaccm_sender_status_0_dispatcher(bool * status_0) {
	smaccm_can__can_frame_i_struct_1 output_data ;
	uint32_t output_index;


	 
	// make the call: 
	dispatch_dispatch_status_0(  status_0, 
 		&output_data,
 		&output_index  
	
		); 
	 

	// call the aadl dispatchers for any generated output events.
	// to prevent misuse by malicious clients, we ensure that the number 
	// of dispatches is less than the maximum allowed dispatch count.
	uint32_t smaccm_it; 
	for (smaccm_it = 0; smaccm_it < output_index && smaccm_it < 1; smaccm_it++) {
	   // Calling an active dispatch target.
	   sender_output_write_can__can_frame_i(
	   (&(output_data.f[smaccm_it]))
	   );	

	}

}
 
/************************************************************************
 * run()
 * Main active thread function.
 * 
 ************************************************************************/

int run() {
	// port initialization routines (if any)... 

	// thread initialization routines (if any)...

	// register interrupt handlers (if any)...
	  

	// initial lock to await dispatch input.
	smaccm_dispatch_sem_wait();

	for(;;) {
		smaccm_dispatch_sem_wait();


		// drain the queues 
		if (smaccm_occurred_periodic_1000_ms) {
			smaccm_occurred_periodic_1000_ms = false;

			smaccm_dispatcher_periodic_1000_ms(&smaccm_time_periodic_1000_ms);
		}

		while (!smaccm_queue_is_empty_status_0()) {
			bool status_0 ;
			smaccm_queue_read_status_0(&status_0);

			smaccm_sender_status_0_dispatcher(&status_0); 
		}


	}
	// won't ever get here, but form must be followed
	return 0;
}



/**************************************************************************
  End of autogenerated file: /home/ajgacek/may-drop-odroid/projects/smaccm/models/Trusted_Build_Test/can/components/sender/src/smaccm_sender.c
 **************************************************************************/
