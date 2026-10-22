/*
 * FUN_00412980 (55 B) — __thiscall refcounted-string path-dir helper.
 * If the refcount byte at (*this)[-1] > 1, calls FUN_00412780(*this). Then
 * _mbsrchr(*this, '\\'); if found, truncates after it, else empties the
 * string. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b2a0;             /* 0x0076B2A0 - _mbsrchr IAT */
extern void __cdecl FUN_00412780(void *ptr);

__declspec(naked) void FUN_00412980(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        cmp     byte ptr [eax - 1], 1
        push    edi
        jbe     L1
        push    eax
        mov     ecx, esi
        call    FUN_00412780
    L1:
        mov     edi, dword ptr [esi]
        push    0x5c
        push    edi
        call    dword ptr [g_0076b2a0]
        add     esp, 8
        test    eax, eax
        jz      L2
        mov     byte ptr [eax + 1], 0
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    L2:
        mov     byte ptr [edi], 0
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    }
}
