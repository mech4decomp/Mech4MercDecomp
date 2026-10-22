/* Auto-generated inline asm for FUN_00580230 (0x00580230, 115 bytes) */

#include "mw4/common.h"

__declspec(naked) void FUN_00580230(void)
{
    

extern int DAT_007f2ba8;
extern void __cdecl FUN_00620802(void);
extern int DAT_007dde2c;
extern int DAT_0080da7c;
extern void __cdecl FUN_10056669f(void);
extern void __cdecl FUN_006fabb9(void);
extern void __cdecl FUN_006207ed(void);
__asm {
push ebp
        mov ebp, esp
        mov ecx, dword ptr [DAT_007f2ba8]
        test ecx, ecx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        jz label_skip_lock1
        push esi
        call FUN_00620802

label_skip_lock1:
        mov al, byte ptr [DAT_007dde2c]
        test al, al
        mov edi, dword ptr [esi + 0x1c]
        jz label_skip_assert
        mov eax, dword ptr [DAT_0080da7c]
        mov ecx, dword ptr [eax]
        cmp dword ptr [ecx + edi*0x4], 0x0
        jnz label_skip_assert
        push 0x7814c8
        call FUN_10056669f
        push eax
        call FUN_006fabb9
        add esp, 0x8
        test eax, eax
        jz label_skip_assert
        int 3

label_skip_assert:
        mov edx, dword ptr [DAT_0080da7c]
        mov eax, dword ptr [edx]
        mov eax, dword ptr [eax + edi*0x4]
        push esi
        call dword ptr [eax + 0x6c]
        mov ecx, dword ptr [DAT_007f2ba8]
        add esp, 0x4
        test ecx, ecx
        mov edi, eax
        jz label_skip_lock2
        push esi
        call FUN_006207ed

label_skip_lock2:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret
    }


}
