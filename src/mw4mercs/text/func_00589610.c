/* FUN_00589610 - 0x00589610, size 2638 B
 * __thiscall, RET 0x4 (1 arg). Large input/state handler: dispatches on
 * object state (0x5ac jump table, 0x5b8, and piVar1[5] weapon/limb state)
 * and performs many FPU range comparisons against joint limits, issuing
 * virtual calls (vtable+8) with action codes. Jump table at 0x58a060 is
 * outside this function's byte range (data).
 */
#include <windows.h>

/* extern data symbols (absolute addresses) */
extern int g_58a060[];      /* 0x0058a060 - jump table */
extern int g_7b8d68;        /* 0x007b8d68 */
extern int g_7b8d6c;        /* 0x007b8d6c */
extern int g_7b8d70;        /* 0x007b8d70 */
extern float g_76c5b0;      /* 0x0076c5b0 */
extern double g_76d970;     /* 0x0076d970 */

/* extern function symbols (rel32 calls) */
extern void __cdecl FUN_0058adf0(void);
extern void __cdecl FUN_005a1960(void);
extern void __cdecl FUN_005a1990(void);
extern void __cdecl FUN_00559bb0(void);
extern void __cdecl FUN_00559b60(void);
extern void __cdecl FUN_00603db0(void);
extern void __cdecl FUN_00603d70(void);

__declspec(naked) void func_00589610(void)
{
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi+0x78]
        lea ecx, [edi+0x78]
        call dword ptr [eax+4]
        mov esi, dword ptr [edi+0x2f4]
        mov ebx, eax
        mov al, byte ptr [esi+0x1d]
        test al, al
        mov dword ptr [esp+0x10], ebx
        jnz L89f6e
        mov eax, dword ptr [edi+0x5ac]
        test eax, eax
        jz L896a0
        dec eax
        cmp eax, 0x3
        ja L89685
        jmp dword ptr [g_58a060 + eax*4]
        mov eax, dword ptr [esp+0x18]
        mov edx, dword ptr [esi]
        push 0x0
        push eax
        push 0x1f
        jmp L89680
        mov eax, dword ptr [esp+0x18]
        mov edx, dword ptr [esi]
        push 0x0
        push eax
        push 0x21
        jmp L89680
        mov eax, dword ptr [esp+0x18]
        mov edx, dword ptr [esi]
        push 0x0
        push eax
        push 0x20
        jmp L89680
        mov eax, dword ptr [esp+0x18]
        mov edx, dword ptr [esi]
        push 0x0
        push eax
        push 0x1e
L89680:
        mov ecx, esi
        call dword ptr [edx+8]
L89685:
        mov ecx, edi
        call FUN_0058adf0
        mov ecx, dword ptr [edi+0x5ac]
        mov dword ptr [edi+0x5b0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L896a0:
        mov eax, dword ptr [edi+0x5b8]
        cmp eax, 0x1
        mov ebp, dword ptr [esp+0x18]
        mov ecx, 0x12
        jnz L896c9
        cmp dword ptr [esi+0x14], ecx
        jnz L897ca
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0x1b
        jmp L897c5
L896c9:
        cmp eax, 0x2
        mov eax, dword ptr [esi+0x14]
        jnz L896ea
        cmp eax, ecx
        jnz L897ca
        mov eax, dword ptr [esi]
        push 0x0
        push ebp
        push 0x1d
        mov ecx, esi
        call dword ptr [eax+8]
        jmp L897ca
L896ea:
        cmp eax, 0x1e
        jnz L8972f
        mov ecx, dword ptr [g_7b8d68]
        mov edx, dword ptr [g_7b8d6c]
        mov eax, dword ptr [g_7b8d70]
        mov dword ptr [edi+0x168], ecx
        mov dword ptr [edi+0x198], ecx
        mov ecx, dword ptr [edi+0x10]
        shr ecx, 0x13
        mov dword ptr [edi+0x16c], edx
        mov dword ptr [edi+0x170], eax
        mov dword ptr [edi+0x19c], edx
        mov dword ptr [edi+0x1a0], eax
        test cl, 0x1
        jmp L89776
L8972f:
        cmp eax, 0x1f
        jz L89739
        cmp eax, 0x20
        jnz L8977a
L89739:
        mov eax, dword ptr [g_7b8d68]
        mov ecx, dword ptr [g_7b8d6c]
        mov edx, dword ptr [g_7b8d70]
        mov dword ptr [edi+0x168], eax
        mov dword ptr [edi+0x198], eax
        mov eax, dword ptr [edi+0x10]
        shr eax, 0x13
        mov dword ptr [edi+0x16c], ecx
        mov dword ptr [edi+0x170], edx
        mov dword ptr [edi+0x19c], ecx
        mov dword ptr [edi+0x1a0], edx
        test al, 0x1
L89776:
        jnz L897ca
        jmp L897be
L8977a:
        cmp eax, 0x21
        jnz L897ca
        mov eax, dword ptr [g_7b8d68]
        mov ecx, dword ptr [g_7b8d6c]
        mov edx, dword ptr [g_7b8d70]
        mov dword ptr [edi+0x168], eax
        mov dword ptr [edi+0x198], eax
        mov eax, dword ptr [edi+0x10]
        shr eax, 0x13
        test al, 0x1
        mov dword ptr [edi+0x16c], ecx
        mov dword ptr [edi+0x170], edx
        mov dword ptr [edi+0x19c], ecx
        mov dword ptr [edi+0x1a0], edx
        jnz L897ca
L897be:
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0xa
L897c5:
        mov ecx, esi
        call dword ptr [edx+8]
L897ca:
        mov eax, dword ptr [esi+0x14]
        cmp eax, 0x26
        jnz L8981d
        mov eax, dword ptr [edi+0xe0]
        cmp dword ptr [eax+0x14], 0xb
        jnz L8a056
        fld dword ptr [edi+0x440]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jz L89809
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0xa
        mov ecx, esi
        call dword ptr [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89809:
        mov eax, dword ptr [esi]
        push 0x0
        push ebp
        push 0x12
        mov ecx, esi
        call dword ptr [eax+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L8981d:
        cmp eax, 0x12
        jnz L8986c
        mov ecx, dword ptr [edi+0x9ac]
        push 0x3f800000
        call FUN_005a1960
        fld dword ptr [edi+0x440]
        fcomp dword ptr [ebx+0x2d0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jz L8a056
        fld dword ptr [edi+0x43c]
        fcomp dword ptr [ebx+0x2b8]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jz L8a056
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0xa
        jmp L89c58
L8986c:
        cmp eax, 0x13
        jnz L898bd
        mov ecx, dword ptr [edi+0x9ac]
        push 0x3f800000
        call FUN_005a1960
        fld dword ptr [ebx+0x2d0]
        fchs
        fcomp dword ptr [edi+0x440]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jz L8a056
        fld dword ptr [edi+0x43c]
        fcomp dword ptr [ebx+0x2c0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jnz L8a056
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0xa
        jmp L89c58
L898bd:
        cmp eax, 0xa
        jnz L89a01
        mov ebx, dword ptr [edi+0x9ac]
        push 0x3f800000
        mov ecx, ebx
        call FUN_005a1960
        mov al, byte ptr [edi+0x2f8]
        test al, al
        jz L89915
        push 0x3f800000
        mov ecx, ebx
        call FUN_005a1990
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0x23
        mov ecx, esi
        call dword ptr [edx+8]
        mov ecx, dword ptr [edi+0x3b0]
        test ecx, ecx
        jz L8a056
        call FUN_00559bb0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89915:
        fld dword ptr [edi+0x43c]
        mov ecx, dword ptr [esp+0x10]
        fcomp dword ptr [ecx+0x2c0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz L8994a
        mov eax, dword ptr [esi]
        push 0x0
        push ebp
        push 0x13
        mov ecx, esi
        mov dword ptr [edi+0x440], 0
        call dword ptr [eax+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L8994a:
        fld dword ptr [edi+0x43c]
        fcomp dword ptr [ecx+0x2b8]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jnz L89971
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0x12
        mov ecx, esi
        call dword ptr [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89971:
        fld dword ptr [edi+0x430]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz L899b5
        fld dword ptr [edi+0x43c]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jz L899b5
        mov eax, dword ptr [esi]
        push 0x0
        push ebp
        push 0x14
        mov ecx, esi
        mov dword ptr [edi+0x440], 0
        call dword ptr [eax+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L899b5:
        fld dword ptr [edi+0x430]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jnz L89b99
        fld dword ptr [edi+0x43c]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jz L89b99
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0x15
        mov ecx, esi
        mov dword ptr [edi+0x440], 0
        call dword ptr [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89a01:
        cmp eax, 0x1a
        jnz L89ad1
        mov ecx, dword ptr [edi+0x9ac]
        push 0x3f800000
        call FUN_005a1960
        fld dword ptr [edi+0x43c]
        fcomp dword ptr [ebx+0x2b8]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jnz L89a41
        mov eax, dword ptr [esi]
        push 0x0
        push ebp
        push 0x1b
        mov ecx, esi
        call dword ptr [eax+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89a41:
        fld dword ptr [edi+0x430]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz L89a85
        fld dword ptr [edi+0x43c]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jz L89a85
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0x18
        mov ecx, esi
        mov dword ptr [edi+0x440], 0
        call dword ptr [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89a85:
        fld dword ptr [edi+0x430]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jnz L89b99
        fld dword ptr [edi+0x43c]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jz L89b99
        mov eax, dword ptr [esi]
        push 0x0
        push ebp
        push 0x16
        mov ecx, esi
        mov dword ptr [edi+0x440], 0
        call dword ptr [eax+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89ad1:
        cmp eax, 0x1c
        jnz L89bab
        mov ecx, dword ptr [edi+0x9ac]
        push 0x3f800000
        call FUN_005a1960
        fld dword ptr [edi+0x43c]
        fcomp dword ptr [ebx+0x2b8]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jnz L89b11
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0x1d
        mov ecx, esi
        call dword ptr [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89b11:
        fld dword ptr [edi+0x430]
        fcomp qword ptr [g_76d970]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz L89b55
        fld dword ptr [edi+0x43c]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jz L89b55
        mov eax, dword ptr [esi]
        push 0x0
        push ebp
        push 0x19
        mov ecx, esi
        mov dword ptr [edi+0x440], 0
        call dword ptr [eax+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89b55:
        fld dword ptr [edi+0x430]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jnz L89b99
        fld dword ptr [edi+0x43c]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jz L89b99
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0x17
        mov ecx, esi
        mov dword ptr [edi+0x440], 0
        call dword ptr [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89b99:
        mov dword ptr [edi+0x440], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89bab:
        cmp eax, 0x1b
        jnz L89c0e
        mov ecx, dword ptr [edi+0x9ac]
        push 0x3f800000
        call FUN_005a1960
        fld dword ptr [edi+0x440]
        fcomp dword ptr [ebx+0x2d0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jz L8a056
        fld dword ptr [edi+0x43c]
        fcomp dword ptr [ebx+0x2b8]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jz L8a056
        mov eax, dword ptr [esi]
        push 0x0
        push ebp
        push 0x1a
        mov ecx, esi
        call dword ptr [eax+8]
        mov ecx, dword ptr [edi+0x440]
        mov dword ptr [edi+0x848], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89c0e:
        cmp eax, 0x1d
        jnz L89c71
        mov ecx, dword ptr [edi+0x9ac]
        push 0x3f800000
        call FUN_005a1960
        fld dword ptr [edi+0x440]
        fcomp dword ptr [ebx+0x2d0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jz L8a056
        fld dword ptr [edi+0x43c]
        fcomp dword ptr [ebx+0x2b8]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jz L8a056
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0x1c
L89c58:
        mov ecx, esi
        call dword ptr [edx+8]
        mov eax, dword ptr [edi+0x440]
        mov dword ptr [edi+0x848], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89c71:
        cmp eax, 0x15
        jnz L89ce3
        mov ecx, dword ptr [edi+0x9ac]
        push 0x3f800000
        call FUN_005a1960
        mov ecx, esi
        call FUN_00603db0
        test al, al
        jz L8a056
        fld dword ptr [edi+0x430]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jnz L89ccf
        fld dword ptr [edi+0x42c]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jz L89ccf
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0x14
        mov ecx, esi
        call dword ptr [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89ccf:
        mov eax, dword ptr [esi]
        push 0x0
        push ebp
        push 0xa
        mov ecx, esi
        call dword ptr [eax+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89ce3:
        cmp eax, 0x14
        jnz L89d41
        mov ecx, dword ptr [edi+0x9ac]
        push 0x3f800000
        call FUN_005a1960
        mov ecx, esi
        call FUN_00603db0
        test al, al
        jz L8a056
        fld dword ptr [edi+0x430]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jnz L89ccf
        fld dword ptr [edi+0x42c]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jz L89ccf
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0x15
        mov ecx, esi
        call dword ptr [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89d41:
        cmp eax, 0x16
        jnz L89db3
        mov ecx, dword ptr [edi+0x9ac]
        push 0x3f800000
        call FUN_005a1960
        mov ecx, esi
        call FUN_00603db0
        test al, al
        jz L8a056
        fld dword ptr [edi+0x430]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jnz L89d9f
        fld dword ptr [edi+0x42c]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jz L89d9f
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0x18
        mov ecx, esi
        call dword ptr [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89d9f:
        mov eax, dword ptr [esi]
        push 0x0
        push ebp
        push 0x1a
        mov ecx, esi
        call dword ptr [eax+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89db3:
        cmp eax, 0x18
        jnz L89e11
        mov ecx, dword ptr [edi+0x9ac]
        push 0x3f800000
        call FUN_005a1960
        mov ecx, esi
        call FUN_00603db0
        test al, al
        jz L8a056
        fld dword ptr [edi+0x430]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jnz L89d9f
        fld dword ptr [edi+0x42c]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jz L89d9f
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0x16
        mov ecx, esi
        call dword ptr [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89e11:
        cmp eax, 0x17
        jnz L89e73
        mov ecx, dword ptr [edi+0x9ac]
        push 0x3f800000
        call FUN_005a1960
        mov ecx, esi
        call FUN_00603db0
        test al, al
        jz L8a056
        fld dword ptr [edi+0x430]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jnz L89ed1
        fld dword ptr [edi+0x42c]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jz L89ed1
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0x19
        mov ecx, esi
        call dword ptr [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89e73:
        cmp eax, 0x19
        jnz L89ee5
        mov ecx, dword ptr [edi+0x9ac]
        push 0x3f800000
        call FUN_005a1960
        mov ecx, esi
        call FUN_00603db0
        test al, al
        jz L8a056
        fld dword ptr [edi+0x430]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jnz L89ed1
        fld dword ptr [edi+0x42c]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jz L89ed1
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0x17
        mov ecx, esi
        call dword ptr [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89ed1:
        mov eax, dword ptr [esi]
        push 0x0
        push ebp
        push 0x1c
        mov ecx, esi
        call dword ptr [eax+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89ee5:
        cmp eax, 0x23
        jnz L8a056
        fld dword ptr [edi+0x440]
        fcomp dword ptr [edi+0x43c]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        jnz L89f15
        mov ecx, dword ptr [edi+0x43c]
        mov edx, ecx
        mov dword ptr [edi+0x528], ecx
        mov dword ptr [edi+0x440], edx
L89f15:
        mov eax, dword ptr [edi+0x5b4]
        test eax, eax
        jnz L89f3b
        mov eax, dword ptr [edi+0x10]
        shr eax, 0x13
        test al, 0x1
        jz L89f3b
        mov dword ptr [edi+0x5b4], 0x1
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89f3b:
        mov al, byte ptr [edi+0x2f8]
        test al, al
        jnz L8a056
        mov edi, dword ptr [edi+0x3b0]
        test edi, edi
        jz L89f5a
        mov ecx, edi
        call FUN_00559b60
L89f5a:
        mov edx, dword ptr [esi]
        push 0x0
        push ebp
        push 0xa
        mov ecx, esi
        call dword ptr [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89f6e:
        mov ecx, esi
        call FUN_00603d70
        cmp eax, 0x12
        jnz L89fa5
L89f7a:
        fld dword ptr [edi+0x440]
        fcomp dword ptr [ebx+0x2b8]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz L8a056
        mov eax, dword ptr [ebx+0x2b8]
        mov dword ptr [edi+0x440], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89fa5:
        mov ecx, esi
        call FUN_00603d70
        cmp eax, 0x13
        jnz L89fdc
        fld dword ptr [edi+0x440]
        fcomp dword ptr [ebx+0x2c0]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jnz L8a056
        mov ecx, dword ptr [ebx+0x2c0]
        mov dword ptr [edi+0x440], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L89fdc:
        mov ecx, esi
        call FUN_00603d70
        cmp eax, 0x1d
        jnz L8a00f
        fld dword ptr [edi+0x440]
        fcomp dword ptr [ebx+0x2b8]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0) */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz L8a056
        mov edx, dword ptr [ebx+0x2b8]
        mov dword ptr [edi+0x440], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
L8a00f:
        mov ecx, esi
        call FUN_00603d70
        cmp eax, 0x1b
        jz L89f7a
        mov ecx, esi
        call FUN_00603d70
        cmp eax, 0x26
        jz L8a056
        mov ecx, esi
        call FUN_00603d70
        cmp eax, 0xa
        jz L8a056
        mov ecx, esi
        call FUN_00603d70
        cmp eax, 0xb
        jz L8a056
        mov ecx, esi
        call FUN_00603d70
        cmp eax, 0x1c
        jz L8a056
        mov ecx, esi
        call FUN_00603d70
L8a056:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}
