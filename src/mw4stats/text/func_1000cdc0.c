/*
 * FUN_1000cdc0 (48 B) - __stdcall. Writes a 0xfeff BOM into a local buffer and
 * dispatches through the object's vtable (+0x1c) with (param_1+0x44, buf, 2,
 * &param_1, 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_1000cdc0(void)
{
    __asm {
        sub     esp, 0x10
        mov     eax, dword ptr [esp + 0x14]
        push    esi
        lea     esi, [esp + 0x18]
        push    0x0
        mov     ecx, dword ptr [eax + 0x3c]
        mov     eax, dword ptr [eax + 0x44]
        push    esi
        lea     esi, [esp + 0xc]
        mov     word ptr [esp + 0xc], 0xfeff
        mov     edx, dword ptr [ecx]
        push    0x2
        push    esi
        push    eax
        call    dword ptr [edx + 0x1c]
        pop     esi
        add     esp, 0x10
        ret     0x4
    }
}
