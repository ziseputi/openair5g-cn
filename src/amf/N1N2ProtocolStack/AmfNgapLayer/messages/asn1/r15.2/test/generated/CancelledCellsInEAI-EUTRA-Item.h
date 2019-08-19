/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_CancelledCellsInEAI_EUTRA_Item_H_
#define	_CancelledCellsInEAI_EUTRA_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EUTRA-CGI.h"
#include "NumberOfBroadcasts.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* CancelledCellsInEAI-EUTRA-Item */
typedef struct CancelledCellsInEAI_EUTRA_Item {
	EUTRA_CGI_t	 eUTRA_CGI;
	NumberOfBroadcasts_t	 numberOfBroadcasts;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CancelledCellsInEAI_EUTRA_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CancelledCellsInEAI_EUTRA_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_CancelledCellsInEAI_EUTRA_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_CancelledCellsInEAI_EUTRA_Item_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _CancelledCellsInEAI_EUTRA_Item_H_ */
#include <asn_internal.h>
