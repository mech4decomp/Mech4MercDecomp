/*
 * FUN_006CF8C0 (132 B) — __thiscall (this in ECX), RET 0xC (3 params).
 * Searches a 0x80-entry array (stride 0x1c) for a matching key, returning
 * a pointer into it or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006CF8C0(void)
{
    __asm {
        push    ecx
        mov     edx, dword ptr [ecx + 8]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [ecx]
        push    edi
        mov     edi, dword ptr [ecx + 4]
        shl     edx, 7
        add     edx, edi
        cmp     esi, edx
        mov     eax, esi
        mov     dword ptr [esp + 0x10], edx
        jge     L6cf925
        mov     edi, dword ptr [esp + 0x20]
        mov     ebx, dword ptr [esp + 0x18]
    L6cf8e4:
        lea     edx, [eax*8]
        sub     edx, eax
        mov     ebp, dword ptr [ecx + edx*4 + 0x10]
        cmp     ebp, ebx
        lea     edx, [ecx + edx*4]
        jne     L6cf912
        mov     edx, dword ptr [edx + 0x14]
        cmp     edx, dword ptr [esp + 0x1c]
        jne     L6cf912
        lea     edx, [eax + 1]
        lea     ebp, [edx*8]
        sub     ebp, edx
        cmp     dword ptr [ecx + ebp*4], edi
        je      L6cf92f
    L6cf912:
        inc     eax
        cmp     eax, 0x80
        jl      L6cf91c
        xor     eax, eax
    L6cf91c:
        mov     edx, dword ptr [esp + 0x10]
        inc     esi
        cmp     esi, edx
        jl      L6cf8e4
    L6cf925:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0xc
    L6cf92f:
        pop     edi
        lea     edx, [eax*8]
        pop     esi
        sub     edx, eax
        pop     ebp
        lea     eax, [ecx + edx*4 + 0xc]
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
