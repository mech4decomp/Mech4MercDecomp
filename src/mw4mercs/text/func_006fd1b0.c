/*
 * FUN_006FD1B0 (127 B) — Release sub-objects and free library.
 *
 * Iterates through 7 pointer fields at offsets 0x08-0x20 of the input
 * struct. For each non-null pointer, calls vtable[0x08] (release/destroy).
 * Then frees the module handle at offset 0x28 via FreeLibrary, clears
 * byte at offset 0x24, and returns 0.
 *
 * __stdcall (RET 4), 1 param (struct pointer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006fd1b0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 8]
        test    eax, eax
        jz      l_skip_1
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
    l_skip_1:
        mov     eax, dword ptr [esi + 0x0C]
        test    eax, eax
        jz      l_skip_2
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 8]
    l_skip_2:
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      l_skip_3
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
    l_skip_3:
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        jz      l_skip_4
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 8]
    l_skip_4:
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jz      l_skip_5
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
    l_skip_5:
        mov     eax, dword ptr [esi + 0x1C]
        test    eax, eax
        jz      l_skip_6
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 8]
    l_skip_6:
        mov     eax, dword ptr [esi + 0x20]
        test    eax, eax
        jz      l_skip_7
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
    l_skip_7:
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      l_skip_8
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0xB8
        _emit   0xB0
        _emit   0x76
        _emit   0x00
        mov     dword ptr [esi + 0x28], 0
    l_skip_8:
        mov     byte ptr [esi + 0x24], 0
        xor     eax, eax
        pop     esi
        ret     4
    }
}
