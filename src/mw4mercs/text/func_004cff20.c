/*
 * FUN_004CFF20 (53 B) — Strip "Content\\" or "content\\" prefix from path.
 *
 * __cdecl, RET.
 * Calls strstr via IAT to find "Content\\" or "content\\" prefix,
 * returns pointer past the prefix, or original string if not found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char * __cdecl FUN_004cff20(char *path)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        _emit 0x8B
        _emit 0x3D
        _emit 0x98
        _emit 0xB2
        _emit 0x76
        _emit 0x00
        push    0x772370
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     l_found
        push    0x7723a8
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     l_found
        pop     edi
        mov     eax, esi
        pop     esi
        ret

    l_found:
        pop     edi
        add     eax, 8
        pop     esi
        ret
    }
}
