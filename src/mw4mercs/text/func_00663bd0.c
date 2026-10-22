/*
 * FUN_00663bd0 (370 B) — ABL candidate setup (EBP frame): calls
 * FUN_00662f10 test, builds candidate data via 0x6a6600/0x6a6cb0/
 * 0x6a6aa0, does FPU distance math (0x40cb00), then finalizes via
 * 0x6a7510/0x6a62fb0/0x665aa0/0x5cb200.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00662f10(void);
extern void __cdecl FUN_006a6600(void);
extern void __cdecl FUN_006a6cb0(void);
extern void __cdecl FUN_006a6aa0(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_006a7510(void);
extern void __cdecl FUN_00662fb0(void);
extern void __cdecl FUN_00665aa0(void);
extern void __cdecl FUN_005cb200(void);

extern int g_00795440;
extern int g_00795444;
extern float g_0076c5b0;

__declspec(naked) void FUN_00663bd0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x94
        mov     eax, dword ptr [g_00795440]
        push    esi
        mov     esi, dword ptr [ebp + 8]
        push    eax
        push    esi
        call    FUN_00662f10
        add     esp, 8
        test    al, al
        jz      Ld3d
        push    0
        push    0x43fa0000
        push    0
        push    0
        lea     ecx, [ebp - 0x74]
        call    FUN_006a6600
        push    0
        push    1
        push    0
        lea     ecx, [ebp - 0x24]
        call    FUN_006a6cb0
        push    1
        push    0x43fa0000
        push    0
        push    3
        lea     ecx, [ebp - 0x60]
        call    FUN_006a6600
        lea     ecx, [ebp - 0x60]
        push    ecx
        push    0x3e800000
        lea     edx, [ebp - 0x24]
        push    edx
        push    0x3e800000
        lea     eax, [ebp - 0x74]
        push    eax
        push    0x3f000000
        lea     ecx, [ebp - 0x4c]
        call    FUN_006a6aa0
        fld     dword ptr [ebp + 0x10]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF   /* __emit: FNSTSW AX no-WAIT (DF E0); MSVC6 adds 9B WAIT */
        __emit 0xE0
        __emit 0xF6   /* __emit: TEST AH,0x40 (F6 C4 40); MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      Le9
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 8], edx
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [ebp - 4], eax
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        fsub    dword ptr [ebp - 0xc]
        mov     edx, dword ptr [eax + 0xac]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x2c], ecx
        fstp    dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x28], edx
        fld     dword ptr [ebp - 0x2c]
        lea     ecx, [ebp - 0x18]
        fsub    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x28]
        fsub    dword ptr [ebp - 4]
        fstp    dword ptr [ebp - 0x10]
        call    FUN_0040cb00
        fstp    dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x10]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 8], eax
        fld     dword ptr [ebp + 8]
        fstp    dword ptr [ebp + 0x10]
Le9:
        mov     eax, dword ptr [ebp + 0x10]
        push    0x3f4ccccd
        push    0x40e00000
        push    eax
        push    1
        lea     ecx, [ebp - 0x94]
        call    FUN_006a7510
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [g_00795444]
        push    ecx
        push    edx
        lea     eax, [ebp - 0x4c]
        push    eax
        lea     ecx, [ebp - 0x94]
        push    ecx
        push    esi
        call    FUN_00662fb0
        add     esp, 0x14
        lea     ecx, [ebp - 0x3c]
        mov     dword ptr [ebp - 0x94], 0x795458
        call    FUN_00665aa0
        lea     ecx, [ebp - 0x48]
        call    FUN_005cb200
Ld3d:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
