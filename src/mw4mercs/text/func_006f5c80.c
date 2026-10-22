/*
 * FUN_006F5C80 (48 B) — Free a 3-field structure.
 *
 * Frees param->field_00, param->field_04, then param itself.
 * Uses free() via import at 0x0076b2d0.
 *
 * __stdcall, RET 4 (one stack param: pointer to structure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f5c80(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi]
        test    eax, eax
        push    edi
        _emit   0x8B
        _emit   0x3D
        _emit   0xD0
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        jz      l_skip1
        push    eax
        call    edi
        add     esp, 4
    l_skip1:
        mov     eax, dword ptr [esi + 4]
        test    eax, eax
        jz      l_skip2
        push    eax
        call    edi
        add     esp, 4
    l_skip2:
        push    esi
        call    edi
        add     esp, 4
        pop     edi
        pop     esi
        ret     4
    }
}
