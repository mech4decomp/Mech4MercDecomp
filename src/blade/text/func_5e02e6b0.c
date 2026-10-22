/*
 * _strlen (123 B) - statically-linked CRT strlen copy.
 * Classic MSVC word-at-a-time strlen with 0x7efefeff trick.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e02e6b0(void)
{
    __asm {
        mov     ecx, dword ptr [esp+4]
        test    ecx, 3
        jz      L1
    L2:
        mov     al, byte ptr [ecx]
        inc     ecx
        test    al, al
        jz      L3
        test    ecx, 3
        jnz     L2
        __emit 0x05 /* add eax,0: MSVC6 encodes as 83 C0 00 (imm8), ref uses 05 imm32 */
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L1:
        mov     eax, dword ptr [ecx]
        mov     edx, 0x7efefeff
        add     edx, eax
        xor     eax, 0xffffffff
        xor     eax, edx
        add     ecx, 4
        test    eax, 0x81010100
        jz      L1
        mov     eax, dword ptr [ecx-4]
        test    al, al
        jz      L4
        test    ah, ah
        jz      L5
        test    eax, 0xff0000
        jz      L6
        test    eax, 0xff000000
        jz      L3
        jmp     L1
    L3:
        lea     eax, [ecx-1]
        mov     ecx, dword ptr [esp+4]
        sub     eax, ecx
        ret
    L6:
        lea     eax, [ecx-2]
        mov     ecx, dword ptr [esp+4]
        sub     eax, ecx
        ret
    L5:
        lea     eax, [ecx-3]
        mov     ecx, dword ptr [esp+4]
        sub     eax, ecx
        ret
    L4:
        lea     eax, [ecx-4]
        mov     ecx, dword ptr [esp+4]
        sub     eax, ecx
        ret
    }
}
