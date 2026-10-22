/*
 * FUN_006D2C10 (72 B) — Bit scan / mask generation.
 *
 * __stdcall, RET 4 (1 param). Scans the input for the first set bit.
 * If found, returns 0xFFFFFFFF. If no set bit found after 32 iterations,
 * checks the recorded position: if negative returns 0, otherwise builds
 * a mask of (position-1) bits all set to 1, ORs with 1, and returns it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006d2c10(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        or      ecx, -1
        mov     edx, 1
        xor     eax, eax
    l_loop:
        _emit   0x85
        _emit   0xD6
        jz      l_next
        test    ecx, ecx
        jge     l_found
        mov     ecx, eax
    l_next:
        shl     edx, 1
        inc     eax
        cmp     eax, 0x20
        jb      l_loop
        test    ecx, ecx
        jge     l_build
        xor     eax, eax
        pop     esi
        ret     4
    l_found:
        or      eax, -1
        pop     esi
        ret     4
    l_build:
        mov     eax, 1
        cmp     ecx, eax
        jle     l_done
        dec     ecx
    l_build_loop:
        add     eax, eax
        or      eax, 1
        dec     ecx
        jnz     l_build_loop
    l_done:
        pop     esi
        ret     4
    }
}
