/*
 * FUN_005e7820 (42 B) — __thiscall, RET 0x10 (4 stack params).
 *
 * Reorders 4 stack params, calls FUN_005e7a30, sets vtable at this+0
 * to 0x789380, returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005e7a30(void);

__declspec(naked) void FUN_005e7820(void)
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
        call    FUN_005e7a30
        mov     dword ptr [esi], 0x789380
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
