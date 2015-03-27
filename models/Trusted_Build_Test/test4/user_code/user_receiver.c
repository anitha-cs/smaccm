#include <smaccm_receiver.h>
#include <receiver.h>
#include <inttypes.h>

void ping_received(const uint32_t * test_data) {
   printf("receiver: ping_received invoked (%d)\n", test_data);
}

void periodic_ping( const uint64_t * periodic_1000_ms) {
	printf("receiver: periodic dispatch received at time: %" PRIu64 "\n", *periodic_1000_ms); 
}