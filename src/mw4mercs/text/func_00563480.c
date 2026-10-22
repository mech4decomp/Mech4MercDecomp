// 0x00563480: buffer assign with copy
// __fastcall, this in ecx, 3 stack params (const char *src, const char *src_end, ?)
// Structure at this:
//   0x00: begin pointer
//   0x04: current pointer
//   0x08: end pointer

#include <stdlib.h>

__declspec(naked) void __fastcall func_00563480(void *this, int dummy, const char *src, const char *src_end)
{
    

extern int DAT_0076b28c;
__asm {
push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        sub ebx, ebp
        push esi
        lea esi, [ebx + 1]
        cmp esi, -2
        push edi
        mov edi, ecx
        ja  skip_alloc
        test esi, esi
        je  zero_init
        push esi
        call malloc
        add esp, 4
        jmp store_ptrs
zero_init:
        xor eax, eax
store_ptrs:
        mov dword ptr [edi], eax
        mov dword ptr [edi + 4], eax
        add eax, esi
        mov dword ptr [edi + 8], eax
skip_alloc:
        mov esi, dword ptr [edi]
        push ebx
        push ebp
        push esi
        call dword ptr [DAT_0076b28c]
        mov eax, dword ptr [esp + 0x24]
        sub esi, ebp
        add esp, 0xc
        add eax, esi
        mov dword ptr [edi + 4], eax
        pop edi
        pop esi
        pop ebp
        mov byte ptr [eax], 0
        pop ebx
        ret 0xc
    }


}
