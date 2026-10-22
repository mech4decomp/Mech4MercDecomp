/*
 * FUN_00699b80 (294 B) — __cdecl (6 stack args), RET.
 *
 * Color/vector interpolation helper. Depending on param_6 relative to
 * *param_4 / *param_5, copies param_2 or param_3 into param_1, or
 * lerps between them via FUN_0041bb80.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d59c;               /* epsilon constant */
extern void __cdecl FUN_0041b680(void);
extern void __cdecl FUN_0041bb80(void);

__declspec(naked) void __stdcall FUN_00699b80(void *param_1, void *param_2, void *param_3,
                                              float *param_4, float *param_5, float param_6)
{
    __asm {
        fld     dword ptr [esp + 0x18]
        sub     esp, 0x30
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x4c]
        fcomp   dword ptr [edi]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_le
        mov     ecx, dword ptr [esp + 0x44]
        jmp     L_copy
L_le:
        fld     dword ptr [esp + 0x50]
        mov     esi, dword ptr [esp + 0x48]
        fcomp   dword ptr [esi]
        fnstsw  ax
        test    ah, 0x40
        jz      L_neq
        mov     edx, dword ptr [esp + 0x40]
        mov     esi, dword ptr [edx]
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, eax
        mov     dword ptr [ecx], esi
        mov     esi, dword ptr [edx + 0x4]
        mov     dword ptr [ecx + 0x4], esi
        mov     esi, dword ptr [edx + 0x8]
        mov     edx, dword ptr [edx + 0xc]
        mov     dword ptr [ecx + 0x8], esi
        pop     edi
        mov     dword ptr [ecx + 0xc], edx
        pop     esi
        add     esp, 0x30
        ret
L_neq:
        fld     dword ptr [edi]
        fsub    dword ptr [esi]
        fabs
        fcomp   dword ptr [g_76d59c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_interp
        mov     ecx, dword ptr [esp + 0x40]
L_copy:
        mov     esi, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x3c]
        mov     edx, eax
        mov     dword ptr [edx], esi
        mov     esi, dword ptr [ecx + 0x4]
        mov     dword ptr [edx + 0x4], esi
        mov     esi, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [edx + 0x8], esi
        pop     edi
        mov     dword ptr [edx + 0xc], ecx
        pop     esi
        add     esp, 0x30
        ret
L_interp:
        mov     edx, dword ptr [esp + 0x40]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [edx + 0x4]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [edx + 0x8]
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [edx + 0xc]
        mov     edx, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [edx]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [edx + 0x4]
        mov     dword ptr [esp + 0x8], eax
        mov     eax, dword ptr [edx + 0x8]
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, dword ptr [edx + 0xc]
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x10], eax
        call    FUN_0041b680
        lea     ecx, [esp + 0x8]
        call    FUN_0041b680
        fld     dword ptr [esp + 0x50]
        fsub    dword ptr [esi]
        push    ecx
        fld     dword ptr [edi]
        lea     edx, [esp + 0xc]
        fsub    dword ptr [esi]
        lea     eax, [esp + 0x1c]
        lea     ecx, [esp + 0x2c]
        fdivp   st(1), st(0)
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    FUN_0041bb80
        mov     eax, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [esp + 0x28]
        mov     ecx, eax
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [esp + 0x2c]
        mov     dword ptr [ecx + 0x4], edx
        mov     edx, dword ptr [esp + 0x30]
        mov     dword ptr [ecx + 0x8], edx
        mov     edx, dword ptr [esp + 0x34]
        pop     edi
        mov     dword ptr [ecx + 0xc], edx
        pop     esi
        add     esp, 0x30
        ret
    }
}
