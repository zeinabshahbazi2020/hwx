/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "X2N_UsableABSInformation.h"

#include "X2N_UsableABSInformationFDD.h"
#include "X2N_UsableABSInformationTDD.h"
asn_per_constraints_t asn_PER_type_X2N_UsableABSInformation_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_X2N_UsableABSInformation_1[] = {
	{ ATF_POINTER, 0, offsetof(struct X2N_UsableABSInformation, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2N_UsableABSInformationFDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_POINTER, 0, offsetof(struct X2N_UsableABSInformation, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2N_UsableABSInformationTDD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2N_UsableABSInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
asn_CHOICE_specifics_t asn_SPC_X2N_UsableABSInformation_specs_1 = {
	sizeof(struct X2N_UsableABSInformation),
	offsetof(struct X2N_UsableABSInformation, _asn_ctx),
	offsetof(struct X2N_UsableABSInformation, present),
	sizeof(((struct X2N_UsableABSInformation *)0)->present),
	asn_MAP_X2N_UsableABSInformation_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2N_UsableABSInformation = {
	"UsableABSInformation",
	"UsableABSInformation",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_X2N_UsableABSInformation_constr_1, CHOICE_constraint },
	asn_MBR_X2N_UsableABSInformation_1,
	2,	/* Elements count */
	&asn_SPC_X2N_UsableABSInformation_specs_1	/* Additional specs */
};
