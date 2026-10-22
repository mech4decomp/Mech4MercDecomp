/* FUN_0058566E - 0x0058566E, size 4002 B (true extent 3998 B: code + jump table)
 * __thiscall, RET 8 (one double arg + one dword arg). Large gameplay update
 * handler: reads global state, dispatches on object state via an in-function
 * jump table at 0x005865EC (8 entries), performs extensive FPU math and issues
 * many virtual calls. Jump table data emitted as literal reference bytes.
 *
 * Genuine __emit (all justified):
 *   - fnstsw ax (no-WAIT DF E0) + test ah,imm8 (F6 C4 xx): MSVC6 adds 9B WAIT /
 *     rejects test ah,imm8.
 *   - fstp st(0) (DD D8): MSVC6 emits a different fstp encoding.
 *   - jmp dword ptr [eax*4+0x5865ec] (FF 24 85 ...): MSVC6 re-bases via EBX.
 *   - jump-table data (8 relocated dword pointers): inline asm has no `dd`.
 */
#include <windows.h>

/* extern data symbols (absolute addresses) */
extern int    g_7dab44;   /* 0x007dab44 */
extern int    g_7dab40;   /* 0x007dab40 */
extern float  g_76c5b0;   /* 0x0076c5b0 */
extern char   g_7b71e4;   /* 0x007b71e4 */
extern int    g_781588;   /* 0x00781588 */
extern float  g_76d070;   /* 0x0076d070 */
extern int    g_7b4384;   /* 0x007b4384 */
extern int    g_7b8d90;   /* 0x007b8d90 */
extern int    g_7b8d88;   /* 0x007b8d88 */
extern int    g_7b8d8c;   /* 0x007b8d8c */
extern int    g_7b8d68;   /* 0x007b8d68 */
extern int    g_7b8d6c;   /* 0x007b8d6c */
extern int    g_7b8d70;   /* 0x007b8d70 */
extern char   g_7f1f7d;   /* 0x007f1f7d */
extern float  g_7822e8;   /* 0x007822e8 */
extern float  g_781570;   /* 0x00781570 */
extern int    g_7dd268;   /* 0x007dd268 */
extern int    g_7822d0;   /* 0x007822d0 */
extern int    g_77f5b8;   /* 0x0077f5b8 */
extern int    g_7822a4;   /* 0x007822a4 */
extern float  g_77deac;   /* 0x0077deac */
extern float  g_7b8d10;   /* 0x007b8d10 */
extern float  g_7b8d0c;   /* 0x007b8d0c */
extern float  g_7b8d08;   /* 0x007b8d08 */
extern float  g_76d064;   /* 0x0076d064 */
extern int    g_7b220c;   /* 0x007b220c */
extern float  g_7822a0;   /* 0x007822a0 */
extern int    g_7dc728;   /* 0x007dc728 */

/* extern function symbols (rel32 calls) */
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_005f39c0(void);
extern void __cdecl FUN_00586610(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_005852f0(void);
extern void __cdecl FUN_0058bd70(void);
extern void __cdecl FUN_0058c6c0(void);
extern void __cdecl FUN_0058d3a0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_00588600(void);
extern void __cdecl FUN_00589510(void);
extern void __cdecl FUN_00589610(void);
extern void __cdecl FUN_005a3090(void);
extern void __cdecl FUN_00603d70(void);
extern void __cdecl FUN_0058a070(void);
extern void __cdecl FUN_0058aed0(void);
extern void __cdecl FUN_00586630(void);
extern void __cdecl FUN_005f4b30(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0058a840(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_004f8480(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_0055b620(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00618110(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004ebcf0(void);
extern void __cdecl FUN_004ebe90(void);
extern void __cdecl FUN_004e27f0(void);
extern void __cdecl FUN_00602480(void);
extern void __cdecl FUN_005ac190(void);
extern void __cdecl FUN_005ac440(void);
extern void __cdecl FUN_005acb80(void);
extern void __cdecl FUN_005eb8b0(void);
extern void __cdecl FUN_00590440(void);
extern void __cdecl FUN_004e2f40(void);

__declspec(naked) void func_0058566E(void)
{
    __asm {
        nop
        nop
        sub esp, 0xb0
        mov eax, dword ptr [g_7dab44]
        fld qword ptr [esp + 0xb4]
        mov edx, dword ptr [g_7dab40]
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr [eax]
        fsub qword ptr [ebp + 0xe4]
        xor ecx, edx
        mov edx, dword ptr [ecx + 0xc]
        xor edx, 0x85739531
        mov al, byte ptr [edx + 0x17]
        fstp dword ptr [esp + 8]
        fld dword ptr [ebp + 0x5d4]
        test al, al
        fcomp dword ptr [g_76c5b0]
        sete al
        mov byte ptr [g_7b71e4], al
        push esi
        push edi
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        mov esi, 0x3f800000
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jne L_5731
        push 0xf3
        call FUN_00637b40
        mov ecx, eax
        call FUN_00637a20
        fmul dword ptr [esp + 0x10]
        fsubr dword ptr [ebp + 0x5d4]
        fst dword ptr [ebp + 0x5d4]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        je L_5701
        mov dword ptr [ebp + 0x5d4], 0
L_5701:
        mov eax, dword ptr [ebp + 0x3ec]
        test eax, eax
        mov dword ptr [ebp + 0x5d8], esi
        mov dword ptr [ebp + 0x5dc], esi
        mov dword ptr [ebp + 0x5e0], esi
        je L_572b
        mov ecx, dword ptr [g_781588]
        mov dword ptr [ebp + 0x5e4], ecx
        jmp L_5731
L_572b:
        mov dword ptr [ebp + 0x5e4], esi
L_5731:
        mov ecx, dword ptr [ebp + 0x3b0]
        test ecx, ecx
        mov edi, dword ptr [esp + 0xc4]
        push ebx
        mov ebx, dword ptr [esp + 0xc4]
        je L_5751
        mov edx, dword ptr [ecx]
        push edi
        push ebx
        call dword ptr [edx + 0x40]
L_5751:
        fld dword ptr [esp + 0x14]
        push edi
        fadd dword ptr [ebp + 0x608]
        push ebx
        mov ecx, ebp
        fstp dword ptr [ebp + 0x608]
        call FUN_005f39c0
        mov ecx, dword ptr [ebp + 0xe0]
        mov eax, dword ptr [ecx + 0x14]
        add eax, -8
        cmp eax, 7
        ja L_5dca
        __emit 0xFF   /* jmp dword ptr [eax*4 + 0x5865ec] (MSVC6 re-bases via EBX) */
        __emit 0x24
        __emit 0x85
        __emit 0xEC
        __emit 0x65
        __emit 0x58
        __emit 0x00
        mov eax, dword ptr [ebp + 0xd8]
        lea esi, [eax + 0x80]
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        call FUN_00586610
        push esi
        lea ecx, [esp + 0x34]
        call FUN_00419480
        fld dword ptr [ebp + 0x518]
        fsub dword ptr [ebp + 0x514]
        fmul dword ptr [g_76d070]
        fadd dword ptr [ebp + 0x514]
        fcomp dword ptr [esp + 0x34]
        fld dword ptr [g_7b4384]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jne L_57db
        fchs
        fld dword ptr [esp + 0x18]
        fmul st(0), st(1)
        jmp L_57e1
L_57db:
        fld st(0)
        fmul dword ptr [esp + 0x18]
L_57e1:
        fadd dword ptr [ebp + 0x180]
        mov eax, dword ptr [g_7b8d90]
        mov ecx, dword ptr [g_7b8d88]
        mov edx, dword ptr [g_7b8d8c]
        fstp dword ptr [ebp + 0x180]
        mov esi, dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x1c]
        mov dword ptr [ebp + 0x2a4], ecx
        fmul st(0), st(1)
        mov ecx, dword ptr [g_7b8d68]
        mov dword ptr [ebp + 0x2b0], ecx
        mov ecx, dword ptr [ebp + 0x2f4]
        fadd dword ptr [ebp + 0x184]
        fstp dword ptr [ebp + 0x184]
        mov dword ptr [ebp + 0x2a8], edx
        fld dword ptr [esp + 0x20]
        mov edx, dword ptr [g_7b8d6c]
        fmul st(0), st(1)
        mov dword ptr [ebp + 0x2b4], edx
        mov edx, dword ptr [ecx]
        fadd dword ptr [ebp + 0x188]
        fstp dword ptr [ebp + 0x188]
        mov dword ptr [ebp + 0x2ac], eax
        mov eax, dword ptr [g_7b8d70]
        mov dword ptr [ebp + 0x2b8], eax
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
        xor eax, eax
        mov al, byte ptr [g_7f1f7d]
        push eax
        push esi
        call dword ptr [edx + 0xc]
        push edi
        push ebx
        mov ecx, ebp
        call FUN_005852f0
        push esi
        mov ecx, ebp
        call FUN_0058bd70
        push esi
        mov ecx, ebp
        call FUN_0058c6c0
        push esi
        mov ecx, ebp
        call FUN_0058d3a0
        mov ecx, dword ptr [ebp + 0xe0]
        cmp dword ptr [ecx + 0x14], 0xf
        je L_5dca
        lea esi, [ebp + 0x51c]
        mov ecx, esi
        call FUN_0041fd80
        test eax, eax
        je L_58c8
        mov ecx, esi
        mov byte ptr [ebp + 0x524], 1
        call FUN_0041fd80
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx + 0x18]
L_58c8:
        lea esi, [ebp + 0x544]
        mov ecx, esi
        call FUN_0041fd80
        test eax, eax
        je L_58f8
        mov ecx, esi
        call FUN_0041fd80
        mov eax, dword ptr [eax + 0xe0]
        mov edx, dword ptr [eax]
        push 0
        push 5
        mov ecx, eax
        call dword ptr [edx + 4]
        mov ecx, esi
        call FUN_0041fcb0
L_58f8:
        lea esi, [ebp + 0x54c]
        mov ecx, esi
        call FUN_0041fd80
        test eax, eax
        je L_5928
        mov ecx, esi
        call FUN_0041fd80
        mov eax, dword ptr [eax + 0xe0]
        mov edx, dword ptr [eax]
        push 0
        push 5
        mov ecx, eax
        call dword ptr [edx + 4]
        mov ecx, esi
        call FUN_0041fcb0
L_5928:
        lea esi, [ebp + 0x554]
        mov ecx, esi
        call FUN_0041fd80
        test eax, eax
        je L_5958
        mov ecx, esi
        call FUN_0041fd80
        mov eax, dword ptr [eax + 0xe0]
        mov edx, dword ptr [eax]
        push 0
        push 5
        mov ecx, eax
        call dword ptr [edx + 4]
        mov ecx, esi
        call FUN_0041fcb0
L_5958:
        lea esi, [ebp + 0x55c]
        mov ecx, esi
        call FUN_0041fd80
        test eax, eax
        je L_5dca
        mov ecx, esi
        call FUN_0041fd80
        mov eax, dword ptr [eax + 0xe0]
        mov edx, dword ptr [eax]
        push 0
        push 5
        mov ecx, eax
        call dword ptr [edx + 4]
        mov ecx, esi
        call FUN_0041fcb0
        jmp L_5dca
        mov ecx, ebp
        call FUN_00588600
        mov esi, dword ptr [esp + 0x14]
        mov eax, dword ptr [ebp]
        push esi
        mov ecx, ebp
        call dword ptr [eax + 0x150]
        push esi
        mov ecx, ebp
        call FUN_00589510
        xor ecx, ecx
        mov cl, byte ptr [g_7f1f7d]
        push ecx
        mov ecx, ebp
        call FUN_00589610
        mov ecx, dword ptr [ebp + 0x9a0]
        call FUN_005a3090
        mov ecx, dword ptr [g_7b8d70]
        mov eax, dword ptr [g_7b8d6c]
        mov edx, dword ptr [g_7b8d68]
        mov dword ptr [ebp + 0x2b8], ecx
        mov ecx, dword ptr [g_7b8d90]
        lea edi, [ebp + 0x2a4]
        mov dword ptr [ebp + 0x2b4], eax
        mov eax, dword ptr [g_7b8d8c]
        mov dword ptr [edi + 8], ecx
        mov ecx, dword ptr [ebp + 0x2f4]
        mov dword ptr [ebp + 0x2b0], edx
        mov edx, dword ptr [g_7b8d88]
        mov dword ptr [edi + 4], eax
        cmp dword ptr [ecx + 0x14], 0x26
        mov dword ptr [edi], edx
        jne L_5a3a
        call FUN_00603d70
        cmp eax, 0x12
        jne L_5a3a
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 0x114]
        fmul dword ptr [g_76d070]
        fstp dword ptr [ebp + 0x440]
L_5a3a:
        mov ebx, dword ptr [ebp + 0x2f4]
        mov eax, dword ptr [ebx]
        xor ecx, ecx
        mov cl, byte ptr [g_7f1f7d]
        push ecx
        push esi
        mov ecx, ebx
        call dword ptr [eax + 0xc]
        mov al, byte ptr [ebx + 0x1d]
        test al, al
        je L_5a72
        mov ecx, ebx
        call FUN_00603d70
        cmp eax, 0x26
        jne L_5a72
        mov edx, dword ptr [ebp + 0x440]
        mov dword ptr [ebp + 0x2ac], edx
        jmp L_5a84
L_5a72:
        cmp dword ptr [ebx + 0x14], 0x26
        jne L_5a84
        mov eax, dword ptr [ebp + 0x440]
        mov dword ptr [ebp + 0x2ac], eax
L_5a84:
        mov al, byte ptr [ebp + 0x5a8]
        test al, al
        jne L_5a9e
        mov dword ptr [edi], 0
        mov dword ptr [ebp + 0x2ac], 0
L_5a9e:
        lea eax, [ebp + 0x2b0]
        push eax
        push edi
        push esi
        mov ecx, ebp
        call FUN_0058a070
        push esi
        mov ecx, ebp
        call FUN_0058bd70
        push esi
        mov ecx, ebp
        call FUN_0058c6c0
        push esi
        mov ecx, ebp
        call FUN_0058d3a0
        jmp L_5dca
        mov ecx, dword ptr [ebp + 0x9a0]
        call FUN_005a3090
        mov ecx, ebp
        call FUN_00588600
        mov eax, dword ptr [g_7b8d90]
        mov ecx, dword ptr [g_7b8d88]
        mov edx, dword ptr [g_7b8d8c]
        mov esi, dword ptr [esp + 0x14]
        mov dword ptr [ebp + 0x2ac], eax
        mov eax, dword ptr [g_7b8d70]
        mov dword ptr [ebp + 0x2b8], eax
        xor eax, eax
        mov al, byte ptr [g_7f1f7d]
        mov dword ptr [ebp + 0x2a4], ecx
        mov ecx, dword ptr [g_7b8d68]
        mov dword ptr [ebp + 0x2a8], edx
        mov edx, dword ptr [g_7b8d6c]
        mov dword ptr [ebp + 0x2b0], ecx
        mov ecx, dword ptr [ebp + 0x2f4]
        push eax
        mov dword ptr [ebp + 0x2b4], edx
        mov edx, dword ptr [ecx]
        push esi
        call dword ptr [edx + 0xc]
        push edi
        push ebx
        mov ecx, ebp
        call FUN_0058aed0
        push esi
        mov ecx, ebp
        call FUN_0058bd70
        push esi
        mov ecx, ebp
        call FUN_0058c6c0
        push esi
        mov ecx, ebp
        call FUN_0058d3a0
        cmp byte ptr [ebp + 0x9b0], 1
        jne L_5dca
        mov ecx, ebp
        call FUN_00586630
        jmp L_5dca
        mov eax, dword ptr [ebp + 0xd8]
        fld dword ptr [eax + 0x90]
        mov edx, dword ptr [g_7b4384]
        add eax, 0x80
        fchs
        fld dword ptr [eax + 0x14]
        mov dword ptr [esp + 0x10], edx
        fchs
        fstp dword ptr [esp + 0x28]
        fld dword ptr [eax + 0x18]
        mov eax, dword ptr [g_7b8d68]
        fchs
        fstp dword ptr [esp + 0x2c]
        mov edx, dword ptr [g_7b8d6c]
        fmul dword ptr [esp + 0x10]
        lea ebx, [ebp + 0x2b0]
        xor esi, esi
        mov dword ptr [ebp + 0x608], esi
        fadd dword ptr [ebp + 0x180]
        fstp dword ptr [ebp + 0x180]
        mov dword ptr [ebx], eax
        fld dword ptr [esp + 0x28]
        mov eax, dword ptr [g_7b8d70]
        fmul dword ptr [esp + 0x10]
        fadd dword ptr [ebp + 0x184]
        fstp dword ptr [ebp + 0x184]
        mov dword ptr [ebx + 4], edx
        fld dword ptr [esp + 0x2c]
        fmul dword ptr [esp + 0x10]
        fadd dword ptr [ebp + 0x188]
        fstp dword ptr [ebp + 0x188]
        mov dword ptr [ebx + 8], eax
        mov eax, dword ptr [ebp + 0x2f4]
        mov dl, byte ptr [eax + 0x1d]
        test dl, dl
        jne L_5c4a
        mov eax, dword ptr [eax + 0x14]
        cmp eax, 0x1e
        jl L_5c25
        cmp eax, 0x21
        jg L_5c25
        mov byte ptr [ebp + 0x52c], 1
        jmp L_5c4a
L_5c25:
        mov edx, dword ptr [ebp + 0x10]
        shr edx, 0x13
        test dl, 1
        jne L_5c4a
        mov eax, dword ptr [ecx]
        push esi
        push 0xb
        call dword ptr [eax + 4]
        mov dword ptr [ebp + 0x830], esi
        mov dword ptr [ebp + 0x834], esi
        mov dword ptr [ebp + 0x440], esi
L_5c4a:
        mov ecx, ebp
        call FUN_00588600
        mov edi, dword ptr [esp + 0x14]
        push edi
        mov ecx, ebp
        call FUN_005f4b30
        push esi
        call FUN_00707e70
        fcomp qword ptr [ebp + 0x564]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        je L_5c91
        fld dword ptr [ebp + 0x170]
        fabs
        fld dword ptr [g_7b220c]
        fcompp
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jne L_5d01
        mov al, byte ptr [ebp + 0x52c]
        test al, al
        je L_5d01
L_5c91:
        mov ecx, dword ptr [g_7b8d68]
        mov edx, dword ptr [g_7b8d6c]
        mov eax, dword ptr [g_7b8d70]
        mov dword ptr [ebp + 0x168], ecx
        mov dword ptr [ebp + 0x198], ecx
        mov ecx, dword ptr [ebp + 0x10]
        shr ecx, 0x13
        test cl, 1
        mov dword ptr [ebp + 0x16c], edx
        mov dword ptr [ebp + 0x170], eax
        mov dword ptr [ebp + 0x19c], edx
        mov dword ptr [ebp + 0x1a0], eax
        jne L_5cef
        mov ecx, dword ptr [ebp + 0x2f4]
        mov edx, dword ptr [ecx]
        xor eax, eax
        mov al, byte ptr [g_7f1f7d]
        push esi
        mov dword ptr [ebp + 0x5ac], esi
        push eax
        push 0xa
        call dword ptr [edx + 8]
        jmp L_5d01
L_5cef:
        cmp dword ptr [ebp + 0x5b4], esi
        jne L_5d01
        mov dword ptr [ebp + 0x5b4], 2
L_5d01:
        mov ecx, dword ptr [ebp + 0x2f4]
        mov edx, dword ptr [ecx]
        xor eax, eax
        mov al, byte ptr [g_7f1f7d]
        push eax
        push edi
        call dword ptr [edx + 0xc]
        fld dword ptr [ebp + 0x2a4]
        mov edx, dword ptr [ebp + 0x2a8]
        mov eax, dword ptr [ebp + 0x2ac]
        lea ecx, [ebp + 0x2a4]
        lea esi, [ebp + 0x168]
        mov dword ptr [esp + 0x1c], edx
        mov edx, dword ptr [esi]
        mov dword ptr [ecx], edx
        fcom dword ptr [ecx]
        mov edx, dword ptr [esi + 8]
        mov dword ptr [esp + 0x20], eax
        mov eax, dword ptr [esi + 4]
        mov dword ptr [ecx + 4], eax
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        mov dword ptr [ecx + 8], edx
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jne L_5d58
        fstp dword ptr [ecx]
        jmp L_5d5a
L_5d58:
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
L_5d5a:
        fld dword ptr [ebp + 0x2a8]
        fcomp dword ptr [esp + 0x1c]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        je L_5d75
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [ebp + 0x2a8], eax
L_5d75:
        fld dword ptr [ebp + 0x2ac]
        fcomp dword ptr [esp + 0x20]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        je L_5d90
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [ebp + 0x2ac], edx
L_5d90:
        push ebx
        push ecx
        push edi
        mov ecx, ebp
        call FUN_0058a840
        push edi
        mov ecx, ebp
        call FUN_0058bd70
        push edi
        mov ecx, ebp
        call FUN_0058c6c0
        push edi
        mov ecx, ebp
        call FUN_0058d3a0
        mov eax, dword ptr [ebp + 0xd8]
        add eax, 0x80
        push eax
        push esi
        lea ecx, [ebp + 0x198]
        call FUN_0041c680
L_5dca:
        fld dword ptr [ebp + 0x478]
        mov al, byte ptr [ebp + 0xdc]
        test al, al
        mov dword ptr [ebp + 0x898], 0
        fstp dword ptr [ebp + 0x8a0]
        fld dword ptr [ebp + 0x474]
        fstp dword ptr [ebp + 0x89c]
        je L_61c2
        mov ebx, dword ptr [ebp + 0xd8]
        mov ecx, dword ptr [ebx + 0x2c]
        mov dword ptr [esp + 0x30], ecx
        mov edx, dword ptr [ebx + 0x3c]
        mov ecx, dword ptr [g_7dab44]
        lea esi, [ebx + 0x20]
        mov dword ptr [esp + 0x34], edx
        mov eax, dword ptr [esi + 0x2c]
        mov dword ptr [esp + 0x38], eax
        mov eax, dword ptr [ecx]
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax + 0x20]
        lea edx, [esp + 0x30]
        push edx
        xor ecx, 0x85739531
        call FUN_004f8480
        dec eax
        je L_6138
        dec eax
        jne L_62c3
        mov eax, dword ptr [ebp + 0x3b0]
        test eax, eax
        je L_5e65
        mov eax, dword ptr [eax + 0xe0]
        test eax, eax
        je L_5e65
        cmp dword ptr [eax + 0x14], 6
        je L_62c3
L_5e65:
        mov ecx, 0xc
        lea edi, [esp + 0x3c]
        rep movsd
        mov eax, dword ptr [esp + 0x48]
        mov ecx, dword ptr [esp + 0x58]
        mov edx, dword ptr [esp + 0x68]
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [g_7dab44]
        mov dword ptr [esp + 0x1c], ecx
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x20], edx
        xor ecx, dword ptr [g_7dab40]
        mov esi, dword ptr [ecx + 0x20]
        mov edx, dword ptr [g_7b220c]
        push edx
        xor esi, 0x85739531
        lea edi, [esi + 0x227c]
        push offset g_7b8d88
        push edi
        call FUN_0041c540
        add esp, 0xc
        test al, al
        jne L_5fba
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x18]
        mov edx, dword ptr [esi + 0x2288]
        mov eax, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x14], ecx
        fld dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x10], edx
        fcomp dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x2c], eax
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jne L_5efa
        fld dword ptr [esp + 0x14]
        mov eax, edx
        fstp dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x14], eax
L_5efa:
        fld dword ptr [esp + 0x18]
        fcomp dword ptr [esp + 0x14]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        je L_5f11
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
        fld dword ptr [esp + 0x14]
        jmp L_5f26
L_5f11:
        fld dword ptr [esp + 0x18]
        fcomp dword ptr [esp + 0x10]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jne L_5f26
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
        fld dword ptr [esp + 0x10]
L_5f26:
        mov ecx, dword ptr [esi + 0x2290]
        fld dword ptr [esi + 0x2284]
        mov dword ptr [esp + 0x10], ecx
        fcom dword ptr [esp + 0x10]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jne L_5f51
        fstp dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x10], edx
L_5f51:
        fld dword ptr [esp + 0x20]
        fcomp st(1)
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        je L_5f64
        fstp dword ptr [esp + 0x2c]
        jmp L_5f7d
L_5f64:
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
        fld dword ptr [esp + 0x20]
        fcomp dword ptr [esp + 0x10]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jne L_5f7d
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x2c], eax
L_5f7d:
        fld st(0)
        fsub dword ptr [esp + 0x18]
        fld dword ptr [g_76c5b0]
        fld dword ptr [esp + 0x2c]
        fsub dword ptr [esp + 0x20]
        fld st(0)
        fmul st(0), st(1)
        fld st(2)
        __emit 0xD8   /* fmul st(3) (D8 CB) - MSVC6 parser mis-tracks FPU stack */
        __emit 0xCB
        __emit 0xDE   /* faddp st(1),st(0) (DE C1) */
        __emit 0xC1
        fld st(3)
        __emit 0xD8   /* fmul st(4) (D8 CC) - MSVC6 parser mis-tracks FPU stack */
        __emit 0xCC
        __emit 0xDE   /* faddp st(1),st(0) (DE C1) */
        __emit 0xC1
        fcomp dword ptr [g_7822e8]
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
        je L_62c1
        jmp L_5fc4
L_5fba:
        mov ecx, dword ptr [ebx + 0x7c]
        fld dword ptr [ebx + 0x5c]
        mov dword ptr [esp + 0x2c], ecx
L_5fc4:
        mov edx, dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x48]
        mov eax, dword ptr [esp + 0x2c]
        lea ecx, [esp + 0x3c]
        push ecx
        mov ecx, ebp
        mov dword ptr [esp + 0x5c], edx
        mov dword ptr [esp + 0x6c], eax
        call FUN_004daa20
        mov edx, dword ptr [ebp]
        push 1
        mov ecx, ebp
        call dword ptr [edx + 0x48]
        fld dword ptr [g_781570]
        fadd dword ptr [ebp + 0x9c8]
        push 0
        fstp dword ptr [esp + 0x14]
        call FUN_00707e70
        fcomp dword ptr [esp + 0x10]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jne L_62c3
        mov ecx, dword ptr [ebp + 0x3b0]
        test ecx, ecx
        je L_6126
        call FUN_0055b620
        cmp al, 1
        jne L_6126
        mov eax, dword ptr [g_7dd268]
        mov ecx, dword ptr [eax + 0x40ee8]
        mov eax, dword ptr [ecx + 0x48]
        test eax, eax
        je L_6126
        push offset g_7822d0
        lea ecx, [esp + 0x18]
        call FUN_00412570
        mov edx, dword ptr [g_7dab44]
        mov eax, dword ptr [edx]
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax + 0x44]
        xor ecx, 0x85739531
        je L_60a7
        mov ecx, dword ptr [eax + 0x44]
        xor ecx, 0x85739531
        call FUN_00618110
        mov edx, dword ptr [esp + 0x14]
        push eax
        push edx
        lea ecx, [esp + 0x18]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x18]
        call FUN_00412740
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je L_60df
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne L_60df
        jmp L_60d6
L_60a7:
        mov eax, dword ptr [esp + 0x14]
        push offset g_77f5b8
        push eax
        lea ecx, [esp + 0x18]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x18]
        call FUN_00412740
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je L_60df
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne L_60df
L_60d6:
        push eax
        call FUN_004084e0
        add esp, 4
L_60df:
        mov ecx, dword ptr [esp + 0x14]
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push ecx
        push 1
        call FUN_004ebcf0
        add esp, 0x18
        push 0
        mov ecx, eax
        call FUN_004ebe90
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je L_6126
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne L_6126
        push eax
        call FUN_004084e0
        add esp, 4
L_6126:
        push 0
        call FUN_00707e70
        fstp dword ptr [ebp + 0x9c8]
        jmp L_62c3
L_6138:
        fld dword ptr [g_781570]
        push 0
        fadd dword ptr [ebp + 0x9c8]
        fstp dword ptr [esp + 0x14]
        call FUN_00707e70
        fcomp dword ptr [esp + 0x10]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jne L_62c3
        mov ecx, dword ptr [ebp + 0x3b0]
        test ecx, ecx
        je L_61b0
        call FUN_0055b620
        cmp al, 1
        jne L_61b0
        mov edx, dword ptr [g_7dd268]
        mov eax, dword ptr [edx + 0x40ee8]
        mov ecx, dword ptr [eax + 0x48]
        test ecx, ecx
        je L_61b0
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_7822a4
        push 2
        call FUN_004ebcf0
        add esp, 0x18
        push 0
        mov ecx, eax
        call FUN_004ebe90
L_61b0:
        push 0
        call FUN_00707e70
        fstp dword ptr [ebp + 0x9c8]
        jmp L_62c3
L_61c2:
        lea ecx, [esp + 0x74]
        push ecx
        lea edx, [esp + 0x18]
        push edx
        mov edx, dword ptr [g_7dab44]
        lea eax, [esp + 0x74]
        push eax
        mov eax, dword ptr [edx]
        lea ecx, [esp + 0x7c]
        push ecx
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax + 0x1c]
        xor ecx, 0x85739531
        call FUN_004e27f0
        mov esi, dword ptr [ebp + 0xd8]
        fld dword ptr [esi + 0x4c]
        mov ecx, dword ptr [esi + 0x2c]
        fld dword ptr [esp + 0x14]
        mov edx, dword ptr [esi + 0x3c]
        fadd dword ptr [g_77deac]
        add esi, 0x20
        mov dword ptr [esp + 0x18], ecx
        fld dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x1c], edx
        fcomp st(1)
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        je L_6229
        fstp dword ptr [esp + 0x18]
        jmp L_624a
L_6229:
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
        fld dword ptr [esp + 0x74]
        fsub dword ptr [g_77deac]
        fld dword ptr [esp + 0x18]
        fcomp st(1)
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jne L_6248
        fstp dword ptr [esp + 0x18]
        jmp L_624a
L_6248:
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
L_624a:
        fld dword ptr [esp + 0x70]
        fadd dword ptr [g_77deac]
        fstp dword ptr [esp + 0x10]
        fcom dword ptr [esp + 0x10]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        je L_626b
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
        fld dword ptr [esp + 0x10]
        jmp L_628a
L_626b:
        fld dword ptr [esp + 0x6c]
        fsub dword ptr [g_77deac]
        fstp dword ptr [esp + 0x10]
        fcom dword ptr [esp + 0x10]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jne L_628a
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
        fld dword ptr [esp + 0x10]
L_628a:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, 0xc
        lea edi, [esp + 0x3c]
        rep movsd
        fstp dword ptr [esp + 0x68]
        mov ecx, dword ptr [esp + 0x1c]
        lea edx, [esp + 0x3c]
        mov dword ptr [esp + 0x58], ecx
        push edx
        mov ecx, ebp
        mov dword ptr [esp + 0x4c], eax
        call FUN_004daa20
        mov eax, dword ptr [ebp]
        push 1
        mov ecx, ebp
        call dword ptr [eax + 0x48]
        jmp L_62c3
L_62c1:
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
L_62c3:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0x20]
        mov esi, 0x3f800000
        push ebp
        xor ecx, 0x85739531
        mov dword ptr [ebp + 0x994], esi
        call FUN_00602480
        fld dword ptr [ebp + 0x994]
        mov eax, dword ptr [ebp + 0x3d4]
        fmul dword ptr [eax + 0x188]
        mov edi, dword ptr [ebp + 0x408]
        mov ecx, ebp
        fstp dword ptr [eax + 0x188]
        mov eax, dword ptr [ebp]
        call dword ptr [eax + 0x114]
        push ecx
        mov ecx, dword ptr [ebp + 0x440]
        fstp dword ptr [esp]
        push ecx
        mov ecx, edi
        call FUN_005ac190
        mov ecx, edi
        call FUN_005ac440
        fld dword ptr [ebp + 0x624]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jne L_63e8
        xor ebx, ebx
        push ebx
        call FUN_00707e70
        fcomp dword ptr [ebp + 0x624]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jne L_63ea
        cmp byte ptr [ebp + 0x620], 1
        jne L_63e0
        fld dword ptr [ebp + 0x630]
        mov byte ptr [ebp + 0x620], bl
        fld dword ptr [ebp + 0x62c]
        fcomp dword ptr [ebp + 0x628]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jne L_638f
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
        fld dword ptr [ebp + 0x634]
        jmp L_63c8
L_638f:
        fld dword ptr [ebp + 0x62c]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jne L_63c8
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
        fld dword ptr [ebp + 0x62c]
        fdiv dword ptr [ebp + 0x628]
        fld dword ptr [g_76d064]
        fsub st(0), st(1)
        fmul dword ptr [ebp + 0x630]
        fxch st(1)
        fmul dword ptr [ebp + 0x634]
        faddp st(1), st(0)
L_63c8:
        fstp dword ptr [ebp + 0x630]
        mov dword ptr [ebp + 0x628], esi
        mov dword ptr [ebp + 0x62c], ebx
        mov dword ptr [ebp + 0x634], ebx
L_63e0:
        mov dword ptr [ebp + 0x624], ebx
        jmp L_63ea
L_63e8:
        xor ebx, ebx
L_63ea:
        mov edx, dword ptr [ebp + 0x410]
        mov ecx, dword ptr [ebp + 0x40c]
        sub edx, ecx
        sar edx, 2
        je L_642a
        mov eax, ecx
        cmp dword ptr [eax], ebx
        je L_642a
        mov ecx, dword ptr [ebp + 0x410]
        mov esi, eax
        sub ecx, esi
        sar ecx, 2
        je L_6416
        mov esi, dword ptr [eax]
        jmp L_6418
L_6416:
        xor esi, esi
L_6418:
        mov ecx, edi
        call FUN_005acb80
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call FUN_005eb8b0
L_642a:
        mov al, byte ptr [ebp + 0x2f8]
        test al, al
        je L_6460
        mov al, byte ptr [ebp + 0x998]
        test al, al
        jne L_6460
        mov eax, dword ptr [ebp + 0x2f4]
        mov cl, byte ptr [eax + 0x1d]
        test cl, cl
        jne L_6451
        cmp dword ptr [eax + 0x14], 0x23
        je L_6459
L_6451:
        cmp dword ptr [ebp + 0x5b8], ebx
        je L_6460
L_6459:
        mov ecx, ebp
        call FUN_00590440
L_6460:
        mov al, byte ptr [ebp + 0xdc]
        test al, al
        mov byte ptr [ebp + 0x5a8], 1
        pop ebx
        je L_65df
        mov edx, dword ptr [g_7dab44]
        mov eax, dword ptr [edx]
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax + 0xc]
        xor ecx, 0x85739531
        mov al, byte ptr [ecx + 0x17]
        test al, al
        je L_65df
        mov esi, dword ptr [ebp + 0xd8]
        fld dword ptr [esi + 0x3c]
        add esi, 0x20
        fcomp dword ptr [g_7822a0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        je L_65df
        fld dword ptr [g_7b8d10]
        mov dword ptr [esp + 0x50], 0x44fa0000
        fmul dword ptr [g_7b8d10]
        fld dword ptr [g_7b8d0c]
        fmul dword ptr [g_7b8d0c]
        faddp st(1), st(0)
        fld dword ptr [g_7b8d08]
        fmul dword ptr [g_7b8d08]
        faddp st(1), st(0)
        fsqrt
        fdivr dword ptr [g_76d064]
        fld st(0)
        fmul dword ptr [g_7b8d08]
        fstp dword ptr [esp + 0x44]
        fld st(0)
        fmul dword ptr [g_7b8d0c]
        fstp dword ptr [esp + 0x48]
        fmul dword ptr [g_7b8d10]
        fstp dword ptr [esp + 0x4c]
        mov edx, dword ptr [esi + 0xc]
        mov dword ptr [esp + 0x38], edx
        mov eax, dword ptr [esi + 0x1c]
        mov dword ptr [esp + 0x3c], eax
        mov ecx, dword ptr [esi + 0x2c]
        mov dword ptr [esp + 0x40], ecx
        lea ecx, [esp + 0x74]
        lea edx, [esp + 0x38]
        lea eax, [esp + 0x14]
        push ecx
        mov ecx, dword ptr [g_7dc728]
        mov dword ptr [esp + 0x40], 0x447a0000
        mov dword ptr [esp + 0x78], edx
        mov dword ptr [esp + 0x7c], eax
        mov dword ptr [esp + 0x80], 0
        mov dword ptr [esp + 0x88], ebp
        mov dword ptr [esp + 0x8c], 0x1000
        call FUN_004e2f40
        fld dword ptr [esp + 0x44]
        fmul dword ptr [esp + 0x50]
        mov ecx, 0xc
        fld dword ptr [esp + 0x50]
        lea edi, [esp + 0x8c]
        fmul dword ptr [esp + 0x48]
        rep movsd
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x50]
        fmul dword ptr [esp + 0x4c]
        fstp dword ptr [esp + 0x34]
        fadd dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x30]
        lea ecx, [esp + 0x8c]
        fadd dword ptr [esp + 0x3c]
        push ecx
        mov ecx, ebp
        fstp dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x38]
        mov dword ptr [esp + 0xac], edx
        fadd dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x2c]
        mov eax, dword ptr [esp + 0x2c]
        mov dword ptr [esp + 0xbc], eax
        fstp dword ptr [esp + 0x9c]
        call FUN_004daa20
L_65df:
        pop edi
        pop esi
        pop ebp
        add esp, 0xb0
        ret 8
        nop

        /* jump-table data @ 0x005865EC (8 relocated pointers) */
        __emit 0x75   /* 0x00585B75 */
        __emit 0x5B
        __emit 0x58
        __emit 0x00
        __emit 0xCB   /* 0x00585ACB */
        __emit 0x5A
        __emit 0x58
        __emit 0x00
        __emit 0xCA   /* 0x00585DCA */
        __emit 0x5D
        __emit 0x58
        __emit 0x00
        __emit 0x91   /* 0x00585991 */
        __emit 0x59
        __emit 0x58
        __emit 0x00
        __emit 0xCA   /* 0x00585DCA */
        __emit 0x5D
        __emit 0x58
        __emit 0x00
        __emit 0xCA   /* 0x00585DCA */
        __emit 0x5D
        __emit 0x58
        __emit 0x00
        __emit 0xCA   /* 0x00585DCA */
        __emit 0x5D
        __emit 0x58
        __emit 0x00
        __emit 0x86   /* 0x00585786 */
        __emit 0x57
        __emit 0x58
        __emit 0x00
    }
}
