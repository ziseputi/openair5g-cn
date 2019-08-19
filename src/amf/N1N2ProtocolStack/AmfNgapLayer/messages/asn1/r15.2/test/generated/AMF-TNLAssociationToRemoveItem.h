/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_AMF_TNLAssociationToRemoveItem_H_
#define	_AMF_TNLAssociationToRemoveItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CPTransportLayerInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* AMF-TNLAssociationToRemoveItem */
typedef struct AMF_TNLAssociationToRemoveItem {
	CPTransportLayerInformation_t	 aMF_TNLAssociationAddress;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AMF_TNLAssociationToRemoveItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AMF_TNLAssociationToRemoveItem;
extern asn_SEQUENCE_specifics_t asn_SPC_AMF_TNLAssociationToRemoveItem_specs_1;
extern asn_TYPE_member_t asn_MBR_AMF_TNLAssociationToRemoveItem_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _AMF_TNLAssociationToRemoveItem_H_ */
#include <asn_internal.h>
