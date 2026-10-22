/*
 * FUN_00411a10 (62 B) — __thiscall, RET 0x4: walks the linked list at
 * +0x18, calling _stricmp (global fn ptr 0x0076b2ac) on each node's +0x14
 * string against the argument; returns the first matching node, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0076b2ac;

__declspec(naked) void FUN_00411a10(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        mov     ebp, dword ptr [g_0076b2ac]
        push    esi
        mov     esi, dword ptr [ecx + 0x18]
        push    edi
L1:
        test    esi, esi
        jz      L2
        mov     edi, dword ptr [esi]
        test    edi, edi
        mov     esi, dword ptr [esi + 0x4]
        jz      L2
        mov     eax, dword ptr [edi + 0x14]
        push    ebx
        push    eax
        call    ebp
        add     esp, 0x8
        test    eax, eax
        jnz     L1
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L2:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x4
    }
}
