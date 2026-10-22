/*
 * FUN_00664F30 (348 B) — __cdecl, 2 params (int*, float).
 *   Computes a distance/angle from two object transforms and drives
 *   several animation/math helpers. Heavy FPU usage.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_795440;
extern int g_795444;
extern float g_76d070;
extern char g_795458;

extern char __cdecl FUN_00662f10(void);
extern void __cdecl FUN_006a6cb0(void);
extern void __cdecl FUN_006a6600(void);
extern void __cdecl FUN_006a6940(void);
extern void __cdecl FUN_006a7510(void);
extern void __cdecl FUN_00662fb0(void);
extern void __cdecl FUN_00665aa0(void);
extern void __cdecl FUN_005cb200(void);

__declspec(naked) void __cdecl FUN_00664F30(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x78
        mov     eax, dword ptr [g_795440]
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    eax
        push    esi
        call    FUN_00662f10
        add     esp, 0x8
        test    al, al
        jz      L_665087
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x3c]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0x10], ecx
        mov     dword ptr [ebp - 0xc], edx
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [ebp - 0x8], eax
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        fsub    dword ptr [ebp - 0x10]
        mov     edx, dword ptr [eax + 0xac]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x18], ecx
        fld     dword ptr [ebp - 0x18]
        fsub    dword ptr [ebp - 0xc]
        mov     dword ptr [ebp - 0x14], edx
        fld     dword ptr [ebp - 0x14]
        fsub    dword ptr [ebp - 0x8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0x8]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0x8]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x4], eax
        fld     dword ptr [ebp - 0x4]
        push    0x1
        push    0x1
        fstp    dword ptr [ebp + 0x8]
        push    0x1
        lea     ecx, [ebp - 0x28]
        call    FUN_006a6cb0
        fld     dword ptr [ebp + 0x8]
        push    0x1
        fadd    st(0), st(0)
        push    ecx
        lea     ecx, [ebp - 0x3c]
        fstp    dword ptr [esp]
        push    0x41200000
        push    0x3
        call    FUN_006a6600
        lea     eax, [ebp - 0x3c]
        push    eax
        push    0x3e4ccccd
        lea     ecx, [ebp - 0x28]
        push    ecx
        push    0x3f4ccccd
        lea     ecx, [ebp - 0x58]
        call    FUN_006a6940
        fld     dword ptr [ebp + 0x8]
        fmul    dword ptr [g_76d070]
        fst     dword ptr [ebp + 0x8]
        fcomp   dword ptr [ebp + 0xc]
        __emit  0xDF   /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B WAIT) */
        __emit  0xE0
        __emit  0xF6   /* __emit: test ah,imm8 rejected by MSVC6 inline asm */
        __emit  0xC4
        __emit  0x01
        jz      L_66503e
        mov     edx, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp + 0x8], edx
L_66503e:
        mov     eax, dword ptr [ebp + 0x8]
        push    0x3f4ccccd
        push    0x41400000
        push    eax
        push    0x1
        lea     ecx, [ebp - 0x78]
        call    FUN_006a7510
        mov     ecx, dword ptr [g_795444]
        push    0x2
        push    ecx
        lea     edx, [ebp - 0x58]
        push    edx
        lea     eax, [ebp - 0x78]
        push    eax
        push    esi
        call    FUN_00662fb0
        add     esp, 0x14
        lea     ecx, [ebp - 0x48]
        mov     dword ptr [ebp - 0x78], offset g_795458
        call    FUN_00665aa0
        lea     ecx, [ebp - 0x54]
        call    FUN_005cb200
L_665087:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
