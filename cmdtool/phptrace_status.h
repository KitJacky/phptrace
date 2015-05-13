/**
 * Copyright 2015 Qihoo 360
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PHPTRACE_STATUS_H
#define PHPTRACE_STATUS_H

#include "phptrace.h"
#include "phptrace_util.h"


#define MAX_STACK_DEEP 16
#define MAX_RETRY 3

#define valid_ptr(p) ((p) && 0 == ((p) & (sizeof(long) - 1)))

/* stack related */
int stack_dump_once(phptrace_context_t* ctx);
int stack_dump(phptrace_context_t* ctx);
void process_opt_s(phptrace_context_t *ctx);

#endif