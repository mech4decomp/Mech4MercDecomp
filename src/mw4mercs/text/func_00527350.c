/*
 * FUN_00527350 (57 B) — Object initialization function.
 *
 * Sets up an object at [this+0x4E8], calls two functions, then calls
 * a virtual method and sets a field to -20 (0xFFFFFFEC).
 * __thiscall (ECX = this), RET 0x08 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00527350(void)
{
    __asm {
        push    esi
        _emit 0x8D
        _emit 0xB1
        _emit 0xB8
        _emit 0x0E
        _emit 0x04
        _emit 0x00
        _emit 0x8B
        _emit 0x0D
        _emit 0x30
        _emit 0xD2
        _emit 0x7D
        _emit 0x00
        push    esi
        _emit 0xE8
        _emit 0xCD
        _emit 0x33
        _emit 0xFE
        _emit 0xFF
        _emit 0x8B
        _emit 0x0D
        _emit 0x30
        _emit 0xD2
        _emit 0x7D
        _emit 0x00
        push    0
        _emit 0xE8
        _emit 0x10
        _emit 0x39
        _emit 0xFE
        _emit 0xFF
        mov     eax, dword ptr [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [eax + 0x0C]
        mov     dword ptr [esi + 8], 0xFFFFFFEC
        mov     eax, 1
        pop     esi
        ret     8
    }
}
