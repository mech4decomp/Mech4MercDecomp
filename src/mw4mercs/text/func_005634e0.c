// 0x005634E0: buffer/range initializer
// __fastcall, this in ecx, 1 stack param (int size)
// Structure at this:
//   0x00: begin pointer
//   0x04: current pointer
//   0x08: end pointer
// size == -1: no-op
// size == 0: zero-init
// size > 0: allocate buffer of given size

#include <stdlib.h>

__declspec(naked) void __fastcall func_005634e0(void *this, int dummy, int size)
{
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, -2
        mov esi, ecx
        ja  done
        test edi, edi
        je  zero_init
        push edi
        call malloc
        add esp, 4
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        add eax, edi
        pop edi
        mov dword ptr [esi + 8], eax
        pop esi
        ret 4
zero_init:
        xor eax, eax
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        mov eax, edi
        mov dword ptr [esi + 8], eax
done:
        pop edi
        pop esi
        ret 4
    }
}
