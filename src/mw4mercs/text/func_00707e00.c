/*
 * FUN_00707e00 (97 B) — gosScript timing release: decrements the refcount
 * g_00858b60; when it hits zero, accumulates elapsed RDTSC time (scaled by
 * g_007a1420 via _ftol) into g_00858b28/b2c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_00858b60;
extern int   g_00858b58;
extern float g_007a1420;
extern int   g_00858b24;
extern int   g_00858b20;
extern int   g_00858b28;
extern int   g_00858b2c;
extern void __cdecl FUN_00707f50(void);
extern void __cdecl FUN_0075db4a(void);   /* _ftol */

__declspec(naked) void FUN_00707e00(void)
{
    __asm {
        dec     dword ptr [g_00858b60]
        jnz     L_e60
        push    esi
        push    edi
        call    FUN_00707f50
        fild    qword ptr [g_00858b58]
        mov     esi, eax
        mov     edi, edx
        fmul    dword ptr [g_007a1420]
        call    FUN_0075db4a
        mov     ecx, dword ptr [g_00858b24]
        sub     esi, eax
        sbb     edi, edx
        sub     esi, dword ptr [g_00858b20]
        sbb     edi, ecx
        test    edi, edi
        jg      L_e44
        jl      L_e40
        test    esi, esi
        jnc     L_e44
L_e40:
        xor     esi, esi
        xor     edi, edi
L_e44:
        mov     ecx, dword ptr [g_00858b28]
        mov     eax, dword ptr [g_00858b2c]
        add     ecx, esi
        adc     eax, edi
        pop     edi
        mov     dword ptr [g_00858b28], ecx
        mov     dword ptr [g_00858b2c], eax
        pop     esi
L_e60:
        ret
    }
}
