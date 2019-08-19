/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_PDUSessionResourceNotifyList_H_
#define	_PDUSessionResourceNotifyList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDUSessionResourceNotifyItem;

/* PDUSessionResourceNotifyList */
typedef struct PDUSessionResourceNotifyList {
	A_SEQUENCE_OF(struct PDUSessionResourceNotifyItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceNotifyList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceNotifyList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PDUSessionResourceNotifyItem.h"

#endif	/* _PDUSessionResourceNotifyList_H_ */
#include <asn_internal.h>
