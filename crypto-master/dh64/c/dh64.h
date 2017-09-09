#ifndef DH64_H
#define DH64_H

#include <stdint.h>

uint64_t dh64_private_key();

uint64_t dh64_public_key(const uint64_t private_key);

uint64_t dh64_secret(const uint64_t private_key, const uint64_t another_public_key);

#endif
