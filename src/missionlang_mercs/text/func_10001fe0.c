/*
 * FUN_10001fe0 (123 B) — _strlen. Word-at-a-time scan with the classic
 * 0x7efefeff null-byte detection, handling the unaligned head.
 *
 * __cdecl, 1 arg (str). Returns length.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * Rewritten from byte-lock to real mnemonics: the forward `je` short jumps
 * are now native `je label` (MSVC6 emits 74 rel8 for in-range targets).
 * The only remaining __emit is the `add eax,0` (05 00 00 00 00) which MSVC6
 * encodes as 83 C0 00 (imm8) instead of the reference imm32 form.
 */

__declspec(naked) unsigned int __cdecl FUN_10001fe0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        test    ecx, 3
        je      L2000
L1FEC:
        mov     al, byte ptr [ecx]
        inc     ecx
        test    al, al
        je      L2033
        test    ecx, 3
        jne     L1FEC
        /* __emit: add eax,0 (05 00 00 00 00); MSVC6 encodes as 83 C0 00 (imm8) */
        __emit 0x05
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
L2000:
        mov     eax, dword ptr [ecx]
        mov     edx, 0x7efefeff
        add     edx, eax
        xor     eax, 0xffffffff
        xor     eax, edx
        add     ecx, 4
        test    eax, 0x81010100
        je      L2000
        mov     eax, dword ptr [ecx - 4]
        test    al, al
        je      L2051
        test    ah, ah
        je      L2047
        test    eax, 0xff0000
        je      L203D
        test    eax, 0xff000000
        je      L2033
        jmp     L2000
L2033:
        lea     eax, [ecx - 1]
        mov     ecx, dword ptr [esp + 4]
        sub     eax, ecx
        ret
L203D:
        lea     eax, [ecx - 2]
        mov     ecx, dword ptr [esp + 4]
        sub     eax, ecx
        ret
L2047:
        lea     eax, [ecx - 3]
        mov     ecx, dword ptr [esp + 4]
        sub     eax, ecx
        ret
L2051:
        lea     eax, [ecx - 4]
        mov     ecx, dword ptr [esp + 4]
        sub     eax, ecx
        ret
    }
}
