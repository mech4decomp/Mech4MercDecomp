/*
 * FUN_00699AA0 (210 B) — __cdecl (RET). Interpolates between two 4-float
 * vectors based on a float param. Uses FPU compares (fcomp/fnstsw/test ah)
 * and calls FUN_0041bd00 for the interpolation.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d59c;   /* 0x0076d59c */

extern void __cdecl FUN_0041bd00(void);

__declspec(naked) void FUN_00699aa0(void)
{
    __asm {
        fld     dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        fcomp   dword ptr [edx]
        sub     esp, 0x10
        push    esi
        fnstsw  ax
        test    ah, 0x41
        jnz     l_bb
        mov     ecx, dword ptr [esp + 0x20]
        jmp     l_08
    l_bb:
        fld     dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x24]
        fcomp   dword ptr [ecx]
        fnstsw  ax
        test    ah, 0x40
        jz      l_f1
        mov     edx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [edx]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, eax
        mov     dword ptr [ecx], esi
        mov     esi, dword ptr [edx + 0x4]
        mov     dword ptr [ecx + 0x4], esi
        mov     esi, dword ptr [edx + 0x8]
        mov     edx, dword ptr [edx + 0xc]
        mov     dword ptr [ecx + 0x8], esi
        mov     dword ptr [ecx + 0xc], edx
        pop     esi
        add     esp, 0x10
        ret
    l_f1:
        fld     dword ptr [edx]
        fsub    dword ptr [ecx]
        fabs
        fcomp   dword ptr [g_76d59c]
        fnstsw  ax
        test    ah, 0x41
        jz      l_29
        mov     ecx, dword ptr [esp + 0x1c]
    l_08:
        mov     esi, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, eax
        mov     dword ptr [edx], esi
        mov     esi, dword ptr [ecx + 0x4]
        mov     dword ptr [edx + 0x4], esi
        mov     esi, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [edx + 0x8], esi
        mov     dword ptr [edx + 0xc], ecx
        pop     esi
        add     esp, 0x10
        ret
    l_29:
        fld     dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x1c]
        fsub    dword ptr [ecx]
        push    ecx
        fld     dword ptr [edx]
        mov     edx, dword ptr [esp + 0x24]
        fsub    dword ptr [ecx]
        lea     ecx, [esp + 0x8]
        fdivp   st(1), st(0)
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    FUN_0041bd00
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x4]
        mov     ecx, eax
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [ecx + 0x4], edx
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [ecx + 0x8], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0xc], edx
        pop     esi
        add     esp, 0x10
        ret
    }
}
