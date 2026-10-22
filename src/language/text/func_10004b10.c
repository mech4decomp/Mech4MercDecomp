/*
 * FUN_10004b10 (62 B, __cdecl) — build a 256-bit presence bitmap from the
 * bytes of param_2 (BTS), then scan param_1 and return the index of the
 * first byte that is present in the bitmap (or the NUL-terminator index).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __cdecl FUN_10004b10(void)
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
L_b24:
        mov     al, byte ptr [edx]
        or      al, al
        jz      L_b31
        inc     edx
        bts     dword ptr [esp], eax
        jmp     L_b24
L_b31:
        mov     esi, dword ptr [ebp + 8]
        or      ecx, -1
        nop
L_b38:
        inc     ecx
        mov     al, byte ptr [esi]
        or      al, al
        jz      L_b46
        inc     esi
        bt      dword ptr [esp], eax
        jnc     L_b38
L_b46:
        mov     eax, ecx
        add     esp, 0x20
        pop     esi
        leave
        ret
    }
}
