/*
 * FUN_005a80c0 (42 B) — Constructor-like function.
 *
 * Calls FUN_004d9940 with 4 params, then sets vtable at [this] to 0x784dd8.
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d9940(void);

__declspec(naked) void __stdcall FUN_005a80c0(void)
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
        mov     dword ptr [esi], 0x784dd8
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
