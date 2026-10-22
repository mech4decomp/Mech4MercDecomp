/*
 * FUN_5e031860 (62 B) - bitmask membership test. Builds a 32-bit
 * bitmask on the stack from the characters of param_2 (BTS), then
 * scans param_1 counting characters (ECX) until one is found that is
 * NOT in the mask (BT/JNC), returning the count.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e031860(void)
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
    L1874:
        mov     al, byte ptr [edx]
        or      al, al
        jz      L1881
        inc     edx
        bts     dword ptr [esp], eax
        jmp     L1874
    L1881:
        mov     esi, dword ptr [ebp+8]
        or      ecx, 0xffffffff
        nop
    L1888:
        inc     ecx
        mov     al, byte ptr [esi]
        or      al, al
        jz      L1896
        inc     esi
        bt      dword ptr [esp], eax
        jnc     L1888
    L1896:
        mov     eax, ecx
        add     esp, 0x20
        pop     esi
        leave
        ret
    }
}
