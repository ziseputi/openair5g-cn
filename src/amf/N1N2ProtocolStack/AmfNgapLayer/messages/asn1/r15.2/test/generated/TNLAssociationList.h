/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_TNLAssociationList_H_
#define	_TNLAssociationList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TNLAssociationItem;

/* TNLAssociationList */
typedef struct TNLAssociationList {
	A_SEQUENCE_OF(struct TNLAssociationItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TNLAssociationList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TNLAssociationList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TNLAssociationItem.h"

#endif	/* _TNLAssociationList_H_ */
#include <asn_internal.h>
