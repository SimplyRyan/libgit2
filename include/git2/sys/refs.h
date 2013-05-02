/*
 * Copyright (C) the libgit2 contributors. All rights reserved.
 *
 * This file is part of libgit2, distributed under the GNU GPL v2 with
 * a Linking Exception. For full terms see the included COPYING file.
 */
#ifndef INCLUDE_sys_git_refdb_h__
#define INCLUDE_sys_git_refdb_h__

#include "git2/common.h"
#include "git2/types.h"
#include "git2/oid.h"

/**
 * Create a new direct reference from an OID.
 *
 * @param name the reference name
 * @param oid the object id for a direct reference
 * @param symbolic the target for a symbolic reference
 * @return the created git_reference or NULL on error
 */
GIT_EXTERN(git_reference *) git_reference__alloc(
	const char *name,
	const git_oid *oid,
	const git_oid *peel);

/**
 * Create a new symbolic reference.
 *
 * @param name the reference name
 * @param symbolic the target for a symbolic reference
 * @return the created git_reference or NULL on error
 */
GIT_EXTERN(git_reference *) git_reference__alloc_symbolic(
	const char *name,
	const char *target);

#endif