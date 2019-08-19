/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_UEPagingIdentity_H_
#define	_UEPagingIdentity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FiveG-S-TMSI.h"
#include "ProtocolIE-SingleContainer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEPagingIdentity_PR {
	UEPagingIdentity_PR_NOTHING,	/* No components present */
	UEPagingIdentity_PR_fiveG_S_TMSI,
	UEPagingIdentity_PR_choice_Extensions
} UEPagingIdentity_PR;

/* UEPagingIdentity */
typedef struct UEPagingIdentity {
	UEPagingIdentity_PR present;
	union UEPagingIdentity_u {
		FiveG_S_TMSI_t	 fiveG_S_TMSI;
		ProtocolIE_SingleContainer_125P0_t	 choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEPagingIdentity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEPagingIdentity;

#ifdef __cplusplus
}
#endif

#endif	/* _UEPagingIdentity_H_ */
#include <asn_internal.h>
