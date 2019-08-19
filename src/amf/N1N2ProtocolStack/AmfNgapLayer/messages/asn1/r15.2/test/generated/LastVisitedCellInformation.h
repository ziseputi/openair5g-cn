/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_LastVisitedCellInformation_H_
#define	_LastVisitedCellInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LastVisitedNGRANCellInformation.h"
#include "LastVisitedEUTRANCellInformation.h"
#include "LastVisitedUTRANCellInformation.h"
#include "LastVisitedGERANCellInformation.h"
#include "ProtocolIE-SingleContainer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LastVisitedCellInformation_PR {
	LastVisitedCellInformation_PR_NOTHING,	/* No components present */
	LastVisitedCellInformation_PR_nGRANCell,
	LastVisitedCellInformation_PR_eUTRANCell,
	LastVisitedCellInformation_PR_uTRANCell,
	LastVisitedCellInformation_PR_gERANCell,
	LastVisitedCellInformation_PR_choice_Extensions
} LastVisitedCellInformation_PR;

/* LastVisitedCellInformation */
typedef struct LastVisitedCellInformation {
	LastVisitedCellInformation_PR present;
	union LastVisitedCellInformation_u {
		LastVisitedNGRANCellInformation_t	 nGRANCell;
		LastVisitedEUTRANCellInformation_t	 eUTRANCell;
		LastVisitedUTRANCellInformation_t	 uTRANCell;
		LastVisitedGERANCellInformation_t	 gERANCell;
		ProtocolIE_SingleContainer_125P0_t	 choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LastVisitedCellInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LastVisitedCellInformation;
extern asn_CHOICE_specifics_t asn_SPC_LastVisitedCellInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_LastVisitedCellInformation_1[5];
extern asn_per_constraints_t asn_PER_type_LastVisitedCellInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LastVisitedCellInformation_H_ */
#include <asn_internal.h>
