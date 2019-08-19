/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_AreaOfInterestTAIList_H_
#define	_AreaOfInterestTAIList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AreaOfInterestTAIItem;

/* AreaOfInterestTAIList */
typedef struct AreaOfInterestTAIList {
	A_SEQUENCE_OF(struct AreaOfInterestTAIItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AreaOfInterestTAIList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AreaOfInterestTAIList;
extern asn_SET_OF_specifics_t asn_SPC_AreaOfInterestTAIList_specs_1;
extern asn_TYPE_member_t asn_MBR_AreaOfInterestTAIList_1[1];
extern asn_per_constraints_t asn_PER_type_AreaOfInterestTAIList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AreaOfInterestTAIItem.h"

#endif	/* _AreaOfInterestTAIList_H_ */
#include <asn_internal.h>
