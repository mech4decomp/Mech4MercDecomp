/*
 * FUN_00536890 (60 B) — Object method with stack-based helper.
 *
 * Creates a temporary object on the stack, calls a virtual method on
 * [this+0x50], then cleans up.
 * __thiscall (ECX = this), no stack params (ret).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00536890(void)
{
    __asm {
        sub     esp, 0x50
        push    esi
        push    1
        push    0
        mov     esi, ecx
        push    0x0076C6B4
        lea     ecx, dword ptr [esp + 0x10]
        _emit 0xE8
        _emit 0xF8
        _emit 0x73
        _emit 0xED
        _emit 0xFF
        mov     ecx, dword ptr [esi + 0x50]
        mov     eax, dword ptr [ecx]
        lea     edx, dword ptr [esp + 4]
        push    edx
        call    dword ptr [eax + 0x1C]
        lea     ecx, dword ptr [esp + 4]
        _emit 0xE8
        _emit 0xE2
        _emit 0x7B
        _emit 0xED
        _emit 0xFF
        lea     ecx, dword ptr [esp + 4]
        _emit 0xE8
        _emit 0x59
        _emit 0x75
        _emit 0xED
        _emit 0xFF
        pop     esi
        add     esp, 0x50
        ret
    }
}
