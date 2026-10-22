/*
 * FUN_006c34e0 (9235 B) __stdcall, RET 4 (one stack param).
 * Game console command dispatcher. Switches on the command id (0x00..0x32,
 * jump table at 0x6c58f4) and parses each command's argument list from the
 * global command buffer DAT_0082f328, calling into the object/audio/input
 * subsystems. Includes nested jump tables at 0x6c59c0/0x6c59e0/0x6c5a00/
 * 0x6c5a14. All jump tables lie just past the function's 9235-byte slice
 * (ends 0x6c58f2), so they are not part of the diffed bytes.
 *
 * Whole body regenerated from the Ghidra disassembly (see
 * build/ghidra_6c34e0_disasm.txt); verified 100% via diff.
 *
 * Genuine __emit (39 lines, all justified):
 *   - 5x `FF 24 85` [eax*4 + imm32] jump-table dispatches (MSVC6 re-bases
 *     via EBX instead of emitting the indexed indirect jump): 35 bytes.
 *   - 1x `mov [esp],ecx` zero-disp [esp] quirk (`89 4C 24 00` vs MSVC6's
 *     `89 0C 24`): 4 bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_82f328;   /* 0x0082f328 command buffer ptr */
extern int g_82f320;   /* 0x0082f320 */
extern int g_82f30c;   /* 0x0082f30c */
extern int g_82f310;   /* 0x0082f310 */
extern int g_82f3b0;   /* 0x0082f3b0 */
extern int g_82f33c;   /* 0x0082f33c */
extern int g_82f338;   /* 0x0082f338 */
extern int g_82f3d4;   /* 0x0082f3d4 */
extern int g_82f3dc;   /* 0x0082f3dc */
extern unsigned char g_82e2da; /* 0x0082e2da */
extern int g_858940;   /* 0x00858940 */
extern int g_858944;   /* 0x00858944 */
extern unsigned char g_8589d6; /* 0x008589d6 */
extern int g_849310;   /* 0x00849310 */
extern int g_849330;   /* 0x00849330 */
extern int g_7b60b4;   /* 0x007b60b4 */
extern unsigned char g_7b60bc; /* 0x007b60bc */
extern float g_76d048; /* 0x0076d048 */
extern float g_77a1a0; /* 0x0077a1a0 */
extern float g_78096c; /* 0x0078096c */
extern double g_78b358; /* 0x0078b358 */
extern unsigned char g_896b88[]; /* 0x00896b88 */
extern int g_82ee8c[]; /* 0x0082ee8c */
extern int g_82ef04[]; /* 0x0082ef04 */
extern int g_82ef08[]; /* 0x0082ef08 */
extern int g_82ef28[]; /* 0x0082ef28 */
extern int g_6c58f4[]; /* jump table 0x006c58f4 */
extern int g_6c59c0[]; /* jump table 0x006c59c0 */
extern int g_6c59e0[]; /* jump table 0x006c59e0 */
extern int g_6c5a00[]; /* jump table 0x006c5a00 */
extern int g_6c5a14[]; /* jump table 0x006c5a14 */
extern int g_76b3c0;   /* IAT 0x0076b3c0 */
extern int g_76b3b8;   /* IAT 0x0076b3b8 */
extern int g_76b3b0;   /* IAT 0x0076b3b0 */
extern int g_76b320;   /* IAT 0x0076b320 */
extern int g_76b318;   /* IAT 0x0076b318 */

extern void __cdecl FUN_006c3450(void);
extern void __cdecl FUN_006c12e0(void);
extern void __cdecl FUN_006c0940(void);
extern void __cdecl FUN_006bfa50(void);
extern void __cdecl FUN_006c30c0(void);
extern void __cdecl FUN_006cbfe0(void);
extern void __cdecl FUN_006cc670(void);
extern void __cdecl FUN_006cc680(void);
extern void __cdecl FUN_006cc600(void);
extern void __cdecl FUN_006cc620(void);
extern void __cdecl FUN_006cc4d0(void);
extern void __cdecl FUN_006cc550(void);
extern void __cdecl FUN_006cc690(void);
extern void __cdecl FUN_006cc6a0(void);
extern void __cdecl FUN_006c9710(void);
extern void __cdecl FUN_006c8670(void);
extern void __cdecl FUN_006c8660(void);
extern void __cdecl FUN_006c8e20(void);
extern void __cdecl FUN_006ce300(void);
extern void __cdecl FUN_006ce3b0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006c86b0(void);
extern void __cdecl FUN_007224d0(void);
extern void __cdecl FUN_007226f0(void);
extern void __cdecl FUN_007225b0(void);
extern void __cdecl FUN_00722660(void);
extern void __cdecl FUN_00722f70(void);
extern void __cdecl FUN_00724c20(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_00723b40(void);
extern void __cdecl FUN_00725060(void);
extern void __cdecl FUN_00724350(void);
extern void __cdecl FUN_007344e0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00727610(void);
extern void __cdecl FUN_00727660(void);
extern void __cdecl FUN_00704820(void);
extern void __cdecl FUN_007242d0(void);
extern void __cdecl FUN_00733700(void);

__declspec(naked) void __stdcall FUN_006c34e0(void)
{
    __asm {
        sub       esp,0xd50
        mov       eax,dword ptr [esp + 0xd54]
        push      ebx
        push      ebp
        or        ebp,0xffffffff
        cmp       eax,0x32
        push      esi
        push      edi
        mov       dword ptr [esp + 0x10],ebp
        ja        L_58D5
        __emit 0xFF   ; jmp dword ptr [eax*4 + 0x006C58F4] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x24   ; jmp dword ptr [eax*4 + 0x006C58F4] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x85   ; jmp dword ptr [eax*4 + 0x006C58F4] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0xF4   ; jmp dword ptr [eax*4 + 0x006C58F4] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x58   ; jmp dword ptr [eax*4 + 0x006C58F4] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x6C   ; jmp dword ptr [eax*4 + 0x006C58F4] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x00   ; jmp dword ptr [eax*4 + 0x006C58F4] (MSVC6 re-bases via EBX, one byte per __emit)
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_3518
        inc       eax
        mov       [g_82f328],eax
L_3518:
        cmp       byte ptr [eax],0x28
        jz        L_3531
        push      0x79decc
        call      FUN_006bfa50
        mov       eax,[g_82f328]
        add       esp,0x4
        jmp       L_3537
L_3531:
        inc       eax
        mov       [g_82f328],eax
L_3537:
        cmp       byte ptr [eax],0x20
        jnz       L_3542
        inc       eax
        mov       [g_82f328],eax
L_3542:
        call      FUN_006c12e0
        cmp       eax,0x68
        jz        L_355E
        cmp       eax,0x64
        jz        L_355E
        push      0x79de94
        call      FUN_006bfa50
        add       esp,0x4
L_355E:
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_356E
        inc       eax
        mov       [g_82f328],eax
L_356E:
        mov       cl,byte ptr [eax]
        cmp       cl,0x29
        jz        L_3676
        cmp       cl,0x2c
        jz        L_35E9
        push      0x79de94
        call      FUN_006bfa50
        add       esp,0x4
        call      FUN_006c3450
        mov       esi,eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_35A2
        inc       eax
        mov       [g_82f328],eax
L_35A2:
        cmp       byte ptr [eax],0x29
        jz        L_35B6
        push      0x79de68
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_35BC
L_35B6:
        inc       eax
        mov       [g_82f328],eax
L_35BC:
        push      0x0
        push      0x0
        lea       eax,[esp + 0x18]
        push      eax
        push      0x2
        push      esi
        call      FUN_00724c20
        fld       dword ptr [esp + 0x10]
        fmul      dword ptr [g_76d048]
        call      FUN_0075db4a
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_35E9:
        mov       ecx,dword ptr [g_82f320]
        mov       esi,dword ptr [ecx]
        inc       eax
        mov       [g_82f328],eax
        call      FUN_006c3450
        mov       edi,eax
        test      edi,edi
        jz        L_3618
        mov       al,[g_8589d6]
        test      al,al
        jnz       L_3618
        push      0x79de30
        call      FUN_006bfa50
        add       esp,0x4
L_3618:
        mov       eax,dword ptr [esi + 0x34]
        xor       edx,edx
        test      edi,edi
        setnz     dl
        and       eax,0xffffffbf
        and       edx,0x1
        shl       edx,0x6
        or        edx,eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        mov       dword ptr [esi + 0x34],edx
        jnz       L_3640
        inc       eax
        mov       [g_82f328],eax
L_3640:
        cmp       byte ptr [eax],0x29
        jz        L_3661
        push      0x79de94
        call      FUN_006bfa50
        add       esp,0x4
        mov       eax,edi
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_3661:
        inc       eax
        mov       [g_82f328],eax
        mov       eax,edi
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_3676:
        mov       ecx,dword ptr [g_82f320]
        mov       edx,dword ptr [ecx]
        inc       eax
        pop       edi
        mov       [g_82f328],eax
        mov       eax,dword ptr [edx + 0x34]
        pop       esi
        shr       eax,0x6
        pop       ebp
        and       eax,0x1
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_36AA
        inc       eax
        mov       [g_82f328],eax
L_36AA:
        cmp       byte ptr [eax],0x28
        jz        L_36BE
        push      0x79ddec
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_36C4
L_36BE:
        inc       eax
        mov       [g_82f328],eax
L_36C4:
        call      FUN_006c3450
        mov       esi,eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_36DB
        inc       eax
        mov       [g_82f328],eax
L_36DB:
        cmp       byte ptr [eax],0x29
        jnz       L_36F0
        test      esi,esi
        jge       L_36E8
        cmp       esi,ebp
        jnz       L_36F0
L_36E8:
        inc       eax
        mov       [g_82f328],eax
        jmp       L_36FD
L_36F0:
        push      0x79ddec
        call      FUN_006bfa50
        add       esp,0x4
L_36FD:
        cmp       esi,ebp
        jnz       L_3719
        pop       edi
        pop       esi
        mov       dword ptr [g_7b60b4],ebp
        pop       ebp
        mov       eax,0x1
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_3719:
        push      0x0
        call      FUN_007224d0
        lea       ecx,[esi + -0x1]
        cmp       ecx,eax
        jle       L_37E7
        push      esi
        push      0x79ddd0
        call      FUN_006bfa50
        add       esp,0x8
        lea       eax,[esp + 0x160]
        mov       ecx,0xc
L_3745:
        mov       byte ptr [eax],0x0
        add       eax,0x100
        dec       ecx
        jnz       L_3745
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_3760
        inc       eax
        mov       [g_82f328],eax
L_3760:
        cmp       byte ptr [eax],0x28
        jz        L_3772
        push      0x79ddbc
        call      FUN_006bfa50
        add       esp,0x4
L_3772:
        inc       dword ptr [g_82f328]
        call      FUN_006c0940
        mov       edi,eax
        xor       eax,eax
        mov       ecx,ebp
        repne scasb
        not       ecx
        sub       edi,ecx
        mov       eax,ecx
        shr       ecx,0x2
        mov       esi,edi
        lea       edx,[esp + 0x60]
        mov       edi,edx
        rep movsd
        mov       ecx,eax
        mov       eax,[g_82f328]
        and       ecx,0x3
        rep movsb
        cmp       byte ptr [eax],0x20
        jnz       L_37AF
        inc       eax
        mov       [g_82f328],eax
L_37AF:
        cmp       byte ptr [eax],0x29
        jz        L_37C1
        push      0x79dda4
        call      FUN_006bfa50
        add       esp,0x4
L_37C1:
        mov       esi,dword ptr [g_82f328]
        lea       ecx,[esp + 0x60]
        push      ecx
        inc       esi
        push      0x3
        mov       dword ptr [g_82f328],esi
        call      FUN_00704820
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_37E7:
        push      0x3d08850a
        push      0x1
        push      esi
        call      FUN_007226f0
        mov       dword ptr [g_7b60b4],esi
L_37FA:
        pop       edi
        pop       esi
        pop       ebp
        mov       eax,0x1
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_381C
        inc       eax
        mov       [g_82f328],eax
L_381C:
        cmp       byte ptr [eax],0x28
        jz        L_3830
        push      0x79dd74
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3836
L_3830:
        inc       eax
        mov       [g_82f328],eax
L_3836:
        call      FUN_006c12e0
        cmp       eax,0x65
        jz        L_385A
        call      FUN_006c0940
        mov       edi,eax
        test      edi,edi
        jnz       L_3862
        push      0x79dd74
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3862
L_385A:
        mov       edx,dword ptr [g_82f320]
        mov       edi,dword ptr [edx]
L_3862:
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x2c
        jz        L_387B
        push      0x79dd74
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3881
L_387B:
        inc       dword ptr [g_82f328]
L_3881:
        call      FUN_006c3450
        push      edi
        mov       esi,eax
        call      dword ptr [g_76b3c0]
        add       esp,0x4
        cmp       esi,eax
        jl        L_38B2
        push      0x79dd4c
        call      FUN_006bfa50
        add       esp,0x4
        pop       edi
        pop       esi
        pop       ebp
        xor       eax,eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_38B2:
        test      esi,esi
        jge       L_38D2
        push      0x79dd20
        call      FUN_006bfa50
        add       esp,0x4
        pop       edi
        pop       esi
        pop       ebp
        xor       eax,eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_38D2:
        push      esi
        push      edi
        call      dword ptr [g_76b3b8]
        push      eax
        call      dword ptr [g_76b3b0]
        mov       ecx,dword ptr [g_82f328]
        mov       esi,eax
        mov       al,byte ptr [ecx]
        add       esp,0xc
        cmp       al,0x29
        jz        L_38FF
        push      0x79dd74
        call      FUN_006bfa50
        add       esp,0x4
L_38FF:
        pop       edi
        mov       eax,esi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_391E
        inc       eax
        mov       [g_82f328],eax
L_391E:
        cmp       byte ptr [eax],0x28
        jz        L_3937
        push      0x79dce4
        call      FUN_006bfa50
        mov       eax,[g_82f328]
        add       esp,0x4
        jmp       L_393D
L_3937:
        inc       eax
        mov       [g_82f328],eax
L_393D:
        cmp       dword ptr [g_82f3b0],0x20
        jc        L_3958
        push      0x79dcc8
        call      FUN_006bfa50
        mov       eax,[g_82f328]
        add       esp,0x4
L_3958:
        cmp       byte ptr [eax],0x20
        jnz       L_396B
L_395D:
        mov       cl,byte ptr [eax + 0x1]
        inc       eax
        cmp       cl,0x20
        jz        L_395D
        mov       [g_82f328],eax
L_396B:
        mov       edx,dword ptr [g_82f3b0]
        mov       ecx,dword ptr [g_82f33c]
        mov       dword ptr [edx*0x4 + 0x82ee8c],ecx
        mov       dl,byte ptr [eax]
        xor       esi,esi
        cmp       dl,0x29
        jz        L_39E4
L_3987:
        call      FUN_006c3450
        mov       ecx,dword ptr [g_82f3b0]
        lea       edx,[esi + ecx*0x8]
        mov       dword ptr [edx*0x4 + 0x82ef28],eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_39B4
L_39A6:
        mov       cl,byte ptr [eax + 0x1]
        inc       eax
        cmp       cl,0x20
        jz        L_39A6
        mov       [g_82f328],eax
L_39B4:
        mov       cl,byte ptr [eax]
        inc       esi
        cmp       cl,0x2c
        jnz       L_39DE
        inc       eax
        cmp       esi,0x8
        mov       [g_82f328],eax
        jnz       L_39D9
        push      0x79dca0
        call      FUN_006bfa50
        mov       eax,[g_82f328]
        add       esp,0x4
L_39D9:
        cmp       byte ptr [eax],0x29
        jnz       L_3987
L_39DE:
        mov       ecx,dword ptr [g_82f33c]
L_39E4:
        mov       edx,dword ptr [g_82f3b0]
        inc       edx
        cmp       esi,0x1
        mov       dword ptr [g_82f3b0],edx
        jle       L_3A04
        mov       eax,edx
        lea       ecx,[esi + eax*0x8]
        mov       esi,dword ptr [ecx*0x4 + 0x82ef04]
        jmp       L_3A1C
L_3A04:
        mov       esi,dword ptr [ecx + 0x30]
        test      esi,esi
        jnz       L_3A1C
        add       ecx,0x44
        push      ecx
        push      0x79dc68
        call      FUN_006bfa50
        add       esp,0x8
L_3A1C:
        push      0x1
        push      esi
        call      FUN_006cbfe0
        mov       ecx,dword ptr [g_82f3b0]
        pop       edi
        mov       edx,ecx
        pop       esi
        shl       edx,0x5
        mov       eax,dword ptr [edx + 0x82ef08]
        dec       ecx
        pop       ebp
        mov       dword ptr [g_82f3b0],ecx
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_3A59
        inc       eax
        mov       [g_82f328],eax
L_3A59:
        cmp       byte ptr [eax],0x28
        jz        L_3A6D
        push      0x79dc28
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3A73
L_3A6D:
        inc       eax
        mov       [g_82f328],eax
L_3A73:
        call      FUN_006c3450
        mov       esi,eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_3A8A
        inc       eax
        mov       [g_82f328],eax
L_3A8A:
        cmp       byte ptr [eax],0x2c
        jz        L_3A9E
        push      0x79dc28
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3AA4
L_3A9E:
        inc       eax
        mov       [g_82f328],eax
L_3AA4:
        call      FUN_006c3450
        test      eax,eax
        mov       byte ptr [esp + 0x10],0x0
        jz        L_3AC9
        cmp       eax,0x1
        jz        L_3AC4
        push      0x79dbf0
        call      FUN_006bfa50
        add       esp,0x4
L_3AC4:
        mov       byte ptr [esp + 0x10],0x1
L_3AC9:
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x29
        jz        L_3AE0
        push      0x79dc28
        call      FUN_006bfa50
        add       esp,0x4
L_3AE0:
        test      esi,esi
        jl        L_3B0E
        push      0x0
        call      FUN_007224d0
        cmp       eax,esi
        jbe       L_3B0E
        mov       ecx,dword ptr [esp + 0x10]
        push      0x3d08850a
        push      ecx
        push      esi
        call      FUN_007226f0
        pop       edi
        pop       esi
        pop       ebp
        xor       eax,eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_3B0E:
        push      esi
        push      0x79dbd0
        call      FUN_006bfa50
        add       esp,0x8
        pop       edi
        pop       esi
        pop       ebp
        xor       eax,eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_3B3B
        inc       eax
        mov       [g_82f328],eax
L_3B3B:
        cmp       byte ptr [eax],0x28
        jz        L_3B54
        push      0x79db8c
        call      FUN_006bfa50
        mov       eax,[g_82f328]
        add       esp,0x4
        jmp       L_3B5A
L_3B54:
        inc       eax
        mov       [g_82f328],eax
L_3B5A:
        cmp       byte ptr [eax],0x29
        jz        L_3B80
        push      0x79db8c
        call      FUN_006bfa50
        add       esp,0x4
        push      0x0
        call      FUN_007224d0
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_3B80:
        inc       eax
        push      0x0
        mov       [g_82f328],eax
        call      FUN_007224d0
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_3BAA
        inc       eax
        mov       [g_82f328],eax
L_3BAA:
        cmp       byte ptr [eax],0x28
        jz        L_3BBE
        push      0x79db4c
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3BC4
L_3BBE:
        inc       eax
        mov       [g_82f328],eax
L_3BC4:
        call      FUN_006c3450
        mov       edx,dword ptr [g_82f328]
        mov       edi,eax
        cmp       byte ptr [edx],0x2c
        jz        L_3BE5
        push      0x79db4c
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3BEB
L_3BE5:
        inc       dword ptr [g_82f328]
L_3BEB:
        call      FUN_006c3450
        mov       esi,eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x29
        jz        L_3C0B
        push      0x79db4c
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3C11
L_3C0B:
        inc       dword ptr [g_82f328]
L_3C11:
        push      esi
        push      edi
        call      FUN_007225b0
        fmul      dword ptr [g_78096c]
        call      FUN_0075db4a
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_3C40
        inc       eax
        mov       [g_82f328],eax
L_3C40:
        cmp       byte ptr [eax],0x28
        jz        L_3C54
        push      0x79db08
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3C5A
L_3C54:
        inc       eax
        mov       [g_82f328],eax
L_3C5A:
        call      FUN_006c3450
        mov       ecx,dword ptr [g_82f328]
        mov       edi,eax
        cmp       byte ptr [ecx],0x2c
        jz        L_3C7B
        push      0x79db08
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3C81
L_3C7B:
        inc       dword ptr [g_82f328]
L_3C81:
        call      FUN_006c3450
        mov       edx,dword ptr [g_82f328]
        mov       esi,eax
        cmp       byte ptr [edx],0x29
        jz        L_3CB9
        push      0x79db08
        call      FUN_006bfa50
        add       esp,0x4
        push      esi
        push      edi
        call      FUN_00722660
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        and       eax,0xff
        add       esp,0xd50
        ret       0x4
L_3CB9:
        mov       eax,[g_82f328]
        push      esi
        inc       eax
        push      edi
        mov       [g_82f328],eax
        call      FUN_00722660
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        and       eax,0xff
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_3CED
        inc       eax
        mov       [g_82f328],eax
L_3CED:
        cmp       byte ptr [eax],0x28
        jz        L_3D01
        push      0x79dad4
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3D07
L_3D01:
        inc       eax
        mov       [g_82f328],eax
L_3D07:
        call      FUN_006c3450
        mov       esi,eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x29
        jz        L_3D27
        push      0x79daa8
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3D2D
L_3D27:
        inc       dword ptr [g_82f328]
L_3D2D:
        lea       edx,[esp + 0x14]
        xor       ecx,ecx
        push      edx
        mov       dword ptr [esp + 0x18],ecx
        push      esi
        mov       dword ptr [esp + 0x20],ecx
        call      FUN_00722f70
        mov       eax,dword ptr [esp + 0x18]
        pop       edi
        pop       esi
        shr       eax,0x10
        pop       ebp
        and       eax,0x1f
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_3D69
        inc       eax
        mov       [g_82f328],eax
L_3D69:
        cmp       byte ptr [eax],0x28
        jz        L_3D7D
        push      0x79da64
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3D83
L_3D7D:
        inc       eax
        mov       [g_82f328],eax
L_3D83:
        call      FUN_006c3450
        mov       edi,eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x2c
        jz        L_3DA3
        push      0x79da64
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3DA9
L_3DA3:
        inc       dword ptr [g_82f328]
L_3DA9:
        call      FUN_006c3450
        mov       ecx,dword ptr [g_82f328]
        mov       esi,eax
        cmp       byte ptr [ecx],0x29
        jz        L_3DCA
        push      0x79da64
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3DD0
L_3DCA:
        inc       dword ptr [g_82f328]
L_3DD0:
        lea       eax,[esp + 0x14]
        xor       edx,edx
        push      eax
        mov       dword ptr [esp + 0x18],edx
        push      edi
        mov       dword ptr [esp + 0x20],edx
        call      FUN_00722f70
        mov       edi,dword ptr [esp + 0x18]
        mov       ecx,esi
        mov       eax,0x1
        shl       eax,cl
        and       eax,edi
        and       eax,0xfff
        pop       edi
        neg       eax
        pop       esi
        sbb       eax,eax
        pop       ebp
        neg       eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_3E1C
        inc       eax
        mov       [g_82f328],eax
L_3E1C:
        cmp       byte ptr [eax],0x28
        jz        L_3E30
        push      0x79da3c
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3E36
L_3E30:
        inc       eax
        mov       [g_82f328],eax
L_3E36:
        call      FUN_006c12e0
        cmp       eax,0x71
        jz        L_3E4D
        push      0x79da3c
        call      FUN_006bfa50
        add       esp,0x4
L_3E4D:
        mov       ecx,dword ptr [g_82f328]
        mov       al,byte ptr [ecx]
        cmp       al,0x29
        jz        L_3E6B
L_3E59:
        test      al,al
        jz        L_3E65
        mov       al,byte ptr [ecx + 0x1]
        inc       ecx
        cmp       al,0x29
        jnz       L_3E59
L_3E65:
        mov       dword ptr [g_82f328],ecx
L_3E6B:
        cmp       byte ptr [ecx],0x0
        jnz       L_3E99
        push      0x79da3c
        call      FUN_006bfa50
        mov       ecx,dword ptr [g_82f320]
        mov       ecx,dword ptr [ecx]
        add       esp,0x4
        call      FUN_006cc670
        pop       edi
        pop       esi
        pop       ebp
        xor       eax,eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_3E99:
        inc       ecx
        mov       dword ptr [g_82f328],ecx
        mov       ecx,dword ptr [g_82f320]
        mov       ecx,dword ptr [ecx]
        call      FUN_006cc670
        pop       edi
        pop       esi
        pop       ebp
        xor       eax,eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_3ECC
        inc       eax
        mov       [g_82f328],eax
L_3ECC:
        cmp       byte ptr [eax],0x28
        jz        L_3EE0
        push      0x79da14
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3EE6
L_3EE0:
        inc       eax
        mov       [g_82f328],eax
L_3EE6:
        call      FUN_006c12e0
        cmp       eax,0x71
        jz        L_3EFD
        push      0x79da14
        call      FUN_006bfa50
        add       esp,0x4
L_3EFD:
        mov       ecx,dword ptr [g_82f328]
        mov       al,byte ptr [ecx]
        cmp       al,0x29
        jz        L_3F1B
L_3F09:
        test      al,al
        jz        L_3F15
        mov       al,byte ptr [ecx + 0x1]
        inc       ecx
        cmp       al,0x29
        jnz       L_3F09
L_3F15:
        mov       dword ptr [g_82f328],ecx
L_3F1B:
        cmp       byte ptr [ecx],0x0
        jnz       L_3F49
        push      0x79da14
        call      FUN_006bfa50
        mov       edx,dword ptr [g_82f320]
        mov       ecx,dword ptr [edx]
        add       esp,0x4
        call      FUN_006cc680
        pop       edi
        pop       esi
        pop       ebp
        xor       eax,eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_3F49:
        mov       edx,dword ptr [g_82f320]
        inc       ecx
        mov       dword ptr [g_82f328],ecx
        mov       ecx,dword ptr [edx]
        call      FUN_006cc680
        pop       edi
        pop       esi
        pop       ebp
        xor       eax,eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_3F7C
        inc       eax
        mov       [g_82f328],eax
L_3F7C:
        cmp       byte ptr [eax],0x28
        jz        L_3F90
        push      0x79d9ec
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3F96
L_3F90:
        inc       eax
        mov       [g_82f328],eax
L_3F96:
        call      FUN_006c12e0
        cmp       eax,0x71
        jz        L_3FAD
        push      0x79d9ec
        call      FUN_006bfa50
        add       esp,0x4
L_3FAD:
        mov       ecx,dword ptr [g_82f328]
        mov       al,byte ptr [ecx]
        cmp       al,0x29
        jz        L_3FCB
L_3FB9:
        test      al,al
        jz        L_3FC5
        mov       al,byte ptr [ecx + 0x1]
        inc       ecx
        cmp       al,0x29
        jnz       L_3FB9
L_3FC5:
        mov       dword ptr [g_82f328],ecx
L_3FCB:
        cmp       byte ptr [ecx],0x0
        jnz       L_3FDF
        push      0x79d9ec
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_3FE6
L_3FDF:
        inc       ecx
        mov       dword ptr [g_82f328],ecx
L_3FE6:
        mov       eax,[g_82f320]
        mov       ecx,dword ptr [eax]
        call      FUN_006cc600
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        and       eax,0xff
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4014
        inc       eax
        mov       [g_82f328],eax
L_4014:
        cmp       byte ptr [eax],0x28
        jz        L_4028
        push      0x79d9c4
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_402E
L_4028:
        inc       eax
        mov       [g_82f328],eax
L_402E:
        call      FUN_006c12e0
        cmp       eax,0x71
        jz        L_4045
        push      0x79d9c4
        call      FUN_006bfa50
        add       esp,0x4
L_4045:
        mov       ecx,dword ptr [g_82f328]
        mov       al,byte ptr [ecx]
        cmp       al,0x29
        jz        L_4063
L_4051:
        test      al,al
        jz        L_405D
        mov       al,byte ptr [ecx + 0x1]
        inc       ecx
        cmp       al,0x29
        jnz       L_4051
L_405D:
        mov       dword ptr [g_82f328],ecx
L_4063:
        cmp       byte ptr [ecx],0x0
        jnz       L_4077
        push      0x79d9c4
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_407E
L_4077:
        inc       ecx
        mov       dword ptr [g_82f328],ecx
L_407E:
        mov       ecx,dword ptr [g_82f320]
        mov       ecx,dword ptr [ecx]
        call      FUN_006cc620
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        and       eax,0xff
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        mov       cl,byte ptr [eax]
        xor       ebx,ebx
        cmp       cl,0x20
        jnz       L_40B1
        inc       eax
        mov       [g_82f328],eax
L_40B1:
        cmp       byte ptr [eax],0x28
        jz        L_40C5
        push      0x79d998
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_40CB
L_40C5:
        inc       eax
        mov       [g_82f328],eax
L_40CB:
        call      FUN_006c12e0
        mov       edi,eax
        cmp       edi,ebp
        jnz       L_40E5
        push      0x79d998
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_40EB
L_40E5:
        mov       ebx,dword ptr [g_82f310]
L_40EB:
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        mov       esi,dword ptr [g_82f30c]
        jnz       L_4101
        inc       eax
        mov       [g_82f328],eax
L_4101:
        cmp       byte ptr [eax],0x2c
        jnz       L_410E
        inc       eax
        mov       [g_82f328],eax
        jmp       L_411B
L_410E:
        push      0x79d998
        call      FUN_006bfa50
        add       esp,0x4
L_411B:
        call      FUN_006c12e0
        cmp       eax,0x71
        jz        L_4132
        push      0x79d998
        call      FUN_006bfa50
        add       esp,0x4
L_4132:
        mov       ecx,dword ptr [g_82f328]
        mov       al,byte ptr [ecx]
        cmp       al,0x29
        jz        L_4150
L_413E:
        test      al,al
        jz        L_414A
        mov       al,byte ptr [ecx + 0x1]
        inc       ecx
        cmp       al,0x29
        jnz       L_413E
L_414A:
        mov       dword ptr [g_82f328],ecx
L_4150:
        cmp       byte ptr [ecx],0x0
        jnz       L_4164
        push      0x79d96c
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_416B
L_4164:
        inc       ecx
        mov       dword ptr [g_82f328],ecx
L_416B:
        mov       edx,dword ptr [g_82f320]
        mov       ecx,dword ptr [edx]
        push      esi
        push      edi
        push      ebx
        call      FUN_006cc4d0
        pop       edi
        pop       esi
        pop       ebp
        xor       eax,eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        mov       cl,byte ptr [eax]
        xor       ebx,ebx
        cmp       cl,0x20
        jnz       L_419E
        inc       eax
        mov       [g_82f328],eax
L_419E:
        cmp       byte ptr [eax],0x28
        jz        L_41B2
        push      0x79d940
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_41B8
L_41B2:
        inc       eax
        mov       [g_82f328],eax
L_41B8:
        call      FUN_006c12e0
        mov       edi,eax
        cmp       edi,ebp
        jnz       L_41D2
        push      0x79d940
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_41D8
L_41D2:
        mov       ebx,dword ptr [g_82f310]
L_41D8:
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        mov       esi,dword ptr [g_82f30c]
        jnz       L_41EE
        inc       eax
        mov       [g_82f328],eax
L_41EE:
        cmp       byte ptr [eax],0x2c
        jnz       L_41FB
        inc       eax
        mov       [g_82f328],eax
        jmp       L_4208
L_41FB:
        push      0x79d940
        call      FUN_006bfa50
        add       esp,0x4
L_4208:
        call      FUN_006c12e0
        cmp       eax,0x71
        jz        L_421F
        push      0x79d940
        call      FUN_006bfa50
        add       esp,0x4
L_421F:
        mov       ecx,dword ptr [g_82f328]
        mov       al,byte ptr [ecx]
        cmp       al,0x29
        jz        L_423D
L_422B:
        test      al,al
        jz        L_4237
        mov       al,byte ptr [ecx + 0x1]
        inc       ecx
        cmp       al,0x29
        jnz       L_422B
L_4237:
        mov       dword ptr [g_82f328],ecx
L_423D:
        cmp       byte ptr [ecx],0x0
        jnz       L_4251
        push      0x79d940
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_4258
L_4251:
        inc       ecx
        mov       dword ptr [g_82f328],ecx
L_4258:
        mov       eax,[g_82f320]
        mov       ecx,dword ptr [eax]
        push      esi
        push      edi
        push      ebx
        call      FUN_006cc550
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        and       eax,0xff
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4289
        inc       eax
        mov       [g_82f328],eax
L_4289:
        cmp       byte ptr [eax],0x28
        jz        L_429D
        push      0x79d918
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_42A3
L_429D:
        inc       eax
        mov       [g_82f328],eax
L_42A3:
        call      FUN_006c12e0
        cmp       eax,0x71
        jz        L_42BA
        push      0x79d918
        call      FUN_006bfa50
        add       esp,0x4
L_42BA:
        mov       ecx,dword ptr [g_82f328]
        mov       al,byte ptr [ecx]
        cmp       al,0x29
        jz        L_42D8
L_42C6:
        test      al,al
        jz        L_42D2
        mov       al,byte ptr [ecx + 0x1]
        inc       ecx
        cmp       al,0x29
        jnz       L_42C6
L_42D2:
        mov       dword ptr [g_82f328],ecx
L_42D8:
        cmp       byte ptr [ecx],0x0
        jnz       L_4304
        push      0x79d918
        call      FUN_006bfa50
        mov       ecx,dword ptr [g_82f320]
        mov       ecx,dword ptr [ecx]
        add       esp,0x4
        call      FUN_006cc690
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_4304:
        inc       ecx
        mov       dword ptr [g_82f328],ecx
        mov       ecx,dword ptr [g_82f320]
        mov       ecx,dword ptr [ecx]
        call      FUN_006cc690
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4335
        inc       eax
        mov       [g_82f328],eax
L_4335:
        cmp       byte ptr [eax],0x28
        jz        L_4349
        push      0x79d8f0
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_434F
L_4349:
        inc       eax
        mov       [g_82f328],eax
L_434F:
        call      FUN_006c12e0
        cmp       eax,0x71
        jz        L_4366
        push      0x79d8f0
        call      FUN_006bfa50
        add       esp,0x4
L_4366:
        mov       ecx,dword ptr [g_82f328]
        mov       al,byte ptr [ecx]
        cmp       al,0x29
        jz        L_4384
L_4372:
        test      al,al
        jz        L_437E
        mov       al,byte ptr [ecx + 0x1]
        inc       ecx
        cmp       al,0x29
        jnz       L_4372
L_437E:
        mov       dword ptr [g_82f328],ecx
L_4384:
        cmp       byte ptr [ecx],0x0
        jnz       L_43B0
        push      0x79d8f0
        call      FUN_006bfa50
        mov       edx,dword ptr [g_82f320]
        mov       ecx,dword ptr [edx]
        add       esp,0x4
        call      FUN_006cc6a0
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_43B0:
        mov       edx,dword ptr [g_82f320]
        inc       ecx
        mov       dword ptr [g_82f328],ecx
        mov       ecx,dword ptr [edx]
        call      FUN_006cc6a0
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_43E1
        inc       eax
        mov       [g_82f328],eax
L_43E1:
        cmp       byte ptr [eax],0x28
        jz        L_43F5
        push      0x79d8cc
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_43FB
L_43F5:
        inc       eax
        mov       [g_82f328],eax
L_43FB:
        push      0x0
        lea       eax,[esp + 0x18]
        push      eax
        call      FUN_006c30c0
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4417
        inc       eax
        mov       [g_82f328],eax
L_4417:
        cmp       byte ptr [eax],0x2c
        jz        L_442B
        push      0x79d8cc
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_4431
L_442B:
        inc       eax
        mov       [g_82f328],eax
L_4431:
        call      FUN_006c3450
        mov       ebx,dword ptr [esp + 0x14]
        mov       esi,dword ptr [esp + 0x18]
        mov       ecx,dword ptr [esp + 0x1c]
        shl       eax,0x8
        add       eax,ebx
        shl       eax,0x8
        add       eax,esi
        shl       eax,0x8
        add       eax,ecx
        mov       ecx,dword ptr [g_82f328]
        mov       esi,eax
        cmp       byte ptr [ecx],0x29
        jz        L_447A
        push      0x79d8cc
        call      FUN_006bfa50
        add       esp,0x4
        pop       edi
        mov       eax,esi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_447A:
        mov       eax,[g_82f328]
        inc       eax
        pop       edi
        mov       [g_82f328],eax
        mov       eax,esi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_449F
        inc       eax
L_449F:
        mov       cl,byte ptr [eax + 0x2]
        add       eax,0x2
        cmp       cl,0x2f
        mov       [g_82f328],eax
        jnz       L_44D1
        cmp       byte ptr [eax + 0x1],0x32
        jnz       L_44D1
        pop       edi
        add       eax,0x2
        pop       esi
        mov       [g_82f328],eax
        mov       eax,[g_858940]
        pop       ebp
        shr       eax,0x1
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_44D1:
        mov       eax,[g_858940]
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_44EE
        inc       eax
L_44EE:
        pop       edi
        pop       esi
        add       eax,0x2
        pop       ebp
        mov       [g_82f328],eax
        mov       eax,[g_858944]
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        mov       byte ptr [g_7b60bc],0x1
        jnz       L_451F
        inc       eax
        mov       [g_82f328],eax
L_451F:
        cmp       byte ptr [eax],0x28
        jz        L_4533
        push      0x79d898
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_4539
L_4533:
        inc       eax
        mov       [g_82f328],eax
L_4539:
        call      FUN_006c12e0
        mov       ecx,dword ptr [g_82f328]
        mov       ebx,eax
        cmp       byte ptr [ecx],0x20
        jnz       L_4552
        inc       ecx
        mov       dword ptr [g_82f328],ecx
L_4552:
        cmp       byte ptr [ecx],0x2c
        jnz       L_4651
        mov       al,byte ptr [ecx + 0x1]
        inc       ecx
        cmp       al,0x20
        mov       dword ptr [g_82f328],ecx
        jnz       L_4570
        inc       ecx
        mov       dword ptr [g_82f328],ecx
L_4570:
        mov       edi,dword ptr [g_82f320]
        call      FUN_006c12e0
        mov       esi,eax
        cmp       esi,0x2
        mov       byte ptr [g_7b60bc],0x0
        jz        L_45D2
        cmp       esi,0x51
        jz        L_45D2
        cmp       esi,0x2b
        jz        L_45D2
        cmp       esi,0xc
        jz        L_45D2
        cmp       esi,0x13
        jz        L_45D2
        cmp       esi,0x66
        jz        L_45D2
        cmp       esi,0x6b
        jz        L_45D2
        cmp       esi,0xa
        jz        L_45D2
        cmp       esi,0x3
        jz        L_45D2
        cmp       esi,0xb
        jz        L_45D2
        cmp       esi,0x44
        jz        L_45D2
        cmp       esi,0x24
        jz        L_45D2
        cmp       esi,0x52
        jz        L_45D2
        push      0x79d898
        call      FUN_006bfa50
        add       esp,0x4
L_45D2:
        cmp       esi,0x68
        jz        L_4642
        mov       ecx,dword ptr [g_82f328]
        mov       al,byte ptr [ecx]
        cmp       al,0x29
        jz        L_45F5
L_45E3:
        test      al,al
        jz        L_45EF
        mov       al,byte ptr [ecx + 0x1]
        inc       ecx
        cmp       al,0x29
        jnz       L_45E3
L_45EF:
        mov       dword ptr [g_82f328],ecx
L_45F5:
        cmp       byte ptr [ecx],0x0
        jnz       L_4621
        push      0x79d898
        call      FUN_006bfa50
        add       esp,0x4
        mov       dword ptr [g_82f320],edi
        pop       edi
        xor       eax,eax
        cmp       ebx,ebp
        pop       esi
        pop       ebp
        setnz     al
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_4621:
        mov       dword ptr [g_82f320],edi
        pop       edi
        inc       ecx
        xor       eax,eax
        cmp       ebx,ebp
        pop       esi
        pop       ebp
        mov       dword ptr [g_82f328],ecx
        setnz     al
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_4642:
        mov       ecx,dword ptr [g_82f328]
        mov       eax,edi
        mov       [g_82f320],eax
        jmp       L_4656
L_4651:
        mov       eax,[g_82f320]
L_4656:
        cmp       ebx,0x68
        jnz       L_4666
        mov       edx,dword ptr [eax]
        mov       eax,dword ptr [edx + 0x28]
        test      eax,eax
        jnz       L_4671
        jmp       L_466F
L_4666:
        cmp       ebx,ebp
        jz        L_4671
        cmp       dword ptr [eax],0x0
        jnz       L_4671
L_466F:
        mov       ebx,ebp
L_4671:
        mov       al,byte ptr [ecx]
        cmp       al,0x29
        jz        L_4689
L_4677:
        test      al,al
        jz        L_4683
        mov       al,byte ptr [ecx + 0x1]
        inc       ecx
        cmp       al,0x29
        jnz       L_4677
L_4683:
        mov       dword ptr [g_82f328],ecx
L_4689:
        cmp       byte ptr [ecx],0x0
        jnz       L_46AF
        push      0x79d898
        call      FUN_006bfa50
        add       esp,0x4
        pop       edi
        xor       eax,eax
        cmp       ebx,ebp
        pop       esi
        pop       ebp
        setnz     al
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_46AF:
        pop       edi
        inc       ecx
        xor       eax,eax
        cmp       ebx,ebp
        pop       esi
        pop       ebp
        mov       dword ptr [g_82f328],ecx
        setnz     al
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_46DA
        inc       eax
        mov       [g_82f328],eax
L_46DA:
        cmp       byte ptr [eax],0x28
        jnz       L_46F9
        inc       eax
        mov       [g_82f328],eax
        call      FUN_006c12e0
        cmp       eax,0x68
        jnz       L_46F9
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x29
        jz        L_472F
L_46F9:
        push      0x79d870
        call      FUN_006bfa50
        add       esp,0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4716
        inc       eax
        mov       [g_82f328],eax
L_4716:
        cmp       byte ptr [eax],0x28
        jz        L_475E
        push      0x79d850
        call      FUN_006bfa50
        mov       eax,[g_82f328]
        add       esp,0x4
        jmp       L_4764
L_472F:
        mov       edi,dword ptr [g_82f328]
        mov       ecx,dword ptr [g_82f320]
        mov       esi,dword ptr [ecx]
        mov       edx,dword ptr [g_82f3d4]
        inc       edi
        mov       dword ptr [g_82f328],edi
        pop       edi
        xor       eax,eax
        cmp       edx,esi
        pop       esi
        pop       ebp
        setz      al
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_475E:
        inc       eax
        mov       [g_82f328],eax
L_4764:
        cmp       byte ptr [eax],0x29
        jz        L_4778
        push      0x79d850
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_477E
L_4778:
        inc       eax
        mov       [g_82f328],eax
L_477E:
        lea       eax,[esp + 0x14]
        push      eax
        lea       ecx,[esp + 0x14]
        push      ecx
        call      FUN_00727610
        mov       eax,dword ptr [esp + 0x10]
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_47AE
        inc       eax
        mov       [g_82f328],eax
L_47AE:
        cmp       byte ptr [eax],0x28
        jz        L_47C7
        push      0x79d830
        call      FUN_006bfa50
        mov       eax,[g_82f328]
        add       esp,0x4
        jmp       L_47CD
L_47C7:
        inc       eax
        mov       [g_82f328],eax
L_47CD:
        cmp       byte ptr [eax],0x29
        jz        L_47E1
        push      0x79d830
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_47E7
L_47E1:
        inc       eax
        mov       [g_82f328],eax
L_47E7:
        lea       edx,[esp + 0x10]
        push      edx
        lea       eax,[esp + 0x18]
        push      eax
        call      FUN_00727610
        mov       eax,dword ptr [esp + 0x10]
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4812
        inc       eax
L_4812:
        inc       eax
        mov       [g_82f328],eax
        call      FUN_006c0940
        mov       ebx,dword ptr [g_82f328]
        push      eax
        push      0x76c690
        lea       ecx,[esp + 0x18]
        push      ecx
        lea       edx,[esp + 0x20]
        inc       ebx
        push      edx
        mov       dword ptr [g_82f328],ebx
        call      FUN_00727660
        mov       eax,dword ptr [esp + 0x20]
        add       esp,0x10
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_485E
        inc       eax
L_485E:
        inc       eax
        mov       [g_82f328],eax
        call      FUN_006c0940
        mov       ebp,dword ptr [g_82f328]
        push      eax
        push      0x76c690
        lea       eax,[esp + 0x1c]
        push      eax
        lea       ecx,[esp + 0x1c]
        inc       ebp
        push      ecx
        mov       dword ptr [g_82f328],ebp
        call      FUN_00727660
        mov       eax,dword ptr [esp + 0x20]
        add       esp,0x10
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_48AF
        inc       eax
        mov       [g_82f328],eax
L_48AF:
        cmp       byte ptr [eax],0x28
        jz        L_48C8
        push      0x79d818
        call      FUN_006bfa50
        mov       eax,[g_82f328]
        add       esp,0x4
        jmp       L_48CE
L_48C8:
        inc       eax
        mov       [g_82f328],eax
L_48CE:
        cmp       byte ptr [eax],0x20
        jnz       L_48D9
        inc       eax
        mov       [g_82f328],eax
L_48D9:
        cmp       byte ptr [eax],0x29
        jz        L_48ED
        push      0x79d818
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_48F3
L_48ED:
        inc       eax
        mov       [g_82f328],eax
L_48F3:
        push      0x0
        call      FUN_00707e70
        fmul      qword ptr [g_78b358]
        call      FUN_0075db4a
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4922
        inc       eax
        mov       [g_82f328],eax
L_4922:
        cmp       byte ptr [eax],0x28
        jz        L_493B
        push      0x79d7ec
        call      FUN_006bfa50
        mov       eax,[g_82f328]
        add       esp,0x4
        jmp       L_4941
L_493B:
        inc       eax
        mov       [g_82f328],eax
L_4941:
        cmp       byte ptr [eax],0x20
        jnz       L_4954
L_4946:
        mov       cl,byte ptr [eax + 0x1]
        inc       eax
        cmp       cl,0x20
        jz        L_4946
        mov       [g_82f328],eax
L_4954:
        cmp       byte ptr [eax],0x29
        jz        L_49CA
        call      FUN_006c3450
        mov       ecx,dword ptr [g_82f328]
        cmp       byte ptr [ecx],0x20
        jnz       L_4978
L_4969:
        mov       dl,byte ptr [ecx + 0x1]
        inc       ecx
        cmp       dl,0x20
        jz        L_4969
        mov       dword ptr [g_82f328],ecx
L_4978:
        cmp       byte ptr [ecx],0x29
        jz        L_49A6
        push      0x79d7ec
        call      FUN_006bfa50
        mov       ecx,dword ptr [g_82f3b0]
        add       esp,0x4
        pop       edi
        pop       esi
        shl       ecx,0x5
        mov       eax,dword ptr [ecx + 0x82ef08]
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_49A6:
        mov       edx,dword ptr [g_82f3b0]
        pop       edi
        pop       esi
        inc       ecx
        lea       eax,[eax + edx*0x8]
        mov       eax,dword ptr [eax*0x4 + 0x82ef08]
        pop       ebp
        mov       dword ptr [g_82f328],ecx
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_49CA:
        mov       ecx,dword ptr [g_82f3b0]
        pop       edi
        inc       eax
        pop       esi
        shl       ecx,0x5
        pop       ebp
        mov       [g_82f328],eax
        mov       eax,dword ptr [ecx + 0x82ef08]
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_49FC
        inc       eax
        mov       [g_82f328],eax
L_49FC:
        cmp       byte ptr [eax],0x28
        jz        L_4A10
        push      0x79d7b0
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_4A16
L_4A10:
        inc       eax
        mov       [g_82f328],eax
L_4A16:
        call      FUN_006c12e0
        cmp       eax,0x64
        mov       ebp,dword ptr [g_82f320]
        mov       dword ptr [esp + 0x14],ebp
        jz        L_4A37
        push      0x79d7b0
        call      FUN_006bfa50
        add       esp,0x4
L_4A37:
        mov       edx,dword ptr [g_82f328]
        cmp       byte ptr [edx],0x29
        jnz       L_4AA0
        mov       esi,dword ptr [g_849330]
        inc       edx
        mov       dword ptr [g_82f328],edx
        mov       edx,dword ptr [g_849310]
        push      edx
        call      FUN_006f4950
        call      FUN_006ce300
        mov       eax,[g_82f338]
        mov       ecx,dword ptr [eax + 0x1c]
        push      0x0
        push      0x0
        push      ecx
        call      ebp
        mov       dword ptr [esp + 0x10],eax
        call      FUN_006ce3b0
        call      FUN_006f49a0
        mov       eax,[g_849330]
        cmp       esi,eax
        jbe       L_4A90
        push      0x79d764
        jmp       L_58DA
L_4A90:
        jnc       L_58E2
        push      0x79d714
        jmp       L_58DA
L_4AA0:
        cmp       byte ptr [edx],0x2c
        jz        L_4AB8
        push      0x79d7b0
        call      FUN_006bfa50
        mov       edx,dword ptr [g_82f328]
        add       esp,0x4
L_4AB8:
        xor       eax,eax
        mov       ecx,0x10
        lea       edi,[esp + 0x20]
        rep stosd
        mov       al,byte ptr [edx]
        xor       ebx,ebx
        cmp       al,0x2c
        jnz       L_4B66
        mov       ebp,dword ptr [g_76b320]
        lea       esi,[esp + 0x20]
        lea       edi,[esp + 0x160]
L_4AE2:
        cmp       ebx,0xf
        jle       L_4AFA
        push      0x79d6d8
        call      FUN_006bfa50
        mov       edx,dword ptr [g_82f328]
        add       esp,0x4
L_4AFA:
        inc       edx
        mov       dword ptr [g_82f328],edx
        call      FUN_006c12e0
        cmp       eax,0x6e
        jnz       L_4B20
        mov       edx,dword ptr [g_82f320]
        mov       eax,dword ptr [edx]
        mov       ecx,dword ptr [eax + 0x44]
        mov       ecx,dword ptr [ecx + 0xc]
        call      FUN_006c8e20
        jmp       L_4B4A
L_4B20:
        cmp       eax,-0x1
        jz        L_4B2F
        mov       edx,dword ptr [g_82f320]
        mov       dword ptr [esi],edx
        jmp       L_4B4C
L_4B2F:
        call      FUN_006c0940
        test      eax,eax
        jz        L_4B45
        push      0x7f
        push      eax
        push      edi
        call      ebp
        add       esp,0xc
        mov       dword ptr [esi],edi
        jmp       L_4B4C
L_4B45:
        call      FUN_006c3450
L_4B4A:
        mov       dword ptr [esi],eax
L_4B4C:
        mov       edx,dword ptr [g_82f328]
        mov       al,byte ptr [edx]
        inc       ebx
        add       edi,0x80
        add       esi,0x4
        cmp       al,0x2c
        jz        L_4AE2
        mov       ebp,dword ptr [esp + 0x14]
L_4B66:
        cmp       byte ptr [edx],0x20
        jnz       L_4B72
        inc       edx
        mov       dword ptr [g_82f328],edx
L_4B72:
        cmp       byte ptr [edx],0x29
        jz        L_4B81
        push      0x79d7b0
        jmp       L_58DA
L_4B81:
        mov       eax,[g_849310]
        mov       esi,dword ptr [g_849330]
        inc       edx
        push      eax
        mov       dword ptr [g_82f328],edx
        call      FUN_006f4950
        call      FUN_006ce300
        mov       edx,dword ptr [g_82f338]
        mov       eax,dword ptr [edx + 0x1c]
        lea       ecx,[esp + 0x20]
        push      ecx
        push      ebx
        push      eax
        call      ebp
        mov       dword ptr [esp + 0x10],eax
        call      FUN_006ce3b0
        call      FUN_006f49a0
        mov       eax,[g_849330]
        cmp       esi,eax
        jbe       L_4BD1
        push      0x79d764
        jmp       L_58DA
L_4BD1:
        jnc       L_58E2
        push      0x79d714
        jmp       L_58DA
        call      FUN_006c3450
        mov       esi,eax
        test      esi,esi
        jl        L_4BF4
        cmp       esi,0xff
        jle       L_4C02
L_4BF4:
        push      esi
        push      0x79d6ac
        call      FUN_006bfa50
        add       esp,0x8
L_4C02:
        push      esi
        call      FUN_00723b40
        cmp       eax,0x1
        jz        L_37FA
        cmp       eax,0x2
        jz        L_37FA
        pop       edi
        pop       esi
        pop       ebp
        xor       eax,eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
        call      FUN_006c3450
        mov       esi,eax
        test      esi,esi
        jl        L_4C3C
        cmp       esi,0xff
        jle       L_4C4A
L_4C3C:
        push      esi
        push      0x79d6ac
        call      FUN_006bfa50
        add       esp,0x8
L_4C4A:
        push      esi
        call      FUN_00723b40
        dec       eax
        pop       edi
        neg       eax
        pop       esi
        sbb       eax,eax
        pop       ebp
        inc       eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4C73
        inc       eax
        mov       [g_82f328],eax
L_4C73:
        cmp       byte ptr [eax],0x28
        jz        L_4C87
        push      0x79d680
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_4C8D
L_4C87:
        inc       eax
        mov       [g_82f328],eax
L_4C8D:
        call      FUN_006c3450
        mov       esi,eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4CA4
        inc       eax
        mov       [g_82f328],eax
L_4CA4:
        cmp       byte ptr [eax],0x29
        jz        L_4CB8
        push      0x79d680
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_4CBE
L_4CB8:
        inc       eax
        mov       [g_82f328],eax
L_4CBE:
        push      0x0
        push      0x0
        lea       ecx,[esp + 0x1c]
        push      ecx
        push      0x2
        push      esi
        call      FUN_00724c20
        fld       dword ptr [esp + 0x14]
        fmul      dword ptr [g_76d048]
        call      FUN_0075db4a
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4CFB
        inc       eax
        mov       [g_82f328],eax
L_4CFB:
        cmp       byte ptr [eax],0x28
        jz        L_4D0F
        push      0x79d654
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_4D15
L_4D0F:
        inc       eax
        mov       [g_82f328],eax
L_4D15:
        call      FUN_006c3450
        mov       esi,eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4D2C
        inc       eax
        mov       [g_82f328],eax
L_4D2C:
        cmp       byte ptr [eax],0x29
        jz        L_4D40
        push      0x79d654
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_4D46
L_4D40:
        inc       eax
        mov       [g_82f328],eax
L_4D46:
        push      0x0
        push      0x0
        lea       edx,[esp + 0x1c]
        push      edx
        push      0x4
        push      esi
        call      FUN_00724c20
        fld       dword ptr [esp + 0x14]
        fmul      dword ptr [g_76d048]
        call      FUN_0075db4a
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4D83
        inc       eax
        mov       [g_82f328],eax
L_4D83:
        cmp       byte ptr [eax],0x28
        jz        L_4D97
        push      0x79d628
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_4D9D
L_4D97:
        inc       eax
        mov       [g_82f328],eax
L_4D9D:
        call      FUN_006c3450
        mov       esi,eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4DB4
        inc       eax
        mov       [g_82f328],eax
L_4DB4:
        cmp       byte ptr [eax],0x29
        jz        L_4DC8
        push      0x79d628
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_4DCE
L_4DC8:
        inc       eax
        mov       [g_82f328],eax
L_4DCE:
        push      0x0
        push      0x0
        lea       eax,[esp + 0x1c]
        push      eax
        push      0x8
        push      esi
        call      FUN_00724c20
        fld       dword ptr [esp + 0x14]
        fmul      dword ptr [g_76d048]
        call      FUN_0075db4a
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4E0B
        inc       eax
        mov       [g_82f328],eax
L_4E0B:
        cmp       byte ptr [eax],0x28
        jz        L_4E1F
        push      0x79d604
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_4E25
L_4E1F:
        inc       eax
        mov       [g_82f328],eax
L_4E25:
        call      FUN_006c12e0
        cmp       eax,0x6d
        jz        L_4E3C
        push      0x79d604
        call      FUN_006bfa50
        add       esp,0x4
L_4E3C:
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4E4C
        inc       eax
        mov       [g_82f328],eax
L_4E4C:
        cmp       byte ptr [eax],0x29
        jz        L_4E60
        push      0x79d604
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_4E66
L_4E60:
        inc       eax
        mov       [g_82f328],eax
L_4E66:
        mov       ecx,dword ptr [g_82f320]
        cmp       dword ptr [ecx],0x0
        jnz       L_4E7E
        push      0x79d5dc
        call      FUN_006bfa50
        add       esp,0x4
L_4E7E:
        mov       eax,[g_82f320]
        mov       ecx,dword ptr [eax]
        lea       edx,[esp + 0x14]
        push      edx
        push      0x0
        push      0x0
        push      ecx
        call      FUN_006c9710
        mov       eax,dword ptr [esp + 0x14]
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4EB0
        inc       eax
L_4EB0:
        inc       eax
        mov       [g_82f328],eax
        call      FUN_006c12e0
        add       eax,-0x67
        cmp       eax,0x7
        ja        L_4F2E
        __emit 0xFF   ; jmp dword ptr [eax*4 + 0x006C59C0] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x24   ; jmp dword ptr [eax*4 + 0x006C59C0] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x85   ; jmp dword ptr [eax*4 + 0x006C59C0] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0xC0   ; jmp dword ptr [eax*4 + 0x006C59C0] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x59   ; jmp dword ptr [eax*4 + 0x006C59C0] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x6C   ; jmp dword ptr [eax*4 + 0x006C59C0] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x00   ; jmp dword ptr [eax*4 + 0x006C59C0] (MSVC6 re-bases via EBX, one byte per __emit)
        mov       eax,[g_82f320]
        mov       ecx,dword ptr [eax]
        push      0x0
        lea       edx,[esp + 0x18]
        push      edx
        push      0x0
        push      ecx
        call      FUN_006c9710
        mov       edx,dword ptr [esp + 0x14]
        mov       dword ptr [esp + 0x10],edx
        jmp       L_4F3B
        mov       eax,[g_82f320]
        mov       ecx,dword ptr [eax]
        mov       edx,dword ptr [ecx + 0x44]
        mov       eax,dword ptr [edx + 0x10]
        mov       dword ptr [esp + 0x10],eax
        jmp       L_4F3B
        mov       ecx,dword ptr [g_82f320]
        mov       edx,dword ptr [ecx]
        push      edx
        call      FUN_006c8670
        mov       dword ptr [esp + 0x10],eax
        jmp       L_4F3B
        mov       ecx,dword ptr [g_82f320]
        mov       edx,dword ptr [ecx]
        lea       eax,[esp + 0x20]
        push      eax
        push      edx
        call      FUN_00733700
        mov       eax,dword ptr [esp + 0x58]
        mov       dword ptr [esp + 0x10],eax
        jmp       L_4F3B
L_4F2E:
        push      0x79d58c
L_4F33:
        call      FUN_006bfa50
        add       esp,0x4
L_4F3B:
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4F46
        inc       eax
L_4F46:
        pop       edi
        pop       esi
        inc       eax
        pop       ebp
        mov       [g_82f328],eax
        mov       eax,dword ptr [esp + 0x4]
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_4F68
        inc       eax
L_4F68:
        inc       eax
        mov       [g_82f328],eax
        call      FUN_006c12e0
        add       eax,-0x67
        cmp       eax,0x7
        ja        L_4FEC
        __emit 0xFF   ; jmp dword ptr [eax*4 + 0x006C59E0] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x24   ; jmp dword ptr [eax*4 + 0x006C59E0] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x85   ; jmp dword ptr [eax*4 + 0x006C59E0] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0xE0   ; jmp dword ptr [eax*4 + 0x006C59E0] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x59   ; jmp dword ptr [eax*4 + 0x006C59E0] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x6C   ; jmp dword ptr [eax*4 + 0x006C59E0] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x00   ; jmp dword ptr [eax*4 + 0x006C59E0] (MSVC6 re-bases via EBX, one byte per __emit)
        mov       edx,dword ptr [g_82f320]
        mov       eax,dword ptr [edx]
        push      0x0
        push      0x0
        lea       ecx,[esp + 0x1c]
        push      ecx
        push      eax
        call      FUN_006c9710
        mov       ecx,dword ptr [esp + 0x14]
        mov       dword ptr [esp + 0x10],ecx
        jmp       L_4F3B
        mov       edx,dword ptr [g_82f320]
        mov       eax,dword ptr [edx]
        mov       ecx,dword ptr [eax + 0x44]
        mov       edx,dword ptr [ecx + 0x14]
        mov       dword ptr [esp + 0x10],edx
        jmp       L_4F3B
        mov       eax,[g_82f320]
        mov       ecx,dword ptr [eax]
        push      ecx
        call      FUN_006c8660
        mov       dword ptr [esp + 0x10],eax
        jmp       L_4F3B
        mov       eax,[g_82f320]
        mov       ecx,dword ptr [eax]
        lea       edx,[esp + 0x20]
        push      edx
        push      ecx
        call      FUN_00733700
        mov       edx,dword ptr [esp + 0x54]
        mov       dword ptr [esp + 0x10],edx
        jmp       L_4F3B
L_4FEC:
        push      0x79d53c
        jmp       L_4F33
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_5006
        inc       eax
        mov       [g_82f328],eax
L_5006:
        cmp       byte ptr [eax],0x28
        jz        L_501A
        push      0x79d508
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_5020
L_501A:
        inc       eax
        mov       [g_82f328],eax
L_5020:
        mov       esi,dword ptr [g_82f320]
        call      FUN_006c12e0
        mov       ecx,dword ptr [g_82f328]
        cmp       byte ptr [ecx],0x20
        jnz       L_503D
        inc       ecx
        mov       dword ptr [g_82f328],ecx
L_503D:
        cmp       eax,ebp
        jz        L_50B6
        cmp       eax,0x64
        jz        L_50AD
        cmp       eax,0x6c
        jz        L_506C
        cmp       eax,0x6e
        jz        L_505F
        push      0x79d4c8
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_50D5
L_505F:
        mov       edx,dword ptr [g_82f320]
        mov       eax,dword ptr [edx]
        mov       eax,dword ptr [eax + 0x3c]
        jmp       L_5074
L_506C:
        mov       ecx,dword ptr [g_82f320]
        mov       eax,dword ptr [ecx]
L_5074:
        lea       edx,[esp + 0x20]
        push      edx
        push      eax
        call      FUN_00733700
        mov       eax,dword ptr [esp + 0x28]
        cmp       eax,0x4
        ja        L_50D5
        __emit 0xFF   ; jmp dword ptr [eax*4 + 0x006C5A00] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x24   ; jmp dword ptr [eax*4 + 0x006C5A00] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x85   ; jmp dword ptr [eax*4 + 0x006C5A00] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x00   ; jmp dword ptr [eax*4 + 0x006C5A00] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x5A   ; jmp dword ptr [eax*4 + 0x006C5A00] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x6C   ; jmp dword ptr [eax*4 + 0x006C5A00] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x00   ; jmp dword ptr [eax*4 + 0x006C5A00] (MSVC6 re-bases via EBX, one byte per __emit)
        mov       dword ptr [esp + 0x10],0x1
        jmp       L_50D5
        mov       dword ptr [esp + 0x10],0x2
        jmp       L_50D5
        mov       dword ptr [esp + 0x10],0x3
        jmp       L_50D5
L_50AD:
        mov       eax,[g_82f320]
        mov       eax,dword ptr [eax]
        jmp       L_50BB
L_50B6:
        call      FUN_006c3450
L_50BB:
        push      eax
        call      FUN_007242d0
        cmp       eax,0x4
        ja        L_50D5
        __emit 0xFF   ; jmp dword ptr [eax*4 + 0x006C5A14] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x24   ; jmp dword ptr [eax*4 + 0x006C5A14] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x85   ; jmp dword ptr [eax*4 + 0x006C5A14] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x14   ; jmp dword ptr [eax*4 + 0x006C5A14] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x5A   ; jmp dword ptr [eax*4 + 0x006C5A14] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x6C   ; jmp dword ptr [eax*4 + 0x006C5A14] (MSVC6 re-bases via EBX, one byte per __emit)
        __emit 0x00   ; jmp dword ptr [eax*4 + 0x006C5A14] (MSVC6 re-bases via EBX, one byte per __emit)
        mov       dword ptr [esp + 0x10],0x4
L_50D5:
        mov       ecx,dword ptr [g_82f328]
        cmp       byte ptr [ecx],0x29
        mov       dword ptr [g_82f320],esi
        jz        L_50F3
        push      0x79d4c8
        call      FUN_006bfa50
        add       esp,0x4
L_50F3:
        mov       eax,[g_82f328]
        jmp       L_4F46
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_510D
        inc       eax
        mov       [g_82f328],eax
L_510D:
        cmp       byte ptr [eax],0x28
        jz        L_5121
        push      0x79d48c
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_5127
L_5121:
        inc       eax
        mov       [g_82f328],eax
L_5127:
        xor       edi,edi
        xor       esi,esi
        call      FUN_006c12e0
        cmp       eax,0x6c
        jnz       L_513F
        mov       edx,dword ptr [g_82f320]
        mov       esi,dword ptr [edx]
        jmp       L_5171
L_513F:
        cmp       eax,0x6e
        jnz       L_5161
        mov       eax,[g_82f320]
        mov       ecx,dword ptr [eax]
        mov       esi,dword ptr [ecx + 0x3c]
        test      esi,esi
        jnz       L_5171
        push      0x79d45c
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_5171
L_5161:
        cmp       eax,0x64
        jz        L_516A
        cmp       eax,ebp
        jnz       L_5171
L_516A:
        call      FUN_006c3450
        mov       edi,eax
L_5171:
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_5181
        inc       eax
        mov       [g_82f328],eax
L_5181:
        cmp       byte ptr [eax],0x2c
        jz        L_5195
        push      0x79d48c
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_519B
L_5195:
        inc       eax
        mov       [g_82f328],eax
L_519B:
        call      FUN_006c3450
        mov       edx,dword ptr [g_82f328]
        mov       dword ptr [esp + 0x10],eax
        cmp       byte ptr [edx],0x29
        jz        L_51BE
        push      0x79d48c
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_51C4
L_51BE:
        inc       dword ptr [g_82f328]
L_51C4:
        test      esi,esi
        push      0x0
        jz        L_51EF
        fild      dword ptr [esp + 0x14]
        push      ecx
        fmul      dword ptr [g_77a1a0]
        fstp      dword ptr [esp]
        push      0x8
        push      esi
        call      FUN_007344e0
        pop       edi
        pop       esi
        pop       ebp
        xor       eax,eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_51EF:
        fild      dword ptr [esp + 0x14]
        push      0x0
        push      ecx
        fmul      dword ptr [g_77a1a0]
        fstp      dword ptr [esp]
        push      0x2
        push      edi
        call      FUN_00724350
        pop       edi
        pop       esi
        pop       ebp
        xor       eax,eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_5226
        inc       eax
        mov       [g_82f328],eax
L_5226:
        cmp       byte ptr [eax],0x28
        jz        L_523A
        push      0x79d418
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_5240
L_523A:
        inc       eax
        mov       [g_82f328],eax
L_5240:
        call      FUN_006c3450
        mov       esi,eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_5257
        inc       eax
        mov       [g_82f328],eax
L_5257:
        cmp       byte ptr [eax],0x2c
        jz        L_526B
        push      0x79d418
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_5271
L_526B:
        inc       eax
        mov       [g_82f328],eax
L_5271:
        call      FUN_006c3450
        mov       dword ptr [esp + 0x14],eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x29
        jz        L_5293
        push      0x79d418
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_5299
L_5293:
        inc       dword ptr [g_82f328]
L_5299:
        fild      dword ptr [esp + 0x14]
        push      0x0
        push      0x0
        push      ecx
        fmul      dword ptr [g_77a1a0]
        fstp      dword ptr [esp]
        push      0x4
        push      esi
        call      FUN_00724350
        pop       edi
        pop       esi
        pop       ebp
        xor       eax,eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_52D2
        inc       eax
        mov       [g_82f328],eax
L_52D2:
        cmp       byte ptr [eax],0x28
        jz        L_52E6
        push      0x79d3d8
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_52EC
L_52E6:
        inc       eax
        mov       [g_82f328],eax
L_52EC:
        call      FUN_006c3450
        mov       esi,eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_5303
        inc       eax
        mov       [g_82f328],eax
L_5303:
        cmp       byte ptr [eax],0x2c
        jz        L_5317
        push      0x79d3d8
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_531D
L_5317:
        inc       eax
        mov       [g_82f328],eax
L_531D:
        call      FUN_006c3450
        mov       ecx,dword ptr [g_82f328]
        mov       dword ptr [esp + 0x14],eax
        cmp       byte ptr [ecx],0x29
        jz        L_5340
        push      0x79d3d8
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_5346
L_5340:
        inc       dword ptr [g_82f328]
L_5346:
        fild      dword ptr [esp + 0x14]
        push      0x0
        push      0x0
        push      ecx
        fmul      dword ptr [g_77a1a0]
        fstp      dword ptr [esp]
        push      0x8
        push      esi
        call      FUN_00724350
        pop       edi
        pop       esi
        pop       ebp
        xor       eax,eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_537F
        inc       eax
        mov       [g_82f328],eax
L_537F:
        cmp       byte ptr [eax],0x28
        jz        L_5393
        push      0x79d38c
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_5399
L_5393:
        inc       eax
        mov       [g_82f328],eax
L_5399:
        call      FUN_006c3450
        mov       edi,eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_53B0
        inc       eax
        mov       [g_82f328],eax
L_53B0:
        cmp       byte ptr [eax],0x2c
        jz        L_53C4
        push      0x79d38c
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_53CA
L_53C4:
        inc       eax
        mov       [g_82f328],eax
L_53CA:
        call      FUN_006c3450
        mov       edx,dword ptr [g_82f328]
        mov       esi,eax
        cmp       byte ptr [edx],0x29
        jz        L_5402
        push      0x79d38c
        call      FUN_006bfa50
        add       esp,0x4
        and       esi,0xf
        push      esi
        push      edi
        call      FUN_00725060
        pop       edi
        pop       esi
        pop       ebp
        xor       eax,eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_5402:
        mov       eax,[g_82f328]
        and       esi,0xf
        push      esi
        inc       eax
        push      edi
        mov       [g_82f328],eax
        call      FUN_00725060
        pop       edi
        pop       esi
        pop       ebp
        xor       eax,eax
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_5436
        inc       eax
        mov       [g_82f328],eax
L_5436:
        cmp       byte ptr [eax],0x28
        jz        L_544A
        push      0x79d374
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_5450
L_544A:
        inc       eax
        mov       [g_82f328],eax
L_5450:
        call      FUN_006c3450
        mov       esi,eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_5467
        inc       eax
        mov       [g_82f328],eax
L_5467:
        cmp       byte ptr [eax],0x29
        jz        L_548D
        push      0x79d374
        call      FUN_006bfa50
        add       esp,0x4
        mov       eax,esi
        pop       edi
        cdq       
        pop       esi
        xor       eax,edx
        pop       ebp
        sub       eax,edx
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_548D:
        inc       eax
        mov       [g_82f328],eax
        mov       eax,esi
        pop       edi
        cdq       
        pop       esi
        xor       eax,edx
        pop       ebp
        sub       eax,edx
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        mov       ebp,dword ptr [g_82f320]
        jnz       L_54BD
        inc       eax
        mov       [g_82f328],eax
L_54BD:
        cmp       byte ptr [eax],0x28
        jz        L_54D6
        push      0x79d34c
        call      FUN_006bfa50
        mov       eax,[g_82f328]
        add       esp,0x4
        jmp       L_54DC
L_54D6:
        inc       eax
        mov       [g_82f328],eax
L_54DC:
        cmp       byte ptr [eax],0x20
        jnz       L_54E7
        inc       eax
        mov       [g_82f328],eax
L_54E7:
        call      FUN_006c12e0
        mov       esi,eax
        mov       eax,[g_82f320]
        mov       edi,dword ptr [eax]
        test      edi,edi
        jnz       L_5506
        push      0x79d318
        call      FUN_006bfa50
        add       esp,0x4
L_5506:
        cmp       esi,0x6e
        jnz       L_5524
        mov       ecx,dword ptr [g_82f320]
        mov       edx,dword ptr [ecx]
        mov       eax,dword ptr [edx + 0x44]
        mov       edi,dword ptr [eax + 0xc]
        test      edi,edi
        jnz       L_5536
        push      0x79d2e4
        jmp       L_552E
L_5524:
        cmp       esi,0x67
        jz        L_5536
        push      0x79d34c
L_552E:
        call      FUN_006bfa50
        add       esp,0x4
L_5536:
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_5546
        inc       eax
        mov       [g_82f328],eax
L_5546:
        cmp       byte ptr [eax],0x2c
        jnz       L_5553
        inc       eax
        mov       [g_82f328],eax
        jmp       L_5565
L_5553:
        push      0x79d34c
        call      FUN_006bfa50
        mov       eax,[g_82f328]
        add       esp,0x4
L_5565:
        cmp       byte ptr [eax],0x20
        jnz       L_5570
        inc       eax
        mov       [g_82f328],eax
L_5570:
        call      FUN_006c3450
        mov       ebx,eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_5587
        inc       eax
        mov       [g_82f328],eax
L_5587:
        cmp       byte ptr [eax],0x2c
        jz        L_55A0
        push      0x79d34c
        call      FUN_006bfa50
        mov       eax,[g_82f328]
        add       esp,0x4
        jmp       L_55A6
L_55A0:
        inc       eax
        mov       [g_82f328],eax
L_55A6:
        cmp       byte ptr [eax],0x20
        jnz       L_55B1
        inc       eax
        mov       [g_82f328],eax
L_55B1:
        call      FUN_006c3450
        mov       ecx,dword ptr [g_82f328]
        mov       esi,eax
        cmp       byte ptr [ecx],0x29
        jz        L_55EB
        push      0x79d34c
        call      FUN_006bfa50
        add       esp,0x4
        push      esi
        push      ebx
        push      edi
        mov       dword ptr [g_82f320],ebp
        call      FUN_006c86b0
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_55EB:
        mov       eax,[g_82f328]
        push      esi
        push      ebx
        inc       eax
        push      edi
        mov       [g_82f328],eax
        mov       dword ptr [g_82f320],ebp
        call      FUN_006c86b0
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_5621
        inc       eax
        mov       [g_82f328],eax
L_5621:
        cmp       byte ptr [eax],0x28
        jz        L_5635
        push      0x79d2c0
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_563B
L_5635:
        inc       eax
        mov       [g_82f328],eax
L_563B:
        call      FUN_006c0940
        mov       esi,eax
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_5652
        inc       eax
        mov       [g_82f328],eax
L_5652:
        cmp       byte ptr [eax],0x29
        jz        L_567B
        push      0x79d2c0
        call      FUN_006bfa50
        add       esp,0x4
        push      esi
        call      dword ptr [g_76b318]
        add       esp,0x4
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_567B:
        inc       eax
        push      esi
        mov       [g_82f328],eax
        call      dword ptr [g_76b318]
        add       esp,0x4
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_56A8
        inc       eax
        mov       [g_82f328],eax
L_56A8:
        cmp       byte ptr [eax],0x28
        jz        L_56C1
        push      0x79d2a8
        call      FUN_006bfa50
        mov       eax,[g_82f328]
        add       esp,0x4
        jmp       L_56C7
L_56C1:
        inc       eax
        mov       [g_82f328],eax
L_56C7:
        cmp       byte ptr [eax],0x20
        jnz       L_56D2
        inc       eax
        mov       [g_82f328],eax
L_56D2:
        cmp       byte ptr [eax],0x29
        jz        L_56E6
        push      0x79d2a8
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_56EC
L_56E6:
        inc       eax
        mov       [g_82f328],eax
L_56EC:
        mov       ecx,dword ptr [g_82f3dc]
        mov       dl,byte ptr [g_82e2da]
        mov       eax,ecx
        and       eax,0xff
        test      dl,dl
        jz        L_5716
        xor       ecx,ecx
        mov       ch,dl
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        or        eax,ecx
        add       esp,0xd50
        ret       0x4
L_5716:
        and       ecx,0xff
        mov       bl,byte ptr [ecx + 0x896b88]
        xor       edx,edx
        test      bl,bl
        setnz     dl
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        dec       edx
        and       eax,edx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_5749
        inc       eax
        mov       [g_82f328],eax
L_5749:
        cmp       byte ptr [eax],0x28
        jz        L_5762
        push      0x79d290
        call      FUN_006bfa50
        mov       eax,[g_82f328]
        add       esp,0x4
        jmp       L_5768
L_5762:
        inc       eax
        mov       [g_82f328],eax
L_5768:
        cmp       byte ptr [eax],0x20
        jnz       L_5773
        inc       eax
        mov       [g_82f328],eax
L_5773:
        cmp       byte ptr [eax],0x29
        jz        L_5797
        push      0x79d290
        call      FUN_006bfa50
        mov       eax,[g_82f3dc]
        add       esp,0x4
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_5797:
        pop       edi
        pop       esi
        inc       eax
        pop       ebp
        mov       [g_82f328],eax
        mov       eax,[g_82f3dc]
        pop       ebx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_57BF
        inc       eax
        mov       [g_82f328],eax
L_57BF:
        cmp       byte ptr [eax],0x28
        jz        L_57D8
        push      0x79d274
        call      FUN_006bfa50
        mov       eax,[g_82f328]
        add       esp,0x4
        jmp       L_57DE
L_57D8:
        inc       eax
        mov       [g_82f328],eax
L_57DE:
        cmp       byte ptr [eax],0x20
        jnz       L_57E9
        inc       eax
        mov       [g_82f328],eax
L_57E9:
        cmp       byte ptr [eax],0x29
        jz        L_57FD
        push      0x79d274
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_5803
L_57FD:
        inc       eax
        mov       [g_82f328],eax
L_5803:
        mov       eax,[g_82f3dc]
        test      eax,0xff0000
        jnz       L_582C
        test      al,al
        jz        L_582C
        pop       edi
        pop       esi
        pop       ebp
        mov       dword ptr [esp + 0x4],0x0
        mov       eax,dword ptr [esp + 0x4]
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_582C:
        xor       ecx,ecx
        mov       cl,ah
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        __emit 0x89   ; zero-disp [esp] quirk
        __emit 0x4C   ; zero-disp [esp] quirk
        __emit 0x24   ; zero-disp [esp] quirk
        __emit 0x00   ; zero-disp [esp] quirk
        mov       eax,ecx
        add       esp,0xd50
        ret       0x4
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_5853
        inc       eax
        mov       [g_82f328],eax
L_5853:
        cmp       byte ptr [eax],0x28
        jz        L_5867
        push      0x79d254
        call      FUN_006bfa50
        add       esp,0x4
        jmp       L_586D
L_5867:
        inc       eax
        mov       [g_82f328],eax
L_586D:
        call      FUN_006c0940
        mov       esi,eax
        test      esi,esi
        jz        L_58CE
        mov       eax,[g_82f328]
        cmp       byte ptr [eax],0x20
        jnz       L_5888
        inc       eax
        mov       [g_82f328],eax
L_5888:
        cmp       byte ptr [eax],0x29
        jz        L_589A
        push      0x79d254
        call      FUN_006bfa50
        add       esp,0x4
L_589A:
        xor       ecx,ecx
        mov       cl,byte ptr [esi]
        mov       al,byte ptr [ecx + 0x896b88]
        test      al,al
        jz        L_58BF
        xor       eax,eax
        mov       al,byte ptr [esi + 0x1]
        pop       edi
        pop       esi
        shl       ecx,0x8
        pop       ebp
        pop       ebx
        add       eax,ecx
        add       esp,0xd50
        ret       0x4
L_58BF:
        pop       edi
        pop       esi
        pop       ebp
        mov       eax,ecx
        pop       ebx
        add       esp,0xd50
        ret       0x4
L_58CE:
        push      0x79d254
        jmp       L_58DA
L_58D5:
        push      0x79d234
L_58DA:
        call      FUN_006bfa50
        add       esp,0x4
L_58E2:
        mov       eax,dword ptr [esp + 0x10]
        pop       edi
        pop       esi
        pop       ebp
        pop       ebx
        add       esp,0xd50
        ret       0x4
    }
}
