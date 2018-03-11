
#include "b2b.h"

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <sys/stat.h>
#include <time.h>


void blake_hash(const char* input, char* output)
{
    // sph_blake256_context     ctx_blake;
    // uint32_t hash[16];

    // sph_blake256_init(&ctx_blake);
    // sph_blake256 (&ctx_blake, input, 180);
    // sph_blake256_close (&ctx_blake, hash);


    // b2b_ctx ctx;
    // uint32_t hash[16];

  b2b_ctx ctx;
  uint8_t dgst[256];
  
  b2b_init (&ctx, 64, NULL, 0);
  b2b_update (&ctx, input, strlen (input));
  b2b_final (dgst, &ctx);
 
    memcpy(output, dgst, 64);
}

