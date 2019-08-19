/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_AMFPagingTarget_H_
#define	_AMFPagingTarget_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GlobalRANNodeID.h"
#include "TAI.h"
#include "ProtocolIE-SingleContainer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AMFPagingTarget_PR {
	AMFPagingTarget_PR_NOTHING,	/* No components present */
	AMFPagingTarget_PR_globalRANNodeID,
	AMFPagingTarget_PR_tAI,
	AMFPagingTarget_PR_choice_Extensions
} AMFPagingTarget_PR;

/* AMFPagingTarget */
typedef struct AMFPagingTarget {
	AMFPagingTarget_PR present;
	union AMFPagingTarget_u {
		GlobalRANNodeID_t	 globalRANNodeID;
		TAI_t	 tAI;
		ProtocolIE_SingleContainer_125P0_t	 choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AMFPagingTarget_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AMFPagingTarget;
extern asn_CHOICE_specifics_t asn_SPC_AMFPagingTarget_specs_1;
extern asn_TYPE_member_t asn_MBR_AMFPagingTarget_1[3];
extern asn_per_constraints_t asn_PER_type_AMFPagingTarget_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _AMFPagingTarget_H_ */
#include <asn_internal.h>
