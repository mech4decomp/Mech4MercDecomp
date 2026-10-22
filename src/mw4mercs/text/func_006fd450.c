/*
 * FUN_006FD450 (165 B) — String table entry inserter.
 *
 * __stdcall, RET 0x8 (2 params: param_1=table, param_2=entry).
 * Checks if entry+0x08 == 0x5313 (magic). If so, extracts wide strings
 * from entry+0x20/0x24, allocates 0x200-byte buffers, converts via
 * wcstombs, and stores into the table arrays at +0x30 and +0xfd0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <stdlib.h>

__declspec(naked) int __cdecl FUN_006FD450(void *param_1, void *param_2)
{
    __asm {
        mov     ecx, [esp + 0x8]
        cmp     dword ptr [ecx + 0x8], 0x5313
        push    ebx
        push    ebp
        push    esi
        jnz     l_fail
        mov     al, [ecx + 0x4]
        xor     ebp, ebp
        test    al, al
        mov     dword ptr [esp + 0x14], 0
        jz      l_have_source
        mov     edx, [ecx + 0x20]
        mov     [esp + 0x14], edx
        jz      l_have_source
        mov     ebp, [ecx + 0x24]
    l_have_source:
        mov     esi, [esp + 0x10]
        mov     ebx, [esi + 0x2c]
        cmp     ebx, 0x3e8
        jge     l_fail
        push    edi
        _emit   0x8B
        _emit   0x3D
        _emit   0x94
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        push    0x200
        call    edi
        push    0x200
        mov     [esi + ebx * 4 + 0x30], eax
        call    edi
        mov     ecx, [esi + 0x2c]
        mov     edx, [esp + 0x20]
        _emit   0x8B
        _emit   0x1D
        _emit   0x84
        _emit   0xB3
        _emit   0x76
        _emit   0x00
        mov     [esi + ecx * 4 + 0xfd0], eax
        mov     edi, [esi + 0x2c]
        mov     eax, [esi + edi * 4 + 0x30]
        push    0x200
        push    edx
        push    eax
        call    ebx
        mov     ecx, [esi + edi * 4 + 0xfd0]
        push    0x200
        push    ebp
        push    ecx
        call    ebx
        add     esp, 0x20
        inc     edi
        mov     [esi + 0x2c], edi
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
    l_fail:
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
    }
}
