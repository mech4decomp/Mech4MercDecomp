/*
 * FUN_1003fd90 (58 B) - __cdecl. Builds a 256-bit set-membership
 * bitmap from the byte string param_2 (BTS per byte), then scans
 * param_1 for the first byte present in the set, returning a pointer
 * to it (or 0 if none / param_1 exhausted).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_1003fd90(void)
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
        __emit 0x8D   /* __emit: lea ecx,[ecx] as 3-byte NOP (8D 49 00); MSVC6 drops the zero disp -> 8D 09 */
        __emit 0x49
        __emit 0x00
    L_a4:
        mov     al, byte ptr [edx]
        or      al, al
        jz      L_b1
        inc     edx
        bts     dword ptr [esp], eax
        jmp     L_a4
    L_b1:
        mov     esi, dword ptr [ebp + 0x8]
    L_b4:
        mov     al, byte ptr [esi]
        or      al, al
        jz      L_c4
        inc     esi
        bt      dword ptr [esp], eax
        jnc     L_b4
        lea     eax, [esi - 0x1]
    L_c4:
        add     esp, 0x20
        pop     esi
        leave
        ret
    }
}
