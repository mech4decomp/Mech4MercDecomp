/*
 * FUN_00414a70 (171 B) — archive entry hash computation / stream digest.
 *
 * Computes a hash over the entry data: if param_1[5] is zero, allocates a
 * buffer (FUN_004084d0), writes the header (FUN_006fc640) and data
 * (FUN_006fc600); otherwise uses the pre-existing buffer. Then builds a
 * stream digest via FUN_0070e390/e3c0/e460 and returns local_68[0]^local_60.
 *
 * Calling convention: __fastcall (ecx = param_1), 1 stack param, ret 4.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   FUN_004084d0 — alloc
 *   FUN_006fc640 — stream write header
 *   FUN_006fc600 — stream write
 *   FUN_0070e390 — stream init
 *   FUN_0070e3c0 — stream write
 *   FUN_0070e460 — stream digest
 *   FUN_004084e0 — free
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

extern void __cdecl FUN_004084d0(void);    /* FUN_004084d0 */
extern void __cdecl FUN_006fc640(void);    /* FUN_006fc640 */
extern void __cdecl FUN_006fc600(void);    /* FUN_006fc600 */
extern void __cdecl FUN_0070e390(void);    /* FUN_0070e390 */
extern void __cdecl FUN_0070e3c0(void);    /* FUN_0070e3c0 */
extern void __cdecl FUN_0070e460(void);    /* FUN_0070e460 */
extern void __cdecl FUN_004084e0(void);    /* FUN_004084e0 */

__declspec(naked) void func_00414a70(void)
{
    __asm {
        sub     esp, 0x68
        push    ebx
        mov     ebx, ecx            ; ebx = param_1
        mov     ecx, [ebx+0x14]     ; ecx = param_1[5]
        push    ebp
        mov     ebp, [ebx]          ; ebp = *param_1
        mov     eax, [ebp+0x10]     ; eax = (*param_1)[0x10]
        push    esi
        mov     esi, [ebx+0x18]     ; esi = param_1[6]
        push    edi
        sub     esi, eax            ; esi = param_1[6] - (*param_1)[0x10]
        xor     edi, edi
        test    ecx, ecx
        jz      alloc_path
        lea     ebx, [ecx+eax*1]    ; ebx = param_1[5] + (*param_1)[0x10]
        jmp     common
    alloc_path:
        push    esi
        call    FUN_004084d0        ; alloc(esi)
        mov     ebx, [ebx+0x10]     ; ebx = param_1[4]
        add     esp, 4
        mov     edi, eax            ; edi = alloc result
        mov     eax, [ebp+0x10]
        push    eax
        push    0
        push    ebx
        call    FUN_006fc640        ; write_header(ebx, 0, (*param_1)[0x10])
        push    esi
        push    edi
        push    ebx
        call    FUN_006fc600        ; write(ebx, edi, esi)
        mov     ebx, edi
    common:
        lea     ecx, [esp+0x20]
        push    ecx
        call    FUN_0070e390        ; stream_init(&local_58)
        push    4
        lea     edx, [esp+0x80]
        push    edx
        lea     eax, [esp+0x28]
        push    eax
        call    FUN_0070e3c0        ; stream_write(&local_58, &stack, 4)
        push    esi
        push    ebx
        lea     ecx, [esp+0x28]
        push    ecx
        call    FUN_0070e3c0        ; stream_write(&local_58, ebx, esi)
        lea     edx, [esp+0x20]
        push    edx
        lea     eax, [esp+0x14]
        push    eax
        call    FUN_0070e460        ; stream_digest(&local_68, &local_58)
        mov     al, [esp+0x10]
        xor     al, [esp+0x18]
        and     eax, 0xff
        test    edi, edi
        cdq
        mov     esi, eax
        mov     ebx, edx
        jz      done
        push    edi
        call    FUN_004084e0        ; free(edi)
        add     esp, 4
    done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        mov     edx, ebx
        pop     ebx
        add     esp, 0x68
        ret     4
    }
}
