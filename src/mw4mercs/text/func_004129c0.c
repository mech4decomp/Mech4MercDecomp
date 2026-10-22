/*
 * FUN_004129c0 (56 B) — __thiscall refcounted-string basename helper.
 * If the refcount byte at (*this)[-1] > 1, calls FUN_00412780(*this). Then
 * _mbsrchr(*this, '\\') and memmoves the basename (after the last '\') to
 * the front of the string. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b2a0;             /* 0x0076B2A0 - _mbsrchr IAT */
extern void __cdecl FUN_00412780(void *ptr);

__declspec(naked) void FUN_004129c0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi]
        cmp     byte ptr [eax - 1], 1
        jbe     L1
        push    eax
        mov     ecx, edi
        call    FUN_00412780
    L1:
        mov     esi, dword ptr [edi]
        push    0x5c
        push    esi
        call    dword ptr [g_0076b2a0]
        add     esp, 8
        test    eax, eax
        jz      L2
        mov     edx, esi
    L3:
        mov     cl, byte ptr [eax + 1]
        inc     eax
        mov     byte ptr [edx], cl
        inc     edx
        test    cl, cl
        jnz     L3
    L2:
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    }
}
