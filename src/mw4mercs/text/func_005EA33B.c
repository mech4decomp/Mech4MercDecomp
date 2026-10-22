/* func_005EA33B.c -- in-.text data block 0x5EA33B (993 B)
 * Disassembled from reference\MW4Mercs.exe.  __thiscall game-object update
 * (weapon/turret aim) with heavy FPU math.  NOTE: this block also contains
 * an adjacent second function at 0x5EA720 (not in this assigned list).
 */

extern float g_789868;
extern float g_77deac;
extern float g_785f2c;
extern float g_7899e0;
extern float g_76d064;
extern float g_76c5b0;
extern void __cdecl FUN_005f07c0(void);
extern void __cdecl FUN_0041d780(void);
extern void __cdecl FUN_00559be0(void);
extern void __cdecl FUN_005eb690(void);
extern void __cdecl FUN_005eae20(void);
extern void __cdecl FUN_005ea840(void);
extern void __cdecl FUN_005ea980(void);
extern void __cdecl FUN_005ea8e0(void);
extern void __cdecl FUN_004dad70(void);

__declspec(naked) void func_005EA33B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        sub esp, 8
        push esi
        mov esi, ecx
        call FUN_005f07c0
        mov eax, dword ptr [eax+4]
        cmp dword ptr [eax], 0x429
        jne loc_5ea375
        mov ecx, esi
        call FUN_005f07c0
        mov eax, dword ptr [eax+0x9ac]
        test eax, eax
        je loc_5ea375
        mov cl, byte ptr [eax+0x134]
        test cl, cl
        je loc_5ea715
loc_5ea375:
        mov edx, dword ptr [esi+0x78]
        push ebx
        lea ecx, [esi+0x78]
        push edi
        call dword ptr [edx+4]
        fld qword ptr [esp+0x18]
        fsub qword ptr [esi+0xe4]
        mov edi, eax
        fstp dword ptr [esp+0x10]
        fld dword ptr [edi+0x634]
        fmul dword ptr [esi+0x1c8]
        fmul dword ptr [esi+0x1d8]
        fmul dword ptr [esp+0x10]
        fadd dword ptr [esi+0x198]
        fst dword ptr [esp+0xc]
        mov eax, dword ptr [esp+0xc]
        fstp dword ptr [esi+0x198]
        push eax
        call FUN_0041d780
        fstp dword ptr [esi+0x198]
        mov ebx, dword ptr [esi+0x1e0]
        add esp, 4
        cmp ebx, 4
        je loc_5ea417
        cmp ebx, 5
        je loc_5ea417
        fld dword ptr [edi+0x638]
        fmul dword ptr [esi+0x1cc]
        fmul dword ptr [esi+0x1d8]
        fmul dword ptr [esp+0x10]
        fadd dword ptr [esi+0x19c]
        fst dword ptr [esp+0xc]
        mov ecx, dword ptr [esp+0xc]
        fstp dword ptr [esi+0x19c]
        push ecx
        call FUN_0041d780
        fstp dword ptr [esi+0x19c]
        add esp, 4
        jmp loc_5ea4f5
loc_5ea417:
        fld dword ptr [edi+0x638]
        fmul dword ptr [esi+0x1cc]
        fmul dword ptr [esi+0x1d8]
        fmul dword ptr [esp+0x10]
        fadd dword ptr [esi+0x1b8]
        fst dword ptr [esp+0xc]
        mov edx, dword ptr [esp+0xc]
        fstp dword ptr [esi+0x1b8]
        push edx
        call FUN_0041d780
        fst dword ptr [esi+0x1b8]
        fld dword ptr [g_789868]
        add esp, 4
        fmul dword ptr [g_77deac]
        fstp dword ptr [esp+0xc]
        fcomp dword ptr [esp+0xc]
        /* __emit: fnstsw ax no-WAIT DF E0 (MSVC6 inserts 9B WAIT) */
        __emit 0xDF
        __emit 0xE0
        test ah, 0x41
        jne loc_5ea475
        mov eax, dword ptr [esp+0xc]
        mov dword ptr [esi+0x1b8], eax
loc_5ea475:
        fld dword ptr [g_789868]
        fmul dword ptr [g_785f2c]
        fcom dword ptr [esi+0x1b8]
        __emit 0xDF
        __emit 0xE0
        test ah, 0x41
        jne loc_5ea496
        fstp dword ptr [esi+0x1b8]
        jmp loc_5ea498
loc_5ea496:
        fstp st(0)
loc_5ea498:
        cmp ebx, 4
        jne loc_5ea4c0
        fld dword ptr [esi+0x20c]
        fadd dword ptr [esi+0x19c]
        fsubr dword ptr [esi+0x1b8]
        fst dword ptr [esp+0xc]
        mov ecx, dword ptr [esp+0xc]
        fstp dword ptr [esi+0x1c0]
        push ecx
        jmp loc_5ea4e7
loc_5ea4c0:
        fld dword ptr [g_789868]
        fmul dword ptr [g_7899e0]
        fsub dword ptr [esi+0x19c]
        fadd dword ptr [esi+0x1b8]
        fst dword ptr [esp+0xc]
        mov edx, dword ptr [esp+0xc]
        fstp dword ptr [esi+0x1c0]
        push edx
loc_5ea4e7:
        call FUN_0041d780
        fstp dword ptr [esi+0x1c0]
        add esp, 4
loc_5ea4f5:
        fld dword ptr [esi+0x1b4]
        fcomp dword ptr [esi+0x1b0]
        __emit 0xDF
        __emit 0xE0
        test ah, 1
        je loc_5ea5b5
        fld dword ptr [esp+0x10]
        fadd dword ptr [esi+0x1b4]
        fst dword ptr [esi+0x1b4]
        fdiv dword ptr [esi+0x1b0]
        fst dword ptr [esp+0xc]
        fcomp dword ptr [g_76d064]
        __emit 0xDF
        __emit 0xE0
        test ah, 0x41
        jne loc_5ea53b
        mov dword ptr [esp+0xc], 0x3f800000
loc_5ea53b:
        fld dword ptr [g_76c5b0]
        fld dword ptr [esi+0x1a8]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF
        __emit 0xE0
        test ah, 0x40
        jne loc_5ea572
        fstp st(0)
        fld dword ptr [g_76d064]
        fsub dword ptr [esp+0xc]
        fmul dword ptr [esi+0x1a0]
        fld dword ptr [esp+0xc]
        fmul dword ptr [esi+0x1a8]
        faddp st(1), st(0)
loc_5ea572:
        fstp dword ptr [esi+0x198]
        fld dword ptr [g_76c5b0]
        fld dword ptr [esi+0x1ac]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF
        __emit 0xE0
        test ah, 0x40
        jne loc_5ea5af
        fstp st(0)
        fld dword ptr [g_76d064]
        fsub dword ptr [esp+0xc]
        fmul dword ptr [esi+0x1a4]
        fld dword ptr [esp+0xc]
        fmul dword ptr [esi+0x1ac]
        faddp st(1), st(0)
loc_5ea5af:
        fstp dword ptr [esi+0x19c]
loc_5ea5b5:
        fld dword ptr [esi+0x198]
        fcomp dword ptr [edi+0x63c]
        __emit 0xDF
        __emit 0xE0
        test ah, 0x41
        jne loc_5ea5ed
        mov ecx, esi
        call FUN_005f07c0
        mov ecx, dword ptr [eax+0x3b0]
        test ecx, ecx
        je loc_5ea5ed
        push 0x18
        mov ecx, esi
        call FUN_005f07c0
        mov ecx, dword ptr [eax+0x3b0]
        call FUN_00559be0
loc_5ea5ed:
        fld dword ptr [edi+0x63c]
        fchs
        fstp dword ptr [esp+0xc]
        fld dword ptr [esi+0x198]
        fcomp dword ptr [esp+0xc]
        __emit 0xDF
        __emit 0xE0
        test ah, 1
        je loc_5ea62f
        mov ecx, esi
        call FUN_005f07c0
        mov ecx, dword ptr [eax+0x3b0]
        test ecx, ecx
        je loc_5ea62f
        push 0x18
        mov ecx, esi
        call FUN_005f07c0
        mov ecx, dword ptr [eax+0x3b0]
        call FUN_00559be0
loc_5ea62f:
        fld dword ptr [esi+0x198]
        fcomp dword ptr [edi+0x63c]
        __emit 0xDF
        __emit 0xE0
        test ah, 0x41
        jne loc_5ea64e
        mov eax, dword ptr [edi+0x63c]
        mov dword ptr [esi+0x198], eax
loc_5ea64e:
        fld dword ptr [esi+0x198]
        fcomp dword ptr [esp+0xc]
        __emit 0xDF
        __emit 0xE0
        test ah, 1
        je loc_5ea669
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr [esi+0x198], ecx
loc_5ea669:
        fld dword ptr [esi+0x19c]
        fcomp dword ptr [edi+0x640]
        __emit 0xDF
        __emit 0xE0
        test ah, 0x41
        jne loc_5ea688
        mov edx, dword ptr [edi+0x640]
        mov dword ptr [esi+0x19c], edx
loc_5ea688:
        fld dword ptr [edi+0x640]
        pop edi
        fchs
        pop ebx
        fcom dword ptr [esi+0x19c]
        __emit 0xDF
        __emit 0xE0
        test ah, 0x41
        jne loc_5ea6a7
        fstp dword ptr [esi+0x19c]
        jmp loc_5ea6a9
loc_5ea6a7:
        fstp st(0)
loc_5ea6a9:
        mov eax, dword ptr [esp+8]
        push eax
        mov ecx, esi
        call FUN_005eb690
        mov eax, dword ptr [esi+0x184]
        test eax, eax
        je loc_5ea6c8
        mov ecx, esi
        call FUN_005eae20
        jmp loc_5ea704
loc_5ea6c8:
        mov eax, dword ptr [esi+0x190]
        test eax, eax
        je loc_5ea6e2
        mov ecx, esi
        call FUN_005ea840
        mov ecx, esi
        call FUN_005ea980
        jmp loc_5ea704
loc_5ea6e2:
        mov eax, dword ptr [esi+0x17c]
        test eax, eax
        je loc_5ea6f3
        mov ecx, esi
        call FUN_005ea840
loc_5ea6f3:
        mov eax, dword ptr [esi+0x180]
        test eax, eax
        je loc_5ea704
        mov ecx, esi
        call FUN_005ea8e0
loc_5ea704:
        mov ecx, dword ptr [esp+0x14]
        mov edx, dword ptr [esp+0x10]
        push ecx
        push edx
        mov ecx, esi
        call FUN_004dad70
loc_5ea715:
        pop esi
        add esp, 8
        ret 8
    }
}
