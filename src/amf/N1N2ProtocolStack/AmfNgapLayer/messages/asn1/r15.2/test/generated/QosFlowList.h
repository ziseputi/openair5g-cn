/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_QosFlowList_H_
#define	_QosFlowList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct QosFlowItem;

/* QosFlowList */
typedef struct QosFlowList {
	A_SEQUENCE_OF(struct QosFlowItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QosFlowList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QosFlowList;
extern asn_SET_OF_specifics_t asn_SPC_QosFlowList_specs_1;
extern asn_TYPE_member_t asn_MBR_QosFlowList_1[1];
extern asn_per_constraints_t asn_PER_type_QosFlowList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "QosFlowItem.h"

#endif	/* _QosFlowList_H_ */
#include <asn_internal.h>
