/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-Containers"
 * 	found in "NGAP-Containers.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_ProtocolIE_Field_H_
#define	_ProtocolIE_Field_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap-ProtocolIE-ID.h"
#include "Ngap-Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum value_PR {
	value_PR_NOTHING,	/* No components present */
	
} value_PR;

/* ProtocolIE-Field */
typedef struct ProtocolIE_Field_128P0 {
	Ngap_ProtocolIE_ID_t	 id;
	Ngap_Criticality_t	 criticality;
	struct value {
		value_PR present;
		union ProtocolIE_Field_128P0__value_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Field_128P0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Field_128P0;
extern asn_SEQUENCE_specifics_t asn_SPC_ProtocolIE_Field_128P0_specs_1;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Field_128P0_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ProtocolIE_Field_H_ */
#include <asn_internal.h>
