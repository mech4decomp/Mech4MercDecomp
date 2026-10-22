/* FUN_00586740 - 0x00586740, size 4324 B (block 0x586735, fn at +0xB)
 * __thiscall (ecx=this), RET 8. HUD element update/placement for the
 * active object at [ebp+0x10]. Handles: invalid-flag early outs, cleanup
 * of a passed-in element list ([esp+0x220]) via FUN_004084e0, a big
 * per-tick loop over that list computing 3D offsets/dot products and
 * dispatching ~6 fixed-offset "hint arrow" placements via a 6-entry jump
 * table (0x5877F0) plus a 12-entry opcode->index byte table (0x587818,
 * dispatch 0x587808), and finally a "slide to camera" section that writes
 * [ebp+0x440]/[ebp+0x444] and rep-movs a 0x30-byte matrix.
 *
 * Data (0x5877F0..0x587823, 52 B: 2 jump tables + byte-index table)
 * emitted as __emit. Both `jmp [reg*4+imm]` dispatches are __emit.
 */
#include <windows.h>

extern void __cdecl FUN_004084e0(void);   /* free */
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_0058adf0(void);
extern void __cdecl FUN_005faa90(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416ca0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416d00(void);
extern void __cdecl FUN_00416d40(void);
extern void __cdecl FUN_00418a80(void);
extern void __cdecl FUN_00418f00(void);
extern void __cdecl FUN_0041c6e0(void);
extern void __cdecl FUN_004d5b70(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_00533000(void);
extern void __cdecl FUN_00534630(void);
extern void __cdecl FUN_0054a800(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_005a30d0(void);
extern void __cdecl FUN_005fabe0(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00587830(void);

/* extern data symbols (absolute addresses) */
extern void* g_7db090;      /* 0x007db090 */
extern unsigned char g_7f1f7d; /* 0x007f1f7d */
extern void* g_7f2d1c;      /* 0x007f2d1c */
extern int g_7b8d70;        /* 0x007b8d70 */
extern int g_7b8d68;        /* 0x007b8d68 */
extern int g_7b8d6c;        /* 0x007b8d6c */
extern double g_779d28;     /* 0x00779d28 */
extern float g_76c5b0;      /* 0x0076c5b0 */
extern float g_7b220c;      /* 0x007b220c */
extern float g_76d064;      /* 0x0076d064 */
extern float g_76d584;      /* 0x0076d584 */
extern float g_7822ec;      /* 0x007822ec */
extern float g_77d0fc;      /* 0x0077d0fc */
extern int g_7dab44;        /* 0x007dab44 */
extern int g_7dab40;        /* 0x007dab40 */

__declspec(naked) void func_00586740(void)
{
    __asm {
        sub esp, 0x208
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp + 0x10]
        shr eax, 0x13
        test al, 1
        push esi
        push edi
        mov byte ptr [esp + 0x11], 1
        je L_5867e9
        mov ecx, dword ptr [g_7db090]
        mov dl, byte ptr [ecx + 0x28]
        cmp dl, byte ptr [ebp + 0x14]
        jne L_5867a6
        mov eax, dword ptr [ebp + 0xe0]
        cmp dword ptr [eax + 0x14], 8
        je L_5867a6
        mov ecx, dword ptr [ebp + 0x2f4]
        mov edx, dword ptr [ecx]
        xor eax, eax
        mov al, byte ptr [g_7f1f7d]
        push 0
        push eax
        push 0x1e
        call dword ptr [edx + 8]
        mov ecx, ebp
        call FUN_0058adf0
        xor al, al
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x208
        ret 8
L_5867a6:
        mov esi, dword ptr [esp + 0x220]
        test esi, esi
        je L_5867c9
        mov eax, dword ptr [esi]
        test eax, eax
        je L_5867c0
        push eax
        call FUN_004084e0
        add esp, 4
L_5867c0:
        push esi
        call FUN_004084e0
        add esp, 4
L_5867c9:
        mov ecx, dword ptr [ebp + 0xd8]
        add ecx, 0x50
        push ecx
        mov ecx, ebp
        call FUN_004daa20
        xor al, al
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x208
        ret 8
L_5867e9:
        mov ecx, dword ptr [ebp + 0x2fc]
        test ecx, ecx
        mov esi, dword ptr [esp + 0x220]
        je L_58683b
        mov edx, dword ptr [ecx]
        lea eax, [esp + 0x11]
        push eax
        push esi
        call dword ptr [edx + 0x108]
        test al, al
        jne L_58683b
        test esi, esi
        je L_5877c5
        mov eax, dword ptr [esi]
        test eax, eax
        je L_586823
        push eax
        call FUN_004084e0
        add esp, 4
L_586823:
        push esi
        call FUN_004084e0
        add esp, 4
        xor al, al
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x208
        ret 8
L_58683b:
        fld dword ptr [ebp + 0x3b8]
        mov ecx, dword ptr [g_7f2d1c]
        fstp dword ptr [esp + 0x28]
        push 0x117
        call FUN_00637a20
        fcomp dword ptr [esp + 0x28]
        fnstsw ax
        test ah, 0x41
        je L_5868ae
        mov ecx, dword ptr [g_7f2d1c]
        push 0x11b
        mov dword ptr [esp + 0x30], 0x20000
        call FUN_00637a20
        fstp dword ptr [esp + 0x54]
        mov ecx, dword ptr [g_7f2d1c]
        push 0x11a
        call FUN_00637a20
        fstp dword ptr [esp + 0x44]
        mov ecx, dword ptr [g_7f2d1c]
        push 0x118
        call FUN_00637a20
        fstp dword ptr [esp + 0x58]
        push 0x119
        jmp L_586967
L_5868ae:
        fld dword ptr [ebp + 0x3b8]
        mov ecx, dword ptr [g_7f2d1c]
        fstp dword ptr [esp + 0x28]
        push 0x112
        call FUN_00637a20
        fcomp dword ptr [esp + 0x28]
        fnstsw ax
        test ah, 0x41
        je L_58691e
        mov ecx, dword ptr [g_7f2d1c]
        push 0x116
        mov dword ptr [esp + 0x30], 0x40000
        call FUN_00637a20
        fstp dword ptr [esp + 0x54]
        mov ecx, dword ptr [g_7f2d1c]
        push 0x115
        call FUN_00637a20
        fstp dword ptr [esp + 0x44]
        mov ecx, dword ptr [g_7f2d1c]
        push 0x113
        call FUN_00637a20
        fstp dword ptr [esp + 0x58]
        push 0x114
        jmp L_586967
L_58691e:
        mov ecx, dword ptr [g_7f2d1c]
        push 0x111
        mov dword ptr [esp + 0x30], 0x60000
        call FUN_00637a20
        fstp dword ptr [esp + 0x54]
        mov ecx, dword ptr [g_7f2d1c]
        push 0x110
        call FUN_00637a20
        fstp dword ptr [esp + 0x44]
        mov ecx, dword ptr [g_7f2d1c]
        push 0x10e
        call FUN_00637a20
        fstp dword ptr [esp + 0x58]
        push 0x10f
L_586967:
        mov ecx, dword ptr [g_7f2d1c]
        call FUN_00637a20
        fstp dword ptr [esp + 0x30]
        mov eax, dword ptr [g_7b8d70]
        mov ecx, dword ptr [g_7b8d68]
        mov edx, dword ptr [g_7b8d6c]
        mov dword ptr [esp + 0x24], eax
        mov eax, dword ptr [esi + 4]
        xor ebx, ebx
        test eax, eax
        mov dword ptr [esp + 0x1c], ecx
        mov dword ptr [esp + 0x20], edx
        mov byte ptr [esp + 0x12], 1
        mov byte ptr [esp + 0x13], 1
        mov dword ptr [esp + 0x40], ebx
        jbe L_587483
L_5869ae:
        mov edx, dword ptr [esp + 0x220]
        mov eax, dword ptr [edx]
        lea ecx, [ebx*8]
        sub ecx, ebx
        mov edi, dword ptr [eax + ecx*8 + 8]
        lea esi, [eax + ecx*8]
        mov eax, dword ptr [edi + 0x10]
        mov ecx, eax
        shr ecx, 0xb
        test cl, 1
        je L_586fd1
        fld dword ptr [edi + 0x198]
        mov edx, dword ptr [edi + 4]
        fsub dword ptr [ebp + 0x198]
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [edi + 0x19c]
        fsub dword ptr [ebp + 0x19c]
        fstp dword ptr [esp + 0x60]
        fld dword ptr [edi + 0x1a0]
        fsub dword ptr [ebp + 0x1a0]
        fstp dword ptr [esp + 0x64]
        mov ecx, dword ptr [edx]
        cmp ecx, 0x429
        fld dword ptr [esp + 0x5c]
        fmul dword ptr [esp + 0x5c]
        fld dword ptr [esp + 0x64]
        fmul dword ptr [esp + 0x64]
        faddp st(1), st(0)
        fld dword ptr [esp + 0x60]
        fmul dword ptr [esp + 0x60]
        faddp st(1), st(0)
        fstp dword ptr [esp + 0x18]
        jne L_586f94
        shr eax, 0x13
        test al, 1
        jne L_587464
        fld dword ptr [edi + 0x3b8]
        mov ecx, dword ptr [g_7f2d1c]
        fstp dword ptr [esp + 0x14]
        push 0x117
        mov byte ptr [esp + 0x17], 0
        mov byte ptr [esp + 0x16], 0
        call FUN_00637a20
        fcomp dword ptr [esp + 0x14]
        fnstsw ax
        test ah, 0x41
        je L_586a7a
        push 0x118
        jmp L_586aab
L_586a7a:
        fld dword ptr [edi + 0x3b8]
        mov ecx, dword ptr [g_7f2d1c]
        fstp dword ptr [esp + 0x14]
        push 0x112
        call FUN_00637a20
        fcomp dword ptr [esp + 0x14]
        fnstsw ax
        test ah, 0x41
        je L_586aa6
        push 0x113
        jmp L_586aab
L_586aa6:
        push 0x10e
L_586aab:
        mov ecx, dword ptr [g_7f2d1c]
        call FUN_00637a20
        fstp dword ptr [esp + 0x14]
        push 0
        call FUN_00707e70
        fsub qword ptr [g_779d28]
        lea ebx, [ebp + 0x594]
        push ebx
        lea ecx, [esp + 0xb4]
        fstp qword ptr [esp + 0xec]
        call FUN_00416bc0
        lea ecx, [esp + 0xb0]
        mov dword ptr [esp + 0xb0], 0x7822f0
        call FUN_00416d00
        mov ecx, eax
        test ecx, ecx
        je L_586b51
L_586afe:
        mov eax, dword ptr [esp + 0xc0]
        fld qword ptr [eax + 0x18]
        fcomp qword ptr [esp + 0xe8]
        fnstsw ax
        test ah, 0x41
        je L_586b24
        lea ecx, [esp + 0xb0]
        call FUN_00416d40
        jmp L_586b34
L_586b24:
        cmp ecx, edi
        je L_586b48
        lea ecx, [esp + 0xb0]
        call FUN_00416ca0
L_586b34:
        lea ecx, [esp + 0xb0]
        call FUN_00416d00
        mov ecx, eax
        test ecx, ecx
        jne L_586afe
        jmp L_586b51
L_586b48:
        test ecx, ecx
        je L_586b51
        mov byte ptr [esp + 0x11], 0
L_586b51:
        fld dword ptr [esp + 0x18]
        fcomp dword ptr [esp + 0x54]
        fnstsw ax
        test ah, 1
        jne L_586f83
        mov al, byte ptr [esp + 0x11]
        test al, al
        je L_586c44
        push 0
        call FUN_00707e70
        fstp qword ptr [esp + 0xf0]
        lea ecx, [esp + 0xf0]
        push ecx
        push edi
        mov ecx, ebx
        call FUN_00416a90
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [eax + 0x5c]
        add eax, 0x50
        mov dword ptr [esp + 0xc4], edx
        mov ecx, dword ptr [eax + 0x1c]
        mov dword ptr [esp + 0xc8], ecx
        mov edx, dword ptr [eax + 0x2c]
        mov eax, dword ptr [esi]
        mov dword ptr [esp + 0xcc], edx
        mov ecx, dword ptr [eax + 0x5c]
        add eax, 0x50
        mov dword ptr [esp + 0x8c], ecx
        mov edx, dword ptr [eax + 0x1c]
        mov dword ptr [esp + 0x90], edx
        mov eax, dword ptr [eax + 0x2c]
        lea ecx, [esp + 0x8c]
        push ecx
        lea edx, [esp + 0xc8]
        push edx
        lea ecx, [esp + 0xe4]
        mov dword ptr [esp + 0x9c], eax
        call FUN_0040ca10
        push 0x3f000000
        lea eax, [esp + 0xe0]
        push eax
        lea ecx, [esp + 0xe4]
        call FUN_0040ca40
        lea ecx, [esp + 0xdc]
        push ecx
        lea edx, [esp + 0x90]
        push edx
        lea ecx, [esp + 0x1cc]
        call FUN_0040c9e0
        mov eax, dword ptr [ebp + 0x78]
        lea ecx, [ebp + 0x78]
        call dword ptr [eax + 4]
        lea ecx, [esp + 0x1c4]
        push ecx
        add eax, 0x654
        push eax
        mov ecx, ebp
        call FUN_005faa90
L_586c44:
        fld dword ptr [esp + 0x18]
        mov ecx, dword ptr [g_7f2d1c]
        fsqrt
        push 0x11c
        fmul dword ptr [edi + 0x3b8]
        fstp dword ptr [esp + 0x1c]
        call FUN_00637a20
        fchs
        fcom dword ptr [ebp + 0x19c]
        fnstsw ax
        test ah, 1
        jne L_586c83
        mov edx, dword ptr [ebp + 0xe0]
        cmp dword ptr [edx + 0x14], 9
        jne L_586c83
        mov bl, 1
        jmp L_586c85
L_586c83:
        xor bl, bl
L_586c85:
        fcomp dword ptr [edi + 0x19c]
        fnstsw ax
        test ah, 1
        jne L_586ca3
        mov eax, dword ptr [edi + 0xe0]
        cmp dword ptr [eax + 0x14], 9
        mov byte ptr [esp + 0x10], 1
        je L_586ca8
L_586ca3:
        mov byte ptr [esp + 0x10], 0
L_586ca8:
        mov cl, byte ptr [esp + 0x10]
        xor cl, bl
        je L_586d68
        test bl, bl
        je L_586cbf
        push 0x11e
        jmp L_586cc4
L_586cbf:
        push 0x11d
L_586cc4:
        mov ecx, dword ptr [g_7f2d1c]
        call FUN_00637a20
        fmul dword ptr [esp + 0x18]
        mov edx, dword ptr [ebp + 0xd8]
        add edx, 0x20
        push edx
        fstp dword ptr [esp + 0x1c]
        lea eax, [esp + 0x60]
        push eax
        lea ecx, [esp + 0x88]
        call FUN_0041c6e0
        fld dword ptr [esp + 0x88]
        fabs
        fld dword ptr [esp + 0x80]
        fabs
        fxch st(1)
        fxch st(1)
        fcompp
        fnstsw ax
        test ah, 1
        je L_586d4a
        fld dword ptr [esp + 0x88]
        push 0
        fcomp dword ptr [g_76c5b0]
        fnstsw ax
        test ah, 0x41
        jne L_586d46
        push 1
L_586d29:
        mov ecx, dword ptr [ebp + 0x9a0]
        call FUN_005a30d0
        test bl, bl
        je L_586dc9
        mov byte ptr [esp + 0x10], 6
        jmp L_586dfd
L_586d46:
        push 4
        jmp L_586d29
L_586d4a:
        fld dword ptr [esp + 0x80]
        push 0
        fcomp dword ptr [g_76c5b0]
        fnstsw ax
        test ah, 0x41
        jne L_586d64
        push 3
        jmp L_586d29
L_586d64:
        push 2
        jmp L_586d29
L_586d68:
        fld dword ptr [esp + 0x14]
        fmul dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x18]
L_586d74:
        mov ecx, dword ptr [ebp + 0xd8]
        add ecx, 0x20
        push ecx
        lea edx, [esp + 0x60]
        push edx
        lea ecx, [esp + 0xac]
        call FUN_0041c6e0
        fld dword ptr [esp + 0xac]
        fabs
        fld dword ptr [esp + 0xa4]
        fabs
        fxch st(1)
        fxch st(1)
        fcompp
        fnstsw ax
        test ah, 1
        je L_586ddf
        fld dword ptr [esp + 0xac]
        fcomp dword ptr [g_76c5b0]
        fnstsw ax
        test ah, 0x41
        jne L_586dd8
        mov byte ptr [esp + 0x10], 0xa
        jmp L_586dfd
L_586dc9:
        mov al, byte ptr [esp + 0x10]
        test al, al
        je L_586d74
        mov byte ptr [esp + 0x10], 5
        jmp L_586dfd
L_586dd8:
        mov byte ptr [esp + 0x10], 9
        jmp L_586dfd
L_586ddf:
        fld dword ptr [esp + 0xa4]
        mov byte ptr [esp + 0x10], 7
        fcomp dword ptr [g_76c5b0]
        fnstsw ax
        test ah, 0x41
        je L_586dfd
        mov byte ptr [esp + 0x10], 8
L_586dfd:
        mov ebx, dword ptr [ebp + 0x3b0]
        test ebx, ebx
        je L_586ec8
        movsx eax, byte ptr [esp + 0x10]
        add eax, -5
        cmp eax, 5
        ja L_586ec8
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0xF0
        __emit 0x77
        __emit 0x58
        __emit 0x00
L_586e23:
        push 0x40000000
        push 0x3f800000
        push 0
        push 0x3f800000
        lea ecx, [esp + 0x1e0]
        jmp L_586eb1
L_586e3d:
        push 0x40000000
        push 0x3f800000
        push 0
        push 0x3f800000
        lea ecx, [esp + 0x1ec]
        jmp L_586eb1
L_586e57:
        push 0x40000000
        push 0xbf800000
        push 0
        push 0
        lea ecx, [esp + 0x204]
        jmp L_586eb1
L_586e6e:
        push 0x40000000
        push 0x3f800000
        push 0
        push 0
        lea ecx, [esp + 0x21c]
        jmp L_586eb1
L_586e85:
        push 0x40000000
        push 0
        push 0
        push 0xbf800000
        lea ecx, [esp + 0x210]
        jmp L_586eb1
L_586e9c:
        push 0x40000000
        push 0
        push 0
        push 0x3f800000
        lea ecx, [esp + 0x1f8]
L_586eb1:
        call FUN_00587830
        sub esp, 0xc
        mov ecx, esp
        push eax
        call FUN_00551870
        mov ecx, ebx
        call FUN_0054a800
L_586ec8:
        mov al, byte ptr [esp + 0x11]
        test al, al
        je L_586f83
        push 0
        push 2
        push 0x44
        push 4
        lea ecx, [esp + 0x190]
        call FUN_00534630
        lea eax, [ebp + 0x14]
        push eax
        lea ecx, [esp + 0x194]
        call FUN_004ea0f0
        lea ecx, [esi + 0x18]
        push ecx
        lea ecx, [esp + 0x1a4]
        mov byte ptr [esp + 0x19c], 0
        mov word ptr [esp + 0x19e], 0
        call FUN_0040c5d0
        lea edx, [esi + 0xc]
        push edx
        lea ecx, [esp + 0x1b0]
        call FUN_0040c5d0
        mov cx, word ptr [edi + 0x16]
        mov al, byte ptr [edi + 0x14]
        mov edx, dword ptr [esp + 0x18]
        mov word ptr [esp + 0x19a], cx
        lea ecx, [esp + 0x180]
        mov byte ptr [esp + 0x198], al
        mov al, byte ptr [esp + 0x10]
        push ecx
        mov ecx, ebp
        mov dword ptr [esp + 0x198], edx
        mov byte ptr [esp + 0x1a0], al
        mov dword ptr [esp + 0x1bc], 0
        mov byte ptr [esp + 0x1c0], 0
        mov dword ptr [esp + 0x1c4], 0xffffffff
        call FUN_004d5b70
L_586f83:
        lea ecx, [esp + 0xb0]
        call FUN_00416c60
        jmp L_587382
L_586f94:
        mov ecx, dword ptr [esp + 0x2c]
        and eax, 0x60000
        cmp ecx, eax
        jg L_586fc2
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 0x60]
        cmp eax, 1
        jne L_587464
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax + 0x60]
        cmp eax, 1
        jne L_587464
L_586fc2:
        mov byte ptr [esp + 0x13], 0
        mov byte ptr [esp + 0x12], 0
        jmp L_587382
L_586fd1:
        mov ecx, dword ptr [esi + 4]
        mov dl, byte ptr [ecx + 0x9c]
        and dl, 0x1f
        cmp dl, 0xf
        mov byte ptr [esp + 0x13], 0
        jne L_5870fe
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 0x5c]
        mov edx, dword ptr [eax + 0x6c]
        add eax, 0x50
        mov eax, dword ptr [eax + 0x2c]
        mov dword ptr [esp + 0x48], ecx
        lea ecx, [ebp + 0x78]
        mov dword ptr [esp + 0x4c], edx
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 0x50], eax
        call dword ptr [edx + 4]
        mov ebx, dword ptr [esi]
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [esi + 4]
        add eax, 0x50
        push eax
        lea ecx, [esp + 0x6c]
        push ecx
        lea ecx, [ebx + 0x50]
        call FUN_00418a80
        fld dword ptr [esp + 0x70]
        fmul dword ptr [esp + 0x70]
        fld dword ptr [esp + 0x6c]
        fmul dword ptr [esp + 0x6c]
        faddp st(1), st(0)
        fld dword ptr [esp + 0x68]
        fmul dword ptr [esp + 0x68]
        faddp st(1), st(0)
        fld st(0)
        fabs
        fld dword ptr [g_7b220c]
        fcompp
        fnstsw ax
        test ah, 1
        je L_5870fc
        fsqrt
        mov ecx, dword ptr [esp + 0x14]
        lea edx, [esp + 0x68]
        push edx
        lea eax, [esp + 0xd4]
        add ecx, 0x658
        push eax
        push ecx
        mov ecx, ebp
        fdivr dword ptr [g_76d064]
        fld dword ptr [esp + 0x74]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x80]
        fld dword ptr [esp + 0x78]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x84]
        fmul dword ptr [esp + 0x7c]
        fld dword ptr [ebx + 0x88]
        fld st(0)
        fmul dword ptr [esp + 0x80]
        fstp dword ptr [esp + 0x80]
        fld st(0)
        fmul dword ptr [esp + 0x84]
        fstp dword ptr [esp + 0x84]
        fmulp st(1), st(0)
        fld dword ptr [esp + 0x54]
        fsub dword ptr [esp + 0x80]
        fstp dword ptr [esp + 0xdc]
        fld dword ptr [esp + 0x58]
        fsub dword ptr [esp + 0x84]
        fstp dword ptr [esp + 0xe0]
        fld dword ptr [esp + 0x5c]
        fsub st(0), st(1)
        fstp dword ptr [esp + 0xe4]
        fstp st(0)
        call FUN_005fabe0
        jmp L_5870fe
L_5870fc:
        fstp st(0)
L_5870fe:
        mov edx, dword ptr [edi + 0x10]
        mov eax, dword ptr [esp + 0x2c]
        and edx, 0x60000
        cmp eax, edx
        jg L_5871c4
        push 0
        push 2
        push 0x44
        push 4
        lea ecx, [esp + 0x14c]
        call FUN_00534630
        lea eax, [edi + 0x14]
        push eax
        lea ecx, [esp + 0x150]
        call FUN_004ea0f0
        lea ecx, [esi + 0x24]
        push ecx
        lea ecx, [esp + 0x160]
        mov byte ptr [esp + 0x158], 0
        mov word ptr [esp + 0x15a], 0
        call FUN_0040c5d0
        add esi, 0xc
        push esi
        lea ecx, [esp + 0x16c]
        call FUN_0040c5d0
        mov dl, byte ptr [ebp + 0x14]
        mov ax, word ptr [ebp + 0x16]
        lea ecx, [esp + 0x13c]
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 0x158], dl
        mov word ptr [esp + 0x15a], ax
        mov dword ptr [esp + 0x154], 0x47c35000
        mov byte ptr [esp + 0x15c], 5
        mov dword ptr [esp + 0x178], 0
        mov byte ptr [esp + 0x17c], 0
        mov dword ptr [esp + 0x180], 0xffffffff
        call FUN_004d5b70
        jmp L_587460
L_5871c4:
        fld dword ptr [ebp + 0x1a0]
        mov ecx, dword ptr [g_7f2d1c]
        fld dword ptr [ebp + 0x19c]
        push 0x11c
        fld dword ptr [ebp + 0x198]
        fld st(0)
        fmul st(0), st(1)
        fld st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fstp dword ptr [esp + 0x18]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call FUN_00637a20
        fchs
        fcomp dword ptr [ebp + 0x19c]
        fnstsw ax
        test ah, 1
        jne L_587233
        mov edx, dword ptr [ebp + 0xe0]
        cmp dword ptr [edx + 0x14], 9
        jne L_587233
        mov ecx, dword ptr [g_7f2d1c]
        push 0x11d
        mov bl, 5
        call FUN_00637a20
        fstp dword ptr [esp + 0x28]
        jmp L_58723d
L_587233:
        mov eax, dword ptr [esp + 0x58]
        mov bl, 9
        mov dword ptr [esp + 0x28], eax
L_58723d:
        mov eax, dword ptr [edi + 4]
        mov edx, dword ptr [eax]
        cmp edx, 0x42d
        mov cl, 1
        je L_587254
        cmp edx, 0x471
        jne L_587291
L_587254:
        mov eax, dword ptr [g_7dab44]
        mov edx, dword ptr [g_7dab40]
        xor edx, dword ptr [eax]
        mov eax, dword ptr [edx + 0xc]
        xor eax, 0x85739531
        mov dl, byte ptr [eax + 0x17]
        test dl, dl
        je L_587291
        mov dl, byte ptr [eax + 0x16]
        test dl, dl
        je L_58727c
        mov eax, dword ptr [eax + 0x50]
        jmp L_58727f
L_58727c:
        mov eax, dword ptr [eax + 0x54]
L_58727f:
        mov eax, dword ptr [eax + 0xa4]
        cmp eax, 4
        je L_58728f
        cmp eax, 0xa
        jne L_587291
L_58728f:
        xor cl, cl
L_587291:
        test cl, cl
        mov byte ptr [esp + 0x12], 0
        je L_587382
        fld dword ptr [esp + 0x14]
        fcomp dword ptr [esp + 0x44]
        fnstsw ax
        test ah, 1
        jne L_587382
        mov al, byte ptr [esp + 0x11]
        test al, al
        je L_587382
        push 0
        push 2
        push 0x44
        push 4
        lea ecx, [esp + 0x108]
        call FUN_00534630
        lea ecx, [edi + 0x14]
        push ecx
        lea ecx, [esp + 0x10c]
        call FUN_004ea0f0
        lea edx, [esi + 0x24]
        push edx
        lea ecx, [esp + 0x11c]
        mov byte ptr [esp + 0x114], 0
        mov word ptr [esp + 0x116], 0
        call FUN_0040c5d0
        fld dword ptr [esp + 0x14]
        fsqrt
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [esi + 0xc]
        mov edx, dword ptr [esi + 0x14]
        mov dword ptr [esp + 0x128], ecx
        mov cx, word ptr [ebp + 0x16]
        mov dword ptr [esp + 0x12c], edx
        mov dword ptr [esp + 0x124], eax
        mov al, byte ptr [ebp + 0x14]
        lea edx, [esp + 0xf8]
        mov word ptr [esp + 0x112], cx
        push edx
        mov ecx, edi
        mov byte ptr [esp + 0x114], al
        mov byte ptr [esp + 0x118], bl
        mov dword ptr [esp + 0x134], 0
        mov byte ptr [esp + 0x138], 0
        mov dword ptr [esp + 0x13c], 0xffffffff
        fmul dword ptr [ebp + 0x3b8]
        fmul dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x110]
        call FUN_004d5b70
L_587382:
        mov edi, dword ptr [esi + 4]
        mov esi, dword ptr [esi]
        lea ebx, [edi + 0x50]
        push ebx
        lea eax, [esp + 0x38]
        add esi, 0x50
        push eax
        mov ecx, esi
        call FUN_00418a80
        mov eax, dword ptr [ebp + 0x12c]
        test eax, eax
        je L_58743c
        mov edx, dword ptr [eax + 4]
        xor ecx, ecx
        test edx, edx
        jbe L_5873c2
        mov eax, dword ptr [eax]
        add eax, 4
L_5873b6:
        cmp dword ptr [eax], edi
        je L_5873c2
        inc ecx
        add eax, 0x38
        cmp ecx, edx
        jb L_5873b6
L_5873c2:
        cmp ecx, edx
        jae L_58743c
        fld dword ptr [esp + 0x3c]
        fmul dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x38]
        fmul dword ptr [esp + 0x38]
        faddp st(1), st(0)
        fld dword ptr [esp + 0x34]
        fmul dword ptr [esp + 0x34]
        faddp st(1), st(0)
        fsqrt
        fdivr dword ptr [g_76d064]
        fld dword ptr [esp + 0x34]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x98]
        fld dword ptr [esp + 0x38]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x9c]
        fld dword ptr [esp + 0x3c]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0xa0]
        fstp st(0)
        fld dword ptr [esp + 0x9c]
        fcomp dword ptr [g_76d584]
        fnstsw ax
        test ah, 0x41
        jne L_58743c
        lea ecx, [esp + 0x98]
        push ecx
        push ebx
        lea edx, [esp + 0x3c]
        push edx
        mov ecx, esi
        call FUN_00418f00
L_58743c:
        fld dword ptr [esp + 0x34]
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x38]
        fadd dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x3c]
        fadd dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x24]
L_587460:
        mov ebx, dword ptr [esp + 0x40]
L_587464:
        mov eax, dword ptr [esp + 0x220]
        mov ecx, dword ptr [eax + 4]
        inc ebx
        cmp ebx, ecx
        mov dword ptr [esp + 0x40], ebx
        jb L_5869ae
        mov al, byte ptr [esp + 0x13]
        test al, al
        je L_5874b9
L_587483:
        mov esi, dword ptr [esp + 0x220]
        test esi, esi
        je L_5877c5
        mov eax, dword ptr [esi]
        test eax, eax
        je L_5874a1
        push eax
        call FUN_004084e0
        add esp, 4
L_5874a1:
        push esi
        call FUN_004084e0
        add esp, 4
        xor al, al
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x208
        ret 8
L_5874b9:
        mov esi, dword ptr [ebp + 0xe0]
        cmp dword ptr [esi + 0x14], 9
        jne L_5875b8
        mov al, byte ptr [esp + 0x12]
        test al, al
        lea ecx, [ebp + 0x198]
        jne L_587723
        fld dword ptr [esp + 0x24]
        fmul dword ptr [ecx + 8]
        fld dword ptr [esp + 0x20]
        fmul dword ptr [ecx + 4]
        faddp st(1), st(0)
        fld dword ptr [esp + 0x1c]
        fmul dword ptr [ecx]
        faddp st(1), st(0)
        fld dword ptr [g_7b220c]
        fchs
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_587723
        fld dword ptr [esp + 0x24]
        mov edx, dword ptr [ebp + 0xd8]
        fmul dword ptr [esp + 0x24]
        add edx, 0x80
        fld dword ptr [esp + 0x20]
        push edx
        fmul dword ptr [esp + 0x24]
        push ecx
        faddp st(1), st(0)
        fld dword ptr [esp + 0x24]
        fmul dword ptr [esp + 0x24]
        faddp st(1), st(0)
        fsqrt
        fdivr dword ptr [g_76d064]
        fld st(0)
        fmul dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x50]
        fld st(0)
        fmul dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x54]
        fmul dword ptr [esp + 0x2c]
        fld st(0)
        fmul dword ptr [ecx + 8]
        fld dword ptr [esp + 0x54]
        fmul dword ptr [ecx + 4]
        faddp st(1), st(0)
        fld dword ptr [esp + 0x50]
        fmul dword ptr [ecx]
        faddp st(1), st(0)
        fmul dword ptr [g_7822ec]
        fld dword ptr [esp + 0x50]
        fmul st(0), st(1)
        fadd dword ptr [ecx]
        fstp dword ptr [ecx]
        fld dword ptr [esp + 0x54]
        fmul st(0), st(1)
        fadd dword ptr [ecx + 4]
        fstp dword ptr [ecx + 4]
        fxch st(1)
        fmul st(0), st(1)
        fadd dword ptr [ecx + 8]
        fstp dword ptr [ecx + 8]
        lea ecx, [ebp + 0x168]
        fstp st(0)
        call FUN_0041c6e0
        fld dword ptr [ebp + 0x170]
        fmul dword ptr [g_77d0fc]
        fst dword ptr [ebp + 0x444]
        fstp dword ptr [ebp + 0x440]
        jmp L_587723
L_5875b8:
        mov eax, dword ptr [ebp + 0x78]
        lea ecx, [ebp + 0x78]
        call dword ptr [eax + 4]
        mov ecx, eax
        mov al, byte ptr [esp + 0x12]
        test al, al
        je L_587697
        fld dword ptr [ebp + 0x440]
        fsub dword ptr [esp + 0x30]
        fcom dword ptr [ecx + 0x2d0]
        fnstsw ax
        test ah, 0x41
        jne L_58762e
        mov esi, dword ptr [esp + 0x220]
        fst dword ptr [ebp + 0x440]
        test esi, esi
        fmul dword ptr [g_77d0fc]
        fstp dword ptr [ebp + 0x444]
        je L_5877c5
        mov eax, dword ptr [esi]
        test eax, eax
        je L_587616
        push eax
        call FUN_004084e0
        add esp, 4
L_587616:
        push esi
        call FUN_004084e0
        add esp, 4
        xor al, al
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x208
        ret 8
L_58762e:
        fstp st(0)
        fld dword ptr [esp + 0x30]
        fadd dword ptr [ebp + 0x440]
        fld dword ptr [ecx + 0x2d0]
        fchs
        fld st(1)
        fcompp
        fnstsw ax
        test ah, 1
        je L_587695
        mov esi, dword ptr [esp + 0x220]
        fst dword ptr [ebp + 0x440]
        test esi, esi
        fmul dword ptr [g_77d0fc]
        fstp dword ptr [ebp + 0x444]
        je L_5877c5
        mov eax, dword ptr [esi]
        test eax, eax
        je L_58767d
        push eax
        call FUN_004084e0
        add esp, 4
L_58767d:
        push esi
        call FUN_004084e0
        add esp, 4
        xor al, al
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x208
        ret 8
L_587695:
        fstp st(0)
L_587697:
        fld dword ptr [ebp + 0x440]
        mov byte ptr [ebp + 0x5a8], 0
        fcomp dword ptr [ecx + 0x2d0]
        fnstsw ax
        test ah, 0x41
        jne L_5876bd
        mov ecx, dword ptr [ecx + 0x2d0]
        mov dword ptr [ebp + 0x440], ecx
L_5876bd:
        mov ecx, dword ptr [ebp + 0x2f4]
        fld dword ptr [ebp + 0x440]
        mov eax, dword ptr [ecx + 0x14]
        fmul dword ptr [g_77d0fc]
        add eax, -0x12
        cmp eax, 0xb
        fstp dword ptr [ebp + 0x444]
        ja L_587723
        xor edx, edx
        mov dl, byte ptr [eax + 0x587818]
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x08
        __emit 0x78
        __emit 0x58
        __emit 0x00
L_5876ef:
        mov eax, dword ptr [ecx]
        xor edx, edx
        mov dl, byte ptr [g_7f1f7d]
        push 0
        push edx
        push 0xa
        jmp L_587720
L_587700:
        mov eax, dword ptr [ecx]
        xor edx, edx
        mov dl, byte ptr [g_7f1f7d]
        push 0
        push edx
        push 0x1a
        jmp L_587720
L_587711:
        mov eax, dword ptr [ecx]
        xor edx, edx
        mov dl, byte ptr [g_7f1f7d]
        push 0
        push edx
        push 0x1c
L_587720:
        call dword ptr [eax + 8]
L_587723:
        cmp dword ptr [esi + 0x14], 1
        jne L_58775f
        mov esi, dword ptr [esp + 0x220]
        test esi, esi
        je L_5877c5
        mov eax, dword ptr [esi]
        test eax, eax
        je L_587747
        push eax
        call FUN_004084e0
        add esp, 4
L_587747:
        push esi
        call FUN_004084e0
        add esp, 4
        xor al, al
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x208
        ret 8
L_58775f:
        mov eax, dword ptr [esp + 0x21c]
        fld dword ptr [esp + 0x1c]
        mov esi, dword ptr [ebp + 0xd8]
        add esi, 0x20
        mov edi, eax
        mov ecx, 0xc
        rep movsd
        fadd dword ptr [eax + 0xc]
        fstp dword ptr [eax + 0xc]
        fld dword ptr [esp + 0x20]
        fadd dword ptr [eax + 0x1c]
        fstp dword ptr [eax + 0x1c]
        fld dword ptr [esp + 0x24]
        fadd dword ptr [eax + 0x2c]
        fstp dword ptr [eax + 0x2c]
        mov eax, dword ptr [ebp + 0xe0]
        cmp dword ptr [eax + 0x14], 1
        jne L_5877d4
        mov esi, dword ptr [esp + 0x220]
        test esi, esi
        je L_5877c5
        mov eax, dword ptr [esi]
        test eax, eax
        je L_5877bc
        push eax
        call FUN_004084e0
        add esp, 4
L_5877bc:
        push esi
        call FUN_004084e0
        add esp, 4
L_5877c5:
        xor al, al
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x208
        ret 8
L_5877d4:
        mov ecx, dword ptr [esp + 0x220]
        pop edi
        pop esi
        mov dword ptr [ebp + 0x130], ecx
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x208
        ret 8
        __emit 0x3D
        __emit 0x6E
        __emit 0x58
        __emit 0x00
        __emit 0x23
        __emit 0x6E
        __emit 0x58
        __emit 0x00
        __emit 0x85
        __emit 0x6E
        __emit 0x58
        __emit 0x00
        __emit 0x9C
        __emit 0x6E
        __emit 0x58
        __emit 0x00
        __emit 0x6E
        __emit 0x6E
        __emit 0x58
        __emit 0x00
        __emit 0x57
        __emit 0x6E
        __emit 0x58
        __emit 0x00
        __emit 0xEF
        __emit 0x76
        __emit 0x58
        __emit 0x00
        __emit 0x00
        __emit 0x77
        __emit 0x58
        __emit 0x00
        __emit 0x11
        __emit 0x77
        __emit 0x58
        __emit 0x00
        __emit 0x23
        __emit 0x77
        __emit 0x58
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x01
        __emit 0x03
        __emit 0x02
    }
}
