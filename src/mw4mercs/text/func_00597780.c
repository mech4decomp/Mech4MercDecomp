/*
 * FUN_00597780 (0x00597780)
 * Decompiled from MW4Mercs.exe
 * __thiscall string lookup function.
 * Callee cleans 4 bytes from stack (ret 4).
 */

#include "mw4/common.h"

void __cdecl sub_599220(void);
void __cdecl sub_5991B0(void);
void __cdecl sub_598BF0(void);
void __cdecl sub_5996C0(void);
void __cdecl sub_598B60(void);
void __cdecl sub_40F060(void);
void __cdecl sub_5982D0(void);
void __cdecl sub_598420(void);
void __cdecl sub_40D9B0(void);
void __cdecl sub_4084E0(void *ptr);

__declspec(naked) void FUN_00597780(void)
{
    __asm {
        sub esp, 0x1c
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [ecx + 0x30]
        test edi, edi
        je  return_false

        lea eax, [esp + 0x30]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, edi
        call sub_599220

        lea edx, [esp + 0x30]
        mov esi, eax
        push edx
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, edi
        call sub_5991B0

        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x1c], ecx
        mov edx, dword ptr [esi]
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x24], edx
        call sub_598BF0

        mov ecx, dword ptr [esp + 0x30]
        mov eax, dword ptr [esp + 0x28]
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        lea edx, [esp + 0x14]
        push edx
        push eax
        push ecx
        mov dword ptr [esp + 0x20], 0
        call sub_5996C0

        mov eax, dword ptr [esp + 0x20]
        add esp, 0x10
        test eax, eax
        jbe return_false

        lea edx, [esp + 0x30]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, edi
        call sub_598B60

        mov ebp, dword ptr [eax]
        cmp ebp, dword ptr [edi]
        mov dword ptr [esp + 0x10], ebp
        je  not_found

        /* String comparison */
        mov eax, dword ptr [esp + 0x30]
        mov esi, dword ptr [ebp + 0x10]
        mov ecx, eax
strcmp_loop:
        mov bl, byte ptr [ecx]
        mov dl, bl
        cmp bl, byte ptr [esi]
        jne strcmp_done
        test dl, dl
        je  strcmp_equal
        mov bl, byte ptr [ecx + 1]
        mov dl, bl
        cmp bl, byte ptr [esi + 1]
        jne strcmp_done
        add ecx, 2
        add esi, 2
        test dl, dl
        jne strcmp_loop
strcmp_equal:
        xor ecx, ecx
        jmp strcmp_result
strcmp_done:
        sbb ecx, ecx
        sbb ecx, -1
strcmp_result:
        test ecx, ecx
        jge found_match

not_found:
        lea ecx, [esp + 0x30]
        push ecx
        lea ecx, [esp + 0x20]
        call sub_40F060

        lea edx, [esp + 0x1c]
        push edx
        push ecx
        lea eax, [esp + 0x18]
        mov ecx, esp
        push eax
        mov byte ptr [esp + 0x2c], 0
        call sub_5982D0

        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, edi
        call sub_598420

        mov edx, dword ptr [eax]
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x10], edx
        call sub_40D9B0

        mov eax, dword ptr [esp + 0x30]
        mov ebp, dword ptr [esp + 0x10]

found_match:
        test eax, eax
        mov bl, byte ptr [ebp + 0x14]
        je  skip_free_str
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne skip_free_str
        push eax
        call sub_4084E0
        add esp, 4
skip_free_str:
        mov al, bl
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1c
        ret 4

return_false:
        mov eax, dword ptr [esp + 0x30]
        test eax, eax
        je  skip_free_ret
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne skip_free_ret
        push eax
        call sub_4084E0
        add esp, 4
skip_free_ret:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x1c
        ret 4
    }
}
