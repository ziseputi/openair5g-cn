/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#include "QosFlowAddOrModifyResponseItem.h"

asn_TYPE_member_t asn_MBR_QosFlowAddOrModifyResponseItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct QosFlowAddOrModifyResponseItem, qosFlowIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QosFlowIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qosFlowIdentifier"
		},
	{ ATF_POINTER, 1, offsetof(struct QosFlowAddOrModifyResponseItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_173P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_QosFlowAddOrModifyResponseItem_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_QosFlowAddOrModifyResponseItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_QosFlowAddOrModifyResponseItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* qosFlowIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_QosFlowAddOrModifyResponseItem_specs_1 = {
	sizeof(struct QosFlowAddOrModifyResponseItem),
	offsetof(struct QosFlowAddOrModifyResponseItem, _asn_ctx),
	asn_MAP_QosFlowAddOrModifyResponseItem_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_QosFlowAddOrModifyResponseItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_QosFlowAddOrModifyResponseItem = {
	"QosFlowAddOrModifyResponseItem",
	"QosFlowAddOrModifyResponseItem",
	&asn_OP_SEQUENCE,
	asn_DEF_QosFlowAddOrModifyResponseItem_tags_1,
	sizeof(asn_DEF_QosFlowAddOrModifyResponseItem_tags_1)
		/sizeof(asn_DEF_QosFlowAddOrModifyResponseItem_tags_1[0]), /* 1 */
	asn_DEF_QosFlowAddOrModifyResponseItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_QosFlowAddOrModifyResponseItem_tags_1)
		/sizeof(asn_DEF_QosFlowAddOrModifyResponseItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_QosFlowAddOrModifyResponseItem_1,
	2,	/* Elements count */
	&asn_SPC_QosFlowAddOrModifyResponseItem_specs_1	/* Additional specs */
};

