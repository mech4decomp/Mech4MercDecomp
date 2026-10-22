/*
 * FUN_004174f0 (41 B) - __fastcall container element-list release.
 * Walks the chain from this[0x8], calling each element's vtable[1](1),
 * then calls FUN_00415bc0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415bc0(void);

__declspec(naked) void FUN_004174f0(void)
{
    __asm {
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [edi + 0x8]
        test    ecx, ecx
        jz      L_end
        push    esi
    L_loop:
        test    ecx, ecx
        mov     esi, dword ptr [ecx + 0x10]
        jz      L_skip
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax + 0x4]
    L_skip:
        test    esi, esi
        mov     ecx, esi
        jnz     L_loop
        pop     esi
    L_end:
        mov     ecx, edi
        call    FUN_00415bc0
        pop     edi
        ret
    }
}
