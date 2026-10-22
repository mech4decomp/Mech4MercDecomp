/*
 * FUN_006F8560 (36 B) — Linear search through an array of pairs at
 * this+0x10 (count at this+0x14). Each pair is 8 bytes; first dword
 * is the key. Returns index of matching key, or -1 if not found.
 *
 * __thiscall (ECX = this), RET 4 (1 stack param: key).
 *
 * Disassembly:
 *   8B 51 14          mov     edx, [ecx + 0x14]
 *   56                push    esi
 *   33 C0             xor     eax, eax
 *   85 D2             test    edx, edx
 *   7E 13             jle     not_found
 *   8B 49 10          mov     ecx, [ecx + 0x10]
 *   8B 74 24 08       mov     esi, [esp + 8]
 *   39 31             cmp     [ecx], esi
 *   74 0B             jz      found
 *   40                inc     eax
 *   83 C1 08          add     ecx, 8
 *   3B C2             cmp     eax, edx
 *   7C F4             jl      loop
 *   83 C8 FF          or      eax, -1
 *   5E                pop     esi
 *   C2 04 00          ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_006f8560(int this, int key)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x14]
        push    esi
        xor     eax, eax
        test    edx, edx
        jle     not_found
        mov     ecx, dword ptr [ecx + 0x10]
        mov     esi, dword ptr [esp + 8]
search_loop:
        cmp     dword ptr [ecx], esi
        jz      epilogue
        inc     eax
        add     ecx, 8
        cmp     eax, edx
        jl      search_loop
not_found:
        or      eax, -1
epilogue:
        pop     esi
        ret     4
    }
}
