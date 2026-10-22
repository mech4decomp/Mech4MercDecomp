/*
 * FUN_006F8520 (61 B) — Remove element from array at index, shift remaining.
 *
 * Array elements are 8 bytes each. Removes element at param_1 by shifting
 * all subsequent elements left by one slot. Decrements count at this+0x14.
 * Array base at this+0x10.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: index to remove).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f8520(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [ecx + 0x14]    ; ebx = count
        push    esi
        mov     esi, dword ptr [esp + 0x0C]    ; esi = index
        cmp     esi, ebx
        push    edi
        jge     l_ret
        lea     edi, [ebx - 1]                 ; edi = new_count = count - 1
        cmp     esi, edi
        jge     l_update_count
        mov     eax, dword ptr [ecx + 0x10]    ; eax = array base
        mov     edx, edi
        lea     eax, [eax + esi*8]             ; eax = &array[index]
        sub     edx, esi                       ; edx = count - 1 - index
    l_shift:
        mov     esi, dword ptr [eax + 8]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [eax + 0x0C]
        mov     dword ptr [eax + 4], esi
        add     eax, 8
        dec     edx
        jnz     l_shift
    l_update_count:
        test    ebx, ebx
        jz      l_ret
        mov     dword ptr [ecx + 0x14], edi    ; count = new_count
    l_ret:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
