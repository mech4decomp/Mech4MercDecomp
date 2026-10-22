/*
 * FUN_005e25a0 (42 B) — __thiscall constructor (RET 0x10, 4 stack params).
 *
 * Saves this (ECX) in ESI, calls FUN_005e3390(this, p1, p2, p3, p4),
 * then sets vtable pointer [this] = 0x788b38 and returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005e3390(void);

__declspec(naked) void __stdcall FUN_005e25a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0xC]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005e3390
        mov     dword ptr [esi], 0x788B38
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
