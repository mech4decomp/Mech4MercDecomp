/* FUN_005878CB - 0x005878CB, size 3343 B
 * __thiscall, RET 8. Large gameplay object update handler (damage/state
 * processing): reads global state, dispatches on [ebp+0x14] state value,
 * issues many virtual + helper calls.
 */
#include <windows.h>

/* extern data symbols (absolute addresses) */
extern int    g_7dab44;   /* 0x007dab44 */
extern int    g_7dab40;   /* 0x007dab40 */
extern double g_782348;   /* 0x00782348 */
extern float  g_76c5b0;   /* 0x0076c5b0 */
extern int    g_7b8d88;   /* 0x007b8d88 */
extern float  g_76d048;   /* 0x0076d048 */
extern int    g_7f1f88;   /* 0x007f1f88 */
extern int    g_7b54c4[]; /* 0x007b54c4 */
extern int    g_7dddbc;   /* 0x007dddbc */
extern float  g_7dddb4;   /* 0x007dddb4 */
extern float  g_7dddb8;   /* 0x007dddb8 */
extern char   g_782330[]; /* 0x00782330 */
extern float  g_76d064;   /* 0x0076d064 */
extern double g_782340;   /* 0x00782340 */
extern int    g_840048;   /* 0x00840048 */

/* extern function symbols (rel32 calls) */
extern void __cdecl FUN_005abdb0(void);
extern double __cdecl FUN_00707e70(int a);
extern void __cdecl FUN_00534630(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_005885e0(void);
extern void __cdecl FUN_004d5b70(void);
extern void __cdecl FUN_005ac070(void);
extern void __cdecl FUN_005a19c0(void);
extern void __cdecl FUN_005fa480(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00507f90(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_005fa8f0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_00584e50(void);
extern void __cdecl FUN_0058ba20(void);
extern void __cdecl FUN_0054a780(void);
extern void __cdecl FUN_00590610(void);
extern void __cdecl FUN_005fa300(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0054bbd0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005faa90(void);
extern void __cdecl FUN_004da2f0(void);
extern void __cdecl FUN_005fad50(void);
extern void __cdecl FUN_0058f230(void);
extern void __cdecl FUN_006d1ad0(void);
extern void __cdecl FUN_005a7e40(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004db240(void);
extern void __cdecl FUN_004da1f0(void);
extern void __cdecl FUN_00545dd0(void);
extern void __cdecl FUN_005f3ff0(void);

__declspec(naked) void func_005878CB(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        sub esp, 0x90
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp + 0xe0]
        cmp dword ptr [eax + 0x14], 0xb
        push esi
        push edi
        jne L_a03
        mov al, byte ptr [ebp + 0x4bc]
        cmp al, 0x17
        jne L_9c8
        mov ecx, dword ptr [g_7dab44]
        mov eax, dword ptr [ecx]
        xor eax, dword ptr [g_7dab40]
        mov edx, dword ptr [eax + 0xc]
        xor edx, 0x85739531
        mov eax, dword ptr [edx + 0x50]
        push eax
        call FUN_005abdb0
        add esp, 4
        cmp al, 1
        jne L_a03
        push 0
        call FUN_00707e70
        fsub qword ptr [ebp + 0x9d4]
        fcomp qword ptr [g_782348]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jne L_a03
        push 0
        push 2
        push 0x44
        push 4
        lea ecx, [esp + 0x3c]
        call FUN_00534630
        lea esi, [ebp + 0x14]
        push esi
        lea ecx, [esp + 0x40]
        call FUN_004ea0f0
        push 0x8bd620
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x48], 0
        mov word ptr [esp + 0x4a], 0
        call FUN_0040c5d0
        push 0x7b8d88
        lea ecx, [esp + 0x5c]
        call FUN_0040c5d0
        push esi
        lea ecx, [esp + 0x48]
        call FUN_005885e0
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, ebp
        mov dword ptr [esp + 0x44], 0x40000000
        mov byte ptr [esp + 0x4c], 0xc
        mov dword ptr [esp + 0x68], 0
        mov byte ptr [esp + 0x6c], 0
        mov dword ptr [esp + 0x70], 0xffffffff
        call FUN_004d5b70
        push 0x40000000
        jmp L_9eb
L_9c8:
        cmp al, 0x16
        jne L_a03
        push 0
        call FUN_00707e70
        fsub qword ptr [ebp + 0x9d4]
        fcomp qword ptr [g_782348]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jne L_a03
        push 0x3f800000
L_9eb:
        mov ecx, dword ptr [ebp + 0x408]
        call FUN_005ac070
        push 0
        call FUN_00707e70
        fstp qword ptr [ebp + 0x9d4]
L_a03:
        fld qword ptr [esp + 0xa4]
        push ecx
        fsub qword ptr [ebp + 0xe4]
        mov ecx, dword ptr [ebp + 0x9ac]
        fstp dword ptr [esp]
        call FUN_005a19c0
        mov al, byte ptr [ebp + 0x524]
        test al, al
        je L_a69
        mov edx, dword ptr [ebp + 0x78]
        lea ecx, [ebp + 0x78]
        mov byte ptr [ebp + 0x524], 0
        call dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 0x530]
        push 0
        push ecx
        add eax, 0x420
        push eax
        mov ecx, ebp
        call FUN_005fa480
        mov esi, eax
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        call dword ptr [edx + 0x34]
        mov ecx, dword ptr [esi + 0xe0]
        mov eax, dword ptr [ecx]
        push 0
        push 6
        call dword ptr [eax + 4]
L_a69:
        mov ecx, dword ptr [ebp + 0xe0]
        cmp dword ptr [ecx + 0x14], 0xf
        jne L_c93
        lea ebx, [ebp + 0x51c]
        mov ecx, ebx
        call FUN_0041fd80
        test eax, eax
        je L_ace
        mov ecx, dword ptr [ebp + 0x530]
        test ecx, ecx
        je L_ace
        lea edx, [esp + 0x2c]
        push edx
        call FUN_00507f90
        mov esi, eax
        mov ecx, 0xc
        lea edi, [esp + 0x70]
        lea eax, [esp + 0x70]
        rep movsd
        push eax
        mov ecx, ebx
        call FUN_0041fd80
        mov ecx, eax
        call FUN_004daa20
        mov ecx, ebx
        call FUN_0041fd80
        mov edx, dword ptr [eax]
        push 1
        mov ecx, eax
        call dword ptr [edx + 0x48]
L_ace:
        mov eax, dword ptr [ebp + 0xd8]
        add eax, 0x80
        push eax
        lea ecx, [esp + 0x20]
        call FUN_00419480
        mov al, byte ptr [ebp + 0x525]
        test al, al
        je L_c93
        mov eax, dword ptr [ebp + 0x8d0]
        test eax, eax
        je L_b89
        lea ebx, [ebp + 0x544]
        mov ecx, ebx
        call FUN_0041fd80
        test eax, eax
        jne L_b89
        mov edx, dword ptr [ebp + 0x78]
        lea ecx, [ebp + 0x78]
        call dword ptr [edx + 4]
        lea edi, [eax + 0x410]
        mov eax, dword ptr [ebp + 0x8d0]
        push 1
        push eax
        push edi
        mov ecx, ebp
        call FUN_005fa8f0
        mov esi, eax
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        call dword ptr [edx + 0x34]
        mov ecx, dword ptr [esi + 0xe0]
        mov eax, dword ptr [ecx]
        push 0
        push 6
        call dword ptr [eax + 4]
        push esi
        mov ecx, ebx
        call FUN_0041fcd0
        mov ecx, dword ptr [ebp + 0x8d4]
        push 1
        push ecx
        push edi
        mov ecx, ebp
        call FUN_005fa8f0
        mov esi, eax
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        call dword ptr [edx + 0x34]
        mov ecx, dword ptr [esi + 0xe0]
        mov eax, dword ptr [ecx]
        push 0
        push 6
        call dword ptr [eax + 4]
        push esi
        lea ecx, [ebp + 0x54c]
        jmp L_c8e
L_b89:
        mov al, byte ptr [ebp + 0x525]
        test al, al
        je L_c93
        lea ebx, [ebp + 0x544]
        mov ecx, ebx
        call FUN_0041fd80
        test eax, eax
        jne L_c93
        mov edx, dword ptr [ebp + 0x78]
        lea ecx, [ebp + 0x78]
        call dword ptr [edx + 4]
        lea esi, [eax + 0x410]
        mov eax, dword ptr [ebp + 0x534]
        push 1
        push eax
        push esi
        mov ecx, ebp
        call FUN_005fa8f0
        mov edi, eax
        mov edx, dword ptr [edi]
        push 1
        mov ecx, edi
        call dword ptr [edx + 0x34]
        mov ecx, dword ptr [edi + 0xe0]
        mov eax, dword ptr [ecx]
        push 0
        push 6
        call dword ptr [eax + 4]
        push edi
        mov ecx, ebx
        call FUN_0041fcd0
        mov ecx, dword ptr [ebp + 0x538]
        push 1
        push ecx
        push esi
        mov ecx, ebp
        call FUN_005fa8f0
        mov edi, eax
        mov edx, dword ptr [edi]
        push 1
        mov ecx, edi
        call dword ptr [edx + 0x34]
        mov ecx, dword ptr [edi + 0xe0]
        mov eax, dword ptr [ecx]
        push 0
        push 6
        call dword ptr [eax + 4]
        push edi
        lea ecx, [ebp + 0x54c]
        call FUN_0041fcd0
        mov ecx, dword ptr [ebp + 0x53c]
        push 1
        push ecx
        push esi
        mov ecx, ebp
        call FUN_005fa8f0
        mov edi, eax
        mov edx, dword ptr [edi]
        push 1
        mov ecx, edi
        call dword ptr [edx + 0x34]
        mov ecx, dword ptr [edi + 0xe0]
        mov eax, dword ptr [ecx]
        push 0
        push 6
        call dword ptr [eax + 4]
        push edi
        lea ecx, [ebp + 0x554]
        call FUN_0041fcd0
        mov ecx, dword ptr [ebp + 0x540]
        push 1
        push ecx
        push esi
        mov ecx, ebp
        call FUN_005fa8f0
        mov esi, eax
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        call dword ptr [edx + 0x34]
        mov ecx, dword ptr [esi + 0xe0]
        mov eax, dword ptr [ecx]
        push 0
        push 6
        call dword ptr [eax + 4]
        push esi
        lea ecx, [ebp + 0x55c]
L_c8e:
        call FUN_0041fcd0
L_c93:
        mov al, byte ptr [ebp + 0x52d]
        test al, al
        je L_ca4
        mov ecx, ebp
        call FUN_00584e50
L_ca4:
        mov eax, dword ptr [ebp + 0x4a4]
        test eax, eax
        je L_cb9
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 0x148]
L_cb9:
        mov al, byte ptr [ebp + 0x930]
        test al, al
        mov esi, 0xffffffb5
        je L_d04
        cmp dword ptr [ebp + 0x160], esi
        je L_d04
        mov ecx, dword ptr [ebp + 0x838]
        lea eax, [ebp + 0x90c]
        push eax
        push ecx
        lea edx, [ebp + 0x932]
        push edx
        mov ecx, ebp
        mov byte ptr [ebp + 0x930], 0
        call FUN_0058ba20
        mov ecx, dword ptr [ebp + 0x3b0]
        test ecx, ecx
        je L_d04
        push 0
        call FUN_0054a780
L_d04:
        mov al, byte ptr [ebp + 0x931]
        test al, al
        je L_d4a
        cmp dword ptr [ebp + 0x160], esi
        je L_d4a
        mov ecx, dword ptr [ebp + 0x83c]
        lea eax, [ebp + 0x918]
        push eax
        push ecx
        lea edx, [ebp + 0x936]
        push edx
        mov ecx, ebp
        mov byte ptr [ebp + 0x931], 0
        call FUN_0058ba20
        mov ecx, dword ptr [ebp + 0x3b0]
        test ecx, ecx
        je L_d4a
        push 1
        call FUN_0054a780
L_d4a:
        mov eax, dword ptr [ebp + 0x78]
        lea ecx, [ebp + 0x78]
        call dword ptr [eax + 4]
        mov edi, eax
        mov al, byte ptr [ebp + 0x8ec]
        test al, al
        je L_d91
        lea esi, [ebp + 0x8dc]
        mov ecx, esi
        call FUN_0041fd80
        test eax, eax
        jne L_d8a
        mov ecx, dword ptr [ebp + 0x8f0]
        push ecx
        mov ecx, ebp
        call FUN_00590610
        test eax, eax
        je L_d8a
        push eax
        mov ecx, esi
        call FUN_0041fcd0
L_d8a:
        mov byte ptr [ebp + 0x8ec], 0
L_d91:
        mov al, byte ptr [ebp + 0x8ed]
        test al, al
        je L_dcd
        lea esi, [ebp + 0x8e4]
        mov ecx, esi
        call FUN_0041fd80
        test eax, eax
        jne L_dc6
        mov edx, dword ptr [ebp + 0x8f4]
        push edx
        mov ecx, ebp
        call FUN_00590610
        test eax, eax
        je L_dc6
        push eax
        mov ecx, esi
        call FUN_0041fcd0
L_dc6:
        mov byte ptr [ebp + 0x8ed], 0
L_dcd:
        mov ecx, dword ptr [ebp + 0x408]
        mov eax, dword ptr [ecx + 0x5c]
        test eax, eax
        je L_e36
        fld dword ptr [ecx + 0x54]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jne L_e36
        add ecx, 0x3c
        call FUN_0041fd80
        test eax, eax
        jne L_e36
        mov eax, dword ptr [ebp + 0x904]
        push 1
        push eax
        lea ecx, [edi + 0x288]
        push ecx
        mov ecx, ebp
        call FUN_005fa300
        mov esi, eax
        test esi, esi
        je L_e36
        mov eax, dword ptr [ebp + 0x408]
        lea ebx, [eax + 0x3c]
        mov ecx, ebx
        call FUN_0041fd80
        test eax, eax
        je L_e2e
        mov ecx, ebx
        call FUN_0041fcb0
L_e2e:
        push esi
        mov ecx, ebx
        call FUN_0041fcd0
L_e36:
        mov ecx, dword ptr [ebp + 0x408]
        fld dword ptr [ecx + 0x50]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        je L_e54
        fld dword ptr [g_76c5b0]
        jmp L_e86
L_e54:
        fld dword ptr [ecx + 0x4c]
        fdiv dword ptr [ecx + 0x50]
        fcom dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        je L_e71
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
        fld dword ptr [g_76c5b0]
        jmp L_e86
L_e71:
        fcom dword ptr [g_76d064]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jne L_e86
        __emit 0xDD   /* fstp st(0) (DD D8) */
        __emit 0xD8
        fld dword ptr [g_76d064]
L_e86:
        fcomp qword ptr [g_782340]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jne L_ec9
        add ecx, 0x44
        call FUN_0041fd80
        test eax, eax
        jne L_ec9
        mov edx, dword ptr [ebp + 0x904]
        push 1
        push edx
        lea eax, [edi + 0x28c]
        push eax
        mov ecx, ebp
        call FUN_005fa300
        test eax, eax
        je L_ec9
        mov ecx, dword ptr [ebp + 0x408]
        push eax
        add ecx, 0x44
        call FUN_0041fcd0
L_ec9:
        mov ebx, dword ptr [ebp + 0x8d8]
        mov ecx, ebx
        and ecx, 8
        cmp cl, 8
        jne L_f5d
        mov eax, dword ptr [ebp + 0x3b0]
        test eax, eax
        je L_f5d
        call FUN_00415020
        fmul dword ptr [g_76d048]
        mov esi, dword ptr [g_7f1f88]
        fiadd dword ptr [esi*4 + g_7b54c4]
        call FUN_0075db4a
        inc esi
        cmp esi, 0x13
        mov dword ptr [g_7dddbc], eax
        mov dword ptr [g_7f1f88], esi
        jne L_f1f
        mov dword ptr [g_7f1f88], 0
L_f1f:
        test eax, eax
        jge L_f2f
        mov dword ptr [g_7dddbc], 0
        jmp L_f40
L_f2f:
        cmp eax, 0xb4
        jle L_f40
        mov dword ptr [g_7dddbc], 0xb4
L_f40:
        fld dword ptr [g_7dddb4]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        je L_f5d
        mov dword ptr [g_7dddb4], 0x3c23d70a
L_f5d:
        and ebx, 0x10
        cmp bl, 0x10
        jne L_f8c
        mov eax, dword ptr [ebp + 0x3b0]
        test eax, eax
        je L_f8c
        fld dword ptr [g_7dddb8]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        je L_f8c
        mov dword ptr [g_7dddb8], 0x41200000
L_f8c:
        mov eax, dword ptr [ebp + 0x57c]
        test eax, eax
        je L_806e
        cmp eax, 1
        jne L_8027
        lea ebx, [ebp + 0x580]
        mov ecx, ebx
        call FUN_0041fd80
        test eax, eax
        jne L_801b
        mov ecx, dword ptr [ebp + 0x3b0]
        test ecx, ecx
        je L_7fc3
        call FUN_0054bbd0
L_7fc3:
        push 0x782330
        lea ecx, [esp + 0x2c]
        call FUN_00412570
        lea edx, [esp + 0x28]
        push edx
        lea ecx, [ebp + 0x28c]
        call FUN_00416b60
        mov esi, eax
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        je L_7ffe
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne L_7ffe
        push eax
        call FUN_004084e0
        add esp, 4
L_7ffe:
        push 1
        push esi
        lea eax, [edi + 0x290]
        push eax
        mov ecx, ebp
        call FUN_005fa480
        test eax, eax
        je L_801b
        push eax
        mov ecx, ebx
        call FUN_0041fcd0
L_801b:
        mov dword ptr [ebp + 0x57c], 2
        jmp L_806e
L_8027:
        cmp eax, 2
        jne L_806e
        lea ecx, [ebp + 0x580]
        call FUN_0041fd80
        test eax, eax
        jne L_806e
        cmp dword ptr [ebp + 0x160], -0x4b
        jne L_8055
        mov edx, dword ptr [ebp]
        push 3
        push 3
        mov ecx, ebp
        call dword ptr [edx + 0x88]
        jmp L_8064
L_8055:
        mov eax, dword ptr [ebp]
        push 0
        push 3
        mov ecx, ebp
        call dword ptr [eax + 0x88]
L_8064:
        mov dword ptr [ebp + 0x57c], 3
L_806e:
        mov eax, dword ptr [ebp + 0x590]
        test eax, eax
        je L_8198
        fld dword ptr [ebp + 0x440]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jne L_8198
        lea ebx, [ebp + 0x588]
        mov ecx, ebx
        call FUN_0041fd80
        test eax, eax
        jne L_8134
        mov eax, dword ptr [ebp + 0xd8]
        mov ecx, dword ptr [eax + 0x8c]
        mov esi, dword ptr [g_7dab40]
        add eax, 0x80
        mov dword ptr [esp + 0x10], ecx
        mov edx, dword ptr [eax + 0x1c]
        mov ecx, dword ptr [g_7dab44]
        mov dword ptr [esp + 0x14], edx
        mov eax, dword ptr [eax + 0x2c]
        mov dword ptr [esp + 0x18], eax
        mov edx, dword ptr [ecx]
        xor edx, esi
        mov eax, dword ptr [edx + 0x1c]
        xor eax, 0x85739531
        lea ecx, [eax + 0x78]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 0x34]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x18], ecx
        add edi, 0x65c
        push edi
        mov ecx, ebp
        call FUN_005faa90
        mov esi, eax
        test esi, esi
        je L_81c1
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        call dword ptr [eax + 0x34]
        mov ecx, dword ptr [esi + 0xe0]
        mov edx, dword ptr [ecx]
        push 0
        push 6
        call dword ptr [edx + 4]
        push esi
        mov ecx, ebx
        call FUN_0041fcd0
        jmp L_81c1
L_8134:
        mov esi, dword ptr [ebp + 0xd8]
        mov eax, dword ptr [g_7dab44]
        add esi, 0x80
        mov ecx, 0xc
        lea edi, [esp + 0x70]
        rep movsd
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov eax, dword ptr [ecx + 0x1c]
        xor eax, 0x85739531
        mov edx, dword ptr [eax + 0x78]
        lea ecx, [eax + 0x78]
        call dword ptr [edx + 4]
        mov eax, dword ptr [eax + 0x34]
        lea ecx, [esp + 0x70]
        push ecx
        mov ecx, ebx
        mov dword ptr [esp + 0x90], eax
        call FUN_0041fd80
        mov ecx, eax
        call FUN_004daa20
        mov ecx, ebx
        call FUN_0041fd80
        mov edx, dword ptr [eax]
        push 1
        mov ecx, eax
        call dword ptr [edx + 0x48]
        jmp L_81c1
L_8198:
        lea esi, [ebp + 0x588]
        mov ecx, esi
        call FUN_0041fd80
        test eax, eax
        je L_81c1
        mov ecx, esi
        call FUN_0041fd80
        mov eax, dword ptr [eax + 0xe0]
        mov edx, dword ptr [eax]
        push 0
        push 5
        mov ecx, eax
        call dword ptr [edx + 4]
L_81c1:
        mov eax, dword ptr [ebp + 0x5b4]
        cmp eax, 1
        jne L_83ff
        mov eax, dword ptr [ebp + 0x78]
        lea ebx, [ebp + 0x78]
        mov ecx, ebx
        call dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 0x7b8]
        mov edx, dword ptr [ebp + 0x2c0]
        mov edi, eax
        mov eax, dword ptr [edx + ecx*4]
        mov eax, dword ptr [eax + 0xd8]
        mov ecx, dword ptr [eax + 0x8c]
        add eax, 0x80
        mov dword ptr [esp + 0x10], ecx
        mov edx, dword ptr [eax + 0x1c]
        mov dword ptr [esp + 0x14], edx
        mov eax, dword ptr [eax + 0x2c]
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [edi + 0x58]
        push edx
        mov ecx, ebp
        mov dword ptr [esp + 0x20], eax
        call FUN_005faa90
        push 3
        mov ecx, ebp
        call FUN_004da2f0
        mov al, byte ptr [ebp + 0x8fc]
        test al, al
        je L_823d
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 0xd8]
L_823d:
        mov esi, dword ptr [ebp + 0xd8]
        mov eax, dword ptr [esi + 0x18]
        mov edx, dword ptr [esi]
        or eax, 0xc0
        mov ecx, esi
        mov dword ptr [esi + 0x18], eax
        call dword ptr [edx + 0x10]
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x14]
        push 3
        mov ecx, ebp
        call FUN_004da2f0
        mov dx, word ptr [edi + 0x66]
        push ecx
        mov cx, word ptr [edi + 0x64]
        mov eax, esp
        mov word ptr [eax], cx
        mov ecx, ebp
        mov word ptr [eax + 2], dx
        call FUN_005fad50
        mov ecx, ebp
        mov edi, eax
        call FUN_0058f230
        mov eax, dword ptr [g_840048]
        test eax, eax
        je L_82d3
        mov eax, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 0x63c]
        test ecx, ecx
        jl L_82d3
        mov eax, dword ptr [ebp + 0xd8]
        mov edx, dword ptr [eax + 0x8c]
        add eax, 0x80
        mov eax, dword ptr [eax + 0x2c]
        mov dword ptr [esp + 0x1c], edx
        push 1
        mov edx, eax
        mov dword ptr [esp + 0x28], eax
        mov eax, dword ptr [esp + 0x20]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr [g_840048]
        call FUN_006d1ad0
L_82d3:
        mov esi, dword ptr [ebp + 0x418]
        test esi, esi
        je L_82ee
        mov ecx, esi
        call FUN_005a7e40
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0xb0]
L_82ee:
        test edi, edi
        je L_8314
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        push edi
        add ecx, 0x204d24
        call FUN_004179b0
L_8314:
        mov al, byte ptr [ebp + 0xdc]
        test al, al
        jne L_836d
        cmp dword ptr [ebp + 0x5d0], -1
        jne L_833d
        mov ecx, dword ptr [ebp + 0xe0]
        mov edx, dword ptr [ecx]
        push 0
        push 1
        call dword ptr [edx + 4]
        mov ecx, ebp
        call FUN_004db240
L_833d:
        mov al, byte ptr [ebp + 0xdc]
        test al, al
        jne L_836d
        cmp dword ptr [ebp + 0x5d0], -1
        jne L_836d
        lea ecx, [ebp + 0x20]
        call FUN_0041fd80
        test eax, eax
        je L_8364
L_835c:
        mov edx, dword ptr [eax]
        push 1
        mov ecx, eax
        call dword ptr [edx]
L_8364:
        push 0
        mov ecx, ebp
        call FUN_004da1f0
L_836d:
        mov eax, dword ptr [ebp]
        push 1
        mov ecx, ebp
        mov dword ptr [ebp + 0x5b4], 3
        call dword ptr [eax + 0x48]
        mov ecx, dword ptr [esp + 0xa4]
        mov edx, dword ptr [esp + 0xa8]
        mov esi, dword ptr [ebp + 0xd8]
        mov dword ptr [ebp + 0xec], ecx
        lea edi, [ebp + 0xf4]
        mov dword ptr [ebp + 0xf0], edx
        mov ebp, dword ptr [ebp + 0x5d0]
        add esi, 0x50
        cmp ebp, -1
        mov ecx, 0xc
        rep movsd
        je L_85cd
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov edx, dword ptr [ecx + 0xc]
        lea eax, [ecx + 0xc]
        xor edx, 0x85739531
        mov cl, byte ptr [edx + 0x16]
        test cl, cl
        je L_85cd
        mov ecx, dword ptr [eax]
        push ebp
        xor ecx, 0x85739531
        call FUN_00545dd0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x90
        ret 8
L_83ff:
        cmp eax, 2
        jne L_858d
        mov eax, dword ptr [ebp + 0x78]
        lea ebx, [ebp + 0x78]
        mov ecx, ebx
        call dword ptr [eax + 4]
        push 3
        mov ecx, ebp
        mov edi, eax
        call FUN_004da2f0
        mov al, byte ptr [ebp + 0x8fc]
        test al, al
        je L_8433
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 0xd8]
L_8433:
        mov esi, dword ptr [ebp + 0xd8]
        or dword ptr [esi + 0x18], 0xc0
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x10]
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x14]
        mov ecx, ebp
        call FUN_0058f230
        mov dx, word ptr [edi + 0x56]
        push ecx
        mov cx, word ptr [edi + 0x54]
        mov eax, esp
        mov word ptr [eax], cx
        mov ecx, ebp
        mov word ptr [eax + 2], dx
        call FUN_005fad50
        mov esi, eax
        mov eax, dword ptr [ebp + 0xd8]
        mov ecx, dword ptr [eax + 0x8c]
        add eax, 0x80
        mov dword ptr [esp + 0x1c], ecx
        mov edx, dword ptr [eax + 0x1c]
        lea ecx, [esp + 0x1c]
        push ecx
        mov dword ptr [esp + 0x24], edx
        mov eax, dword ptr [eax + 0x2c]
        add edi, 0x58
        push edi
        mov ecx, ebp
        mov dword ptr [esp + 0x2c], eax
        call FUN_005faa90
        mov eax, dword ptr [g_840048]
        test eax, eax
        je L_84ef
        mov edx, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 0x63c]
        test ecx, ecx
        jl L_84ef
        mov eax, dword ptr [ebp + 0xd8]
        mov edx, dword ptr [eax + 0x8c]
        add eax, 0x80
        mov eax, dword ptr [eax + 0x2c]
        mov dword ptr [esp + 0x10], edx
        push 1
        mov edx, eax
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [esp + 0x14]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr [g_840048]
        call FUN_006d1ad0
L_84ef:
        mov edi, dword ptr [ebp + 0x418]
        test edi, edi
        je L_850a
        mov ecx, edi
        call FUN_005a7e40
        mov edx, dword ptr [edi]
        mov ecx, edi
        call dword ptr [edx + 0xb0]
L_850a:
        test esi, esi
        je L_8530
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        push esi
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        add ecx, 0x204d24
        call FUN_004179b0
L_8530:
        mov al, byte ptr [ebp + 0xdc]
        test al, al
        jne L_836d
        cmp dword ptr [ebp + 0x5d0], -1
        jne L_855d
        mov ecx, dword ptr [ebp + 0xe0]
        mov edx, dword ptr [ecx]
        push 0
        push 1
        call dword ptr [edx + 4]
        mov ecx, ebp
        call FUN_004db240
L_855d:
        mov al, byte ptr [ebp + 0xdc]
        test al, al
        jne L_836d
        cmp dword ptr [ebp + 0x5d0], -1
        jne L_836d
        lea ecx, [ebp + 0x20]
        call FUN_0041fd80
        test eax, eax
        je L_8364
        jmp L_835c
L_858d:
        mov eax, dword ptr [esp + 0xa4]
        mov ecx, dword ptr [esp + 0xa8]
        mov esi, dword ptr [ebp + 0xd8]
        mov edx, dword ptr [esp + 0xa8]
        mov dword ptr [ebp + 0xec], eax
        mov dword ptr [ebp + 0xf0], ecx
        add esi, 0x50
        lea edi, [ebp + 0xf4]
        mov ecx, 0xc
        push edx
        rep movsd
        push eax
        mov ecx, ebp
        call FUN_005f3ff0
L_85cd:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x90
        ret 8
    }
}
