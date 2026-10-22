/*
 * FUN_100387e1 (84 B) - __stdcall.
 * Walks a linked list of 0x24-byte records from 0x10076aa0 to 0x10076ba0.
 * For each record, iterates 0x480-byte blocks; if a block's [ebx-4] is
 * nonzero, calls IAT(0x100491a4, ebx). Then calls FUN_1003c2da([esi]) and
 * clears [esi].
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003c2dc(void);   /* rel32 call */
extern int *g_100491a4;                   /* IAT call dword ptr */

__declspec(naked) void __stdcall FUN_100387e1(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     esi, 0x10076aa0
    L_387e9:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_38826
        mov     edi, eax
        add     eax, 0x480
        cmp     edi, eax
        jnc     L_3881b
        lea     ebx, [edi + 0xc]
    L_387fd:
        cmp     dword ptr [ebx - 0x4], 0
        __emit 0x74   /* __emit: jz L_3880a; MSVC6 miscomputes forward rel8 (74 09) across the reloc'd call; ref is 74 07 */
        __emit 0x07
        push    ebx
        call    dword ptr [g_100491a4]
        mov     eax, dword ptr [esi]
    L_3880a:
        add     edi, 0x24
        add     eax, 0x480
        add     ebx, 0x24
        cmp     edi, eax
        jc      L_387fd
    L_3881b:
        push    dword ptr [esi]
        call    FUN_1003c2dc
        and     dword ptr [esi], 0
        pop     ecx
    L_38826:
        add     esi, 0x4
        cmp     esi, 0x10076ba0
        jl      L_387e9
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
