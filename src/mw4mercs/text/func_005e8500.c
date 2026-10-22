// func_005e8500 - thiscall(2 args): complex update/transform logic with FPU + jump tables

#include "mw4/common.h"

extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_004f04a0(void);
extern void __cdecl FUN_005e89a0(void);
extern void __cdecl FUN_005e89c0(void);

__declspec(naked) void __stdcall func_005e8500(void)
{
    

extern int DAT_007dc6e0;
extern int DAT_007895d4;
extern int DAT_0076c5b0;
extern int DAT_0076d064;
extern int DAT_007895d0;
extern int DAT_007895c8;
extern int DAT_007895cc;
extern int DAT_0076d968;
extern int DAT_0077dfc0;
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x64
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0xd8]
        push    esi
        lea     esi, [eax + 0x80]
        mov     eax, dword ptr [esi + 0xc]
        push    edi
        mov     dword ptr [esp + 0x34], eax
        mov     ecx, dword ptr [esi + 0x1c]
        mov     dword ptr [esp + 0x38], ecx
        mov     edx, dword ptr [esi + 0x2c]
        push    0x2
        push    0x0
        mov     dword ptr [esp + 0x44], edx
        mov     ecx, 0xc
        lea     edi, [esp + 0x48]
        push    0x1
        rep movsd
        push    0x7b8d18
        lea     ecx, [esp + 0x50]
        mov     byte ptr [esp + 0x23], 0x0
        call    FUN_0041fde0
        mov eax, dword ptr [DAT_007dc6e0]
        mov     esi, dword ptr [eax + 0x4c]
        test    esi, esi
        jz      L_done
        lea     eax, [ebx + 0x494]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], eax
        call    FUN_004f04a0
        lea     edx, [esp + 0x34]
        push    edx
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, esi
        call    FUN_004f04a0
        fld     dword ptr [esp + 0x24]
        fcomp   dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x28]
        fnstsw ax
        fcomp   dword ptr [esp + 0x30]
        test    ah, 0x1
        fnstsw ax
        jz      L_cmp2
        test    ah, 0x1
        jz      L_cmp1b
        mov     ecx, 0x2
        jmp     L_seldone
    L_cmp1b:
        mov     ecx, 0x3
        jmp     L_seldone
    L_cmp2:
        test    ah, 0x1
        jz      L_cmp2b
        xor     ecx, ecx
        jmp     L_seldone
    L_cmp2b:
        mov     ecx, 0x1
    L_seldone:
        fld     dword ptr [ebx + 0x45c]
        mov     dword ptr [ebx + 0x460], ecx
        fcomp dword ptr [DAT_007895d4]
        fnstsw ax
        test    ah, 0x1
        jnz     L_skipinc
        mov     al, byte ptr [ebx + 0x4a4]
        test    al, al
        jnz     L_skipinc
        add     ecx, 0x4
        mov     byte ptr [esp + 0x13], 0x1
    L_skipinc:
        mov     dl, byte ptr [ebx + 0x4a4]
        fld dword ptr [DAT_0076c5b0]
        cmp     dl, 0x1
        mov     byte ptr [esp + 0x12], 0x0
        mov     dword ptr [esp + 0x14], 0x0
        jnz     L_switch2
        cmp     ecx, 0x3
        ja      L_switchdone
        jmp     dword ptr [ecx*4 + 0x5e8838]
    L_case0_1:
        fstp    st(0)
        mov     dword ptr [esp + 0x14], 0x0
        fld dword ptr [DAT_0076c5b0]
        jmp     L_switchdone
    L_case1_1:
        fstp    st(0)
        mov     dword ptr [esp + 0x14], 0x0
        fld dword ptr [DAT_0076d064]
        jmp     L_switchdone
    L_switch2:
        cmp     ecx, 0x7
        ja      L_switchdone
        jmp     dword ptr [ecx*4 + 0x5e8848]
    L_case0_2:
        fstp    st(0)
        mov     dword ptr [esp + 0x14], 0x41000000
        fld dword ptr [DAT_0076c5b0]
        jmp     L_switchdone
    L_case1_2:
        fstp    st(0)
        mov     dword ptr [esp + 0x14], 0x0
        fld dword ptr [DAT_0076c5b0]
        jmp     L_switch2b
    L_case2_2:
        fstp    st(0)
        mov     dword ptr [esp + 0x14], 0x41000000
        fld dword ptr [DAT_0076c5b0]
        jmp     L_switch2b
    L_case3_2:
        fstp    st(0)
        mov     dword ptr [esp + 0x14], 0x41000000
        fld dword ptr [DAT_0076d064]
        jmp     L_switchdone
    L_case4_2:
        fstp    st(0)
        mov     dword ptr [esp + 0x14], 0x0
        jmp     L_switch2c
    L_case5_2:
        fstp    st(0)
        mov     dword ptr [esp + 0x14], 0x41000000
    L_switch2c:
        fld dword ptr [DAT_0076d064]
    L_switch2b:
        mov     byte ptr [esp + 0x12], 0x1
    L_switchdone:
        fld     dword ptr [ebx + 0x45c]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw ax
        test    ah, 0x40
        jz      L_angle
        mov     ecx, dword ptr [ebx + 0x30]
        and     ecx, 0x7
        mov     dword ptr [ebx + 0x454], ecx
        jmp     L_afterangle
    L_angle:
        cmp     dl, 0x1
        fld     qword ptr [ebp + 0x8]
        fadd    qword ptr [ebx + 0x41c]
        fst     qword ptr [esp + 0x18]
        fstp    qword ptr [ebx + 0x41c]
        jnz     L_angle2
        fld dword ptr [DAT_007895d0]
        jmp     L_angle3
    L_angle2:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      L_angle2b
        fld dword ptr [DAT_007895c8]
        jmp     L_angle3
    L_angle2b:
        fld dword ptr [DAT_007895cc]
    L_angle3:
        fdivr qword ptr [DAT_0076d968]
        fld     qword ptr [esp + 0x18]
        fcomp   st(1)
        fnstsw ax
        test    ah, 0x1
        jnz     L_angle4
    L_angleloop:
        fld     qword ptr [ebx + 0x41c]
        mov     eax, dword ptr [ebx + 0x454]
        fsub    st, st(1)
        inc     eax
        mov     dword ptr [ebx + 0x454], eax
        fst     qword ptr [ebx + 0x41c]
        fcomp   st(1)
        fnstsw ax
        test    ah, 0x1
        jz      L_angleloop
    L_angle4:
        fstp    st(0)
    L_afterangle:
        cmp     dl, 0x1
        jnz     L_afterangle2
        mov     eax, dword ptr [ebx + 0x458]
        test    eax, eax
        jnz     L_afterangle2
        cmp     byte ptr [esp + 0x12], dl
        setnz   dl
        mov     byte ptr [esp + 0x12], dl
    L_afterangle2:
        mov     eax, dword ptr [ebx + 0x458]
        mov     edx, dword ptr [ebx + 0x454]
        shl     eax, 0x1
        mov     dword ptr [esp + 0x18], eax
        fild    dword ptr [esp + 0x18]
        lea     eax, [ebx + 0x464]
        mov     ecx, 0xc
        mov     esi, 0x7b8c98
        fadd    st, st(1)
        mov     edi, eax
        rep movsd
        fstp    dword ptr [esp + 0x18]
        fstp    st(0)
        mov     cl, byte ptr [esp + 0x12]
        and     edx, 0x7
        test    cl, cl
        mov     dword ptr [ebx + 0x454], edx
        jz      L_sign2
        mov     dword ptr [eax], 0xbf800000
        jmp     L_sign3
    L_sign2:
        mov     dword ptr [eax], 0x3f800000
    L_sign3:
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x478], 0x3f800000
        call    FUN_005e89a0
        fmul dword ptr [DAT_0077dfc0]
        fild    dword ptr [ebx + 0x454]
        mov     al, byte ptr [esp + 0x12]
        test    al, al
        fadd    dword ptr [esp + 0x14]
        fmulp   st(1), st
        fstp    dword ptr [ebx + 0x470]
        jz      L_skip2
        mov     ecx, ebx
        call    FUN_005e89a0
        fmul dword ptr [DAT_0077dfc0]
        fadd    dword ptr [ebx + 0x470]
        fstp    dword ptr [ebx + 0x470]
    L_skip2:
        mov     ecx, ebx
        call    FUN_005e89c0
        fmul dword ptr [DAT_0077dfc0]
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x38]
        fmul    dword ptr [esp + 0x18]
        fstp    dword ptr [ebx + 0x480]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
    L_done:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }


}
