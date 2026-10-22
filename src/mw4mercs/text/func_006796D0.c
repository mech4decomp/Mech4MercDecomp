/* func_006796D0.c -- in-.text data block 0x679646 (624 B for this fn)
 * Disassembled from reference\MW4Mercs.exe.  __thiscall game-object update
 * with FPU math.  NOTE: this block also contains adjacent functions at
 * 0x679940 and 0x679B90 (not in this assigned list).
 */

extern float g_76d064;
extern float g_77dff8;
extern float g_77dff4;
extern float g_7880f8;
extern float g_76d070;
extern float g_7704c4;
extern float g_76d5f0;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_005603e0(void);
extern void __cdecl FUN_00560400(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_00626420(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0055eb90(void);
extern void __cdecl FUN_00587830(void);

__declspec(naked) void func_006796D0(void)
{
    __asm {
        sub esp, 0x38
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi+0x50]
        mov cl, byte ptr [eax+4]
        test cl, cl
        je loc_679937
        lea ecx, [edi+0x14]
        push ecx
        lea ecx, [esp+0x14]
        call FUN_0040c410
        fld dword ptr [esp+0x10]
        fcomp dword ptr [g_76d064]
        /* __emit: fnstsw ax no-WAIT DF E0 (MSVC6 inserts 9B WAIT) */
        __emit 0xDF
        __emit 0xE0
        test ah, 0x41
        je loc_679711
        fld dword ptr [esp+0x10]
        fmul dword ptr [g_77dff8]
        fstp dword ptr [esp+0x10]
loc_679711:
        fld dword ptr [esp+0x14]
        fcomp dword ptr [g_76d064]
        __emit 0xDF
        __emit 0xE0
        test ah, 0x41
        je loc_679730
        fld dword ptr [esp+0x14]
        fmul dword ptr [g_77dff4]
        fstp dword ptr [esp+0x14]
loc_679730:
        lea edx, [esp+0x10]
        push edx
        lea ecx, [esp+0x38]
        call FUN_0040c5d0
        mov eax, dword ptr [esp+0x34]
        mov ecx, dword ptr [esp+0x38]
        mov edx, dword ptr [esp+0x3c]
        mov dword ptr [esp+0x1c], eax
        lea eax, [edi+0x20]
        mov dword ptr [esp+0x20], ecx
        push eax
        lea ecx, [esp+0x14]
        mov dword ptr [esp+0x28], edx
        call FUN_0040c410
        fld dword ptr [esp+0x10]
        fcomp dword ptr [g_76d064]
        __emit 0xDF
        __emit 0xE0
        test ah, 0x41
        je loc_679782
        fld dword ptr [esp+0x10]
        fmul dword ptr [g_77dff8]
        fstp dword ptr [esp+0x10]
loc_679782:
        fld dword ptr [esp+0x14]
        fcomp dword ptr [g_76d064]
        __emit 0xDF
        __emit 0xE0
        test ah, 0x41
        je loc_6797a1
        fld dword ptr [esp+0x14]
        fmul dword ptr [g_77dff4]
        fstp dword ptr [esp+0x14]
loc_6797a1:
        lea ecx, [esp+0x10]
        push ecx
        lea ecx, [esp+0x38]
        call FUN_0040c5d0
        mov eax, dword ptr [esp+0x38]
        mov edx, dword ptr [esp+0x34]
        mov ecx, dword ptr [esp+0x3c]
        mov dword ptr [esp+0x2c], eax
        cmp dword ptr [edi+0x60], 0x19
        mov dword ptr [esp+0x28], edx
        mov dword ptr [esp+0x30], ecx
        jl loc_6797d1
        mov byte ptr [edi+0x5c], 1
loc_6797d1:
        mov esi, dword ptr [edi+0x50]
        push 0x432f0000
        push 0x42c80000
        mov ecx, esi
        call FUN_005603e0
        push 0x43fa0000
        push 0x442f0000
        mov ecx, esi
        call FUN_00560400
        mov edx, dword ptr [esi]
        lea eax, [esp+0xc]
        push eax
        lea ecx, [esp+0xc]
        push ecx
        mov ecx, esi
        call dword ptr [edx+0xc]
        mov edx, dword ptr [esp+8]
        mov eax, dword ptr [esp+0xc]
        mov dword ptr [esp+0x10], edx
        mov dword ptr [esp+0x14], 0
        fild qword ptr [esp+0x10]
        mov dword ptr [esp+0x10], eax
        mov eax, dword ptr [edi+0x34]
        fadd dword ptr [g_7880f8]
        mov dword ptr [esp+0x14], 0
        push eax
        sub esp, 0xc
        fstp dword ptr [esp+0x38]
        lea edx, [esp+0x38]
        fild qword ptr [esp+0x20]
        mov ecx, esp
        push edx
        fadd dword ptr [g_7880f8]
        fstp dword ptr [esp+0x40]
        fld dword ptr [esp+0x3c]
        fmul dword ptr [g_76d070]
        fsubr dword ptr [esp+0x30]
        fstp dword ptr [esp+0x30]
        call FUN_00551870
        lea eax, [esp+0x2c]
        push eax
        call FUN_00626420
        mov al, byte ptr [edi+0x5c]
        add esp, 0x14
        test al, al
        je loc_6798b6
        fld dword ptr [esp+0x20]
        push -1
        fadd dword ptr [esp+0x30]
        call FUN_0075db4a
        fld dword ptr [esp+0x20]
        fadd dword ptr [esp+0x2c]
        push eax
        call FUN_0075db4a
        fld dword ptr [esp+0x28]
        push eax
        call FUN_0075db4a
        fld dword ptr [esp+0x28]
        push eax
        call FUN_0075db4a
        push eax
        call FUN_0055eb90
        add esp, 0x14
loc_6798b6:
        fld dword ptr [esp+0x1c]
        mov ecx, dword ptr [esp+0x20]
        fadd dword ptr [g_7704c4]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp+0x20]
        mov edx, dword ptr [esp+0x20]
        fld dword ptr [esp+0x2c]
        push edx
        fsub dword ptr [g_7880f8]
        fstp dword ptr [esp+0x30]
        call FUN_005603e0
        fld dword ptr [esp+0x20]
        push ecx
        fadd dword ptr [esp+0x30]
        fstp dword ptr [esp]
        push ecx
        fld dword ptr [esp+0x24]
        mov ecx, esi
        fadd dword ptr [esp+0x30]
        fstp dword ptr [esp]
        call FUN_00560400
        fld dword ptr [esp+0x20]
        mov eax, dword ptr [esp+0x1c]
        fadd dword ptr [g_76d5f0]
        mov edi, dword ptr [esi]
        push 1
        push 0x3f666666
        push ecx
        fstp dword ptr [esp]
        push eax
        lea ecx, [esp+0x44]
        call FUN_00587830
        sub esp, 0xc
        mov ecx, esp
        push eax
        call FUN_00551870
        mov ecx, esi
        call dword ptr [edi+0x14]
loc_679937:
        pop edi
        pop esi
        add esp, 0x38
        ret
    }
}
