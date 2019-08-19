/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#include "UserLocationInformationEUTRA.h"

asn_TYPE_member_t asn_MBR_UserLocationInformationEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UserLocationInformationEUTRA, eUTRA_CGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRA-CGI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UserLocationInformationEUTRA, tAI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tAI"
		},
	{ ATF_POINTER, 2, offsetof(struct UserLocationInformationEUTRA, timeStamp),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeStamp,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeStamp"
		},
	{ ATF_POINTER, 1, offsetof(struct UserLocationInformationEUTRA, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_173P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_UserLocationInformationEUTRA_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_UserLocationInformationEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UserLocationInformationEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eUTRA-CGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tAI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* timeStamp */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_UserLocationInformationEUTRA_specs_1 = {
	sizeof(struct UserLocationInformationEUTRA),
	offsetof(struct UserLocationInformationEUTRA, _asn_ctx),
	asn_MAP_UserLocationInformationEUTRA_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_UserLocationInformationEUTRA_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UserLocationInformationEUTRA = {
	"UserLocationInformationEUTRA",
	"UserLocationInformationEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_UserLocationInformationEUTRA_tags_1,
	sizeof(asn_DEF_UserLocationInformationEUTRA_tags_1)
		/sizeof(asn_DEF_UserLocationInformationEUTRA_tags_1[0]), /* 1 */
	asn_DEF_UserLocationInformationEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_UserLocationInformationEUTRA_tags_1)
		/sizeof(asn_DEF_UserLocationInformationEUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UserLocationInformationEUTRA_1,
	4,	/* Elements count */
	&asn_SPC_UserLocationInformationEUTRA_specs_1	/* Additional specs */
};

