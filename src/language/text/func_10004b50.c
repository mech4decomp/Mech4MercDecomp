/*
 * FUN_10004b50 (58 B, __cdecl) — build a 256-bit presence bitmap from the
 * bytes of param_2 (BTS), then scan param_1 and return a pointer to the
 * first byte present in the bitmap (or NULL if the NUL terminator is hit).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned char *__cdecl FUN_10004b50(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        xor     eax, eax
        push    eax
        push    eax
        push    eax
        push    eax
        push    eax
        push    eax
        push    eax
        push    eax
        mov     edx, dword ptr [ebp + 0xc]
        /* __emit: LEA ECX,[ECX] NOP; MSVC6 drops the 00 disp byte */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L_b64:
        mov     al, byte ptr [edx]
        or      al, al
        jz      L_b71
        inc     edx
        bts     dword ptr [esp], eax
        jmp     L_b64
L_b71:
        mov     esi, dword ptr [ebp + 8]
L_b74:
        mov     al, byte ptr [esi]
        or      al, al
        jz      L_b84
        inc     esi
        bt      dword ptr [esp], eax
        jnc     L_b74
        lea     eax, [esi - 1]
L_b84:
        add     esp, 0x20
        pop     esi
        leave
        ret
    }
}
