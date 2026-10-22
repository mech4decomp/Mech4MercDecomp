/*
 * FUN_005ab3f0 (52 B) — __thiscall, RET 0x10.
 *
 * Constructor: calls base FUN_005e3390 with 4 args, sets vtable pointer
 * 0x785798 and zeroes field at +0x238.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005e3390(void);

__declspec(naked) void FUN_005ab3f0(void)
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
        call    FUN_005e3390
        mov     dword ptr [esi], 0x785798
        mov     dword ptr [esi + 0x238], 0
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
