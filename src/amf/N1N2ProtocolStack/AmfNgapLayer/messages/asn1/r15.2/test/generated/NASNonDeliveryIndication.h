/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU"
 * 	found in "NGAP-PDU.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_NASNonDeliveryIndication_H_
#define	_NASNonDeliveryIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_IE;

/* NASNonDeliveryIndication */
typedef struct NASNonDeliveryIndication {
	struct nasNonDeliveryIndication_ies {
		A_SEQUENCE_OF(struct Ngap_IE) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} nasNonDeliveryIndication_ies;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NASNonDeliveryIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NASNonDeliveryIndication;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Ngap-IE.h"

#endif	/* _NASNonDeliveryIndication_H_ */
#include <asn_internal.h>