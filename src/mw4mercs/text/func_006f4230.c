/*
 * FUN_006F4230 (1244 B) — Internal heap/pool free (gos_Free).
 *
 * This is the real free function behind the dealloc wrapper FUN_004084E0.
 * It's the companion to FUN_006F3C80 (the allocator).
 *
 * Calling convention: __stdcall, RET 4 (one param: void *ptr).
 *
 * The function has three modes controlled by g_gos_mode (0x00858980):
 *   Mode 0: gos_Free — custom heap manager with pool headers.
 *            Each allocation has a tag byte at ptr[-1]. Tags 1..252 are
 *            pool allocations (small fixed-size pools). Tag 0xFD is a
 *            large allocation. Tag 0xFE is a forwarded CRT free.
 *   Mode 1: Simple free() wrapper — just calls CRT free().
 *   Mode 2+: Full custom heap with free-list management (VirtualAlloc-based).
 *            Allocations have a 12-byte header at ptr[-12..-1]:
 *              [-12..-9] = base_addr (page-aligned allocation base)
 *              [-8..-5]  = user_size (requested size)
 *              [-4..-1]  = page_count (number of 4KB pages)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* Extern functions */
extern void __stdcall FUN_006f4940(int heap_entry, int size, int flags);
extern int __cdecl FUN_006fab90(const char *fmt, ...);

/* IAT addresses */
#define IAT_GetCurrentThreadId  0x0076b158
#define IAT_free                0x0076b2d0
#define IAT_VirtualFree         0x0076b150
#define IAT_malloc              0x0076b294

/* Helper macros for IAT indirect calls and absolute memory accesses */
/* call dword ptr [imm32] */
#define EMIT_CALL_IAT(addr) \
    __asm _emit 0xFF \
    __asm _emit 0x15 \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* mov eax, [imm32] */
#define EMIT_MOV_EAX_MEM(addr) \
    __asm _emit 0xA1 \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* mov [imm32], eax */
#define EMIT_MOV_MEM_EAX(addr) \
    __asm _emit 0xA3 \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* mov ecx, [imm32] */
#define EMIT_MOV_ECX_MEM(addr) \
    __asm _emit 0x8B \
    __asm _emit 0x0D \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* mov edx, [imm32] */
#define EMIT_MOV_EDX_MEM(addr) \
    __asm _emit 0x8B \
    __asm _emit 0x15 \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* mov [imm32], edx */
#define EMIT_MOV_MEM_EDX(addr) \
    __asm _emit 0x89 \
    __asm _emit 0x15 \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* mov [imm32], ecx */
#define EMIT_MOV_MEM_ECX(addr) \
    __asm _emit 0x89 \
    __asm _emit 0x0D \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* mov ebx, [imm32] */
#define EMIT_MOV_EBX_MEM(addr) \
    __asm _emit 0x8B \
    __asm _emit 0x1D \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* mov [imm32], ebx */
#define EMIT_MOV_MEM_EBX(addr) \
    __asm _emit 0x89 \
    __asm _emit 0x1D \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* mov esi, [imm32] */
#define EMIT_MOV_ESI_MEM(addr) \
    __asm _emit 0x8B \
    __asm _emit 0x35 \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* mov edi, [imm32] */
#define EMIT_MOV_EDI_MEM(addr) \
    __asm _emit 0x8B \
    __asm _emit 0x3D \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* mov [imm32], edi */
#define EMIT_MOV_MEM_EDI(addr) \
    __asm _emit 0x89 \
    __asm _emit 0x3D \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* cmp dword ptr [imm32], eax */
#define EMIT_CMP_MEM_EAX(addr) \
    __asm _emit 0x39 \
    __asm _emit 0x05 \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* mov dword ptr [esi*4 + imm32], eax */
#define EMIT_MOV_PTR_ESI4_ADDR_EAX(addr) \
    __asm _emit 0x89 \
    __asm _emit 0x04 \
    __asm _emit 0xB5 \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* mov dword ptr [esi*4 + imm32], edi */
#define EMIT_MOV_PTR_ESI4_ADDR_EDI(addr) \
    __asm _emit 0x89 \
    __asm _emit 0x3C \
    __asm _emit 0xB5 \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* cmp dword ptr [esi*4 + imm32], edi */
#define EMIT_CMP_PTR_ESI4_ADDR_EDI(addr) \
    __asm _emit 0x39 \
    __asm _emit 0x3C \
    __asm _emit 0xB5 \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* mov ecx, [esi*4 + imm32] */
#define EMIT_MOV_ECX_PTR_ESI4_ADDR(addr) \
    __asm _emit 0x8B \
    __asm _emit 0x0C \
    __asm _emit 0xB5 \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)

/* mov eax, [edx*4 + imm32] */
#define EMIT_MOV_EAX_PTR_EDX4_ADDR(addr) \
    __asm _emit 0x8B \
    __asm _emit 0x04 \
    __asm _emit 0x95 \
    __asm _emit ((addr) & 0xFF) \
    __asm _emit (((addr) >> 8) & 0xFF) \
    __asm _emit (((addr) >> 16) & 0xFF) \
    __asm _emit (((addr) >> 24) & 0xFF)


__declspec(naked) void __stdcall FUN_006f4230(void)
{
    __asm {
        ; ================================================================
        ; Prologue
        ; 0x006F4230: 55 8B EC 83 EC 08 53 8B 5D 08 85 DB 56 57
        ; ================================================================
        push    ebp
        mov     ebp, esp
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [ebp + 8]    ; EBX = ptr
        test    ebx, ebx
        push    esi
        push    edi

        ; ================================================================
        ; Null check: if (ptr == NULL) goto epilogue
        ; 0x006F423E: 0F 84 BF 04 00 00  JZ 0x006f4703
        ; ================================================================
        jz      l_epilogue

        ; ================================================================
        ; Initialization check
        ; 0x006F4244: A1 B8 9E 84 00  MOV EAX,[0x00849eb8]
        ; 0x006F4249: 85 C0  TEST EAX,EAX
        ; 0x006F424B: 74 0D  JZ 0x006f425a
        ; 0x006F424D: A1 C0 8A 85 00  MOV EAX,[0x00858ac0]
        ; 0x006F4252: 85 C0  TEST EAX,EAX
        ; 0x006F4254: 0F 85 A9 04 00 00  JNZ 0x006f4703
        ; ================================================================
        EMIT_MOV_EAX_MEM(0x00849eb8)         ; mov eax, [g_gos_init]
        test    eax, eax
        jz      l_check_thread
        EMIT_MOV_EAX_MEM(0x00858ac0)         ; mov eax, [g_debug_flag]
        test    eax, eax
        jnz     l_epilogue

        ; ================================================================
        ; Thread check
        ; 0x006F425A: A1 08 8C 85 00  MOV EAX,[0x00858c08]
        ; 0x006F425F: 85 C0  TEST EAX,EAX
        ; 0x006F4261: 74 2E  JZ 0x006f4291
        ; 0x006F4263: FF 15 58 B1 76 00  CALL [GetCurrentThreadId]
        ; 0x006F4269: 39 05 00 AA 8A 00  CMP [g_main_thread_id],EAX
        ; 0x006F426F: 74 20  JZ 0x006f4291
        ; 0x006F4271: A1 98 97 85 00  MOV EAX,[0x00859798]
        ; 0x006F4276: 85 C0  TEST EAX,EAX
        ; 0x006F4278: 0F 85 85 04 00 00  JNZ 0x006f4703
        ; 0x006F427E: 53  PUSH EBX
        ; 0x006F427F: FF 15 D0 B2 76 00  CALL [free]
        ; 0x006F4285: 83 C4 04  ADD ESP,0x4
        ; 0x006F4288: 5F  POP EDI
        ; 0x006F4289: 5E  POP ESI
        ; 0x006F428A: 5B  POP EBX
        ; 0x006F428B: 8B E5  MOV ESP,EBP
        ; 0x006F428D: 5D  POP EBP
        ; 0x006F428E: C2 04 00  RET 0x4
        ; ================================================================
    l_check_thread:
        EMIT_MOV_EAX_MEM(0x00858c08)         ; mov eax, [g_thread_check]
        test    eax, eax
        jz      l_check_mode
        EMIT_CALL_IAT(0x0076b158)            ; call [GetCurrentThreadId]
        EMIT_CMP_MEM_EAX(0x008aaa00)         ; cmp [g_main_thread_id], eax
        jz      l_check_mode
        EMIT_MOV_EAX_MEM(0x00859798)         ; mov eax, [g_no_free]
        test    eax, eax
        jnz     l_epilogue
        push    ebx
        EMIT_CALL_IAT(0x0076b2d0)            ; call [free]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4

        ; ================================================================
        ; Mode dispatch
        ; 0x006F4291: A1 80 89 85 00  MOV EAX,[0x00858980]
        ; 0x006F4296: 85 C0  TEST EAX,EAX
        ; 0x006F4298: 0F 84 9B 01 00 00  JZ 0x006f4439  (mode 0)
        ; 0x006F429E: 83 F8 01  CMP EAX,0x1
        ; 0x006F42A1: 75 20  JNZ 0x006f42c3  (mode 2+)
        ; ================================================================
    l_check_mode:
        EMIT_MOV_EAX_MEM(0x00858980)         ; mov eax, [g_gos_mode]
        test    eax, eax
        jz      l_mode_0
        cmp     eax, 1
        jnz     l_mode_2plus

        ; ================================================================
        ; Mode 1: simple free() wrapper
        ; 0x006F42A3: A1 98 97 85 00  MOV EAX,[0x00859798]
        ; 0x006F42A8: 85 C0  TEST EAX,EAX
        ; 0x006F42AA: 0F 85 53 04 00 00  JNZ 0x006f4703
        ; 0x006F42B0: 53  PUSH EBX
        ; 0x006F42B1: FF 15 D0 B2 76 00  CALL [free]
        ; 0x006F42B7: 83 C4 04  ADD ESP,0x4
        ; 0x006F42BA: 5F  POP EDI
        ; 0x006F42BB: 5E  POP ESI
        ; 0x006F42BC: 5B  POP EBX
        ; 0x006F42BD: 8B E5  MOV ESP,EBP
        ; 0x006F42BF: 5D  POP EBP
        ; 0x006F42C0: C2 04 00  RET 0x4
        ; ================================================================
    l_mode_1:
        EMIT_MOV_EAX_MEM(0x00859798)         ; mov eax, [g_no_free]
        test    eax, eax
        jnz     l_epilogue
        push    ebx
        EMIT_CALL_IAT(0x0076b2d0)            ; call [free]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4

        ; ================================================================
        ; Mode 2+: custom free-list management
        ; 0x006F42C3: 8B 43 F8  MOV EAX,[EBX-8]     ; user_size
        ; 0x006F42C6: 8B 4B FC  MOV ECX,[EBX-4]     ; page_count
        ; 0x006F42C9: 8B 7B F4  MOV EDI,[EBX-12]    ; base_addr
        ; 0x006F42CC: 8B 1D 50 93 84 00  MOV EBX,[0x00849350]  ; g_free_list_count
        ; 0x006F42D2: 8D 50 0C  LEA EDX,[EAX+12]
        ; 0x006F42D5: 81 E2 FF 0F 00 00  AND EDX,0xfff
        ; 0x006F42DB: 8B F0  MOV ESI,EAX
        ; 0x006F42DD: 89 4D 08  MOV [EBP+8],ECX      ; save page_count
        ; 0x006F42E0: 8B 0D 4C 93 84 00  MOV ECX,[0x0084934c]  ; g_free_list_total
        ; 0x006F42E6: 2B F2  SUB ESI,EDX
        ; 0x006F42E8: 2B C8  SUB ECX,EAX
        ; 0x006F42EA: 81 C6 0C 20 00 00  ADD ESI,0x200c
        ; 0x006F42F0: 68 00 40 00 00  PUSH 0x4000
        ; 0x006F42F5: 8D 86 00 F0 FF FF  LEA EAX,[ESI-0x1000]
        ; 0x006F42FB: 50  PUSH EAX
        ; 0x006F42FC: 4B  DEC EBX
        ; 0x006F42FD: 57  PUSH EDI
        ; 0x006F42FE: 89 0D 4C 93 84 00  MOV [0x0084934c],ECX
        ; 0x006F4304: 89 1D 50 93 84 00  MOV [0x00849350],EBX
        ; 0x006F430A: FF 15 50 B1 76 00  CALL [VirtualFree]
        ; ================================================================
    l_mode_2plus:
        mov     eax, dword ptr [ebx - 8]     ; eax = user_size
        mov     ecx, dword ptr [ebx - 4]     ; ecx = page_count
        mov     edi, dword ptr [ebx - 12]    ; edi = base_addr
        EMIT_MOV_EBX_MEM(0x00849350)         ; mov ebx, [g_free_list_count]
        lea     edx, [eax + 12]              ; edx = user_size + 12
        and     edx, 0xfff                   ; round up
        mov     esi, eax                     ; esi = user_size
        mov     dword ptr [ebp + 8], ecx     ; save page_count
        EMIT_MOV_ECX_MEM(0x0084934c)         ; mov ecx, [g_free_list_total]
        sub     esi, edx                     ; esi = user_size - ((user_size+12)&0xfff)
        sub     ecx, eax                     ; ecx = g_free_list_total - user_size
        add     esi, 0x200c                  ; esi = adjusted_size
        push    0x4000                       ; MEM_RELEASE
        lea     eax, [esi + 0xfffff000]      ; eax = esi - 0x1000
        push    eax                          ; dwSize
        dec     ebx                          ; g_free_list_count--
        push    edi                          ; lpAddress
        EMIT_MOV_MEM_ECX(0x0084934c)         ; mov [g_free_list_total], ecx
        EMIT_MOV_MEM_EBX(0x00849350)         ; mov [g_free_list_count], ebx
        EMIT_CALL_IAT(0x0076b150)            ; call [VirtualFree]

        ; ================================================================
        ; Free-list merge logic
        ; 0x006F4310: A1 44 93 84 00  MOV EAX,[0x00849344]  ; g_free_list_head
        ; 0x006F4315: 33 D2  XOR EDX,EDX
        ; 0x006F4317: 33 C9  XOR ECX,ECX
        ; 0x006F4319: 85 C0  TEST EAX,EAX
        ; 0x006F431B: 89 55 FC  MOV [EBP-4],EDX  ; prev_prev = NULL
        ; 0x006F431E: 74 61  JZ 0x006f4381  (alloc_new_node)
        ; ================================================================
        EMIT_MOV_EAX_MEM(0x00849344)         ; mov eax, [g_free_list_head]
        xor     edx, edx
        xor     ecx, ecx
        test    eax, eax
        mov     dword ptr [ebp - 4], edx     ; prev_prev = NULL
        jz      l_alloc_new_node

        ; ================================================================
        ; Walk free list
        ; 0x006F4320: 8B 58 04  MOV EBX,[EAX+4]   ; node->base
        ; 0x006F4323: 03 58 08  ADD EBX,[EAX+8]   ; node->base + node->size
        ; 0x006F4326: 3B FB  CMP EDI,EBX          ; base_addr == node->base+size?
        ; 0x006F4328: 75 1B  JNZ 0x006f4345
        ; 0x006F432A: 8B 5D 08  MOV EBX,[EBP+8]   ; page_count
        ; 0x006F432D: 3B 58 0C  CMP EBX,[EAX+12]  ; page_count == node->page_count?
        ; 0x006F4330: 75 13  JNZ 0x006f4345
        ; 0x006F4332: 85 C9  TEST ECX,ECX         ; prev_node != NULL?
        ; 0x006F4334: 75 78  JNZ 0x006f43ae  (merge_before_with_prev)
        ; 0x006F4336: 8B 50 08  MOV EDX,[EAX+8]   ; node->size
        ; 0x006F4339: 8B 78 04  MOV EDI,[EAX+4]   ; node->base
        ; 0x006F433C: 03 D6  ADD EDX,ESI          ; node->size += adjusted_size
        ; 0x006F433E: 8B C8  MOV ECX,EAX          ; prev_node = node
        ; 0x006F4340: 89 50 08  MOV [EAX+8],EDX
        ; 0x006F4343: 8B F2  MOV ESI,EDX          ; adjusted_size = node->size
        ; ================================================================
    l_walk_free_list:
        mov     ebx, dword ptr [eax + 4]     ; ebx = node->base
        add     ebx, dword ptr [eax + 8]     ; ebx = node->base + node->size
        cmp     edi, ebx                     ; base_addr == node->base+size?
        jnz     l_check_adjacent_after
        mov     ebx, dword ptr [ebp + 8]     ; ebx = page_count
        cmp     ebx, dword ptr [eax + 12]    ; page_count == node->page_count?
        jnz     l_check_adjacent_after
        test    ecx, ecx                     ; prev_node != NULL?
        jnz     l_merge_before_with_prev
        ; Merge before: node->size += adjusted_size
        mov     edx, dword ptr [eax + 8]     ; edx = node->size
        mov     edi, dword ptr [eax + 4]     ; edi = node->base
        add     edx, esi                     ; node->size += adjusted_size
        mov     ecx, eax                     ; prev_node = node
        mov     dword ptr [eax + 8], edx
        mov     esi, edx                     ; adjusted_size = node->size

        ; ================================================================
        ; Check adjacent after
        ; 0x006F4345: 8B 58 04  MOV EBX,[EAX+4]   ; node->base
        ; 0x006F4348: 8D 14 3E  LEA EDX,[ESI+EDI] ; adjusted_base + base_addr
        ; 0x006F434B: 3B D3  CMP EDX,EBX          ; == node->base?
        ; 0x006F434D: 75 1F  JNZ 0x006f436e
        ; 0x006F434F: 8B 55 08  MOV EDX,[EBP+8]   ; page_count
        ; 0x006F4352: 3B 50 0C  CMP EDX,[EAX+12]  ; == node->page_count?
        ; 0x006F4355: 75 17  JNZ 0x006f436e
        ; 0x006F4357: 85 C9  TEST ECX,ECX         ; prev_node != NULL?
        ; 0x006F4359: 0F 85 96 00 00 00  JNZ 0x006f43f5 (merge_after_with_prev)
        ; 0x006F435F: 8B 50 08  MOV EDX,[EAX+8]   ; node->size
        ; 0x006F4362: 03 D6  ADD EDX,ESI          ; += adjusted_size
        ; 0x006F4364: 8B C8  MOV ECX,EAX          ; prev_node = node
        ; 0x006F4366: 89 78 04  MOV [EAX+4],EDI   ; node->base = base_addr
        ; 0x006F4369: 89 50 08  MOV [EAX+8],EDX
        ; 0x006F436C: 8B F2  MOV ESI,EDX          ; adjusted_size = node->size
        ; ================================================================
    l_check_adjacent_after:
        mov     ebx, dword ptr [eax + 4]     ; ebx = node->base
        lea     edx, [esi + edi]             ; edx = adjusted_base + base_addr
        cmp     edx, ebx                     ; == node->base?
        jnz     l_next_node
        mov     edx, dword ptr [ebp + 8]     ; edx = page_count
        cmp     edx, dword ptr [eax + 12]    ; == node->page_count?
        jnz     l_next_node
        test    ecx, ecx                     ; prev_node != NULL?
        jnz     l_merge_after_with_prev
        ; Merge after: node->base = base_addr, node->size += adjusted_size
        mov     edx, dword ptr [eax + 8]     ; edx = node->size
        add     edx, esi                     ; += adjusted_size
        mov     ecx, eax                     ; prev_node = node
        mov     dword ptr [eax + 4], edi     ; node->base = base_addr
        mov     dword ptr [eax + 8], edx
        mov     esi, edx                     ; adjusted_size = node->size

        ; ================================================================
        ; Next node
        ; 0x006F436E: 8B D0  MOV EDX,EAX          ; prev_prev = node
        ; 0x006F4370: 8B 00  MOV EAX,[EAX]         ; node = node->next
        ; 0x006F4372: 85 C0  TEST EAX,EAX
        ; 0x006F4374: 89 55 FC  MOV [EBP-4],EDX   ; save prev_prev
        ; 0x006F4377: 75 A7  JNZ 0x006f4320
        ; 0x006F4379: 85 C9  TEST ECX,ECX
        ; 0x006F437B: 0F 85 82 03 00 00  JNZ 0x006f4703 (epilogue)
        ; ================================================================
    l_next_node:
        mov     edx, eax                     ; prev_prev = node
        mov     eax, dword ptr [eax]         ; node = node->next
        test    eax, eax
        mov     dword ptr [ebp - 4], edx     ; save prev_prev
        jnz     l_walk_free_list
        test    ecx, ecx                     ; prev_node != NULL?
        jnz     l_epilogue

        ; ================================================================
        ; Allocate new free-list node
        ; 0x006F4381: 6A 10  PUSH 0x10
        ; 0x006F4383: FF 15 94 B2 76 00  CALL [malloc]
        ; 0x006F4389: 8B 0D 44 93 84 00  MOV ECX,[0x00849344]
        ; 0x006F438F: 8B 55 08  MOV EDX,[EBP+8]   ; page_count
        ; 0x006F4392: 83 C4 04  ADD ESP,0x4
        ; 0x006F4395: 89 78 04  MOV [EAX+4],EDI   ; node->base
        ; 0x006F4398: 5F  POP EDI
        ; 0x006F4399: 89 70 08  MOV [EAX+8],ESI   ; node->size
        ; 0x006F439C: 5E  POP ESI
        ; 0x006F439D: 89 50 0C  MOV [EAX+12],EDX  ; node->page_count
        ; 0x006F43A0: 89 08  MOV [EAX],ECX        ; node->next = old head
        ; 0x006F43A2: A3 44 93 84 00  MOV [0x00849344],EAX  ; head = node
        ; 0x006F43A7: 5B  POP EBX
        ; 0x006F43A8: 8B E5  MOV ESP,EBP
        ; 0x006F43AA: 5D  POP EBP
        ; 0x006F43AB: C2 04 00  RET 0x4
        ; ================================================================
    l_alloc_new_node:
        push    0x10                         ; sizeof(FreeListNode)
        EMIT_CALL_IAT(0x0076b294)            ; call [malloc]
        EMIT_MOV_ECX_MEM(0x00849344)         ; mov ecx, [g_free_list_head]
        mov     edx, dword ptr [ebp + 8]     ; edx = page_count
        add     esp, 4
        mov     dword ptr [eax + 4], edi     ; node->base = base_addr
        pop     edi
        mov     dword ptr [eax + 8], esi     ; node->size = adjusted_size
        pop     esi
        mov     dword ptr [eax + 12], edx    ; node->page_count = page_count
        mov     dword ptr [eax], ecx         ; node->next = old head
        EMIT_MOV_MEM_EAX(0x00849344)         ; mov [g_free_list_head], eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4

        ; ================================================================
        ; Merge before with prev_node
        ; 0x006F43AE: 8B 70 04  MOV ESI,[EAX+4]   ; node->base
        ; 0x006F43B1: 8B 79 08  MOV EDI,[ECX+8]   ; prev_node->size
        ; 0x006F43B4: 89 71 04  MOV [ECX+4],ESI   ; prev_node->base = node->base
        ; 0x006F43B7: 8B 70 08  MOV ESI,[EAX+8]   ; node->size
        ; 0x006F43BA: 03 FE  ADD EDI,ESI          ; prev_node->size += node->size
        ; 0x006F43BC: 85 D2  TEST EDX,EDX         ; prev_prev != NULL?
        ; 0x006F43BE: 89 79 08  MOV [ECX+8],EDI   ; prev_node->size = merged
        ; 0x006F43C1: 74 17  JZ 0x006f43da (unlink_head)
        ; 0x006F43C3: 8B 08  MOV ECX,[EAX]        ; node->next
        ; 0x006F43C5: 50  PUSH EAX
        ; 0x006F43C6: 89 0A  MOV [EDX],ECX        ; prev_prev->next = node->next
        ; 0x006F43C8: FF 15 D0 B2 76 00  CALL [free]
        ; 0x006F43CE: 83 C4 04  ADD ESP,0x4
        ; 0x006F43D1: 5F  POP EDI
        ; 0x006F43D2: 5E  POP ESI
        ; 0x006F43D3: 5B  POP EBX
        ; 0x006F43D4: 8B E5  MOV ESP,EBP
        ; 0x006F43D6: 5D  POP EBP
        ; 0x006F43D7: C2 04 00  RET 0x4
        ; ================================================================
    l_merge_before_with_prev:
        mov     esi, dword ptr [eax + 4]     ; esi = node->base
        mov     edi, dword ptr [ecx + 8]     ; edi = prev_node->size
        mov     dword ptr [ecx + 4], esi     ; prev_node->base = node->base
        mov     esi, dword ptr [eax + 8]     ; esi = node->size
        add     edi, esi                     ; prev_node->size += node->size
        test    edx, edx                     ; prev_prev != NULL?
        mov     dword ptr [ecx + 8], edi     ; prev_node->size = merged
        jz      l_unlink_head_before
        ; Unlink from middle
        mov     ecx, dword ptr [eax]         ; ecx = node->next
        push    eax
        mov     dword ptr [edx], ecx         ; prev_prev->next = node->next
        EMIT_CALL_IAT(0x0076b2d0)            ; call [free]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4

        ; ================================================================
        ; Unlink head (merge before)
        ; 0x006F43DA: 8B 10  MOV EDX,[EAX]        ; node->next
        ; 0x006F43DC: 50  PUSH EAX
        ; 0x006F43DD: 89 15 44 93 84 00  MOV [0x00849344],EDX
        ; 0x006F43E3: FF 15 D0 B2 76 00  CALL [free]
        ; 0x006F43E9: 83 C4 04  ADD ESP,0x4
        ; 0x006F43EC: 5F  POP EDI
        ; 0x006F43ED: 5E  POP ESI
        ; 0x006F43EE: 5B  POP EBX
        ; 0x006F43EF: 8B E5  MOV ESP,EBP
        ; 0x006F43F1: 5D  POP EBP
        ; 0x006F43F2: C2 04 00  RET 0x4
        ; ================================================================
    l_unlink_head_before:
        mov     edx, dword ptr [eax]         ; edx = node->next
        push    eax
        EMIT_MOV_MEM_EDX(0x00849344)         ; mov [g_free_list_head], edx
        EMIT_CALL_IAT(0x0076b2d0)            ; call [free]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4

        ; ================================================================
        ; Merge after with prev_node
        ; 0x006F43F5: 8B 71 08  MOV ESI,[ECX+8]   ; prev_node->size
        ; 0x006F43F8: 8B 50 08  MOV EDX,[EAX+8]   ; node->size
        ; 0x006F43FB: 03 F2  ADD ESI,EDX          ; prev_node->size += node->size
        ; 0x006F43FD: 89 71 08  MOV [ECX+8],ESI
        ; 0x006F4400: 8B 4D FC  MOV ECX,[EBP-4]   ; prev_prev
        ; 0x006F4403: 85 C9  TEST ECX,ECX
        ; 0x006F4405: 74 17  JZ 0x006f441e (unlink_head_after)
        ; 0x006F4407: 8B 10  MOV EDX,[EAX]        ; node->next
        ; 0x006F4409: 50  PUSH EAX
        ; 0x006F440A: 89 11  MOV [ECX],EDX        ; prev_prev->next = node->next
        ; 0x006F440C: FF 15 D0 B2 76 00  CALL [free]
        ; 0x006F4412: 83 C4 04  ADD ESP,0x4
        ; 0x006F4415: 5F  POP EDI
        ; 0x006F4416: 5E  POP ESI
        ; 0x006F4417: 5B  POP EBX
        ; 0x006F4418: 8B E5  MOV ESP,EBP
        ; 0x006F441A: 5D  POP EBP
        ; 0x006F441B: C2 04 00  RET 0x4
        ; ================================================================
    l_merge_after_with_prev:
        mov     esi, dword ptr [ecx + 8]     ; esi = prev_node->size
        mov     edx, dword ptr [eax + 8]     ; edx = node->size
        add     esi, edx                     ; prev_node->size += node->size
        mov     dword ptr [ecx + 8], esi
        mov     ecx, dword ptr [ebp - 4]     ; ecx = prev_prev
        test    ecx, ecx
        jz      l_unlink_head_after
        ; Unlink from middle
        mov     edx, dword ptr [eax]         ; edx = node->next
        push    eax
        mov     dword ptr [ecx], edx         ; prev_prev->next = node->next
        EMIT_CALL_IAT(0x0076b2d0)            ; call [free]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4

        ; ================================================================
        ; Unlink head (merge after)
        ; 0x006F441E: 8B 08  MOV ECX,[EAX]        ; node->next
        ; 0x006F4420: 50  PUSH EAX
        ; 0x006F4421: 89 0D 44 93 84 00  MOV [0x00849344],ECX
        ; 0x006F4427: FF 15 D0 B2 76 00  CALL [free]
        ; 0x006F442D: 83 C4 04  ADD ESP,0x4
        ; 0x006F4430: 5F  POP EDI
        ; 0x006F4431: 5E  POP ESI
        ; 0x006F4432: 5B  POP EBX
        ; 0x006F4433: 8B E5  MOV ESP,EBP
        ; 0x006F4435: 5D  POP EBP
        ; 0x006F4436: C2 04 00  RET 0x4
        ; ================================================================
    l_unlink_head_after:
        mov     ecx, dword ptr [eax]         ; ecx = node->next
        push    eax
        EMIT_MOV_MEM_ECX(0x00849344)         ; mov [g_free_list_head], ecx
        EMIT_CALL_IAT(0x0076b2d0)            ; call [free]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4

        ; ================================================================
        ; Mode 0: gos_Free — custom heap manager with pool headers
        ; 0x006F4439: F6 C3 03  TEST BL,0x3
        ; 0x006F443C: 74 13  JZ 0x006f4451
        ; 0x006F443E: 53  PUSH EBX
        ; 0x006F443F: 68 08 F9 79 00  PUSH 0x79f908
        ; 0x006F4444: E8 47 67 00 00  CALL 0x006fab90
        ; 0x006F4449: 83 C4 08  ADD ESP,0x8
        ; 0x006F444C: 85 C0  TEST EAX,EAX
        ; 0x006F444E: 74 01  JZ 0x006f4451
        ; 0x006F4450: CC  INT3
        ; ================================================================
    l_mode_0:
        test    bl, 3
        jz      l_check_tag
        push    ebx
        push    0x79f908                     ; "Invalid pointer passed to gos_Free"
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        jz      l_check_tag
        int     3

        ; ================================================================
        ; Read tag byte
        ; 0x006F4451: 8D 43 FF  LEA EAX,[EBX-1]
        ; 0x006F4454: 89 45 08  MOV [EBP+8],EAX   ; save ptr-1
        ; 0x006F4457: 8A 00  MOV AL,[EAX]         ; tag byte
        ; 0x006F4459: 3C FE  CMP AL,0xFE
        ; 0x006F445B: 88 45 FC  MOV [EBP-4],AL    ; save tag
        ; 0x006F445E: 75 23  JNZ 0x006f4483
        ; ================================================================
    l_check_tag:
        lea     eax, [ebx - 1]
        mov     dword ptr [ebp + 8], eax     ; save ptr-1
        mov     al, byte ptr [eax]           ; al = tag byte
        cmp     al, 0xfe
        mov     byte ptr [ebp - 4], al       ; save tag
        jnz     l_check_tag_0

        ; ================================================================
        ; Tag 0xFE: forwarded CRT free
        ; 0x006F4460: A1 98 97 85 00  MOV EAX,[0x00859798]
        ; 0x006F4465: 85 C0  TEST EAX,EAX
        ; 0x006F4467: 0F 85 96 02 00 00  JNZ 0x006f4703
        ; 0x006F446D: 8B 53 FB  MOV EDX,[EBX-5]
        ; 0x006F4470: 52  PUSH EDX
        ; 0x006F4471: FF 15 D0 B2 76 00  CALL [free]
        ; 0x006F4477: 83 C4 04  ADD ESP,0x4
        ; 0x006F447A: 5F  POP EDI
        ; 0x006F447B: 5E  POP ESI
        ; 0x006F447C: 5B  POP EBX
        ; 0x006F447D: 8B E5  MOV ESP,EBP
        ; 0x006F447F: 5D  POP EBP
        ; 0x006F4480: C2 04 00  RET 0x4
        ; ================================================================
    l_tag_fe:
        EMIT_MOV_EAX_MEM(0x00859798)         ; mov eax, [g_no_free]
        test    eax, eax
        jnz     l_epilogue
        mov     edx, dword ptr [ebx - 5]
        push    edx
        EMIT_CALL_IAT(0x0076b2d0)            ; call [free]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4

        ; ================================================================
        ; Check tag 0 or >= 0xFD
        ; 0x006F4483: 84 C0  TEST AL,AL
        ; 0x006F4485: 0F 86 DC 01 00 00  JBE 0x006f4667 (tag <= 0)
        ; 0x006F448B: 3C FD  CMP AL,0xFD
        ; 0x006F448D: 0F 83 D6 01 00 00  JNC 0x006f4669 (tag >= 0xFD)
        ; ================================================================
    l_check_tag_0:
        test    al, al
        jbe     l_tag_0_or_fd
        cmp     al, 0xfd
        jnc     l_tag_fd_check

        ; ================================================================
        ; Tag 1..252: pool allocation
        ; 0x006F4493: 8B 45 FC  MOV EAX,[EBP-4]   ; tag
        ; 0x006F4496: 25 FF 00 00 00  AND EAX,0xFF
        ; 0x006F449B: 8D 34 85 90 8E 84 00  LEA ESI,[EAX*4+0x848e90]
        ; 0x006F44A2: 8B 06  MOV EAX,[ESI]        ; heap_table[tag]
        ; 0x006F44A4: 8B FB  MOV EDI,EBX
        ; 0x006F44A6: 81 E7 00 00 FF FF  AND EDI,0xFFFF0000  ; pool_base
        ; 0x006F44AC: 85 C0  TEST EAX,EAX
        ; 0x006F44AE: 89 7D F8  MOV [EBP-8],EDI   ; save pool_base
        ; 0x006F44B1: 75 13  JNZ 0x006f44c6
        ; 0x006F44B3: 53  PUSH EBX
        ; 0x006F44B4: 68 E0 F8 79 00  PUSH 0x79f8e0
        ; 0x006F44B9: E8 D2 66 00 00  CALL 0x006fab90
        ; 0x006F44BE: 83 C4 08  ADD ESP,0x8
        ; 0x006F44C1: 85 C0  TEST EAX,EAX
        ; 0x006F44C3: 74 01  JZ 0x006f44c6
        ; 0x006F44C5: CC  INT3
        ; ================================================================
        mov     eax, dword ptr [ebp - 4]     ; eax = tag
        and     eax, 0xff
        lea     esi, [eax * 4 + 0x848e90]   ; esi = &heap_table[tag]
        mov     eax, dword ptr [esi]         ; eax = heap_table[tag]
        mov     edi, ebx                     ; edi = ptr
        and     edi, 0xffff0000              ; edi = pool_base
        test    eax, eax
        mov     dword ptr [ebp - 8], edi     ; save pool_base
        jnz     l_pool_valid

        ; Assert: duplicate free
        push    ebx
        push    0x79f8e0                     ; "Duplicate free detected"
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        jz      l_pool_valid
        int     3

        ; ================================================================
        ; Pool valid
        ; 0x006F44C6: 8B 0E  MOV ECX,[ESI]        ; heap_table[tag]
        ; 0x006F44C8: 6A 00  PUSH 0x0
        ; 0x006F44CA: 6A 00  PUSH 0x0
        ; 0x006F44CC: 51  PUSH ECX
        ; 0x006F44CD: E8 6E 04 00 00  CALL 0x006f4940
        ; 0x006F44D2: A1 98 97 85 00  MOV EAX,[0x00859798]
        ; 0x006F44D7: 85 C0  TEST EAX,EAX
        ; 0x006F44D9: 8B 55 08  MOV EDX,[EBP+8]   ; ptr-1
        ; 0x006F44DC: C6 02 00  MOV BYTE [EDX],0  ; clear tag
        ; 0x006F44DF: 0F 85 1E 02 00 00  JNZ 0x006f4703
        ; ================================================================
    l_pool_valid:
        mov     ecx, dword ptr [esi]         ; ecx = heap_table[tag]
        push    0
        push    0
        push    ecx
        call    FUN_006f4940                 ; heap_table decrement
        EMIT_MOV_EAX_MEM(0x00859798)         ; mov eax, [g_no_free]
        test    eax, eax
        mov     edx, dword ptr [ebp + 8]     ; edx = ptr-1
        mov     byte ptr [edx], 0            ; clear tag byte
        jnz     l_epilogue

        ; ================================================================
        ; Decrement pool active count and store freed offset
        ; 0x006F44E5: 66 FF 4F 38  DEC WORD [EDI+0x38]
        ; 0x006F44E9: 33 C0  XOR EAX,EAX
        ; 0x006F44EB: 66 8B 47 38  MOV AX,[EDI+0x38]
        ; 0x006F44EF: 2B DF  SUB EBX,EDI          ; offset from pool base
        ; 0x006F44F1: B9 FF FF 00 00  MOV ECX,0xFFFF
        ; 0x006F44F6: 4B  DEC EBX                  ; offset - 1
        ; 0x006F44F7: 23 C1  AND EAX,ECX
        ; 0x006F44F9: 66 89 5C 47 3A  MOV [EDI+EAX*2+0x3A],BX
        ; ================================================================
        dec     word ptr [edi + 0x38]
        xor     eax, eax
        mov     ax, word ptr [edi + 0x38]    ; ax = new count
        sub     ebx, edi                     ; ebx = offset from pool base
        mov     ecx, 0xffff
        dec     ebx                          ; ebx = offset - 1
        and     eax, ecx
        mov     word ptr [edi + eax * 2 + 0x3a], bx

        ; ================================================================
        ; Pool header validation
        ; 0x006F44FE: 8B 47 10  MOV EAX,[EDI+0x10]
        ; 0x006F4501: 8B 57 0C  MOV EDX,[EDI+0x0C]
        ; 0x006F4504: 33 D0  XOR EDX,EAX
        ; 0x006F4506: F7 C2 00 00 FF FF  TEST EDX,0xFFFF0000
        ; 0x006F450C: 75 1B  JNZ 0x006f4529
        ; 0x006F450E: 33 C7  XOR EAX,EDI
        ; 0x006F4510: A9 00 00 FF FF  TEST EAX,0xFFFF0000
        ; 0x006F4515: 75 12  JNZ 0x006f4529
        ; 0x006F4517: 85 4F 04  TEST [EDI+4],ECX  ; low 16 bits of prev
        ; 0x006F451A: 75 0D  JNZ 0x006f4529
        ; 0x006F451C: 85 4F 08  TEST [EDI+8],ECX  ; low 16 bits of next
        ; 0x006F451F: 75 08  JNZ 0x006f4529
        ; 0x006F4521: 81 3F 2A 47 4F 53  CMP [EDI],0x534F472A  ; "GOS*"
        ; 0x006F4527: 74 09  JZ 0x006f4532
        ; 0x006F4529: A1 34 93 84 00  MOV EAX,[0x00849334]
        ; 0x006F452E: 8B 75 F8  MOV ESI,[EBP-8]   ; pool_base
        ; 0x006F4531: CC  INT3
        ; ================================================================
        mov     eax, dword ptr [edi + 0x10]  ; eax = pool->field_10
        mov     edx, dword ptr [edi + 0x0c]  ; edx = pool->field_0c
        xor     edx, eax
        test    edx, 0xffff0000
        jnz     l_pool_corrupted
        xor     eax, edi
        test    eax, 0xffff0000
        jnz     l_pool_corrupted
        test    dword ptr [edi + 4], ecx     ; low 16 bits of prev
        jnz     l_pool_corrupted
        test    dword ptr [edi + 8], ecx     ; low 16 bits of next
        jnz     l_pool_corrupted
        cmp     dword ptr [edi], 0x534f472a  ; "GOS*"
        jz      l_pool_validated

    l_pool_corrupted:
        EMIT_MOV_EAX_MEM(0x00849334)         ; mov eax, [g_debug_assert_ptr]
        mov     esi, dword ptr [ebp - 8]     ; esi = pool_base
        int     3

        ; ================================================================
        ; Find pool size by pool_id
        ; 0x006F4532: 66 8B 4F 14  MOV CX,[EDI+0x14]  ; pool_id
        ; 0x006F4536: 33 F6  XOR ESI,ESI              ; index = 0
        ; 0x006F4538: B8 84 6E 7B 00  MOV EAX,0x7B6E84
        ; 0x006F453D: 66 3B 08  CMP CX,[EAX]
        ; 0x006F4540: 74 0B  JZ 0x006f454d
        ; 0x006F4542: 83 C0 02  ADD EAX,2
        ; 0x006F4545: 46  INC ESI
        ; 0x006F4546: 3D A8 6E 7B 00  CMP EAX,0x7B6EA8
        ; 0x006F454B: 7C F0  JL 0x006f453d
        ; ================================================================
    l_pool_validated:
        mov     cx, word ptr [edi + 0x14]    ; cx = pool_id
        xor     esi, esi                     ; esi = index = 0
        mov     eax, 0x7b6e84                ; eax = &pool_sizes[0]

    l_find_pool_size:
        cmp     cx, word ptr [eax]           ; compare pool_id
        jz      l_pool_found
        add     eax, 2
        inc     esi
        cmp     eax, 0x7b6ea8                ; end of array
        jl      l_find_pool_size

        ; ================================================================
        ; Check if pool is empty
        ; 0x006F454D: 66 83 7F 38 00  CMP WORD [EDI+0x38],0
        ; 0x006F4552: 75 69  JNZ 0x006f45bd (pool not empty)
        ; ================================================================
    l_pool_found:
        cmp     word ptr [edi + 0x38], 0
        jnz     l_pool_not_empty

        ; ================================================================
        ; Pool is empty: free the pool memory
        ; 0x006F4554: 8B 4F 04  MOV ECX,[EDI+4]    ; pool->prev
        ; 0x006F4557: 85 C9  TEST ECX,ECX
        ; 0x006F4559: 74 0F  JZ 0x006f456a (pool_is_head)
        ; 0x006F455B: 8B 47 08  MOV EAX,[EDI+8]    ; pool->next
        ; 0x006F455E: 85 C0  TEST EAX,EAX
        ; 0x006F4560: 89 41 08  MOV [ECX+8],EAX    ; prev->next = next
        ; 0x006F4563: 74 35  JZ 0x006f459a
        ; 0x006F4565: 89 48 04  MOV [EAX+4],ECX    ; next->prev = prev
        ; 0x006F4568: EB 30  JMP 0x006f459a
        ; ================================================================
        mov     ecx, dword ptr [edi + 4]     ; ecx = pool->prev
        test    ecx, ecx
        jz      l_pool_is_head
        ; Not head: unlink from doubly-linked list
        mov     eax, dword ptr [edi + 8]     ; eax = pool->next
        test    eax, eax
        mov     dword ptr [ecx + 8], eax     ; prev->next = next
        jz      l_pool_unlinked
        mov     dword ptr [eax + 4], ecx     ; next->prev = prev
        jmp     l_pool_unlinked

        ; ================================================================
        ; Pool is head
        ; 0x006F456A: 39 3C B5 98 92 84 00  CMP [ESI*4+0x849298],EDI
        ; 0x006F4571: 74 12  JZ 0x006f4585
        ; 0x006F4573: 68 C8 F8 79 00  PUSH 0x79f8c8
        ; 0x006F4578: E8 13 66 00 00  CALL 0x006fab90
        ; 0x006F457D: 83 C4 04  ADD ESP,0x4
        ; 0x006F4580: 85 C0  TEST EAX,EAX
        ; 0x006F4582: 74 01  JZ 0x006f4585
        ; 0x006F4584: CC  INT3
        ; 0x006F4585: 8B 47 08  MOV EAX,[EDI+8]    ; pool->next
        ; 0x006F4588: 85 C0  TEST EAX,EAX
        ; 0x006F458A: 89 04 B5 98 92 84 00  MOV [ESI*4+0x849298],EAX
        ; 0x006F4591: 74 07  JZ 0x006f459a
        ; 0x006F4593: C7 40 04 00 00 00 00  MOV [EAX+4],0
        ; ================================================================
    l_pool_is_head:
        EMIT_CMP_PTR_ESI4_ADDR_EDI(0x00849298) ; cmp [g_pool_list+esi*4], edi
        jz      l_pool_head_confirmed
        push    0x79f8c8                     ; "List of pools corrupted"
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_pool_head_confirmed
        int     3

    l_pool_head_confirmed:
        mov     eax, dword ptr [edi + 8]     ; eax = pool->next
        test    eax, eax
        EMIT_MOV_PTR_ESI4_ADDR_EAX(0x00849298) ; mov [g_pool_list+esi*4], eax
        jz      l_pool_unlinked
        mov     dword ptr [eax + 4], 0       ; next->prev = NULL

        ; ================================================================
        ; VirtualFree the pool (MEM_RELEASE + MEM_DECOMMIT)
        ; 0x006F459A: 8B 35 50 B1 76 00  MOV ESI,[0x0076b150]  ; VirtualFree
        ; 0x006F45A0: 68 00 40 00 00  PUSH 0x4000  ; MEM_RELEASE
        ; 0x006F45A5: 6A 00  PUSH 0x0
        ; 0x006F45A7: 57  PUSH EDI
        ; 0x006F45A8: FF D6  CALL ESI
        ; 0x006F45AA: 68 00 80 00 00  PUSH 0x8000  ; MEM_DECOMMIT
        ; 0x006F45AF: 6A 00  PUSH 0x0
        ; 0x006F45B1: 57  PUSH EDI
        ; 0x006F45B2: FF D6  CALL ESI
        ; 0x006F45B4: 5F  POP EDI
        ; 0x006F45B5: 5E  POP ESI
        ; 0x006F45B6: 5B  POP EBX
        ; 0x006F45B7: 8B E5  MOV ESP,EBP
        ; 0x006F45B9: 5D  POP EBP
        ; 0x006F45BA: C2 04 00  RET 0x4
        ; ================================================================
    l_pool_unlinked:
        EMIT_MOV_ESI_MEM(0x0076b150)         ; mov esi, [VirtualFree]
        push    0x4000                       ; MEM_RELEASE
        push    0                            ; dwSize = 0
        push    edi                          ; lpAddress
        call    esi                          ; VirtualFree(edi, 0, MEM_RELEASE)
        push    0x8000                       ; MEM_DECOMMIT
        push    0                            ; dwSize = 0
        push    edi                          ; lpAddress
        call    esi                          ; VirtualFree(edi, 0, MEM_DECOMMIT)
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4

        ; ================================================================
        ; Pool not empty: update subheap refcounts
        ; 0x006F45BD: A1 80 6E 7B 00  MOV EAX,[0x007b6e80]
        ; 0x006F45C2: 85 C0  TEST EAX,EAX
        ; 0x006F45C4: 74 65  JZ 0x006f462b (pool_move_to_front)
        ; 0x006F45C6: 8B 45 08  MOV EAX,[EBP+8]   ; ptr-1
        ; 0x006F45C9: 2B C7  SUB EAX,EDI          ; offset from pool base
        ; 0x006F45CB: 99  CDQ
        ; 0x006F45CC: 81 E2 FF 0F 00 00  AND EDX,0xFFF
        ; 0x006F45D2: 03 C2  ADD EAX,EDX
        ; 0x006F45D4: 8B D8  MOV EBX,EAX          ; subheap_idx1
        ; 0x006F45D6: 8B C1  MOV EAX,ECX          ; pool_id (from earlier)
        ; 0x006F45D8: 8B 4D 08  MOV ECX,[EBP+8]   ; ptr-1
        ; 0x006F45DB: 25 FF FF 00 00  AND EAX,0xFFFF
        ; 0x006F45E0: 2B C7  SUB EAX,EDI
        ; 0x006F45E2: 03 C1  ADD EAX,ECX
        ; 0x006F45E4: 99  CDQ
        ; 0x006F45E5: 81 E2 FF 0F 00 00  AND EDX,0xFFF
        ; 0x006F45EB: 03 C2  ADD EAX,EDX
        ; 0x006F45ED: C1 FB 0C  SAR EBX,12
        ; 0x006F45F0: C1 F8 0C  SAR EAX,12
        ; 0x006F45F3: 66 FF 4C 5F 18  DEC WORD [EDI+EBX*2+0x18]
        ; 0x006F45F8: 66 FF 4C 47 18  DEC WORD [EDI+EAX*2+0x18]
        ; 0x006F45FD: 66 83 7C 5F 18 00  CMP WORD [EDI+EBX*2+0x18],0
        ; 0x006F4603: 66 8B 44 47 18  MOV AX,[EDI+EAX*2+0x18]
        ; 0x006F4608: 75 21  JNZ 0x006f462b
        ; 0x006F460A: 66 85 C0  TEST AX,AX
        ; 0x006F460D: 75 1C  JNZ 0x006f462b
        ; 0x006F460F: 33 C0  XOR EAX,EAX
        ; 0x006F4611: 66 8B 47 14  MOV AX,[EDI+0x14]  ; pool_id (size)
        ; 0x006F4615: 68 00 40 00 00  PUSH 0x4000
        ; 0x006F461A: 50  PUSH EAX
        ; 0x006F461B: 51  PUSH ECX                  ; ptr-1
        ; 0x006F461C: FF 15 50 B1 76 00  CALL [VirtualFree]
        ; 0x006F4622: 5F  POP EDI
        ; 0x006F4623: 5E  POP ESI
        ; 0x006F4624: 5B  POP EBX
        ; 0x006F4625: 8B E5  MOV ESP,EBP
        ; 0x006F4627: 5D  POP EBP
        ; 0x006F4628: C2 04 00  RET 0x4
        ; ================================================================
    l_pool_not_empty:
        EMIT_MOV_EAX_MEM(0x007b6e80)         ; mov eax, [g_enable_subheap_free]
        test    eax, eax
        jz      l_pool_move_to_front

        ; Calculate subheap indices
        mov     eax, dword ptr [ebp + 8]     ; eax = ptr-1
        sub     eax, edi                     ; eax = offset from pool base
        cdq
        and     edx, 0xfff
        add     eax, edx
        mov     ebx, eax                     ; ebx = rounded offset (subheap_idx1)
        mov     eax, ecx                     ; eax = pool_id (from cx register)
        mov     ecx, dword ptr [ebp + 8]     ; ecx = ptr-1
        and     eax, 0xffff                  ; eax = pool_id (low 16 bits)
        sub     eax, edi                     ; eax = pool_id - pool_base
        add     eax, ecx                     ; eax = ptr-1 + pool_id - pool_base
        cdq
        and     edx, 0xfff
        add     eax, edx
        sar     ebx, 12                      ; ebx = subheap_idx1
        sar     eax, 12                      ; eax = subheap_idx2
        dec     word ptr [edi + ebx * 2 + 0x18]  ; subheap_refcount[idx1]--
        dec     word ptr [edi + eax * 2 + 0x18]  ; subheap_refcount[idx2]--
        cmp     word ptr [edi + ebx * 2 + 0x18], 0
        mov     ax, word ptr [edi + eax * 2 + 0x18]
        jnz     l_pool_move_to_front
        test    ax, ax
        jnz     l_pool_move_to_front

        ; Both subheap refcounts are 0: free the subheap pages
        xor     eax, eax
        mov     ax, word ptr [edi + 0x14]    ; ax = pool_id (size)
        push    0x4000                       ; MEM_RELEASE
        push    eax                          ; dwSize = pool_id
        push    ecx                          ; lpAddress = ptr-1
        EMIT_CALL_IAT(0x0076b150)            ; call [VirtualFree]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4

        ; ================================================================
        ; Move pool to front of its list (LRU)
        ; 0x006F462B: 8B 0C B5 98 92 84 00  MOV ECX,[ESI*4+0x849298]
        ; 0x006F4632: 3B CF  CMP ECX,EDI
        ; 0x006F4634: 0F 84 C9 00 00 00  JZ 0x006f4703 (epilogue)
        ; 0x006F463A: 8B 47 08  MOV EAX,[EDI+8]    ; pool->next
        ; 0x006F463D: 85 C0  TEST EAX,EAX
        ; 0x006F463F: 8B 57 04  MOV EDX,[EDI+4]    ; pool->prev
        ; 0x006F4642: 89 42 08  MOV [EDX+8],EAX    ; prev->next = next
        ; 0x006F4645: 74 03  JZ 0x006f464a
        ; 0x006F4647: 89 50 04  MOV [EAX+4],EDX    ; next->prev = prev
        ; 0x006F464A: 89 79 04  MOV [ECX+4],EDI    ; old_head->prev = pool
        ; 0x006F464D: 89 3C B5 98 92 84 00  MOV [ESI*4+0x849298],EDI
        ; 0x006F4654: 89 4F 08  MOV [EDI+8],ECX    ; pool->next = old_head
        ; 0x006F4657: C7 47 04 00 00 00 00  MOV [EDI+4],0  ; pool->prev = NULL
        ; 0x006F465E: 5F  POP EDI
        ; 0x006F465F: 5E  POP ESI
        ; 0x006F4660: 5B  POP EBX
        ; 0x006F4661: 8B E5  MOV ESP,EBP
        ; 0x006F4663: 5D  POP EBP
        ; 0x006F4664: C2 04 00  RET 0x4
        ; ================================================================
    l_pool_move_to_front:
        EMIT_MOV_ECX_PTR_ESI4_ADDR(0x00849298) ; ecx = g_pool_list[esi]
        cmp     ecx, edi
        jz      l_epilogue                     ; already at front

        ; Unlink from current position
        mov     eax, dword ptr [edi + 8]     ; eax = pool->next
        test    eax, eax
        mov     edx, dword ptr [edi + 4]     ; edx = pool->prev
        mov     dword ptr [edx + 8], eax     ; prev->next = next
        jz      l_skip_prev_update
        mov     dword ptr [eax + 4], edx     ; next->prev = prev
    l_skip_prev_update:

        ; Link at front
        mov     dword ptr [ecx + 4], edi     ; old_head->prev = pool
        EMIT_MOV_PTR_ESI4_ADDR_EDI(0x00849298) ; mov [g_pool_list+esi*4], edi
        mov     dword ptr [edi + 8], ecx     ; pool->next = old_head
        mov     dword ptr [edi + 4], 0       ; pool->prev = NULL
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4

        ; ================================================================
        ; Tag 0x00 or 0xFD
        ; 0x006F4667: 3C FD  CMP AL,0xFD
        ; 0x006F4669: 0F 85 81 00 00 00  JNZ 0x006f46f0 (tag_invalid)
        ; ================================================================
    l_tag_0_or_fd:
        cmp     al, 0xfd
    l_tag_fd_check:
        jnz     l_tag_invalid

        ; ================================================================
        ; Tag 0xFD: large allocation
        ; 0x006F466F: 8B 5B FB  MOV EBX,[EBX-5]   ; large_alloc_header
        ; 0x006F4672: 8B 33  MOV ESI,[EBX]         ; header->size
        ; 0x006F4674: 33 D2  XOR EDX,EDX
        ; 0x006F4676: 8A 53 0C  MOV DL,[EBX+12]   ; header->tag
        ; 0x006F4679: 6A 00  PUSH 0x0
        ; 0x006F467B: 8B CE  MOV ECX,ESI
        ; 0x006F467D: F7 D9  NEG ECX               ; -size
        ; 0x006F467F: 51  PUSH ECX
        ; 0x006F4680: 8B 04 95 90 8E 84 00  MOV EAX,[EDX*4+0x848e90]
        ; 0x006F4687: 50  PUSH EAX
        ; 0x006F4688: E8 B3 02 00 00  CALL 0x006f4940
        ; 0x006F468D: A1 98 97 85 00  MOV EAX,[0x00859798]
        ; 0x006F4692: 85 C0  TEST EAX,EAX
        ; 0x006F4694: 75 6D  JNZ 0x006f4703
        ; ================================================================
        mov     ebx, dword ptr [ebx - 5]     ; ebx = large_alloc_header
        mov     esi, dword ptr [ebx]         ; esi = header->size
        xor     edx, edx
        mov     dl, byte ptr [ebx + 12]      ; dl = header->tag
        push    0
        mov     ecx, esi
        neg     ecx                          ; ecx = -size
        push    ecx
        EMIT_MOV_EAX_PTR_EDX4_ADDR(0x00848e90) ; eax = g_heap_table[tag]
        push    eax
        call    FUN_006f4940                 ; heap_table decrement
        EMIT_MOV_EAX_MEM(0x00859798)         ; mov eax, [g_no_free]
        test    eax, eax
        jnz     l_epilogue

        ; ================================================================
        ; Unlink from large allocation list
        ; 0x006F4696: 8B 4B 04  MOV ECX,[EBX+4]   ; header->prev
        ; 0x006F4699: 85 C9  TEST ECX,ECX
        ; 0x006F469B: 8B 43 08  MOV EAX,[EBX+8]   ; header->next
        ; 0x006F469E: 74 10  JZ 0x006f46b0 (large_no_prev)
        ; 0x006F46A0: 85 C0  TEST EAX,EAX
        ; 0x006F46A2: 8B 11  MOV EDX,[ECX]        ; prev->next_ptr
        ; 0x006F46A4: 89 42 08  MOV [EDX+8],EAX   ; prev->next_ptr->next = next
        ; 0x006F46A7: 74 19  JZ 0x006f46c2
        ; 0x006F46A9: 8B 00  MOV EAX,[EAX]        ; next->next_ptr
        ; 0x006F46AB: 89 48 04  MOV [EAX+4],ECX   ; next->next_ptr->prev = prev
        ; 0x006F46AE: EB 12  JMP 0x006f46c2
        ; ================================================================
        mov     ecx, dword ptr [ebx + 4]     ; ecx = header->prev
        test    ecx, ecx
        mov     eax, dword ptr [ebx + 8]     ; eax = header->next
        jz      l_large_no_prev
        ; Has prev
        test    eax, eax
        mov     edx, dword ptr [ecx]         ; edx = prev->next_ptr
        mov     dword ptr [edx + 8], eax     ; prev->next_ptr->next = next
        jz      l_large_unlinked
        mov     eax, dword ptr [eax]         ; eax = next->next_ptr
        mov     dword ptr [eax + 4], ecx     ; next->next_ptr->prev = prev
        jmp     l_large_unlinked

        ; ================================================================
        ; Large alloc: no prev (head)
        ; 0x006F46B0: 85 C0  TEST EAX,EAX
        ; 0x006F46B2: A3 2C 93 84 00  MOV [0x0084932c],EAX
        ; 0x006F46B7: 74 09  JZ 0x006f46c2
        ; 0x006F46B9: 8B 08  MOV ECX,[EAX]        ; next->next_ptr
        ; 0x006F46BB: C7 41 04 00 00 00 00  MOV [ECX+4],0
        ; ================================================================
    l_large_no_prev:
        test    eax, eax
        EMIT_MOV_MEM_EAX(0x0084932c)         ; mov [g_large_alloc_head], eax
        jz      l_large_unlinked
        mov     ecx, dword ptr [eax]         ; ecx = next->next_ptr
        mov     dword ptr [ecx + 4], 0       ; next->next_ptr->prev = NULL

        ; ================================================================
        ; Update large alloc stats and free header
        ; 0x006F46C2: 8B 3D E0 92 84 00  MOV EDI,[0x008492e0]
        ; 0x006F46C8: 8B 15 E4 92 84 00  MOV EDX,[0x008492e4]
        ; 0x006F46CE: 2B FE  SUB EDI,ESI          ; total -= size
        ; 0x006F46D0: 4A  DEC EDX                  ; count--
        ; 0x006F46D1: 53  PUSH EBX
        ; 0x006F46D2: 89 3D E0 92 84 00  MOV [0x008492e0],EDI
        ; 0x006F46D8: 89 15 E4 92 84 00  MOV [0x008492e4],EDX
        ; 0x006F46DE: FF 15 D0 B2 76 00  CALL [free]
        ; 0x006F46E4: 83 C4 04  ADD ESP,0x4
        ; 0x006F46E7: 5F  POP EDI
        ; 0x006F46E8: 5E  POP ESI
        ; 0x006F46E9: 5B  POP EBX
        ; 0x006F46EA: 8B E5  MOV ESP,EBP
        ; 0x006F46EC: 5D  POP EBP
        ; 0x006F46ED: C2 04 00  RET 0x4
        ; ================================================================
    l_large_unlinked:
        EMIT_MOV_EDI_MEM(0x008492e0)         ; mov edi, [g_large_alloc_total]
        EMIT_MOV_EDX_MEM(0x008492e4)         ; mov edx, [g_large_alloc_count]
        sub     edi, esi                     ; total -= size
        dec     edx                          ; count--
        push    ebx
        EMIT_MOV_MEM_EDI(0x008492e0)         ; mov [g_large_alloc_total], edi
        EMIT_MOV_MEM_EDX(0x008492e4)         ; mov [g_large_alloc_count], edx
        EMIT_CALL_IAT(0x0076b2d0)            ; call [free]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4

        ; ================================================================
        ; Invalid tag
        ; 0x006F46F0: 53  PUSH EBX
        ; 0x006F46F1: 68 74 F8 79 00  PUSH 0x79f874
        ; 0x006F46F6: E8 95 64 00 00  CALL 0x006fab90
        ; 0x006F46FB: 83 C4 08  ADD ESP,0x8
        ; 0x006F46FE: 85 C0  TEST EAX,EAX
        ; 0x006F4700: 74 01  JZ 0x006f4703
        ; 0x006F4702: CC  INT3
        ; ================================================================
    l_tag_invalid:
        push    ebx
        push    0x79f874                     ; "Attempted to free invalid memory..."
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        jz      l_epilogue
        int     3

        ; ================================================================
        ; Epilogue
        ; 0x006F4703: 5F  POP EDI
        ; 0x006F4704: 5E  POP ESI
        ; 0x006F4705: 5B  POP EBX
        ; 0x006F4706: 8B E5  MOV ESP,EBP
        ; 0x006F4708: 5D  POP EBP
        ; 0x006F4709: C2 04 00  RET 0x4
        ; ================================================================
    l_epilogue:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
