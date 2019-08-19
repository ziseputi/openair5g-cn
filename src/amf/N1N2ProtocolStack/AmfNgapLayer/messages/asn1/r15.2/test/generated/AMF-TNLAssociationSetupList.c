/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#include "AMF-TNLAssociationSetupList.h"

static asn_oer_constraints_t asn_OER_type_AMF_TNLAssociationSetupList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32)) */};
static asn_per_constraints_t asn_PER_type_AMF_TNLAssociationSetupList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_AMF_TNLAssociationSetupList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AMF_TNLAssociationSetupItem,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_AMF_TNLAssociationSetupList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_AMF_TNLAssociationSetupList_specs_1 = {
	sizeof(struct AMF_TNLAssociationSetupList),
	offsetof(struct AMF_TNLAssociationSetupList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_AMF_TNLAssociationSetupList = {
	"AMF-TNLAssociationSetupList",
	"AMF-TNLAssociationSetupList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_AMF_TNLAssociationSetupList_tags_1,
	sizeof(asn_DEF_AMF_TNLAssociationSetupList_tags_1)
		/sizeof(asn_DEF_AMF_TNLAssociationSetupList_tags_1[0]), /* 1 */
	asn_DEF_AMF_TNLAssociationSetupList_tags_1,	/* Same as above */
	sizeof(asn_DEF_AMF_TNLAssociationSetupList_tags_1)
		/sizeof(asn_DEF_AMF_TNLAssociationSetupList_tags_1[0]), /* 1 */
	{ &asn_OER_type_AMF_TNLAssociationSetupList_constr_1, &asn_PER_type_AMF_TNLAssociationSetupList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_AMF_TNLAssociationSetupList_1,
	1,	/* Single element */
	&asn_SPC_AMF_TNLAssociationSetupList_specs_1	/* Additional specs */
};

