/* FUN_0063C520 - 0x0063C520, size 4032 B (block 0x63C520)
 * __thiscall, RET. HUD/damage-display handler: iterates object lists,
 * builds string tables (tolower loops via IAT 0x76b3d4), sets up HUD
 * elements (FUN_0055e5c0/0055e820/0055eb90/0055eed0), uses a 4-entry
 * jump table at 0x63D4D0 (dispatch 0x63C97E) for severity, and computes
 * layout via FUN_00561df0/00561a30/005619f0 + FPU float constants.
 *
 * NOTE: the in-.text jump table (4 dwords at 0x63D4D0) + the
 * `jmp [eax*4 + 0x63d4d0]` dispatch are emitted as raw __emit bytes
 * (inline asm has no dd; MSVC6 would re-base the dispatch via EBX).
 */
#include <windows.h>

/* extern data symbols (absolute addresses) */
extern int    g_7dab44;   /* 0x007dab44 */
extern int    g_7dab40;   /* 0x007dab40 */
extern float  g_78f20c;   /* 0x0078f20c */
extern float  g_78f208;   /* 0x0078f208 */
extern float  g_78f204;   /* 0x0078f204 */
extern float  g_78f200;   /* 0x0078f200 */
extern float  g_78f1fc;   /* 0x0078f1fc */
extern int    g_78f180;   /* 0x0078f180 (fild int array) */
extern float  g_7b5634;   /* 0x007b5634 */
extern float  g_76d064;   /* 0x0076d064 */
extern float  g_76d5f0;   /* 0x0076d5f0 */
extern float  g_77016c;   /* 0x0077016c */
extern float  g_77dff8;   /* 0x0077dff8 */
extern void*  g_76b3d4;   /* 0x0076b3d4 (IAT fn ptr) */
extern void*  g_76b2d4;   /* 0x0076b2d4 (IAT fn ptr) */

/* extern function symbols (rel32 calls) */
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0055e5c0(void);
extern void __cdecl FUN_0055e820(void);
extern void __cdecl FUN_005603e0(void);
extern void __cdecl FUN_00560400(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_0050e1b0(void);
extern void __cdecl FUN_0055f5b0(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0055eb90(void);
extern void __cdecl FUN_0055eed0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void func_0063C520(void)
{
    __asm {
        sub esp, 0x2d4
        push ebx
        mov ebx, ecx
        push ebp
        xor ecx, ecx
        lea eax, [ebx + 0x17c]
        push esi
        mov dword ptr [eax], ecx
        mov word ptr [eax + 4], cx
        lea esi, [ebx + 0x154]
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x1c], ebx
        call FUN_00417a40
        test eax, eax
        je L_d4c5
        mov ecx, esi
        call FUN_00417a40
        mov ecx, dword ptr [esi]
        mov dword ptr [ebx + 0x178], eax
        xor ebp, ebp
        lea eax, [ebx + 0x50]
        mov dword ptr [esp + 0x2c], ebp
        mov dword ptr [esp + 0x2c], eax
        test ecx, ecx
        je L_c654
L_c56f:
        mov eax, dword ptr [ecx]
        test eax, eax
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [esp + 0x68], edx
        je L_c654
        mov edi, dword ptr [eax + 0x14]
        or ecx, 0xffffffff
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 2
        mov esi, edi
        lea edx, [esp + 0xe4]
        mov edi, edx
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        or ecx, 0xffffffff
        xor edx, edx
        xor eax, eax
        lea edi, [esp + 0xe4]
        repne scasb
        not ecx
        dec ecx
        mov dword ptr [esp + 0x30], edx
        je L_c601
L_c5ce:
        mov esi, dword ptr [g_76b3d4]
        movsx ecx, byte ptr [esp + edx + 0xe4]
        push ecx
        call esi
        mov edx, dword ptr [esp + 0x34]
        add esp, 4
        mov byte ptr [esp + edx + 0xe4], al
        or ecx, 0xffffffff
        inc edx
        xor eax, eax
        lea edi, [esp + 0xe4]
        repne scasb
        not ecx
        dec ecx
        cmp edx, ecx
        mov dword ptr [esp + 0x30], edx
        __emit 0x72
        __emit 0xCD
L_c601:
        mov edx, dword ptr [esp + 0x2c]
        mov esi, dword ptr [edx]
        push 0
        push 0
        lea eax, [esp + 0xec]
        push eax
        mov ecx, esi
        call FUN_00560420
        mov edx, dword ptr [esi]
        push 0
        mov ecx, esi
        call dword ptr [edx + 4]
        mov eax, dword ptr [esi]
        lea ecx, [esp + 0x34]
        push ecx
        lea edx, [esp + 0x34]
        push edx
        mov ecx, esi
        call dword ptr [eax + 0xc]
        mov eax, dword ptr [esp + 0x34]
        test eax, eax
        je L_c640
        lea ebp, [eax + ebp - 3]
L_c640:
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x68]
        add eax, 4
        mov dword ptr [esp + 0x2c], eax
        __emit 0xE9
        __emit 0x1B
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
L_c654:
        mov dword ptr [esp + 0x2c], ebp
        add ebp, 0x14
        mov dword ptr [esp + 0x34], ebp
        fild dword ptr [esp + 0x34]
        call FUN_0075db4a
        push 0x96000000
        mov esi, eax
        push esi
        push 0x273
        push 0
        push 0x23f
        call FUN_0055e5c0
        push 0x96000000
        push esi
        push 0x320
        push 0
        push 0x274
        call FUN_0055e5c0
        push 0x9600af00
        push 0x11
        push 0x26f
        push 3
        push 0x242
        call FUN_0055e5c0
        push 0x9600af00
        push 0x11
        push 0x283
        push 3
        push 0x271
        call FUN_0055e5c0
        add esp, 0x50
        push 0x9600af00
        push 0x11
        push 0x2ff
        push 3
        push 0x285
        call FUN_0055e5c0
        push 0x9600af00
        push 0x11
        push 0x31e
        push 3
        push 0x301
        call FUN_0055e5c0
        push 0x9600af00
        push esi
        push 0x320
        push 0
        push 0x23f
        call FUN_0055e820
        mov esi, dword ptr [ebx + 0x164]
        add esp, 0x3c
        push 0
        mov ebp, 0x12
        push 0x440fc000
        mov ecx, esi
        mov dword ptr [esp + 0x3c], ebp
        call FUN_005603e0
        push 0x41a00000
        push 0x44408000
        mov ecx, esi
        call FUN_00560400
        mov edi, dword ptr [ebx + 0x168]
        push 0
        push 0x440fc000
        mov ecx, edi
        call FUN_005603e0
        push 0x41a00000
        push 0x44408000
        mov ecx, edi
        call FUN_00560400
        mov ebx, dword ptr [ebx + 0x16c]
        push 0
        push 0x440fc000
        mov ecx, ebx
        call FUN_005603e0
        push 0x41a00000
        push 0x44408000
        mov ecx, ebx
        call FUN_00560400
        mov ebx, dword ptr [esi]
        push 1
        push 0x3f666666
        push 0x40400000
        push 0x44114000
        lea ecx, [esp + 0x60]
        call FUN_00587830
        sub esp, 0xc
        mov ecx, esp
        push eax
        call FUN_00551870
        mov ecx, esi
        call dword ptr [ebx + 0x14]
        mov esi, dword ptr [edi]
        push 1
        push 0x3f666666
        push 0x40400000
        push 0x441d4000
        lea ecx, [esp + 0x60]
        call FUN_00587830
        sub esp, 0xc
        mov ecx, esp
        push eax
        call FUN_00551870
        mov ecx, edi
        call dword ptr [esi + 0x14]
        mov edi, dword ptr [esp + 0x1c]
        mov esi, dword ptr [edi + 0x16c]
        mov ebx, dword ptr [esi]
        push 1
        push 0x3f666666
        push 0x40400000
        push 0x44228000
        lea ecx, [esp + 0x60]
        call FUN_00587830
        sub esp, 0xc
        mov ecx, esp
        push eax
        call FUN_00551870
        mov ecx, esi
        call dword ptr [ebx + 0x14]
        mov esi, dword ptr [edi + 0x170]
        push 0
        push 0x440fc000
        mov ecx, esi
        call FUN_005603e0
        push 0x41a00000
        push 0x44478000
        mov ecx, esi
        call FUN_00560400
        mov eax, dword ptr [esi]
        lea ecx, [esp + 0xa8]
        push ecx
        lea edx, [esp + 0x60]
        push edx
        mov ecx, esi
        call dword ptr [eax + 0xc]
        mov eax, dword ptr [esp + 0x5c]
        mov ebx, dword ptr [esi]
        push 1
        mov dword ptr [esp + 0x4c], eax
        mov dword ptr [esp + 0x50], 0
        fild qword ptr [esp + 0x4c]
        push 0x3f666666
        push 0x40400000
        fsubr dword ptr [g_78f20c]
        push ecx
        lea ecx, [esp + 0x60]
        fstp dword ptr [esp]
        call FUN_00587830
        sub esp, 0xc
        mov ecx, esp
        push eax
        call FUN_00551870
        mov ecx, esi
        call dword ptr [ebx + 0x14]
        mov ecx, dword ptr [esp + 0x2c]
        add ecx, 0x10
        mov dword ptr [esp + 0x3c], ecx
        fild dword ptr [esp + 0x3c]
        push 0x96003200
        call FUN_0075db4a
        push eax
        push 0x26d
        push 0x13
        push 0x243
        call FUN_0055e5c0
        mov eax, dword ptr [edi + 0x154]
        add esp, 0x14
        add edi, 0x50
        mov dword ptr [esp + 0x30], edi
        test eax, eax
        je L_d4c5
L_c8d4:
        mov ecx, dword ptr [eax]
        test ecx, ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esp + 0x40], ecx
        mov dword ptr [esp + 0x58], edx
        je L_d4c5
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x44]
        mov eax, dword ptr [ecx + 0x78]
        add ecx, 0x78
        mov byte ptr [esp + 0x17], 0
        call dword ptr [eax + 4]
        mov edi, dword ptr [esp + 0x30]
        mov ebx, dword ptr [edi]
        mov edx, dword ptr [ebx]
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0xa0]
        push ecx
        mov ecx, ebx
        call dword ptr [edx + 0xc]
        mov eax, dword ptr [esi + 0x3c]
        mov ecx, dword ptr [eax]
        push 0xa
        lea edx, [esp + 0xb8]
        push edx
        push ecx
        call FUN_0050e1b0
        add esp, 4
        push eax
        call dword ptr [g_76b2d4]
        mov ecx, dword ptr [edi + 0x78]
        add esp, 0xc
        push 0
        push 0
        lea edx, [esp + 0xbc]
        push edx
        call FUN_00560420
        mov eax, dword ptr [esi + 0x48]
        cmp eax, 3
        mov edi, 0x96003200
        mov ecx, 0xff0000af
        mov dword ptr [esp + 0x24], edi
        mov dword ptr [esp + 0x38], 0xc8009600
        mov dword ptr [esp + 0x28], ecx
        ja L_cc4c
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0xD0
        __emit 0xD4
        __emit 0x63
        __emit 0x00
L_c985:
        mov eax, dword ptr [esp + 0x1c]
        fld dword ptr [esi + 0x40]
        fcomp dword ptr [eax + 0x150]
        fnstsw ax
        test ah, 1
        jne L_c9b1
        mov edi, 0xff00ff00
        mov byte ptr [esp + 0x17], 1
        mov dword ptr [esp + 0x24], edi
        mov dword ptr [esp + 0x28], 0xff0000ff
        jmp L_c9be
L_c9b1:
        mov edi, 0xff00af00
        mov dword ptr [esp + 0x24], edi
        mov dword ptr [esp + 0x28], ecx
L_c9be:
        mov ecx, dword ptr [esp + 0x18]
        lea edx, [ecx + ebp - 4]
        mov dword ptr [esp + 0x20], edx
        fild dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x38], 0xff00af00
        push 0xff00af00
        call FUN_0075db4a
        push eax
        lea eax, [ebp + 1]
        mov dword ptr [esp + 0x28], eax
        fild dword ptr [esp + 0x28]
        push 0x281
        jmp L_ca6e
L_c9f3:
        fld dword ptr [esi + 0x40]
        mov ecx, dword ptr [esp + 0x1c]
        fcomp dword ptr [ecx + 0x150]
        mov edi, 0x7dffe300
        fnstsw ax
        test ah, 1
        je L_ca11
        mov edi, 0x7dbaa600
L_ca11:
        mov edx, dword ptr [esp + 0x18]
        lea eax, [edx + ebp - 4]
        mov dword ptr [esp + 0x20], eax
        fild dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x24], edi
        mov dword ptr [esp + 0x38], 0x7de1c800
        push edi
        call FUN_0075db4a
        fld dword ptr [esi + 0x18]
        fmul dword ptr [g_78f208]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        fdiv dword ptr [ecx + 0x6c]
        fsubr dword ptr [g_78f204]
        call FUN_0075db4a
        mov dword ptr [esp + 0x18], eax
        fild dword ptr [esp + 0x18]
        fadd dword ptr [g_78f200]
        call FUN_0075db4a
        lea edx, [ebp + 1]
        mov dword ptr [esp + 0x18], edx
        fild dword ptr [esp + 0x18]
        push eax
L_ca6e:
        call FUN_0075db4a
        push eax
        push 0x273
        call FUN_0055e5c0
        add esp, 0x14
        jmp L_cc4c
L_ca86:
        mov edi, 0x96000000
        mov dword ptr [esp + 0x24], edi
        mov dword ptr [esp + 0x38], 0xc8000000
        jmp L_cc4c
L_ca9c:
        lea eax, [ebp + 1]
        mov dword ptr [esp + 0x10], eax
        fild dword ptr [esp + 0x10]
        mov edi, 0x96b93232
        mov dword ptr [esp + 0x24], edi
        mov dword ptr [esp + 0x38], 0x96e63232
        call FUN_0075db4a
        mov ecx, dword ptr [esp + 0x18]
        lea edx, [ecx + ebp - 4]
        mov dword ptr [esp + 0x10], edx
        fild dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x20], eax
        push edi
        call FUN_0075db4a
        fld dword ptr [esi + 0x10]
        fmul dword ptr [g_78f208]
        push eax
        fdiv dword ptr [g_7b5634]
        fsubr dword ptr [g_78f204]
        call FUN_0075db4a
        mov dword ptr [esp + 0x18], eax
        fild dword ptr [esp + 0x18]
        fadd dword ptr [g_78f200]
        call FUN_0075db4a
        push eax
        mov eax, dword ptr [esp + 0x2c]
        push eax
        push 0x273
        call FUN_0055e5c0
        add esp, 0x14
        push 0
        call FUN_00707e70
        call FUN_0075db4a
        and eax, 0x80000001
        jns L_cb30
        dec eax
        or eax, 0xfffffffe
        inc eax
L_cb30:
        je L_cc4c
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0xd55f
        mov dword ptr [esp + 0x3c], 0x96faf0e1
        mov dword ptr [esp + 0x28], 0x96e63232
        call dword ptr [eax + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 2
        mov esi, edi
        lea edx, [esp + 0x1e4]
        mov edi, edx
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        or ecx, 0xffffffff
        xor eax, eax
        xor esi, esi
        lea edi, [esp + 0x1e4]
        repne scasb
        not ecx
        dec ecx
        je L_cbd1
L_cba2:
        movsx ecx, byte ptr [esp + esi + 0x1e4]
        push ecx
        call dword ptr [g_76b3d4]
        add esp, 4
        mov byte ptr [esp + esi + 0x1e4], al
        or ecx, 0xffffffff
        xor eax, eax
        inc esi
        lea edi, [esp + 0x1e4]
        repne scasb
        not ecx
        dec ecx
        cmp esi, ecx
        jb L_cba2
L_cbd1:
        push 0
        push 0
        lea edx, [esp + 0x1ec]
        push edx
        mov ecx, ebx
        mov dword ptr [ebx + 0x104], 0x96faf0e1
        call FUN_00560420
        mov eax, dword ptr [esp + 0x18]
        lea ecx, [eax + ebp - 4]
        mov dword ptr [esp + 0x10], ecx
        fild dword ptr [esp + 0x10]
        push 0x96e63232
        call FUN_0075db4a
        or ecx, 0xffffffff
        push eax
        xor eax, eax
        lea edi, [esp + 0x1ec]
        repne scasb
        not ecx
        dec ecx
        lea edx, [ecx + ecx*8 + 0x4b]
        mov dword ptr [esp + 0x18], edx
        fild dword ptr [esp + 0x18]
        fadd dword ptr [g_78f200]
        call FUN_0075db4a
        push eax
        mov eax, dword ptr [esp + 0x2c]
        push eax
        push 0x285
        call FUN_0055e5c0
        mov esi, dword ptr [esp + 0x54]
        mov edi, dword ptr [esp + 0x38]
        add esp, 0x14
L_cc4c:
        mov ebx, dword ptr [esi + 0x44]
        test byte ptr [ebx + 0x1a0], 1
        je L_ccec
        mov al, byte ptr [esp + 0x17]
        test al, al
        je L_cc71
        mov ecx, dword ptr [esp + 0x1c]
        lea eax, [ecx + 0x17c]
        mov byte ptr [eax], 1
L_cc71:
        mov eax, dword ptr [esi + 0x48]
        test eax, eax
        jne L_ccb2
        mov edx, dword ptr [esp + 0x1c]
        cmp dword ptr [edx + 0x14c], 1
        jne L_ccb2
        mov ecx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x28]
        lea edx, [ecx + ebp - 4]
        mov dword ptr [esp + 0x10], edx
        fild dword ptr [esp + 0x10]
        push eax
        call FUN_0075db4a
        push eax
        lea eax, [ebp + 1]
        mov dword ptr [esp + 0x18], eax
        fild dword ptr [esp + 0x18]
        push 0x24a
        jmp L_ccd9
L_ccb2:
        mov ecx, dword ptr [esp + 0x18]
        lea edx, [ecx + ebp - 4]
        mov dword ptr [esp + 0x10], edx
        fild dword ptr [esp + 0x10]
        push edi
        call FUN_0075db4a
        push eax
        lea eax, [ebp + 1]
        mov dword ptr [esp + 0x18], eax
        fild dword ptr [esp + 0x18]
        push 0x24a
L_ccd9:
        call FUN_0075db4a
        push eax
        push 0x244
        call FUN_0055e5c0
        add esp, 0x14
L_ccec:
        mov ebx, dword ptr [ebx + 0x1a0]
        mov dword ptr [esp + 0x24], ebx
        shr ebx, 1
        test bl, 1
        je L_cda2
        mov al, byte ptr [esp + 0x17]
        test al, al
        je L_cd14
        mov ecx, dword ptr [esp + 0x1c]
        mov byte ptr [ecx + 0x17d], 1
L_cd14:
        mov eax, dword ptr [esi + 0x48]
        test eax, eax
        jne L_cd68
        mov edx, dword ptr [esp + 0x1c]
        cmp dword ptr [edx + 0x14c], 2
        jne L_cd68
        mov eax, dword ptr [esp + 0x18]
        mov ebx, dword ptr [esp + 0x28]
        lea ecx, [eax + ebp - 4]
        mov dword ptr [esp + 0x10], ecx
        fild dword ptr [esp + 0x10]
        push ebx
        call FUN_0075db4a
        lea edx, [ebp + 1]
        mov dword ptr [esp + 0x14], edx
        fild dword ptr [esp + 0x14]
        push eax
        push 0x251
        call FUN_0075db4a
        push eax
        push 0x24b
        call FUN_0055e5c0
        add esp, 0x14
        jmp L_cda6
L_cd68:
        mov eax, dword ptr [esp + 0x18]
        lea ecx, [eax + ebp - 4]
        mov dword ptr [esp + 0x10], ecx
        fild dword ptr [esp + 0x10]
        push edi
        call FUN_0075db4a
        lea edx, [ebp + 1]
        mov dword ptr [esp + 0x14], edx
        fild dword ptr [esp + 0x14]
        push eax
        push 0x251
        call FUN_0075db4a
        push eax
        push 0x24b
        call FUN_0055e5c0
        add esp, 0x14
L_cda2:
        mov ebx, dword ptr [esp + 0x28]
L_cda6:
        mov eax, dword ptr [esp + 0x24]
        shr eax, 2
        test al, 1
        je L_ce3f
        mov al, byte ptr [esp + 0x17]
        test al, al
        je L_cdc8
        mov ecx, dword ptr [esp + 0x1c]
        mov byte ptr [ecx + 0x17e], 1
L_cdc8:
        mov eax, dword ptr [esi + 0x48]
        test eax, eax
        jne L_ce05
        mov edx, dword ptr [esp + 0x1c]
        cmp dword ptr [edx + 0x14c], 3
        jne L_ce05
        mov eax, dword ptr [esp + 0x18]
        lea ecx, [eax + ebp - 4]
        mov dword ptr [esp + 0x10], ecx
        fild dword ptr [esp + 0x10]
        push ebx
        call FUN_0075db4a
        lea edx, [ebp + 1]
        push eax
        mov dword ptr [esp + 0x18], edx
        fild dword ptr [esp + 0x18]
        push 0x258
        jmp L_ce2c
L_ce05:
        mov eax, dword ptr [esp + 0x18]
        lea ecx, [eax + ebp - 4]
        mov dword ptr [esp + 0x10], ecx
        fild dword ptr [esp + 0x10]
        push edi
        call FUN_0075db4a
        lea edx, [ebp + 1]
        push eax
        mov dword ptr [esp + 0x18], edx
        fild dword ptr [esp + 0x18]
        push 0x258
L_ce2c:
        call FUN_0075db4a
        push eax
        push 0x252
        call FUN_0055e5c0
        add esp, 0x14
L_ce3f:
        mov eax, dword ptr [esp + 0x24]
        shr eax, 3
        test al, 1
        je L_ced8
        mov al, byte ptr [esp + 0x17]
        test al, al
        je L_ce61
        mov ecx, dword ptr [esp + 0x1c]
        mov byte ptr [ecx + 0x17f], 1
L_ce61:
        mov eax, dword ptr [esi + 0x48]
        test eax, eax
        jne L_ce9e
        mov edx, dword ptr [esp + 0x1c]
        cmp dword ptr [edx + 0x14c], 4
        jne L_ce9e
        mov eax, dword ptr [esp + 0x18]
        lea ecx, [eax + ebp - 4]
        mov dword ptr [esp + 0x10], ecx
        fild dword ptr [esp + 0x10]
        push ebx
        call FUN_0075db4a
        lea edx, [ebp + 1]
        push eax
        mov dword ptr [esp + 0x18], edx
        fild dword ptr [esp + 0x18]
        push 0x25f
        jmp L_cec5
L_ce9e:
        mov eax, dword ptr [esp + 0x18]
        lea ecx, [eax + ebp - 4]
        mov dword ptr [esp + 0x10], ecx
        fild dword ptr [esp + 0x10]
        push edi
        call FUN_0075db4a
        lea edx, [ebp + 1]
        push eax
        mov dword ptr [esp + 0x18], edx
        fild dword ptr [esp + 0x18]
        push 0x25f
L_cec5:
        call FUN_0075db4a
        push eax
        push 0x259
        call FUN_0055e5c0
        add esp, 0x14
L_ced8:
        mov eax, dword ptr [esp + 0x24]
        shr eax, 4
        test al, 1
        je L_cf71
        mov al, byte ptr [esp + 0x17]
        test al, al
        je L_cefa
        mov ecx, dword ptr [esp + 0x1c]
        mov byte ptr [ecx + 0x180], 1
L_cefa:
        mov eax, dword ptr [esi + 0x48]
        test eax, eax
        jne L_cf37
        mov edx, dword ptr [esp + 0x1c]
        cmp dword ptr [edx + 0x14c], 5
        jne L_cf37
        mov eax, dword ptr [esp + 0x18]
        lea ecx, [eax + ebp - 4]
        mov dword ptr [esp + 0x10], ecx
        fild dword ptr [esp + 0x10]
        push ebx
        call FUN_0075db4a
        lea edx, [ebp + 1]
        push eax
        mov dword ptr [esp + 0x18], edx
        fild dword ptr [esp + 0x18]
        push 0x266
        jmp L_cf5e
L_cf37:
        mov eax, dword ptr [esp + 0x18]
        lea ecx, [eax + ebp - 4]
        mov dword ptr [esp + 0x10], ecx
        fild dword ptr [esp + 0x10]
        push edi
        call FUN_0075db4a
        lea edx, [ebp + 1]
        push eax
        mov dword ptr [esp + 0x18], edx
        fild dword ptr [esp + 0x18]
        push 0x266
L_cf5e:
        call FUN_0075db4a
        push eax
        push 0x260
        call FUN_0055e5c0
        add esp, 0x14
L_cf71:
        mov eax, dword ptr [esp + 0x24]
        shr eax, 5
        test al, 1
        je L_d00a
        mov al, byte ptr [esp + 0x17]
        test al, al
        je L_cf93
        mov ecx, dword ptr [esp + 0x1c]
        mov byte ptr [ecx + 0x181], 1
L_cf93:
        mov eax, dword ptr [esi + 0x48]
        test eax, eax
        jne L_cfd0
        mov edx, dword ptr [esp + 0x1c]
        cmp dword ptr [edx + 0x14c], 6
        jne L_cfd0
        mov eax, dword ptr [esp + 0x18]
        lea ecx, [eax + ebp - 4]
        mov dword ptr [esp + 0x10], ecx
        fild dword ptr [esp + 0x10]
        push ebx
        call FUN_0075db4a
        lea edx, [ebp + 1]
        push eax
        mov dword ptr [esp + 0x18], edx
        fild dword ptr [esp + 0x18]
        push 0x26d
        jmp L_cff7
L_cfd0:
        mov eax, dword ptr [esp + 0x18]
        lea ecx, [eax + ebp - 4]
        mov dword ptr [esp + 0x10], ecx
        fild dword ptr [esp + 0x10]
        push edi
        call FUN_0075db4a
        lea edx, [ebp + 1]
        push eax
        mov dword ptr [esp + 0x18], edx
        fild dword ptr [esp + 0x18]
        push 0x26d
L_cff7:
        call FUN_0075db4a
        push eax
        push 0x267
        call FUN_0055e5c0
        add esp, 0x14
L_d00a:
        mov eax, dword ptr [esp + 0x1c]
        lea ecx, [esp + 0x20]
        push ecx
        lea ebx, [eax + 0x38]
        lea edx, [esp + 0xb4]
        push edx
        mov ecx, ebx
        mov dword ptr [esp + 0x28], 0x14
        call FUN_00561df0
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebx]
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x44], eax
        je L_d040
        cmp ecx, dword ptr [eax + 0x10]
        jge L_d07c
L_d040:
        lea eax, [esp + 0x80]
        push eax
        push ecx
        mov dword ptr [esp + 0x88], ecx
        lea edx, [esp + 0x4c]
        mov ecx, esp
        push edx
        mov dword ptr [esp + 0x90], 0
        call FUN_00561a30
        lea eax, [esp + 0xa8]
        push eax
        mov ecx, ebx
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x44], eax
L_d07c:
        mov eax, dword ptr [eax + 0x14]
        fld dword ptr [eax + 0xc]
        xor edi, edi
        fsub dword ptr [eax + 4]
        mov esi, 0x78f180
        fmul dword ptr [eax + 0x14]
        fld dword ptr [eax + 0x10]
        fsub dword ptr [eax + 8]
        fmul dword ptr [eax + 0x18]
        mov dword ptr [esp + 0x98], 0
        fstp dword ptr [esp + 0xc4]
        mov ecx, dword ptr [esp + 0xc4]
        mov dword ptr [esp + 0x94], ecx
        fstp dword ptr [esp + 0x90]
        fild dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x28]
        fadd dword ptr [g_76d064]
        fstp dword ptr [esp + 0x10]
L_d0d1:
        fild dword ptr [esi]
        mov eax, dword ptr [esp + 0x10]
        lea edx, [edi + 0x14]
        lea ecx, [esp + 0x20]
        fadd dword ptr [g_78f1fc]
        mov dword ptr [esp + 0x20], edx
        push ecx
        lea edx, [esp + 0xa8]
        fstp dword ptr [esp + 0x64]
        push edx
        mov ecx, ebx
        mov dword ptr [esp + 0x6c], eax
        mov dword ptr [esp + 0x70], 0x3f666666
        call FUN_00561df0
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebx]
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x3c], eax
        je L_d11b
        cmp ecx, dword ptr [eax + 0x10]
        jge L_d151
L_d11b:
        lea eax, [esp + 0x70]
        push eax
        push ecx
        mov dword ptr [esp + 0x78], ecx
        lea edx, [esp + 0x44]
        mov ecx, esp
        push edx
        mov dword ptr [esp + 0x80], 0
        call FUN_00561a30
        lea eax, [esp + 0xb4]
        push eax
        mov ecx, ebx
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x3c], eax
L_d151:
        push 0
        push 0
        push 0xff000000
        lea ecx, [esp + 0x9c]
        push ecx
        mov ecx, dword ptr [eax + 0x14]
        lea edx, [esp + 0x70]
        push edx
        call FUN_0055f5b0
        add esi, 4
        inc edi
        cmp esi, 0x78f198
        jl L_d0d1
        mov ebx, dword ptr [esp + 0x30]
        mov esi, dword ptr [ebx]
        mov edi, dword ptr [esp + 0x38]
        push 0
        push 0x440fc000
        mov ecx, esi
        mov dword ptr [esi + 0x104], edi
        call FUN_005603e0
        fild dword ptr [esp + 0x2c]
        push ecx
        mov ecx, esi
        fadd dword ptr [g_76d5f0]
        fstp dword ptr [esp]
        push 0x443fc000
        call FUN_00560400
        mov eax, dword ptr [esp + 0x1c]
        lea ecx, [eax + 0x144]
        call FUN_0041fd80
        mov esi, dword ptr [esp + 0x40]
        cmp dword ptr [esi + 0x44], eax
        jne L_d21d
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x88], ecx
        mov dword ptr [esp + 0x8c], 0
        fild qword ptr [esp + 0x88]
        push 0xff0000ff
        fadd dword ptr [esp + 0x2c]
        fsub dword ptr [g_77016c]
        call FUN_0075db4a
        fld dword ptr [esp + 0x2c]
        push eax
        push 0x2fd
        call FUN_0075db4a
        push eax
        push 0x287
        call FUN_0055eb90
        add esp, 0x14
L_d21d:
        mov eax, dword ptr [esi + 0x3c]
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [eax]
        push eax
        mov dword ptr [esp + 0x38], eax
        call FUN_0050e1b0
        add esp, 4
        cmp eax, -1
        jle L_d43c
        cmp dword ptr [esi + 0x48], 2
        je L_d43c
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [edx]
        push eax
        call FUN_0050e1b0
        mov ebx, dword ptr [ebx + 0x78]
        add esp, 4
        test eax, eax
        jne L_d398
        push 0
        mov dword ptr [ebx + 0x104], 0xffaa0000
        call FUN_00707e70
        call FUN_0075db4a
        and eax, 0x80000001
        jns L_d282
        dec eax
        or eax, 0xfffffffe
        inc eax
L_d282:
        je L_d39e
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0xd55e
        call dword ptr [eax + 0x34]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 2
        mov esi, edi
        lea edx, [esp + 0xe4]
        mov edi, edx
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        or ecx, 0xffffffff
        xor eax, eax
        xor esi, esi
        lea edi, [esp + 0xe4]
        repne scasb
        not ecx
        dec ecx
        je L_d313
L_d2e4:
        movsx ecx, byte ptr [esp + esi + 0xe4]
        push ecx
        call dword ptr [g_76b3d4]
        add esp, 4
        mov byte ptr [esp + esi + 0xe4], al
        or ecx, 0xffffffff
        xor eax, eax
        inc esi
        lea edi, [esp + 0xe4]
        repne scasb
        not ecx
        dec ecx
        cmp esi, ecx
        jb L_d2e4
L_d313:
        mov edx, dword ptr [esp + 0x30]
        mov ecx, dword ptr [edx]
        push 0
        push 0
        lea eax, [esp + 0xec]
        push eax
        mov dword ptr [ecx + 0x104], 0x96faf0e1
        call FUN_00560420
        mov ecx, dword ptr [esp + 0x18]
        lea edx, [ecx + ebp - 4]
        mov dword ptr [esp + 0x10], edx
        fild dword ptr [esp + 0x10]
        push 0x96e63232
        call FUN_0075db4a
        push eax
        or ecx, 0xffffffff
        xor eax, eax
        lea edi, [esp + 0xec]
        repne scasb
        not ecx
        dec ecx
        lea eax, [ecx + ecx*8 + 0x4b]
        mov dword ptr [esp + 0x18], eax
        fild dword ptr [esp + 0x18]
        fadd dword ptr [g_78f200]
        call FUN_0075db4a
        lea ecx, [ebp + 1]
        mov dword ptr [esp + 0x18], ecx
        fild dword ptr [esp + 0x18]
        push eax
        call FUN_0075db4a
        push eax
        push 0x285
        call FUN_0055e5c0
        add esp, 0x14
        jmp L_d39e
L_d398:
        mov dword ptr [ebx + 0x104], edi
L_d39e:
        push 0
        push 0x440fc000
        mov ecx, ebx
        call FUN_005603e0
        mov edx, dword ptr [esp + 0x2c]
        lea eax, [edx + ebp]
        mov dword ptr [esp + 0x10], eax
        fild dword ptr [esp + 0x10]
        push ecx
        mov ecx, ebx
        fstp dword ptr [esp]
        push 0x44480000
        call FUN_00560400
        mov edx, dword ptr [ebx]
        lea eax, [esp + 0x48]
        push eax
        lea ecx, [esp + 0x70]
        push ecx
        mov ecx, ebx
        call dword ptr [edx + 0xc]
        fld dword ptr [esp + 0x28]
        fsub dword ptr [g_76d5f0]
        mov edx, dword ptr [esp + 0x6c]
        mov esi, dword ptr [ebx]
        push 1
        push 0x3f666666
        push ecx
        fstp dword ptr [esp]
        mov dword ptr [esp + 0x84], edx
        mov dword ptr [esp + 0x88], 0
        fild qword ptr [esp + 0x84]
        push ecx
        lea ecx, [esp + 0xe8]
        fsubr dword ptr [g_77dff8]
        fstp dword ptr [esp]
        call FUN_00587830
        sub esp, 0xc
        mov ecx, esp
        push eax
        call FUN_00551870
        mov ecx, ebx
        call dword ptr [esi + 0x14]
        mov ebx, dword ptr [esp + 0x30]
        jmp L_d478
L_d43c:
        mov eax, dword ptr [esp + 0x34]
        push eax
        call FUN_0050e1b0
        add esp, 4
        cmp eax, -1
        jne L_d478
        mov ecx, dword ptr [esp + 0x18]
        shr ecx, 1
        add ecx, ebp
        mov dword ptr [esp + 0x10], ecx
        fild dword ptr [esp + 0x10]
        call FUN_0075db4a
        push edi
        push eax
        push 0x314
        push eax
        push 0x30b
        call FUN_0055eed0
        add esp, 0x14
L_d478:
        mov edx, dword ptr [esp + 0x28]
        mov esi, dword ptr [ebx]
        mov edi, dword ptr [esi]
        push 1
        push 0x3f666666
        push edx
        push 0x44228000
        lea ecx, [esp + 0xdc]
        call FUN_00587830
        sub esp, 0xc
        mov ecx, esp
        push eax
        call FUN_00551870
        mov ecx, esi
        call dword ptr [edi + 0x14]
        mov eax, dword ptr [esp + 0x18]
        lea ebp, [eax + ebp - 3]
        mov eax, dword ptr [esp + 0x58]
        add ebx, 4
        mov dword ptr [esp + 0x34], ebp
        mov dword ptr [esp + 0x30], ebx
        __emit 0xE9
        __emit 0x0F
        __emit 0xF4
        __emit 0xFF
        __emit 0xFF
L_d4c5:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2d4
        ret
        __emit 0x85
        __emit 0xC9
        __emit 0x63
        __emit 0x00
        __emit 0xF3
        __emit 0xC9
        __emit 0x63
        __emit 0x00
        __emit 0x86
        __emit 0xCA
        __emit 0x63
        __emit 0x00
        __emit 0x9C
        __emit 0xCA
        __emit 0x63
        __emit 0x00
    }
}
