// SPDX-License-Identifier: BSD-2-Clause-Patent

#ifndef SBAT_VAR_DEFS_H_
#define SBAT_VAR_DEFS_H_

/*
 * This is the entry for the sbat data format
 */
#define SBAT_VAR_SIG "sbat,"
#define SBAT_VAR_VERSION "1,"
#define SBAT_VAR_ORIGINAL_DATE "2021030218"
#define SBAT_VAR_ORIGINAL \
	SBAT_VAR_SIG SBAT_VAR_VERSION SBAT_VAR_ORIGINAL_DATE "\n"

#if defined(ENABLE_SHIM_DEVEL)
#define SBAT_VAR_AUTOMATIC_DATE "2021030218"
#define SBAT_VAR_AUTOMATIC \
	SBAT_VAR_SIG SBAT_VAR_VERSION SBAT_VAR_AUTOMATIC_DATE "\n"

#define SBAT_VAR_LATEST_DATE "2022050100"
#define SBAT_VAR_LATEST_REVOCATIONS "component,2\nothercomponent,2\n"
#define SBAT_VAR_LATEST \
	SBAT_VAR_SIG SBAT_VAR_VERSION SBAT_VAR_LATEST_DATE "\n" \
	SBAT_VAR_LATEST_REVOCATIONS
#else /* !ENABLE_SHIM_DEVEL */
/*
 * At this point we do not want shim to automatically apply a
 * revocation unless it is delivered by a separately installed
 * signed revocations binary.
 */
#define SBAT_VAR_AUTOMATIC_DATE "2021030218"
#define SBAT_VAR_AUTOMATIC \
	SBAT_VAR_SIG SBAT_VAR_VERSION SBAT_VAR_AUTOMATIC_DATE "\n"

/*
 * Revocations for January 2024 shim CVEs
 */
#define SBAT_VAR_LATEST_DATE "2024010900"
#define SBAT_VAR_LATEST_REVOCATIONS "shim,4\ngrub,3\ngrub.debian,4\n"
#define SBAT_VAR_LATEST \
	SBAT_VAR_SIG SBAT_VAR_VERSION SBAT_VAR_LATEST_DATE "\n" \
	SBAT_VAR_LATEST_REVOCATIONS
#endif /* ENABLE_SHIM_DEVEL */
#endif /* !SBAT_VAR_DEFS_H_ */
