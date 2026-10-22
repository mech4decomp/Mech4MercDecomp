/*
 * FUN_005abc30 (52 B) — __thiscall, RET 0x10.
 *
 * Constructor: calls base FUN_005f0740 with 4 args, sets vtable pointer
 * 0x785888 and zeroes field at +0x17c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005f0740(void);

__declspec(naked) void FUN_005abc30(void)
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
        call    FUN_005f0740
        mov     dword ptr [esi], 0x785888
        mov     dword ptr [esi + 0x17c], 0
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
