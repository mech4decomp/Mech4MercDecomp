/*
 * FUN_10001f00 (224 B) — strcpy: word-at-a-time copy with the classic
 * 0x7efefeff null-byte detection, handling unaligned head/tail.
 *
 * __cdecl, 2 args (dest, src). Returns dest.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * Rewritten from byte-lock to real mnemonics: the unconditional short jumps
 * (EB rel8) are now native `jmp label` (MSVC6 emits EB rel8 for in-range
 * targets). No __emit remains.
 */

__declspec(naked) void *__cdecl FUN_10001f00(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        push    edi
        test    ecx, 3
        jz      L1C
L0D:
        mov     al, byte ptr [ecx]
        inc     ecx
        test    al, al
        jz      L4F
        test    ecx, 3
        jnz     L0D
L1C:
        mov     eax, dword ptr [ecx]
        mov     edx, 0x7efefeff
        add     edx, eax
        xor     eax, 0xffffffff
        xor     eax, edx
        add     ecx, 4
        test    eax, 0x81010100
        jz      L1C
        mov     eax, dword ptr [ecx - 4]
        test    al, al
        jz      L5E
        test    ah, ah
        jz      L59
        test    eax, 0xff0000
        jz      L54
        test    eax, 0xff000000
        jz      L4F
        jmp     L1C
L4F:
        lea     edi, [ecx - 1]
        jmp     L61
L54:
        lea     edi, [ecx - 2]
        jmp     L61
L59:
        lea     edi, [ecx - 3]
        jmp     L61
L5E:
        lea     edi, [ecx - 4]
L61:
        mov     ecx, dword ptr [esp + 0xc]
        test    ecx, 3
        jz      L86
L6D:
        mov     dl, byte ptr [ecx]
        inc     ecx
        test    dl, dl
        jz      LD8
        mov     byte ptr [edi], dl
        inc     edi
        test    ecx, 3
        jnz     L6D
        jmp     L86
L81:
        mov     dword ptr [edi], edx
        add     edi, 4
L86:
        mov     edx, 0x7efefeff
        mov     eax, dword ptr [ecx]
        add     edx, eax
        xor     eax, 0xffffffff
        xor     eax, edx
        mov     edx, dword ptr [ecx]
        add     ecx, 4
        test    eax, 0x81010100
        jz      L81
        test    dl, dl
        jz      LD8
        test    dh, dh
        jz      LCF
        test    edx, 0xff0000
        jz      LC2
        test    edx, 0xff000000
        jz      LBA
        jmp     L81
LBA:
        mov     dword ptr [edi], edx
        mov     eax, dword ptr [esp + 8]
        pop     edi
        ret
LC2:
        mov     word ptr [edi], dx
        mov     eax, dword ptr [esp + 8]
        mov     byte ptr [edi + 2], 0
        pop     edi
        ret
LCF:
        mov     word ptr [edi], dx
        mov     eax, dword ptr [esp + 8]
        pop     edi
        ret
LD8:
        mov     byte ptr [edi], dl
        mov     eax, dword ptr [esp + 8]
        pop     edi
        ret
    }
}
