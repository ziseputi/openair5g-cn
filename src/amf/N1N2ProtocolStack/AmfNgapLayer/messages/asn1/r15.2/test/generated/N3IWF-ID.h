/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_N3IWF_ID_H_
#define	_N3IWF_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "ProtocolIE-SingleContainer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum N3IWF_ID_PR {
	N3IWF_ID_PR_NOTHING,	/* No components present */
	N3IWF_ID_PR_n3IWF_ID,
	N3IWF_ID_PR_choice_Extensions
} N3IWF_ID_PR;

/* N3IWF-ID */
typedef struct N3IWF_ID {
	N3IWF_ID_PR present;
	union N3IWF_ID_u {
		BIT_STRING_t	 n3IWF_ID;
		ProtocolIE_SingleContainer_125P0_t	 choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} N3IWF_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_N3IWF_ID;
extern asn_CHOICE_specifics_t asn_SPC_N3IWF_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_N3IWF_ID_1[2];
extern asn_per_constraints_t asn_PER_type_N3IWF_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _N3IWF_ID_H_ */
#include <asn_internal.h>
