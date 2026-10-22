/*
 * FUN_5e0318e0 (58 B) - bitmask membership scan returning pointer.
 * Builds a 32-bit bitmask from param_2's characters (BTS), then scans
 * param_1 until a character NOT in the mask is found (BT/JNC),
 * returning a pointer to that character.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e0318e0(void)
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
        mov     edx, dword ptr [ebp+0xc]
        __emit 0x8D /* lea ecx,[ecx]: MSVC6 drops the 00 disp byte (8D 09), ref needs 8D 49 00 */
        __emit 0x49
        __emit 0x00
    L18f4:
        mov     al, byte ptr [edx]
        or      al, al
        jz      L1901
        inc     edx
        bts     dword ptr [esp], eax
        jmp     L18f4
    L1901:
        mov     esi, dword ptr [ebp+8]
    L1904:
        mov     al, byte ptr [esi]
        or      al, al
        jz      L1914
        inc     esi
        bt      dword ptr [esp], eax
        jnc     L1904
        lea     eax, [esi-1]
    L1914:
        add     esp, 0x20
        pop     esi
        leave
        ret
    }
}
