/* FUN_0058c6c0 - 0x0058c6c0, size 3163 B
 * __thiscall, RET 0x4 (1 float arg). Mech/limb animation update: accumulates
 * joint angles (0x7e0/0x7f0/0x800/0x810/0x820), computes per-joint world
 * matrices (0x7cc/0x7d0/0x7d4/0x7d8) via matrix multiply, and updates
 * orientation/position. Jump tables at 0x58d31c/0x58d33c are outside this
 * function's byte range (data).
 */
#include <windows.h>

/* extern data symbols (absolute addresses) */
extern int g_58d31c[];      /* 0x0058d31c - jump table */
extern int g_58d33c[];      /* 0x0058d33c - jump table */
extern float g_76c5b0;      /* 0x0076c5b0 */
extern float g_76d064;      /* 0x0076d064 */

/* extern function symbols (rel32 calls) */
extern void __cdecl FUN_0041afd0(void);
extern void __cdecl FUN_005913b0(void);
extern void __cdecl FUN_0041bb80(void);
extern void __cdecl FUN_00419e70(void);
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_0055e370(void);
extern void __cdecl FUN_0058d360(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_00603d70(void);

__declspec(naked) void func_0058c6c0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x154
        push ebx
        push esi
        push edi
        mov edi, ecx
        fld dword ptr [edi+0x7e0]
        fcomp dword ptr [edi+0x7dc]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz L58c6f0
        fld dword ptr [ebp+8]
        fadd dword ptr [edi+0x7e0]
        fstp dword ptr [edi+0x7e0]
L58c6f0:
        fld dword ptr [edi+0x7f0]
        fcomp dword ptr [edi+0x7ec]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz L58c712
        fld dword ptr [ebp+8]
        fadd dword ptr [edi+0x7f0]
        fstp dword ptr [edi+0x7f0]
L58c712:
        fld dword ptr [edi+0x800]
        fcomp dword ptr [edi+0x7fc]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz L58c734
        fld dword ptr [ebp+8]
        fadd dword ptr [edi+0x800]
        fstp dword ptr [edi+0x800]
L58c734:
        fld dword ptr [edi+0x810]
        fcomp dword ptr [edi+0x80c]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz L58c756
        fld dword ptr [ebp+8]
        fadd dword ptr [edi+0x810]
        fstp dword ptr [edi+0x810]
L58c756:
        fld dword ptr [edi+0x820]
        fcomp dword ptr [edi+0x81c]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz L58c778
        fld dword ptr [ebp+8]
        fadd dword ptr [edi+0x820]
        fstp dword ptr [edi+0x820]
L58c778:
        mov al, byte ptr [edi+0x4a0]
        test al, al
        jz L58cb46
        mov eax, dword ptr [edi+0x2c0]
        mov ebx, dword ptr [edi+0x7cc]
        mov ecx, dword ptr [eax+ebx*4]
        mov esi, dword ptr [ecx+0xd8]
        add esi, 0x20
        push esi
        lea ecx, [ebp-0x14]
        call FUN_0041afd0
        mov edx, dword ptr [esi+0xc]
        mov dword ptr [ebp-0x60], edx
        mov eax, dword ptr [esi+0x1c]
        mov dword ptr [ebp-0x5c], eax
        mov ecx, dword ptr [esi+0x2c]
        mov eax, dword ptr [edi+0x5bc]
        lea edx, [ebx*8]
        mov dword ptr [ebp-0x58], ecx
        sub edx, ebx
        lea ecx, [edi+0x7dc]
        lea esi, [eax+edx*4+0xc]
        call FUN_005913b0
        fstp dword ptr [ebp-4]
        mov ecx, dword ptr [ebp-4]
        push ecx
        push esi
        lea edx, [ebp-0x14]
        push edx
        lea ecx, [ebp-0xe4]
        call FUN_0041bb80
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax+4]
        mov dword ptr [ebp-0x30], ecx
        mov ecx, dword ptr [eax+8]
        mov dword ptr [ebp-0x2c], edx
        mov edx, dword ptr [eax+0xc]
        mov eax, dword ptr [ebp-0x30]
        mov dword ptr [ebp-0x28], ecx
        mov ecx, dword ptr [ebp-0x2c]
        mov dword ptr [ebp-0x24], edx
        mov edx, dword ptr [ebp-0x28]
        mov dword ptr [ebp-0x40], eax
        mov eax, dword ptr [ebp-0x24]
        mov dword ptr [ebp-0x3c], ecx
        lea ecx, [ebp-0xd4]
        mov dword ptr [ebp-0x38], edx
        mov dword ptr [ebp-0x34], eax
        call FUN_00419e70
        lea ecx, [ebp-0x60]
        push ecx
        lea ecx, [ebp-0xd4]
        call FUN_0040d030
        lea edx, [ebp-0x40]
        push edx
        lea ecx, [ebp-0xd4]
        call FUN_0041a160
        mov esi, dword ptr [edi+0x2c0]
        mov ecx, dword ptr [edi+0x7cc]
        mov ecx, dword ptr [esi+ecx*4]
        lea eax, [ebp-0xd4]
        push eax
        call FUN_004daa20
        mov ebx, dword ptr [edi+0x7d0]
        mov edx, dword ptr [esi+ebx*4]
        mov esi, dword ptr [edx+0xd8]
        add esi, 0x20
        push esi
        lea ecx, [ebp-0x14]
        call FUN_0041afd0
        mov eax, dword ptr [esi+0xc]
        mov dword ptr [ebp-0x60], eax
        mov ecx, dword ptr [esi+0x1c]
        mov dword ptr [ebp-0x5c], ecx
        mov ecx, dword ptr [edi+0x5bc]
        mov edx, dword ptr [esi+0x2c]
        lea eax, [ebx*8]
        sub eax, ebx
        lea esi, [ecx+eax*4+0xc]
        lea ecx, [edi+0x7ec]
        mov dword ptr [ebp-0x58], edx
        call FUN_005913b0
        fstp dword ptr [ebp-4]
        mov edx, dword ptr [ebp-4]
        push edx
        push esi
        lea eax, [ebp-0x14]
        push eax
        lea ecx, [ebp-0xe4]
        call FUN_0041bb80
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax+4]
        mov dword ptr [ebp-0x30], ecx
        mov ecx, dword ptr [eax+8]
        mov dword ptr [ebp-0x2c], edx
        mov edx, dword ptr [eax+0xc]
        mov eax, dword ptr [ebp-0x30]
        mov dword ptr [ebp-0x28], ecx
        mov ecx, dword ptr [ebp-0x2c]
        mov dword ptr [ebp-0x24], edx
        mov edx, dword ptr [ebp-0x28]
        mov dword ptr [ebp-0x40], eax
        mov eax, dword ptr [ebp-0x24]
        mov dword ptr [ebp-0x3c], ecx
        mov dword ptr [ebp-0x34], eax
        mov eax, dword ptr [edi+0x7d0]
        lea ecx, [eax*8]
        mov dword ptr [ebp-0x38], edx
        mov edx, dword ptr [edi+0x5bc]
        sub ecx, eax
        lea esi, [edx+ecx*4]
        lea ecx, [edi+0x7fc]
        call FUN_0055e370
        fstp dword ptr [ebp-4]
        mov eax, dword ptr [ebp-4]
        push eax
        push esi
        lea ecx, [ebp-0x60]
        push ecx
        lea ecx, [ebp-0x2c]
        call FUN_0058d360
        push eax
        lea ecx, [ebp-0xe0]
        call FUN_0040c5d0
        lea edx, [ebp-0xe0]
        push edx
        lea ecx, [ebp-0xf0]
        call FUN_0040c410
        lea ecx, [ebp-0xd4]
        call FUN_00419e70
        lea eax, [ebp-0xf0]
        push eax
        lea ecx, [ebp-0xd4]
        call FUN_0040d030
        lea ecx, [ebp-0x40]
        push ecx
        lea ecx, [ebp-0xd4]
        call FUN_0041a160
        mov eax, dword ptr [edi+0x7d0]
        mov esi, dword ptr [edi+0x2c0]
        mov ecx, dword ptr [esi+eax*4]
        lea edx, [ebp-0xd4]
        push edx
        call FUN_004daa20
        mov ebx, dword ptr [edi+0x7d4]
        mov ecx, dword ptr [esi+ebx*4]
        mov esi, dword ptr [ecx+0xd8]
        add esi, 0x20
        push esi
        lea ecx, [ebp-0x14]
        call FUN_0041afd0
        mov edx, dword ptr [esi+0xc]
        mov dword ptr [ebp-0x60], edx
        mov eax, dword ptr [esi+0x1c]
        mov dword ptr [ebp-0x5c], eax
        mov ecx, dword ptr [esi+0x2c]
        mov eax, dword ptr [edi+0x5bc]
        lea edx, [ebx*8]
        mov dword ptr [ebp-0x58], ecx
        sub edx, ebx
        lea ecx, [edi+0x81c]
        lea esi, [eax+edx*4+0xc]
        call FUN_005913b0
        fstp dword ptr [ebp-4]
        mov ecx, dword ptr [ebp-4]
        push ecx
        push esi
        lea edx, [ebp-0x14]
        push edx
        lea ecx, [ebp-0xe4]
        call FUN_0041bb80
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax+4]
        mov dword ptr [ebp-0x30], ecx
        mov ecx, dword ptr [eax+8]
        mov dword ptr [ebp-0x2c], edx
        mov edx, dword ptr [eax+0xc]
        mov eax, dword ptr [ebp-0x30]
        mov dword ptr [ebp-0x28], ecx
        mov ecx, dword ptr [ebp-0x2c]
        mov dword ptr [ebp-0x24], edx
        mov edx, dword ptr [ebp-0x28]
        mov dword ptr [ebp-0x40], eax
        mov eax, dword ptr [ebp-0x24]
        mov dword ptr [ebp-0x3c], ecx
        lea ecx, [ebp-0xd4]
        mov dword ptr [ebp-0x38], edx
        mov dword ptr [ebp-0x34], eax
        call FUN_00419e70
        lea ecx, [ebp-0x60]
        push ecx
        lea ecx, [ebp-0xd4]
        call FUN_0040d030
        lea edx, [ebp-0x40]
        push edx
        lea ecx, [ebp-0xd4]
        call FUN_0041a160
        mov esi, dword ptr [edi+0x2c0]
        mov ecx, dword ptr [edi+0x7d4]
        mov ecx, dword ptr [esi+ecx*4]
        lea eax, [ebp-0xd4]
        push eax
        call FUN_004daa20
        mov ebx, dword ptr [edi+0x7d8]
        mov edx, dword ptr [esi+ebx*4]
        mov esi, dword ptr [edx+0xd8]
        add esi, 0x20
        push esi
        lea ecx, [ebp-0x14]
        call FUN_0041afd0
        mov eax, dword ptr [esi+0xc]
        mov dword ptr [ebp-0x60], eax
        mov ecx, dword ptr [esi+0x1c]
        mov dword ptr [ebp-0x5c], ecx
        mov ecx, dword ptr [edi+0x5bc]
        mov edx, dword ptr [esi+0x2c]
        lea eax, [ebx*8]
        sub eax, ebx
        lea esi, [ecx+eax*4+0xc]
        lea ecx, [edi+0x80c]
        mov dword ptr [ebp-0x58], edx
        call FUN_005913b0
        fstp dword ptr [ebp-4]
        mov edx, dword ptr [ebp-4]
        push edx
        push esi
        lea eax, [ebp-0x14]
        push eax
        lea ecx, [ebp-0xe4]
        call FUN_0041bb80
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax+4]
        mov dword ptr [ebp-0x30], ecx
        mov ecx, dword ptr [eax+8]
        mov dword ptr [ebp-0x2c], edx
        mov edx, dword ptr [eax+0xc]
        mov eax, dword ptr [ebp-0x30]
        mov dword ptr [ebp-0x28], ecx
        mov ecx, dword ptr [ebp-0x2c]
        mov dword ptr [ebp-0x24], edx
        mov edx, dword ptr [ebp-0x28]
        mov dword ptr [ebp-0x40], eax
        mov eax, dword ptr [ebp-0x24]
        mov dword ptr [ebp-0x3c], ecx
        mov dword ptr [ebp-0x38], edx
        mov dword ptr [ebp-0x34], eax
        lea ecx, [ebp-0xd4]
        call FUN_00419e70
        lea ecx, [ebp-0x60]
        push ecx
        lea ecx, [ebp-0xd4]
        call FUN_0040d030
        lea edx, [ebp-0x40]
        push edx
        lea ecx, [ebp-0xd4]
        call FUN_0041a160
        mov edx, dword ptr [edi+0x2c0]
        mov ecx, dword ptr [edi+0x7d8]
        mov ecx, dword ptr [edx+ecx*4]
        lea eax, [ebp-0xd4]
        push eax
        call FUN_004daa20
        mov al, byte ptr [edi+0x4a0]
        test al, al
        jnz L58cf06
L58cb46:
        mov eax, dword ptr [edi+0x410]
        mov edx, dword ptr [edi+0x40c]
        sub eax, edx
        sar eax, 0x2
        jz L58cb61
        mov ecx, edx
        mov ebx, dword ptr [ecx]
        xor esi, esi
        jmp L58cb65
L58cb61:
        xor esi, esi
        xor ebx, ebx
L58cb65:
        mov edx, dword ptr [ebx+0x78]
        lea ecx, [ebx+0x78]
        call dword ptr [edx+4]
        fld dword ptr [ebx+0x198]
        fcomp dword ptr [g_76c5b0]
        mov ecx, eax
        fld dword ptr [ebx+0x198]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jz L58cb8b
        fchs
L58cb8b:
        fdiv dword ptr [ecx+0x644]
        fst dword ptr [ebp-4]
        fcomp dword ptr [g_76d064]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jnz L58cba8
        mov dword ptr [ebp-4], 0x3f800000
L58cba8:
        mov ecx, dword ptr [edi+0x2f4]
        mov eax, dword ptr [ecx+0x14]
        add eax, -0x1e
        cmp eax, 0x7
        mov bl, 0x1
        ja L58cbc4
        jmp dword ptr [g_58d31c + eax*4]
        xor bl, bl
L58cbc4:
        mov al, byte ptr [ecx+0x1d]
        test al, al
        jz L58cbdf
        call FUN_00603d70
        add eax, -0x1e
        cmp eax, 0x7
        ja L58cbdf
        jmp dword ptr [g_58d33c + eax*4]
L58cbdf:
        test bl, bl
        jz L58cc04
        lea ebx, [edi+0x638]
        mov ecx, ebx
        call FUN_005913b0
        fstp dword ptr [ebx+8]
        mov eax, dword ptr [ebp-4]
        mov dword ptr [ebx], 0x3dcccccd
        mov dword ptr [ebx+4], esi
        mov dword ptr [ebx+0xc], eax
        jmp L58cc20
L58cc04:
        lea ebx, [edi+0x638]
        mov ecx, ebx
        call FUN_005913b0
        fstp dword ptr [ebx+8]
        mov dword ptr [ebx], 0x3e4ccccd
        mov dword ptr [ebx+4], esi
        mov dword ptr [ebx+0xc], esi
L58cc20:
        mov al, byte ptr [edi+0x620]
        test al, al
        jnz L58cc4d
        lea esi, [edi+0x628]
        mov ecx, esi
        call FUN_005913b0
        fstp dword ptr [esi+8]
        mov ecx, dword ptr [ebp-4]
        mov dword ptr [esi], 0x3e4ccccd
        mov dword ptr [esi+4], 0
        mov dword ptr [esi+0xc], ecx
L58cc4d:
        mov esi, dword ptr [edi+0x904]
        mov eax, dword ptr [esi+0xd8]
        mov edx, dword ptr [eax+0x2c]
        add eax, 0x20
        mov dword ptr [ebp-0x20], edx
        mov ecx, dword ptr [eax+0x1c]
        mov dword ptr [ebp-0x1c], ecx
        mov edx, dword ptr [eax+0x2c]
        mov dword ptr [ebp-0x18], edx
        mov eax, dword ptr [esi+0xd8]
        add eax, 0x20
        push eax
        lea ecx, [ebp-0x30]
        call FUN_0041afd0
        mov eax, dword ptr [esi+0xd8]
        add eax, 0x80
        push eax
        lea ecx, [ebp-0xd4]
        call FUN_00419460
        push -1
        push 0x2
        push 0x1
        push 0x7b8d18
        lea ecx, [ebp-0xd4]
        call FUN_0041fde0
        mov eax, dword ptr [esi+0xc4]
        mov ecx, dword ptr [eax+0xd8]
        add ecx, 0x80
        push ecx
        lea ecx, [ebp-0x124]
        call FUN_004206b0
        lea edx, [ebp-0x124]
        lea eax, [ebp-0xd4]
        lea ecx, [ebp-0x154]
        mov dword ptr [ebp-0xa4], edx
        mov dword ptr [ebp-0x54], eax
        mov dword ptr [ebp-4], ecx
        mov edx, dword ptr [ebp-0x54]
        push esi
        mov esi, dword ptr [ebp-0xa4]
        mov eax, dword ptr [ebp-4]
        fld dword ptr [edx]
        fmul dword ptr [esi]
        fld dword ptr [edx+0x10]
        fmul dword ptr [esi+4]
        fld dword ptr [edx+0x20]
        fmul dword ptr [esi+8]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+4]
        fmul dword ptr [esi]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x14]
        fmul dword ptr [esi+4]
        fxch st(1)
        fstp dword ptr [eax]
        fld dword ptr [edx+0x24]
        fmul dword ptr [esi+8]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+8]
        fmul dword ptr [esi]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x18]
        fmul dword ptr [esi+4]
        fxch st(1)
        fstp dword ptr [eax+4]
        fld dword ptr [edx+0x28]
        fmul dword ptr [esi+8]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0xc]
        fmul dword ptr [esi]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x1c]
        fmul dword ptr [esi+4]
        fxch st(1)
        fstp dword ptr [eax+8]
        fld dword ptr [edx+0x2c]
        fmul dword ptr [esi+8]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx]
        fmul dword ptr [esi+0x10]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x10]
        fmul dword ptr [esi+0x14]
        fxch st(1)
        fadd dword ptr [esi+0xc]
        fld dword ptr [edx+0x20]
        fmul dword ptr [esi+0x18]
        fxch st(1)
        fstp dword ptr [eax+0xc]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+4]
        fmul dword ptr [esi+0x10]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x14]
        fmul dword ptr [esi+0x14]
        fxch st(1)
        fstp dword ptr [eax+0x10]
        fld dword ptr [edx+0x24]
        fmul dword ptr [esi+0x18]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+8]
        fmul dword ptr [esi+0x10]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x18]
        fmul dword ptr [esi+0x14]
        fxch st(1)
        fstp dword ptr [eax+0x14]
        fld dword ptr [edx+0x28]
        fmul dword ptr [esi+0x18]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0xc]
        fmul dword ptr [esi+0x10]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x1c]
        fmul dword ptr [esi+0x14]
        fxch st(1)
        fstp dword ptr [eax+0x18]
        fld dword ptr [edx+0x2c]
        fmul dword ptr [esi+0x18]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx]
        fmul dword ptr [esi+0x20]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x10]
        fmul dword ptr [esi+0x24]
        fxch st(1)
        fadd dword ptr [esi+0x1c]
        fld dword ptr [edx+0x20]
        fmul dword ptr [esi+0x28]
        fxch st(1)
        fstp dword ptr [eax+0x1c]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+4]
        fmul dword ptr [esi+0x20]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x14]
        fmul dword ptr [esi+0x24]
        fxch st(1)
        fstp dword ptr [eax+0x20]
        fld dword ptr [edx+0x24]
        fmul dword ptr [esi+0x28]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+8]
        fmul dword ptr [esi+0x20]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x18]
        fmul dword ptr [esi+0x24]
        fxch st(1)
        fstp dword ptr [eax+0x24]
        fld dword ptr [edx+0x28]
        fmul dword ptr [esi+0x28]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0xc]
        fmul dword ptr [esi+0x20]
        fxch st(2)
        faddp st(1), st(0)
        fld dword ptr [edx+0x1c]
        fmul dword ptr [esi+0x24]
        fxch st(1)
        fstp dword ptr [eax+0x28]
        fld dword ptr [edx+0x2c]
        fmul dword ptr [esi+0x28]
        fxch st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fadd dword ptr [esi+0x2c]
        fstp dword ptr [eax+0x2c]
        pop esi
        lea edx, [ebp-0x154]
        push edx
        lea ecx, [ebp-0x40]
        call FUN_0041afd0
        mov ecx, ebx
        call FUN_005913b0
        fstp dword ptr [ebp-0x54]
        mov eax, dword ptr [ebp-0x54]
        push eax
        lea ecx, [ebp-0x40]
        push ecx
        lea edx, [ebp-0x30]
        push edx
        lea ecx, [ebp-0xf4]
        call FUN_0041bb80
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax+4]
        mov dword ptr [ebp-0x14], ecx
        mov ecx, dword ptr [eax+8]
        mov dword ptr [ebp-0x10], edx
        mov edx, dword ptr [eax+0xc]
        mov eax, dword ptr [ebp-0x14]
        mov dword ptr [ebp-0xc], ecx
        mov ecx, dword ptr [ebp-0x10]
        mov dword ptr [ebp-8], edx
        mov edx, dword ptr [ebp-0xc]
        mov dword ptr [ebp-0x50], eax
        mov eax, dword ptr [ebp-8]
        mov dword ptr [ebp-0x4c], ecx
        lea ecx, [ebp-0xa0]
        mov dword ptr [ebp-0x48], edx
        mov dword ptr [ebp-0x44], eax
        call FUN_00419e70
        lea ecx, [ebp-0x20]
        push ecx
        lea ecx, [ebp-0xa0]
        call FUN_0040d030
        lea edx, [ebp-0x50]
        push edx
        lea ecx, [ebp-0xa0]
        call FUN_0041a160
        lea eax, [ebp-0xa0]
        push eax
        mov ecx, dword ptr [edi+0x904]
        call FUN_004daa20
L58cf06:
        fld dword ptr [edi+0x62c]
        lea esi, [edi+0x628]
        fcomp dword ptr [esi]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz L58cf24
        fld dword ptr [ebp+8]
        fadd dword ptr [esi+4]
        fstp dword ptr [esi+4]
L58cf24:
        fld dword ptr [edi+0x63c]
        fcomp dword ptr [edi+0x638]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz L58cf46
        fld dword ptr [ebp+8]
        fadd dword ptr [edi+0x63c]
        fstp dword ptr [edi+0x63c]
L58cf46:
        mov eax, dword ptr [edi+0x648]
        mov ecx, dword ptr [edi+0x2c0]
        mov edx, dword ptr [ecx+eax*4]
        mov ebx, dword ptr [edx+0xd8]
        add ebx, 0x20
        push ebx
        lea ecx, [ebp-0x70]
        call FUN_0041afd0
        mov eax, dword ptr [ebx+0xc]
        mov dword ptr [ebp-0x20], eax
        mov ecx, dword ptr [ebx+0x1c]
        mov eax, dword ptr [edi+0x648]
        mov dword ptr [ebp-0x1c], ecx
        mov edx, dword ptr [ebx+0x2c]
        lea ecx, [eax*8]
        mov dword ptr [ebp-0x18], edx
        mov edx, dword ptr [edi+0x5bc]
        sub ecx, eax
        lea ebx, [edx+ecx*4+0xc]
        mov ecx, esi
        call FUN_005913b0
        fstp dword ptr [ebp+8]
        mov eax, dword ptr [ebp+8]
        push eax
        push ebx
        lea ecx, [ebp-0x70]
        push ecx
        lea ecx, [ebp-0x40]
        call FUN_0041bb80
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [eax+4]
        mov dword ptr [ebp-0x14], edx
        mov edx, dword ptr [eax+8]
        mov eax, dword ptr [eax+0xc]
        mov dword ptr [ebp-0x10], ecx
        mov ecx, dword ptr [ebp-0x14]
        mov dword ptr [ebp-8], eax
        mov dword ptr [ebp-0x50], ecx
        mov ecx, dword ptr [ebp-8]
        mov dword ptr [ebp-0xc], edx
        mov edx, dword ptr [ebp-0x10]
        mov eax, dword ptr [ebp-0xc]
        mov dword ptr [ebp-0x44], ecx
        lea ecx, [ebp-0xa0]
        mov dword ptr [ebp-0x4c], edx
        mov dword ptr [ebp-0x48], eax
        call FUN_00419e70
        lea edx, [ebp-0x20]
        push edx
        lea ecx, [ebp-0xa0]
        call FUN_0040d030
        lea eax, [ebp-0x50]
        push eax
        lea ecx, [ebp-0xa0]
        call FUN_0041a160
        mov edx, dword ptr [edi+0x648]
        mov ebx, dword ptr [edi+0x2c0]
        lea ecx, [ebp-0xa0]
        push ecx
        mov ecx, dword ptr [ebx+edx*4]
        call FUN_004daa20
        mov eax, dword ptr [edi+0x64c]
        mov eax, dword ptr [ebx+eax*4]
        mov ebx, dword ptr [eax+0xd8]
        add ebx, 0x20
        push ebx
        lea ecx, [ebp-0x70]
        call FUN_0041afd0
        mov ecx, dword ptr [ebx+0xc]
        mov dword ptr [ebp-0x20], ecx
        mov edx, dword ptr [ebx+0x1c]
        mov dword ptr [ebp-0x1c], edx
        mov eax, dword ptr [ebx+0x2c]
        mov edx, dword ptr [edi+0x5bc]
        mov dword ptr [ebp-0x18], eax
        mov eax, dword ptr [edi+0x64c]
        lea ecx, [eax*8]
        sub ecx, eax
        lea ebx, [edx+ecx*4+0xc]
        mov ecx, esi
        call FUN_005913b0
        fstp dword ptr [ebp+8]
        lea ecx, [ebp-0x70]
        mov eax, dword ptr [ebp+8]
        push eax
        push ebx
        push ecx
        lea ecx, [ebp-0x40]
        call FUN_0041bb80
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [eax+4]
        mov dword ptr [ebp-0x14], edx
        mov edx, dword ptr [eax+8]
        mov eax, dword ptr [eax+0xc]
        mov dword ptr [ebp-0x10], ecx
        mov ecx, dword ptr [ebp-0x14]
        mov dword ptr [ebp-8], eax
        mov dword ptr [ebp-0x50], ecx
        mov ecx, dword ptr [ebp-8]
        mov dword ptr [ebp-0xc], edx
        mov edx, dword ptr [ebp-0x10]
        mov eax, dword ptr [ebp-0xc]
        mov dword ptr [ebp-0x44], ecx
        lea ecx, [ebp-0xa0]
        mov dword ptr [ebp-0x4c], edx
        mov dword ptr [ebp-0x48], eax
        call FUN_00419e70
        mov edx, dword ptr [ebp-0x20]
        mov ecx, dword ptr [ebp-0x18]
        mov eax, dword ptr [ebp-0x1c]
        mov dword ptr [ebp-0x94], edx
        lea edx, [ebp-0x50]
        mov dword ptr [ebp-0x74], ecx
        push edx
        lea ecx, [ebp-0xa0]
        mov dword ptr [ebp-0x84], eax
        call FUN_0041a160
        mov ebx, dword ptr [edi+0x2c0]
        mov ecx, dword ptr [edi+0x64c]
        mov ecx, dword ptr [ebx+ecx*4]
        lea eax, [ebp-0xa0]
        push eax
        call FUN_004daa20
        mov eax, dword ptr [edi+0x650]
        mov edx, dword ptr [ebx+eax*4]
        mov ebx, dword ptr [edx+0xd8]
        add ebx, 0x20
        push ebx
        lea ecx, [ebp-0x70]
        call FUN_0041afd0
        fld dword ptr [esi+8]
        mov eax, dword ptr [ebx+0xc]
        fld dword ptr [esi+4]
        fcomp dword ptr [esi]
        mov dword ptr [ebp-0x20], eax
        mov ecx, dword ptr [ebx+0x1c]
        mov eax, dword ptr [edi+0x5bc]
        mov dword ptr [ebp-0x1c], ecx
        mov edx, dword ptr [ebx+0x2c]
        mov ebx, dword ptr [edi+0x650]
        lea ecx, [ebx*8]
        sub ecx, ebx
        mov dword ptr [ebp-0x54], eax
        lea ecx, [eax+ecx*4+0xc]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        mov dword ptr [ebp-0x18], edx
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jnz L58d15c
        fstp st(0)
        fld dword ptr [esi+0xc]
        jmp L58d185
L58d15c:
        fld dword ptr [esi+4]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jnz L58d185
        fstp st(0)
        fld dword ptr [esi+4]
        fdiv dword ptr [esi]
        fld dword ptr [g_76d064]
        fsub st(0), st(1)
        fmul dword ptr [esi+8]
        fxch st(1)
        fmul dword ptr [esi+0xc]
        faddp st(1), st(0)
L58d185:
        push ecx
        fstp dword ptr [esp]
        push ecx
        lea edx, [ebp-0x70]
        push edx
        lea ecx, [ebp-0x40]
        call FUN_0041bb80
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax+4]
        mov dword ptr [ebp-0x14], ecx
        mov ecx, dword ptr [eax+8]
        mov dword ptr [ebp-0x10], edx
        mov edx, dword ptr [eax+0xc]
        mov eax, dword ptr [ebp-0x14]
        mov dword ptr [ebp-0xc], ecx
        mov ecx, dword ptr [ebp-0x10]
        mov dword ptr [ebp-8], edx
        mov edx, dword ptr [ebp-0xc]
        mov dword ptr [ebp-0x50], eax
        mov eax, dword ptr [ebp-8]
        mov dword ptr [ebp-0x4c], ecx
        lea ecx, [ebp-0xa0]
        mov dword ptr [ebp-0x48], edx
        mov dword ptr [ebp-0x44], eax
        call FUN_00419e70
        mov ecx, dword ptr [ebp-0x20]
        mov edx, dword ptr [ebp-0x1c]
        mov eax, dword ptr [ebp-0x18]
        mov dword ptr [ebp-0x94], ecx
        lea ecx, [ebp-0x50]
        push ecx
        lea ecx, [ebp-0xa0]
        mov dword ptr [ebp-0x84], edx
        mov dword ptr [ebp-0x74], eax
        call FUN_0041a160
        mov eax, dword ptr [edi+0x2c0]
        mov ecx, dword ptr [eax+ebx*4]
        lea edx, [ebp-0xa0]
        push edx
        mov dword ptr [ebp+8], eax
        call FUN_004daa20
        mov eax, dword ptr [ebp+8]
        mov edi, dword ptr [edi+0x654]
        mov ecx, dword ptr [eax+edi*4]
        mov eax, dword ptr [ecx+0xd8]
        lea ebx, [eax+0x20]
        push ebx
        lea ecx, [ebp-0x70]
        call FUN_0041afd0
        fld dword ptr [esi+8]
        mov edx, dword ptr [ebx+0xc]
        fld dword ptr [esi+4]
        fcomp dword ptr [esi]
        mov dword ptr [ebp-0x20], edx
        mov eax, dword ptr [ebx+0x1c]
        mov dword ptr [ebp-0x1c], eax
        mov ecx, dword ptr [ebx+0x2c]
        mov eax, dword ptr [ebp-0x54]
        lea edx, [edi*8]
        sub edx, edi
        mov dword ptr [ebp-0x18], ecx
        lea ecx, [eax+edx*4+0xc]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jnz L58d265
        fstp st(0)
        fld dword ptr [esi+0xc]
        jmp L58d28e
L58d265:
        fld dword ptr [esi+4]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jnz L58d28e
        fstp st(0)
        fld dword ptr [esi+4]
        fdiv dword ptr [esi]
        fld dword ptr [g_76d064]
        fsub st(0), st(1)
        fmul dword ptr [esi+8]
        fxch st(1)
        fmul dword ptr [esi+0xc]
        faddp st(1), st(0)
L58d28e:
        push ecx
        fstp dword ptr [esp]
        push ecx
        lea ecx, [ebp-0x70]
        push ecx
        lea ecx, [ebp-0x40]
        call FUN_0041bb80
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [eax+4]
        mov dword ptr [ebp-0x14], edx
        mov edx, dword ptr [eax+8]
        mov eax, dword ptr [eax+0xc]
        mov dword ptr [ebp-0x10], ecx
        mov ecx, dword ptr [ebp-0x14]
        mov dword ptr [ebp-8], eax
        mov dword ptr [ebp-0x50], ecx
        mov ecx, dword ptr [ebp-8]
        mov dword ptr [ebp-0xc], edx
        mov edx, dword ptr [ebp-0x10]
        mov eax, dword ptr [ebp-0xc]
        mov dword ptr [ebp-0x44], ecx
        lea ecx, [ebp-0xa0]
        mov dword ptr [ebp-0x4c], edx
        mov dword ptr [ebp-0x48], eax
        call FUN_00419e70
        mov edx, dword ptr [ebp-0x20]
        mov ecx, dword ptr [ebp-0x18]
        mov eax, dword ptr [ebp-0x1c]
        mov dword ptr [ebp-0x94], edx
        lea edx, [ebp-0x50]
        mov dword ptr [ebp-0x74], ecx
        push edx
        lea ecx, [ebp-0xa0]
        mov dword ptr [ebp-0x84], eax
        call FUN_0041a160
        mov ecx, dword ptr [ebp+8]
        mov ecx, dword ptr [ecx+edi*4]
        lea eax, [ebp-0xa0]
        push eax
        call FUN_004daa20
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}
