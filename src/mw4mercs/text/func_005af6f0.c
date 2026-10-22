/*
 * FUN_005af6f0 (42 B) — __thiscall (ECX = this), RET 0x10 (4 stack params).
 * Calls FUN_005e3390(param1..param4), sets vtable at this to 0x785c54,
 * returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005e3390(void);

__declspec(naked) void *__stdcall FUN_005af6f0(void *p1, void *p2, void *p3, void *p4)
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
        mov     dword ptr [esi], 0x785C54
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
