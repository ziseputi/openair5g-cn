/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_UESecurityCapabilities_H_
#define	_UESecurityCapabilities_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NRencryptionAlgorithms.h"
#include "NRintegrityProtectionAlgorithms.h"
#include "EUTRAencryptionAlgorithms.h"
#include "EUTRAintegrityProtectionAlgorithms.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* UESecurityCapabilities */
typedef struct UESecurityCapabilities {
	NRencryptionAlgorithms_t	 nRencryptionAlgorithms;
	NRintegrityProtectionAlgorithms_t	 nRintegrityProtectionAlgorithms;
	EUTRAencryptionAlgorithms_t	 eUTRAencryptionAlgorithms;
	EUTRAintegrityProtectionAlgorithms_t	 eUTRAintegrityProtectionAlgorithms;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UESecurityCapabilities_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UESecurityCapabilities;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _UESecurityCapabilities_H_ */
#include <asn_internal.h>
