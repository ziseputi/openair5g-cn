/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_PDUSessionResourceSetupItemCxtRes_H_
#define	_PDUSessionResourceSetupItemCxtRes_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDUSessionID.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* PDUSessionResourceSetupItemCxtRes */
typedef struct PDUSessionResourceSetupItemCxtRes {
	PDUSessionID_t	 pDUSessionID;
	OCTET_STRING_t	 pDUSessionResourceSetupResponseTransfer;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceSetupItemCxtRes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceSetupItemCxtRes;
extern asn_SEQUENCE_specifics_t asn_SPC_PDUSessionResourceSetupItemCxtRes_specs_1;
extern asn_TYPE_member_t asn_MBR_PDUSessionResourceSetupItemCxtRes_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _PDUSessionResourceSetupItemCxtRes_H_ */
#include <asn_internal.h>
