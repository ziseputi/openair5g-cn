/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_PDUSessionResourceModifyResponseTransfer_H_
#define	_PDUSessionResourceModifyResponseTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UPTransportLayerInformation;
struct QosFlowAddOrModifyResponseList;
struct QosFlowPerTNLInformation;
struct QosFlowList;
struct ProtocolExtensionContainer;

/* PDUSessionResourceModifyResponseTransfer */
typedef struct PDUSessionResourceModifyResponseTransfer {
	struct UPTransportLayerInformation	*dL_NGU_UP_TNLInformation	/* OPTIONAL */;
	struct UPTransportLayerInformation	*uL_NGU_UP_TNLInformation	/* OPTIONAL */;
	struct QosFlowAddOrModifyResponseList	*qosFlowAddOrModifyResponseList	/* OPTIONAL */;
	struct QosFlowPerTNLInformation	*additionalQosFlowPerTNLInformation	/* OPTIONAL */;
	struct QosFlowList	*qosFlowFailedToAddOrModifyList	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceModifyResponseTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceModifyResponseTransfer;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UPTransportLayerInformation.h"
#include "QosFlowAddOrModifyResponseList.h"
#include "QosFlowPerTNLInformation.h"
#include "QosFlowList.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _PDUSessionResourceModifyResponseTransfer_H_ */
#include <asn_internal.h>
