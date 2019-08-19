/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_DRBStatusUL18_H_
#define	_DRBStatusUL18_H_


#include <asn_application.h>

/* Including external dependencies */
#include "COUNTValueForPDCP-SN18.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* DRBStatusUL18 */
typedef struct DRBStatusUL18 {
	COUNTValueForPDCP_SN18_t	 uL_COUNTValue;
	BIT_STRING_t	*receiveStatusOfUL_PDCP_SDUs	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRBStatusUL18_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRBStatusUL18;
extern asn_SEQUENCE_specifics_t asn_SPC_DRBStatusUL18_specs_1;
extern asn_TYPE_member_t asn_MBR_DRBStatusUL18_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _DRBStatusUL18_H_ */
#include <asn_internal.h>
