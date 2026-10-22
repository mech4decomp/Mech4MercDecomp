/*
 * FUN_005b6950 (42 B) — __thiscall (ECX = this), RET 0x10 (four params).
 * Calls FUN_005e6cf0 with the four params, sets vtable pointer, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005e6cf0(void);

__declspec(naked) void __stdcall FUN_005b6950(void)
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
        call    FUN_005e6cf0
        mov     dword ptr [esi], 0x7866f4
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
