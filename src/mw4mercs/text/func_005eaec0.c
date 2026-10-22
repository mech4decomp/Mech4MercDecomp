/*
 * FUN_005eaec0 (28 B) — __thiscall getter, returns pointer in EAX.
 *
 * If this+0x17c is non-null, returns (*(this+0x17c)+0xd8)+0x80;
 * otherwise returns 0x7b9460.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005eaec0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x17c]
        test    eax, eax
        jz      L_ED6
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        ret
L_ED6:
        mov     eax, 0x7b9460
        ret
    }
}
