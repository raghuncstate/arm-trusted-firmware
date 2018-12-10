/*
 * Copyright (c) 2014-2018, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef FIRMWARE_IMAGE_PACKAGE_H
#define FIRMWARE_IMAGE_PACKAGE_H

#include <stdint.h>
#include <uuid.h>

/* This is used as a signature to validate the blob header */
#define TOC_HEADER_NAME	0xAA640001


/* ToC Entry UUIDs */
#define UUID_TRUSTED_UPDATE_FIRMWARE_SCP_BL2U \
	{{0x65, 0x92, 0x27, 0x03}, {0x2f, 0x74}, {0xe6, 0x44}, 0x8d, 0xff, {0x57, 0x9a, 0xc1, 0xff, 0x06, 0x10} }
#define UUID_TRUSTED_UPDATE_FIRMWARE_BL2U \
	{{0x60, 0xb3, 0xeb, 0x37}, {0xc1, 0xe5}, {0xea, 0x41}, 0x9d, 0xf3, {0x19, 0xed, 0xa1, 0x1f, 0x68, 0x01} }
#define UUID_TRUSTED_UPDATE_FIRMWARE_NS_BL2U \
	{{0x4f, 0x51, 0x1d, 0x11}, {0x2b, 0xe5}, {0x4e, 0x49}, 0xb4, 0xc5, {0x83, 0xc2, 0xf7, 0x15, 0x84, 0x0a} }
#define UUID_TRUSTED_FWU_CERT \
	{{0x71, 0x40, 0x8a, 0xb2}, {0x18, 0xd6}, {0x87, 0x4c}, 0x8b, 0x2e, {0xc6, 0xdc, 0xcd, 0x50, 0xf0, 0x96} }
#define UUID_TRUSTED_BOOT_FIRMWARE_BL2 \
	{{0x5f, 0xf9, 0xec, 0x0b}, {0x4d, 0x22}, {0x3e, 0x4d}, 0xa5, 0x44, {0xc3, 0x9d, 0x81, 0xc7, 0x3f, 0x0a} }
#define UUID_SCP_FIRMWARE_SCP_BL2 \
	{{0x97,  0x66, 0xfd, 0x3d}, {0x89, 0xbe}, {0xe8, 0x49}, 0xae, 0x5d, {0x78, 0xa1, 0x40, 0x60, 0x82, 0x13} }
#define UUID_EL3_RUNTIME_FIRMWARE_BL31 \
	{{0x47,  0xd4, 0x08, 0x6d}, {0x4c, 0xfe}, {0x98, 0x46}, 0x9b, 0x95, {0x29, 0x50, 0xcb, 0xbd, 0x5a, 0x00} }
#define UUID_SECURE_PAYLOAD_BL32 \
	{{0x05,  0xd0, 0xe1, 0x89}, {0x53, 0xdc}, {0x13, 0x47}, 0x8d, 0x2b, {0x50, 0x0a, 0x4b, 0x7a, 0x3e, 0x38} }
#define UUID_SECURE_PAYLOAD_BL32_EXTRA1 \
	{{0x0b,  0x70, 0xc2, 0x9b}, {0x2a, 0x5a}, {0x78, 0x40}, 0x9f, 0x65, {0x0a, 0x56, 0x82, 0x73, 0x82, 0x88} }
#define UUID_SECURE_PAYLOAD_BL32_EXTRA2 \
	{{0x8e,  0xa8, 0x7b, 0xb1}, {0xcf, 0xa2}, {0x3f, 0x4d}, 0x85, 0xfd, {0xe7, 0xbb, 0xa5, 0x02, 0x20, 0xd9} }
#define UUID_NON_TRUSTED_FIRMWARE_BL33 \
	{{0xd6,  0xd0, 0xee, 0xa7}, {0xfc, 0xea}, {0xd5, 0x4b}, 0x97, 0x82, {0x99, 0x34, 0xf2, 0x34, 0xb6, 0xe4} }
/* Key certificates */
#define UUID_ROT_KEY_CERT \
	{{0x86,  0x2d, 0x1d, 0x72}, {0xf8, 0x60}, {0xe4, 0x11}, 0x92, 0x0b, {0x8b, 0xe7, 0x62, 0x16, 0x0f, 0x24} }
#define UUID_TRUSTED_KEY_CERT \
	{{0x82,  0x7e, 0xe8, 0x90}, {0xf8, 0x60}, {0xe4, 0x11}, 0xa1, 0xb4, {0x77, 0x7a, 0x21, 0xb4, 0xf9, 0x4c} }
#define UUID_NON_TRUSTED_WORLD_KEY_CERT \
	{{0x1c,  0x67, 0x87, 0x3d}, {0x5f, 0x63}, {0xe4, 0x11}, 0x97, 0x8d, {0x27, 0xc0, 0xc7, 0x14, 0x8a, 0xbd} }
#define UUID_SCP_FW_KEY_CERT \
	{{0x02,  0x42, 0x21, 0xa1}, {0xf8, 0x60}, {0xe4, 0x11}, 0x8d, 0x9b, {0xf3, 0x3c, 0x0e, 0x15, 0xa0, 0x14} }
#define UUID_SOC_FW_KEY_CERT \
	{{0x8a,  0xb8, 0xbe, 0xcc}, {0xf9, 0x60}, {0xe4, 0x11}, 0x9a, 0xd0, {0xeb, 0x48, 0x22, 0xd8, 0xdc, 0xf8} }
#define UUID_TRUSTED_OS_FW_KEY_CERT \
	{{0x94,  0x77, 0xd6, 0x03}, {0xfb, 0x60}, {0xe4, 0x11}, 0x85, 0xdd, {0xb7, 0x10, 0x5b, 0x8c, 0xee, 0x04} }
#define UUID_NON_TRUSTED_FW_KEY_CERT \
	{{0x8a,  0xd5, 0x83, 0x2a}, {0xfb, 0x60}, {0xe4, 0x11}, 0x8a, 0xaf, {0xdf, 0x30, 0xbb, 0xc4, 0x98, 0x59} }
/* Content certificates */
#define UUID_TRUSTED_BOOT_FW_CERT \
	{{0xd6,  0xe2, 0x69, 0xea}, {0x5d, 0x63}, {0xe4, 0x11}, 0x8d, 0x8c, {0x9f, 0xba, 0xbe, 0x99, 0x56, 0xa5} }
#define UUID_SCP_FW_CONTENT_CERT \
	{{0x44,  0xbe, 0x6f, 0x04}, {0x5e, 0x63}, {0xe4, 0x11}, 0xb2, 0x8b, {0x73, 0xd8, 0xea, 0xae, 0x96, 0x56} }
#define UUID_SOC_FW_CONTENT_CERT \
	{{0xe2,  0xb2, 0x0c, 0x20}, {0x5e, 0x63}, {0xe4, 0x11}, 0x9c, 0xe8, {0xab, 0xcc, 0xf9, 0x2b, 0xb6, 0x66} }
#define UUID_TRUSTED_OS_FW_CONTENT_CERT \
	{{0xa4,  0x9f, 0x44, 0x11}, {0x5e, 0x63}, {0xe4, 0x11}, 0x87, 0x28, {0x3f, 0x05, 0x72, 0x2a, 0xf3, 0x3d} }
#define UUID_NON_TRUSTED_FW_CONTENT_CERT \
	{{0x8e,  0xc4, 0xc1, 0xf3}, {0x5d, 0x63}, {0xe4, 0x11}, 0xa7, 0xa9, {0x87, 0xee, 0x40, 0xb2, 0x3f, 0xa7} }
/* Dynamic configs */
#define UUID_HW_CONFIG \
	{{0x08,  0xb8, 0xf1, 0xd9}, {0xc9, 0xcf}, {0x93, 0x49}, 0xa9, 0x62, {0x6f, 0xbc, 0x6b, 0x72, 0x65, 0xcc} }
#define UUID_TB_FW_CONFIG \
	{{0x6c,  0x04, 0x58, 0xff}, {0xaf, 0x6b}, {0x7d, 0x4f}, 0x82, 0xed, {0xaa, 0x27, 0xbc, 0x69, 0xbf, 0xd2} }
#define UUID_SOC_FW_CONFIG \
	{{0x99,  0x79, 0x81, 0x4b}, {0x03, 0x76}, {0xfb, 0x46}, 0x8c, 0x8e, {0x8d, 0x26, 0x7f, 0x78, 0x59, 0xe0} }
#define UUID_TOS_FW_CONFIG \
	{{0x26,  0x25, 0x7c, 0x1a}, {0xdb, 0xc6}, {0x7f, 0x47}, 0x8d, 0x96, {0xc4, 0xc4, 0xb0, 0x24, 0x80, 0x21} }
#define UUID_NT_FW_CONFIG \
	{{0x28,  0xda, 0x98, 0x15}, {0x93, 0xe8}, {0x7e, 0x44}, 0xac, 0x66, {0x1a, 0xaf, 0x80, 0x15, 0x50, 0xf9} }

typedef struct fip_toc_header {
	uint32_t	name;
	uint32_t	serial_number;
	uint64_t	flags;
} fip_toc_header_t;

typedef struct fip_toc_entry {
	uuid_t		uuid;
	uint64_t	offset_address;
	uint64_t	size;
	uint64_t	flags;
} fip_toc_entry_t;

#endif /* FIRMWARE_IMAGE_PACKAGE_H */
