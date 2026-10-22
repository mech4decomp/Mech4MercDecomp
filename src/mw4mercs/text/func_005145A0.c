/*
 * FUN_005145A0 (196 B) — sums a table of values and adjusts a global size
 * threshold, using FPU comparisons.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern int g_7b4390;
extern float g_76d070;
extern double g_7dd258;
extern double g_76de20;
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005145A0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx+0x14]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx+0x1814]
        push    esi
        xor     esi, esi
        add     eax, 0xbfc
        mov     ecx, 0xe
    L_45ca:
        add     esi, dword ptr [eax]
        add     eax, 0xc0c
        dec     ecx
        jne     L_45ca
        cmp     esi, dword ptr [g_7b4390]
        mov     dword ptr [esp+4], esi
        jle     L_45fe
        mov     eax, 0x400
        cmp     esi, eax
        mov     dword ptr [g_7b4390], eax
        jle     L_465f
    L_45ee:
        add     eax, eax
        cmp     esi, eax
        jg      L_45ee
        mov     dword ptr [g_7b4390], eax
        pop     esi
        pop     ecx
        ret     0xc
    L_45fe:
        fild    dword ptr [esp+4]
        push    0
        fild    dword ptr [g_7b4390]
        fmul    dword ptr [g_76d070]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jne     L_464f
        call    FUN_00707e70
        fsub    qword ptr [g_7dd258]
        fcomp   qword ptr [g_76de20]
        fnstsw  ax
        test    ah, 0x41
        jne     L_465a
        mov     eax, 0x400
        cmp     esi, eax
        mov     dword ptr [g_7b4390], eax
        jle     L_465f
    L_463f:
        add     eax, eax
        cmp     esi, eax
        jg      L_463f
        mov     dword ptr [g_7b4390], eax
        pop     esi
        pop     ecx
        ret     0xc
    L_464f:
        call    FUN_00707e70
        fstp    qword ptr [g_7dd258]
    L_465a:
        mov     eax, dword ptr [g_7b4390]
    L_465f:
        pop     esi
        pop     ecx
        ret     0xc
    }
}
