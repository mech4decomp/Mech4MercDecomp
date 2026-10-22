/*
 * FUN_5e0314f7 (55 B) - string digit-conversion helper. Converts
 * leading ASCII digits to binary values in-place; on encountering a
 * ';' separator, shifts the remainder of the string left by one.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e0314f7(void)
{
    __asm {
        mov     ecx, dword ptr [esp+4]
        mov     al, byte ptr [ecx]
        test    al, al
        jz      L516
        push    esi
    L502:
        cmp     al, 0x30
        jl      L517
        cmp     al, 0x39
        jg      L517
        sub     al, 0x30
        mov     byte ptr [ecx], al
    L50e:
        inc     ecx
    L50f:
        mov     al, byte ptr [ecx]
        test    al, al
        jnz     L502
        pop     esi
    L516:
        ret
    L517:
        cmp     al, 0x3b
        jnz     L50e
        mov     eax, ecx
    L51d:
        mov     dl, byte ptr [eax+1]
        lea     esi, [eax+1]
        mov     byte ptr [eax], dl
        mov     eax, esi
        cmp     byte ptr [eax], 0
        jnz     L51d
        jmp     L50f
    }
}
