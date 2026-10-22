/*
 * FUN_005dfa30 (80 B) — __thiscall site-flag update dispatcher
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005dfa30(void)
{
    __asm {
        push esi
        mov esi, ecx
        _emit 0xE8          /* call 0x005df620 */
        _emit 0xE8
        _emit 0xFB
        _emit 0xFF
        _emit 0xFF
        test eax, eax
        mov ecx, esi
        jnz La45
        _emit 0xE8          /* call 0x005dfa80 */
        _emit 0x3D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        jmp La62
La45:
        _emit 0xE8          /* call 0x005df620 */
        _emit 0xD6
        _emit 0xFB
        _emit 0xFF
        _emit 0xFF
        mov eax, dword ptr [eax + 0x10]
        shr eax, 0x13
        test al, 0x1
        mov ecx, esi
        jz La5d
        _emit 0xE8          /* call 0x005e0bd0 */
        _emit 0x75
        _emit 0x11
        _emit 0x00
        _emit 0x00
        jmp La62
La5d:
        _emit 0xE8          /* call 0x005dfbb0 */
        _emit 0x4E
        _emit 0x01
        _emit 0x00
        _emit 0x00
La62:
        mov edx, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [edx + 0x48]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        _emit 0xE8          /* call 0x005fa120 */
        _emit 0xA4
        _emit 0xA6
        _emit 0x01
        _emit 0x00
        pop esi
        ret 0x8
    }
}
