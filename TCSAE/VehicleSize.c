/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "VehSize"
 * 	found in "VehSize.asn"
 */

#include "VehicleSize.h"

static asn_TYPE_member_t asn_MBR_VehicleSize_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleSize, width),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleWidth,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"width"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleSize, length),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleLength,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"length"
		},
	{ ATF_POINTER, 1, offsetof(struct VehicleSize, height),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleHeight,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"height"
		},
};
static ber_tlv_tag_t asn_DEF_VehicleSize_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_VehicleSize_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* width at 13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* length at 14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* height at 15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_VehicleSize_specs_1 = {
	sizeof(struct VehicleSize),
	offsetof(struct VehicleSize, _asn_ctx),
	asn_MAP_VehicleSize_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_VehicleSize = {
	"VehicleSize",
	"VehicleSize",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_VehicleSize_tags_1,
	sizeof(asn_DEF_VehicleSize_tags_1)
		/sizeof(asn_DEF_VehicleSize_tags_1[0]), /* 1 */
	asn_DEF_VehicleSize_tags_1,	/* Same as above */
	sizeof(asn_DEF_VehicleSize_tags_1)
		/sizeof(asn_DEF_VehicleSize_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_VehicleSize_1,
	3,	/* Elements count */
	&asn_SPC_VehicleSize_specs_1	/* Additional specs */
};

