/* 
 * test1 for other stuff
 *
 */

#include <config.h>
#include <ldns/ldns.h>
#include <ldns/str2host.h>

#include "util.h"

#if 0
static const uint8_t wire[] = {
	0xd0, 0x0e, 0x81, 0x80, 0x00, 0x01, 0x00, 0x01, 0x00, 0x02, 0x00,
	0x02, 0x03, 0x77, 0x77, 0x77, 0x0b, 0x6b, 0x61, 0x6e, 0x61, 0x72,
	0x69, 0x65, 0x70, 0x69, 0x65, 0x74, 0x03, 0x63, 0x6f, 0x6d, 0x00,
	0x00, 0x01, 0x00, 0x01, 0xc0, 0x0c, 0x00, 0x01, 0x00, 0x01, 0x00,
	0x01, 0x45, 0xf2, 0x00, 0x04, 0xd5, 0x85, 0x27, 0xcf, 0xc0, 0x10,
	0x00, 0x02, 0x00, 0x01, 0x00, 0x01, 0x45, 0xf2, 0x00, 0x11, 0x03,
	0x6e, 0x73, 0x32, 0x08, 0x68, 0x65, 0x78, 0x6f, 0x6e, 0x2d, 0x69,
	0x73, 0x02, 0x6e, 0x6c, 0x00, 0xc0, 0x10, 0x00, 0x02, 0x00, 0x01,
	0x00, 0x01, 0x45, 0xf2, 0x00, 0x06, 0x03, 0x6e, 0x73, 0x31, 0xc0,
	0x45, 0xc0, 0x5e, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0xfb, 0x2e,
	0x00, 0x04, 0xd5, 0x85, 0x27, 0xcb, 0xc0, 0x41, 0x00, 0x01, 0x00,
	0x01, 0x00, 0x00, 0xfb, 0x2c, 0x00, 0x04, 0xd4, 0xcc, 0xdb, 0x5b
};
#endif 

int
main(void)
{
	ldns_rdf bla;
	if (ldns_conv_short(&bla, "15242") != LDNS_STATUS_OK) {
		printf("_short: ah man, shit hit the fan\n");
	}
	/* %Y%m%d%H%M%S */
	if (ldns_conv_time(&bla, "20041222134100") != LDNS_STATUS_OK) {
		printf("_time: ah man, shit hit the fan\n");
	}
	printf("succes\n");
	return 0;
}

