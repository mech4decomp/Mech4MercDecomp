/*
 * FUN_00412950 (44 B) — __thiscall refcounted-string extension-strip helper.
 * If the refcount byte at (*this)[-1] > 1, calls FUN_00412780(*this). Then
 * strrchr(*this, '.') and truncates the string there (returns this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b2a8;             /* 0x0076B2A8 - strrchr IAT */
extern void __cdecl FUN_00412780(void *ptr);

__declspec(naked) void FUN_00412950(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        cmp     byte ptr [eax - 1], 1
        jbe     L1
        push    eax
        mov     ecx, esi
        call    FUN_00412780
    L1:
        mov     eax, dword ptr [esi]
        push    0x2e
        push    eax
        call    dword ptr [g_0076b2a8]
        add     esp, 8
        test    eax, eax
        jz      L2
        mov     byte ptr [eax], 0
    L2:
        mov     eax, esi
        pop     esi
        ret
    }
}
