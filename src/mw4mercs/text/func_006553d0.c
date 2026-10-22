/*
 * FUN_006553D0 (573 B) — __thiscall per-frame update of a set of
 * particle/light objects: advances a time accumulator, clamps a
 * distance value against world bounds, and culls/removes entries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_770168;
extern float g_80da60;
extern float g_80da5c;
extern float g_80da58;
extern float g_80da54;
extern float g_76d064;
extern double g_77a4a8;

extern void __cdecl FUN_005d7860(void *a, int b);
extern void __cdecl FUN_00653ee0(void);
extern float __cdecl FUN_00655f10(void *a, float b);
extern void __cdecl FUN_005d8270(int a);
extern void __cdecl FUN_0068ea20(int a);
extern void __cdecl FUN_005d6b10(void);
extern void __cdecl FUN_004084e0(void *a);
extern void __cdecl FUN_005d7a80(void);

__declspec(naked) void __stdcall FUN_006553D0(void *param_1, void *param_2)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x28]
        push    esi
        push    edi
        push    0x42a00000
        mov     edi, ecx
        push    ebp
        call    FUN_005d7860
        mov     ecx, edi
        call    FUN_00653ee0
        mov     esi, dword ptr [edi + 0x1c]
        mov     ecx, dword ptr [edi + 0x20]
        sub     ecx, esi
        sar     ecx, 0x2
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], 0x0
        fild    qword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [edi + 0x20]
        fdivr   dword ptr [g_770168]
        mov     ebx, esi
        cmp     ebx, eax
        mov     dword ptr [esp + 0x34], ebx
        fstp    dword ptr [esp + 0x18]
        jz      loc_6555fc
loc_65542d:
        mov     esi, dword ptr [ebx]
        test    esi, esi
        jnz     loc_65543f
        add     ebx, 0x4
        mov     dword ptr [esp + 0x34], ebx
        jmp     loc_6555f3
loc_65543f:
        test    ebp, ebp
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        jz      loc_655459
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    ebp
        add     esp, 0x4
loc_655459:
        mov     ebp, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [esi + 0x30]
        sub     ecx, ebp
        sar     ecx, 0x2
        xor     ebp, ebp
        mov     edx, 0x1
        cmp     ecx, edx
        mov     dword ptr [esp + 0x14], ebp
        jle     loc_655499
loc_655473:
        mov     eax, dword ptr [esi + 0x2c]
        lea     ebx, [edx*4]
        fld     dword ptr [ebx + eax]
        fcomp   dword ptr [eax + ebp]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0); MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 01); MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      loc_655490
        mov     dword ptr [esp + 0x14], edx
        mov     ebp, ebx
loc_655490:
        inc     edx
        cmp     edx, ecx
        jl      loc_655473
        mov     ebx, dword ptr [esp + 0x34]
loc_655499:
        mov     eax, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [esp + 0x14]
        fld     dword ptr [eax + ecx*4]
        fld     dword ptr [esi + 0x8]
        fsub    dword ptr [g_80da60]
        fcomp
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz      loc_6554c0
        fstp    st(0)
        fld     dword ptr [esi + 0x8]
        fsub    dword ptr [g_80da60]
loc_6554c0:
        fld     dword ptr [esi + 0x10]
        fsub    dword ptr [g_80da5c]
        fcomp
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz      loc_6554dd
        fstp    st(0)
        fld     dword ptr [esi + 0x10]
        fsub    dword ptr [g_80da5c]
loc_6554dd:
        fld     dword ptr [esi + 0x8]
        fld     dword ptr [g_80da58]
        fsub    st(0), st(1)
        fcomp   st(2)
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        fstp    st(0)
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz      loc_6554fe
        fstp    st(0)
        fld     dword ptr [esi + 0x8]
        fsubr   dword ptr [g_80da58]
loc_6554fe:
        fld     dword ptr [esi + 0x10]
        fld     dword ptr [g_80da54]
        fsub    st(0), st(1)
        fcomp   st(2)
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        fstp    st(0)
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz      loc_65551f
        fstp    st(0)
        fld     dword ptr [esi + 0x10]
        fsubr   dword ptr [g_80da54]
loc_65551f:
        mov     edx, dword ptr [esi + 0x8]
        fsub    dword ptr [g_76d064]
        mov     dword ptr [esp + 0x20], edx
        mov     eax, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x24], eax
        mov     ecx, dword ptr [esi + 0x10]
        push    ecx
        fstp    dword ptr [esp]
        lea     edx, [esp + 0x24]
        mov     dword ptr [esp + 0x2c], ecx
        mov     ecx, dword ptr [edi + 0x38]
        push    edx
        call    FUN_00655f10
        fstp    dword ptr [esi + 0x44]
        fld     dword ptr [esi + 0x44]
        fcomp   qword ptr [g_77a4a8]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz      loc_6555d6
        mov     ebp, dword ptr [esi]
        mov     eax, dword ptr [edi + 0x1c]
        mov     esi, dword ptr [eax + ebp*4]
        test    esi, esi
        jz      loc_6555e8
        mov     eax, dword ptr [edi + 0x14]
        sub     eax, dword ptr [edi + 0x10]
        xor     ebx, ebx
        sar     eax, 0x2
        jz      loc_6555a7
loc_655577:
        mov     ecx, dword ptr [edi + 0x10]
        lea     eax, [ecx + ebx*4]
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        jz      loc_655599
        mov     edx, ecx
        cmp     dword ptr [edx + 0x4], esi
        jz      loc_655591
        mov     eax, edx
        cmp     dword ptr [eax + 0x8], esi
        jnz     loc_655599
loc_655591:
        push    ebx
        mov     ecx, edi
        call    FUN_005d8270
loc_655599:
        mov     ecx, dword ptr [edi + 0x14]
        sub     ecx, dword ptr [edi + 0x10]
        inc     ebx
        sar     ecx, 0x2
        cmp     ebx, ecx
        jc      loc_655577
loc_6555a7:
        push    ebp
        mov     ecx, edi
        call    FUN_0068ea20
        mov     ebx, dword ptr [edi + 0x1c]
        mov     esi, dword ptr [ebx + ebp*4]
        test    esi, esi
        jz      loc_6555c9
        mov     ecx, esi
        call    FUN_005d6b10
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
loc_6555c9:
        mov     dword ptr [ebx + ebp*4], 0x0
        mov     ebx, dword ptr [esp + 0x34]
        jmp     loc_6555e8
loc_6555d6:
        mov     edx, dword ptr [esi + 0x44]
        mov     dword ptr [esi + 0x4c], edx
        fld     dword ptr [esi + 0x44]
        fld     st(0)
        fmul    st(0), st(1)
        fstp    dword ptr [esi + 0x48]
        fstp    st(0)
loc_6555e8:
        mov     ebp, dword ptr [esp + 0x30]
        add     ebx, 0x4
        mov     dword ptr [esp + 0x34], ebx
loc_6555f3:
        cmp     ebx, dword ptr [edi + 0x20]
        jnz     loc_65542d
loc_6555fc:
        mov     ecx, edi
        call    FUN_005d7a80
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     8
    }
}
