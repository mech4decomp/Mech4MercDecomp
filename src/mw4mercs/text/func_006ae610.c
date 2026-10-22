/*
 * FUN_006ae610 (611 B) — Computes interpolated float coordinates via
 * FPU (FNSTSW/TEST AH branch), builds vectors through FUN_00587830 /
 * FUN_0040c5d0 / FUN_0040c410, and dispatches through FUN_006ae5e0 /
 * FUN_006b0310.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f2464;    /* 0x007f2464 */
extern float g_76d070;  /* 0x0076d070 */
extern float g_770168;  /* 0x00770168 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_006b0310(void);
extern void __cdecl FUN_006ae5e0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __stdcall FUN_006ae610(void)
{
    __asm {
        mov     eax, dword ptr [g_7f2464]
        sub     esp, 0x3c
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     ebx, ecx
        call    FUN_006f4950
        mov     esi, dword ptr [esp + 0x58]
        mov     al, byte ptr [esi + 0x14]
        test    al, al
        mov     ebp, dword ptr [esp + 0x54]
        jz      L_e718
        fld     dword ptr [ebp + 0x8]
        fcomp   dword ptr [esi + 0xc]
        fld     dword ptr [esi + 0x4]
        fsub    dword ptr [esi]
        fnstsw  ax
        fmul    dword ptr [g_76d070]
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        fadd    dword ptr [esi]
        fstp    dword ptr [esp + 0x54]
        jnz     L_e6b6
        fld     dword ptr [esi + 0xc]
        mov     edi, dword ptr [esp + 0x54]
        fadd    dword ptr [g_770168]
        push    ecx
        lea     ecx, [esp + 0x38]
        fstp    dword ptr [esp]
        push    0x0
        push    edi
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_0040c410
        fld     dword ptr [esi + 0x8]
        fsub    dword ptr [g_770168]
        push    ecx
        lea     ecx, [esp + 0x38]
        fstp    dword ptr [esp]
        push    0x0
        push    edi
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0040c5d0
        lea     edx, [esp + 0x28]
        jmp     L_e7ea
L_e6b6:
        fld     dword ptr [esi + 0x8]
        mov     edi, dword ptr [esp + 0x54]
        fsub    dword ptr [g_770168]
        push    ecx
        lea     ecx, [esp + 0x38]
        fstp    dword ptr [esp]
        push    0x0
        push    edi
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0040c5d0
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_0040c410
        fld     dword ptr [esi + 0xc]
        fadd    dword ptr [g_770168]
        push    ecx
        lea     ecx, [esp + 0x38]
        fstp    dword ptr [esp]
        push    0x0
        push    edi
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x28]
        push    ecx
        jmp     L_e7eb
L_e718:
        fld     dword ptr [ebp]
        fcomp   dword ptr [esi + 0x4]
        fld     dword ptr [esi + 0xc]
        fsub    dword ptr [esi + 0x8]
        fnstsw  ax
        fmul    dword ptr [g_76d070]
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        fadd    dword ptr [esi + 0x8]
        fstp    dword ptr [esp + 0x54]
        mov     edi, dword ptr [esp + 0x54]
        push    edi
        push    0x0
        jnz     L_e796
        fld     dword ptr [esi + 0x4]
        push    ecx
        fadd    dword ptr [g_770168]
        lea     ecx, [esp + 0x40]
        fstp    dword ptr [esp]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0040c5d0
        lea     edx, [esp + 0x28]
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_0040c410
        fld     dword ptr [esi]
        fsub    dword ptr [g_770168]
        push    edi
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x40]
        fstp    dword ptr [esp]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0040c5d0
        lea     eax, [esp + 0x28]
        push    eax
        jmp     L_e7eb
L_e796:
        fld     dword ptr [esi]
        push    ecx
        fsub    dword ptr [g_770168]
        lea     ecx, [esp + 0x40]
        fstp    dword ptr [esp]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_0040c410
        fld     dword ptr [esi + 0x4]
        fadd    dword ptr [g_770168]
        push    edi
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x40]
        fstp    dword ptr [esp]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0040c5d0
        lea     edx, [esp + 0x28]
L_e7ea:
        push    edx
L_e7eb:
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        mov     al, byte ptr [esp + 0x5c]
        test    al, al
        mov     esi, dword ptr [esp + 0x50]
        jnz     L_e835
        mov     eax, dword ptr [esi]
        mov     edi, dword ptr [eax]
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_0040ccd0
        mov     edx, dword ptr [esi + 0x8]
        lea     eax, [esp + 0x34]
        add     edx, 0x80
        push    eax
        lea     ecx, [ebx + 0x50]
        mov     dword ptr [esp + 0x44], edx
        mov     byte ptr [esp + 0x48], 0x0
        mov     dword ptr [esp + 0x4c], edi
        call    FUN_006b0310
L_e835:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx]
        push    edx
        push    0x1
        push    0x80
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x44]
        call    FUN_006ae5e0
        push    eax
        lea     ecx, [ebx + 0x50]
        call    FUN_006b0310
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, ebp
        call    FUN_0040ccd0
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0x10
    }
}
