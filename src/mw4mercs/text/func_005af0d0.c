/*
 * FUN_005af0d0 (52 B) — __thiscall constructor with 4 stack params (RET 0x10).
 * Calls FUN_004d9940(this, p1, p2, p3, p4), sets vtable 0x785ad0, zeroes
 * [this+0x168], returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d9940(void);

__declspec(naked) void __stdcall FUN_005af0d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004d9940
        mov     dword ptr [esi], 0x785AD0
        mov     dword ptr [esi + 0x168], 0
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
