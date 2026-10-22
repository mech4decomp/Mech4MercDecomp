/*
 * FUN_00750480 (207 B) — Compares a 16-byte GUID against known device
 * descriptions and returns a name string. __stdcall RET 4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00750480(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    edi
        mov     ecx, 4
        mov     edi, 0x7a2b60
        mov     esi, eax
        xor     edx, edx
        repe cmpsd
        jnz     L_04A2
        pop     edi
        mov     eax, 0x7acce0
        pop     esi
        ret     4
L_04A2:
        mov     ecx, 4
        mov     edi, 0x7a2ba0
        mov     esi, eax
        xor     edx, edx
        repe cmpsd
        jnz     L_04BE
        pop     edi
        mov     eax, 0x7accd8
        pop     esi
        ret     4
L_04BE:
        mov     ecx, 4
        mov     edi, 0x7a2b70
        mov     esi, eax
        xor     edx, edx
        repe cmpsd
        jnz     L_04DA
        pop     edi
        mov     eax, 0x7accd4
        pop     esi
        ret     4
L_04DA:
        mov     ecx, 4
        mov     edi, 0x7a2b40
        mov     esi, eax
        xor     edx, edx
        repe cmpsd
        jnz     L_04F6
        pop     edi
        mov     eax, 0x7acccc
        pop     esi
        ret     4
L_04F6:
        mov     ecx, 4
        mov     edi, 0x7a2b50
        mov     esi, eax
        xor     edx, edx
        repe cmpsd
        jnz     L_0512
        pop     edi
        mov     eax, 0x7accc8
        pop     esi
        ret     4
L_0512:
        mov     ecx, 4
        mov     edi, 0x7a2b80
        mov     esi, eax
        xor     edx, edx
        repe cmpsd
        jnz     L_052E
        pop     edi
        mov     eax, 0x7accb0
        pop     esi
        ret     4
L_052E:
        mov     esi, eax
        xor     eax, eax
        mov     ecx, 4
        mov     edi, 0x7a3450
        repe cmpsd
        mov     eax, 0x7acca8
        jz      L_054A
        mov     eax, 0x79e7f8
L_054A:
        pop     edi
        pop     esi
        ret     4
    }
}
