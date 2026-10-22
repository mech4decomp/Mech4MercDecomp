/* Auto-generated inline asm for FUN_0057e2a0 (0x0057E2A0, 752 bytes) */

#include "mw4/common.h"

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_0080d964;
extern char DAT_007dde2c;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007dc690;
extern int DAT_0077f670;
extern float DAT_007b220c;
extern float DAT_0077f66c;
extern int DAT_00805928;
extern int DAT_0080d9b0;
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_00563060(void);

__declspec(naked) void FUN_0057e2a0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        mov eax, dword ptr [DAT_00805918]
        movsx ecx, byte ptr [eax + 0x1]
        inc eax
        push esi
        inc eax
        push edi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db40
        mov eax, dword ptr [DAT_0080592c]
        mov esi, dword ptr [eax]
        sub eax, 0x4
        cmp esi, 0FFFFFFFFh
        mov dword ptr [DAT_0080592c], eax
        jnz label_0x57e2e2
        mov esi, dword ptr [DAT_0080d964]
        jmp label_0x57e3bc

label_0x57e2e2:
        mov al, byte ptr [DAT_007dde2c]
        mov edi, esi
        sar edi, 0x18
        test al, al
        jz label_0x57e332
        test edi, edi
        jge label_0x57e30c
        push 0x77f724
        call FUN_005666d0
        push eax
        call FUN_006fabf0
        add esp, 0x8
        test eax, eax
        jz label_0x57e30c
        int 3

label_0x57e30c:
        mov al, byte ptr [DAT_007dde2c]
        test al, al
        jz label_0x57e332
        cmp edi, 0x12
        jl label_0x57e332
        push 0x77f724
        call FUN_005666d0
        push eax
        call FUN_006fabf0
        add esp, 0x8
        test eax, eax
        jz label_0x57e332
        int 3

label_0x57e332:
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov eax, dword ptr [edx]
        xor eax, ecx
        mov ecx, dword ptr [eax + 0x10]
        push esi
        xor ecx, 0x85739531
        call FUN_004fcb30
        mov esi, eax
        mov al, byte ptr [DAT_007dde2c]
        test al, al
        jz label_0x57e3ab
        test esi, esi
        jnz label_0x57e378
        push 0x77f724
        call FUN_005666d0
        push eax
        call FUN_006fabf0
        add esp, 0x8
        test eax, eax
        jz label_0x57e378
        int 3

label_0x57e378:
        mov al, byte ptr [DAT_007dde2c]
        test al, al
        jz label_0x57e3ab
        mov eax, dword ptr [DAT_007dc690]
        mov ecx, dword ptr [esi + 0x4]
        push eax
        call FUN_00415230
        test al, al
        jnz label_0x57e3ab
        push 0x77f68c
        call FUN_005666d0
        push eax
        call FUN_006fabf0
        add esp, 0x8
        test eax, eax
        jz label_0x57e3ab
        int 3

label_0x57e3ab:
        test esi, esi
        jz label_0x57e4d0
        cmp esi, 0FFFFFFFFh
        jz label_0x57e4d0

label_0x57e3bc:
        test esi, esi
        jz label_0x57e4d0
        mov ecx, dword ptr [DAT_007dab44]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [DAT_007dab40]
        xor eax, edx
        mov edi, dword ptr [eax + 0x2c]
        add eax, 0x2c
        xor edi, 0x85739531
        jz label_0x57e4d0
        mov eax, dword ptr [eax]
        xor eax, 0x85739531
        mov edi, dword ptr [eax + 0x384]
        test edi, edi
        jz label_0x57e4d0
        mov eax, dword ptr [esi + 0xd8]
        mov esi, dword ptr [eax + 0x8c]
        add eax, 0x80
        mov dword ptr [ebp - 0x28], esi
        mov esi, dword ptr [eax + 0x1c]
        mov dword ptr [ebp - 0x24], esi
        mov eax, dword ptr [eax + 0x2c]
        mov dword ptr [ebp - 0x20], eax
        mov ecx, dword ptr [ecx]
        mov eax, dword ptr [DAT_0077f670]
        xor ecx, edx
        mov edx, dword ptr [ecx + 0x2c]
        xor edx, 0x85739531
        mov dword ptr [ebp - 0x4], eax
        mov eax, dword ptr [edx + 0x384]
        mov ecx, dword ptr [eax + 0xd8]
        add ecx, 0x80
        push ecx
        lea edx, [ebp - 0x28]
        push edx
        lea ecx, [ebp - 0x1c]
        call FUN_0041c830
        fld dword ptr [ebp - 0x4]
        fabs
        fstp dword ptr [ebp - 0x4]
        fld dword ptr [ebp - 0x14]
        fmul dword ptr [ebp - 0x14]
        fld dword ptr [ebp - 0x1c]
        fmul dword ptr [ebp - 0x1c]
        faddp st(1), st(0)
        fstp dword ptr [ebp - 0x8]
        fld dword ptr [ebp - 0x18]
        fmul dword ptr [ebp - 0x18]
        fadd dword ptr [ebp - 0x8]
        fstp dword ptr [ebp - 0xc]
        mov eax, dword ptr [ebp - 0xc]
        sar eax, 0x1
        add eax, 0x1fc00000
        mov dword ptr [ebp - 0x10], eax
        fld dword ptr [ebp - 0x10]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw ax
        test ah, 0x1
        jz label_0x57e542
        mov eax, dword ptr [ebp - 0x8]
        mov dword ptr [ebp - 0x10], eax
        mov eax, dword ptr [ebp - 0x10]
        sar eax, 0x1
        add eax, 0x1fc00000
        mov dword ptr [ebp - 0x8], eax
        fld dword ptr [ebp - 0x8]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw ax
        test ah, 0x1
        jnz label_0x57e51c
        fld dword ptr [ebp - 0x4]
        fcomp dword ptr [DAT_0077f66c]
        fnstsw ax
        test ah, 0x1
        jnz label_0x57e542

label_0x57e4d0:
        mov esi, dword ptr [DAT_0080592c]
        mov eax, dword ptr [DAT_00805928]
        add esi, 0x4
        add eax, 0xa000
        cmp esi, eax
        mov dword ptr [DAT_0080592c], esi
        jc label_0x57e4f7
        push 0x0
        call FUN_00563060
        add esp, 0x4

label_0x57e4f7:
        mov eax, dword ptr [DAT_00805918]
        movsx ecx, byte ptr [eax]
        inc eax
        pop edi
        mov dword ptr [esi], 0x0
        mov dword ptr [DAT_00805918], eax
        mov eax, dword ptr [DAT_0080d9b0]
        mov dword ptr [DAT_00805908], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret

label_0x57e51c:
        fld dword ptr [ebp - 0x1c]
        fld dword ptr [ebp - 0x14]
        fpatan
        fabs
        fcomp dword ptr [ebp - 0x4]
        fnstsw ax
        test ah, 0x41
        jz label_0x57e4d0
        fld dword ptr [ebp - 0x18]
        fld dword ptr [ebp - 0x8]
        fpatan
        fcomp dword ptr [ebp - 0x4]
        fnstsw ax
        test ah, 0x1
        jz label_0x57e4d0

label_0x57e542:
        mov esi, dword ptr [DAT_0080592c]
        mov ecx, dword ptr [DAT_00805928]
        add esi, 0x4
        add ecx, 0xa000
        cmp esi, ecx
        mov dword ptr [DAT_0080592c], esi
        jc label_0x57e56b
        push 0x0
        call FUN_00563060
        add esp, 0x4

label_0x57e56b:
        mov eax, dword ptr [DAT_00805918]
        movsx edx, byte ptr [eax]
        inc eax
        pop edi
        mov dword ptr [esi], 0x1
        mov dword ptr [DAT_00805918], eax
        mov eax, dword ptr [DAT_0080d9b0]
        mov dword ptr [DAT_00805908], edx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
