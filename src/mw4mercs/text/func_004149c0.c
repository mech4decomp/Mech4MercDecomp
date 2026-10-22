/*
 * FUN_004149c0 (85 B) — archive writer finalize (variant).
 *
 * Rebuilds the stream buffer at param_1+0x10: frees any existing buffer,
 * opens (FUN_006fc400) with the size at param_1+0xc, writes the header
 * (FUN_006fc640) and the two args (FUN_006fc620), frees the buffer, then
 * re-opens with zero flag.
 *
 * Calling convention: __thiscall (ecx = param_1), 2 stack params, ret 8.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   FUN_006fc580 — free
 *   FUN_006fc400 — stream open
 *   FUN_006fc640 — stream write header
 *   FUN_006fc620 — stream write
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

extern void __cdecl FUN_006fc580(void);    /* FUN_006fc580 */
extern void __cdecl FUN_006fc400(void);    /* FUN_006fc400 */
extern void __cdecl FUN_006fc640(void);    /* FUN_006fc640 */
extern void __cdecl FUN_006fc620(void);    /* FUN_006fc620 */

__declspec(naked) void func_004149c0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     ebx, ecx            ; ebx = param_1 (this)
        mov     eax, [ebx+0x10]
        test    eax, eax
        lea     esi, [ebx+0x10]     ; esi = &param_1[0x10]
        push    edi
        jz      skip_free
        push    eax
        call    FUN_006fc580        ; free(param_1[0x10])
    skip_free:
        mov     eax, [ebx+0xc]
        push    1
        push    eax
        push    esi
        call    FUN_006fc400        ; open(&param_1[0x10], param_1[0xc], 1)
        mov     edi, [esi]          ; edi = param_1[0x10]
        push    0
        push    0
        push    edi
        call    FUN_006fc640        ; write_header(edi, 0, 0)
        mov     ecx, [esp+0x14]     ; param_2
        mov     edx, [esp+0x10]     ; param_1
        push    ecx
        push    edx
        push    edi
        call    FUN_006fc620        ; write(edi, param_1, param_2)
        push    edi
        call    FUN_006fc580        ; free(edi)
        mov     eax, [ebx+0xc]
        push    0
        push    eax
        push    esi
        call    FUN_006fc400        ; open(&param_1[0x10], param_1[0xc], 0)
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }
}
