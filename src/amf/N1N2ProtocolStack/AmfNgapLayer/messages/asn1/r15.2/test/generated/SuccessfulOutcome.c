/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU"
 * 	found in "NGAP-PDU.asn"
 * 	`asn1c -D ./generated/`
 */

#include "SuccessfulOutcome.h"

asn_TYPE_member_t asn_MBR_SuccessfulOutcome_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome, procedureCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProcedureCode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"procedureCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome, criticality),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_Criticality,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"criticality"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuccessfulOutcome, value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ANY,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_SuccessfulOutcome_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SuccessfulOutcome_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* procedureCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* criticality */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* value */
};
asn_SEQUENCE_specifics_t asn_SPC_SuccessfulOutcome_specs_1 = {
	sizeof(struct SuccessfulOutcome),
	offsetof(struct SuccessfulOutcome, _asn_ctx),
	asn_MAP_SuccessfulOutcome_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SuccessfulOutcome = {
	"SuccessfulOutcome",
	"SuccessfulOutcome",
	&asn_OP_SEQUENCE,
	asn_DEF_SuccessfulOutcome_tags_1,
	sizeof(asn_DEF_SuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_SuccessfulOutcome_tags_1[0]), /* 1 */
	asn_DEF_SuccessfulOutcome_tags_1,	/* Same as above */
	sizeof(asn_DEF_SuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_SuccessfulOutcome_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SuccessfulOutcome_1,
	3,	/* Elements count */
	&asn_SPC_SuccessfulOutcome_specs_1	/* Additional specs */
};

