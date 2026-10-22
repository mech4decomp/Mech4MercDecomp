/*
 * FUN_10002410 (123 B) — _strlen. Classic MSVC word-at-a-time strlen with the
 * 0x7efefeff has-zero-byte trick.
 *
 * __cdecl, 1 arg (char *str). Returns length.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void *__cdecl FUN_10002410(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        test    ecx, 3
        je      L2430
L241C:
        mov     al, byte ptr [ecx]
        inc     ecx
        test    al, al
        je      L2463
        test    ecx, 3
        jne     L241C
        /* __emit: ADD EAX,0x0 (05 00 00 00 00); MSVC6 emits 83 C0 00 for add eax,0 */
        __emit 0x05
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
L2430:
        mov     eax, dword ptr [ecx]
        mov     edx, 0x7efefeff
        add     edx, eax
        xor     eax, 0xffffffff
        xor     eax, edx
        add     ecx, 4
        test    eax, 0x81010100
        je      L2430
        mov     eax, dword ptr [ecx - 4]
        test    al, al
        je      L2481
        test    ah, ah
        je      L2477
        test    eax, 0xff0000
        je      L246D
        test    eax, 0xff000000
        je      L2463
        jmp     L2430
L2463:
        lea     eax, [ecx - 1]
        mov     ecx, dword ptr [esp + 4]
        sub     eax, ecx
        ret
L246D:
        lea     eax, [ecx - 2]
        mov     ecx, dword ptr [esp + 4]
        sub     eax, ecx
        ret
L2477:
        lea     eax, [ecx - 3]
        mov     ecx, dword ptr [esp + 4]
        sub     eax, ecx
        ret
L2481:
        lea     eax, [ecx - 4]
        mov     ecx, dword ptr [esp + 4]
        sub     eax, ecx
        ret
    }
}
