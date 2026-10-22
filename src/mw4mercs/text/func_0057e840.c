/* Auto-generated inline asm for FUN_0057e840 (0x0057E840, 575 bytes) */

#include "mw4/common.h"

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern char DAT_007dde2c;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f268c;
extern int DAT_007f23d8;
extern int DAT_00805928;
extern int DAT_0080d9b0;
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_005810a0(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_0064e540(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00581210(void);
extern void __cdecl FUN_00665d40(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_00580640(void);

__declspec(naked) void FUN_0057e840(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr [DAT_00805918]
        movsx ecx, byte ptr [eax + 0x1]
        inc eax
        push ebx
        push esi
        inc eax
        push edi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db40
        mov eax, dword ptr [DAT_0080592c]
        mov esi, dword ptr [eax]
        sub eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx edx, byte ptr [eax]
        inc eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db40
        mov eax, dword ptr [DAT_0080592c]
        mov edi, dword ptr [eax]
        sub eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov al, byte ptr [DAT_007dde2c]
        test al, al
        jz label_0x57e8c9
        push esi
        call FUN_00566bf0
        add esp, 0x4
        test al, al
        jnz label_0x57e8c9
        push 0x781450
        call FUN_005666d0
        push eax
        call FUN_006fabf0
        add esp, 0x8
        test eax, eax
        jz label_0x57e8c9
        int 3

label_0x57e8c9:
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov eax, dword ptr [eax]
        xor eax, ecx
        mov ecx, dword ptr [eax + 0x10]
        push edi
        xor ecx, 0x85739531
        call FUN_004fcb30
        xor edi, edi
        push esi
        mov dword ptr [ebp - 0x8], eax
        mov dword ptr [ebp - 0x14], edi
        mov dword ptr [ebp - 0x10], edi
        mov dword ptr [ebp - 0xc], edi
        call FUN_00566c30
        mov esi, eax
        add esp, 0x4
        test esi, 0xf00000
        jz label_0x57e920
        lea ecx, [ebp - 0x14]
        push ecx
        add esi, 0xff100000
        push esi
        call FUN_005810a0
        add esp, 0x8
        jmp label_0x57ea04

label_0x57e920:
        call FUN_00566c80
        mov ebx, eax
        push esi
        mov ecx, ebx
        call FUN_0064e600
        test al, al
        jz label_0x57ea04
        push esi
        mov ecx, ebx
        call FUN_0064e540
        mov edi, eax
        mov ecx, edi
        call FUN_0064e100
        mov ebx, dword ptr [eax]
        mov ecx, edi
        call FUN_0064e100
        cmp ebx, dword ptr [eax + 0x4]
        jz label_0x57ea02

label_loop_start:
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov eax, dword ptr [edx]
        xor eax, ecx
        mov ecx, dword ptr [ebx]
        push ecx
        mov ecx, dword ptr [eax + 0x10]
        xor ecx, 0x85739531
        call FUN_004fcb30
        mov esi, eax
        test esi, esi
        jz label_0x57e9ef
        mov edx, dword ptr [esi + 0x10]
        shr edx, 0x13
        test dl, 0x1
        jnz label_0x57e9ef
        mov eax, dword ptr [DAT_007f268c]
        mov ecx, dword ptr [esi + 0x4]
        push eax
        call FUN_00415230
        cmp al, 0x1
        jnz label_0x57e9ef
        mov esi, dword ptr [esi + 0x2fc]
        test esi, esi
        jz label_0x57e9ef
        mov eax, dword ptr [DAT_007f23d8]
        mov ecx, dword ptr [esi + 0x4]
        push eax
        call FUN_00415230
        cmp al, 0x1
        jnz label_0x57e9ef
        mov al, byte ptr [esi + 0x2f9]
        test al, al
        jnz label_0x57e9ef
        mov eax, dword ptr [ebp - 0x10]
        cmp eax, dword ptr [ebp - 0xc]
        mov dword ptr [ebp - 0x4], esi
        jz label_0x57e9e0
        test eax, eax
        jz label_0x57e9d8
        mov dword ptr [eax], esi
        mov eax, dword ptr [ebp - 0x10]

label_0x57e9d8:
        add eax, 0x4
        mov dword ptr [ebp - 0x10], eax
        jmp label_0x57e9ef

label_0x57e9e0:
        push 0x1
        lea ecx, [ebp - 0x4]
        push ecx
        push eax
        lea ecx, [ebp - 0x14]
        call FUN_00581210

label_0x57e9ef:
        mov ecx, edi
        add ebx, 0x4
        call FUN_0064e100
        cmp ebx, dword ptr [eax + 0x4]
        jnz label_loop_start

label_0x57ea02:
        xor edi, edi

label_0x57ea04:
        mov edx, dword ptr [ebp - 0x8]
        push edx
        lea eax, [ebp - 0x14]
        push eax
        call FUN_00665d40
        mov esi, dword ptr [DAT_0080592c]
        mov ecx, dword ptr [DAT_00805928]
        add esi, 0x4
        add ecx, 0xa000
        add esp, 0x8
        cmp esi, ecx
        mov bl, al
        mov dword ptr [DAT_0080592c], esi
        jc label_0x57ea3e
        push edi
        call FUN_00563060
        add esp, 0x4

label_0x57ea3e:
        xor edx, edx
        test bl, bl
        setnz dl
        mov dword ptr [esi], edx
        mov eax, dword ptr [ebp - 0x14]
        mov ecx, dword ptr [ebp - 0xc]
        mov esi, dword ptr [DAT_0080d9b0]
        sub ecx, eax
        sar ecx, 0x2
        push ecx
        push eax
        call FUN_00580640
        mov eax, dword ptr [DAT_00805918]
        movsx edx, byte ptr [eax]
        add esp, 0x8
        inc eax
        pop edi
        mov dword ptr [DAT_00805918], eax
        mov eax, esi
        pop esi
        mov dword ptr [DAT_00805908], edx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
