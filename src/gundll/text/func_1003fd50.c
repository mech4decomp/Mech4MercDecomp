/*
 * FUN_1003fd50 (62 B) — __cdecl.
 * Builds a 256-bit presence bitmap from param_2, then scans param_1 for the
 * first byte present in the bitmap; returns its index.
 */

__declspec(naked) void FUN_1003fd50(void)
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
        __emit 0x8D /* __emit: MSVC6 collapses lea ecx,[ecx] to 8D 09; ref uses 8D 49 00 */
        __emit 0x49
        __emit 0x00
    L1003fd64:
        mov     al, byte ptr [edx]
        or      al, al
        jz      L1003fd71
        inc     edx
        bts     dword ptr [esp], eax
        jmp     L1003fd64
    L1003fd71:
        mov     esi, dword ptr [ebp + 0x8]
        or      ecx, 0xffffffff
        nop
    L1003fd78:
        inc     ecx
        mov     al, byte ptr [esi]
        or      al, al
        jz      L1003fd86
        inc     esi
        bt      dword ptr [esp], eax
        jnc     L1003fd78
    L1003fd86:
        mov     eax, ecx
        add     esp, 0x20
        pop     esi
        leave
        ret
    }
}
