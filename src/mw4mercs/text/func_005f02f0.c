/*
 * FUN_005f02f0 (52 B) — RET 0 (no stack cleanup).
 *
 * Calls virtual [*param2+0x14](0x70), then FUN_00523e60 and
 * FUN_005f0a60, then virtual [*param2+4]() and zeroes
 * result->0x6c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00523e60(void);
extern void FUN_005f0a60(void);

__declspec(naked) void __stdcall FUN_005f02f0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    0x70
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    esi
        push    ecx
        lea     edx, [esp + 0x10]
        mov     ecx, esp
        push    edx
        call    FUN_00523e60
        call    FUN_005f0a60
        mov     eax, dword ptr [esi]
        add     esp, 8
        mov     ecx, esi
        call    dword ptr [eax + 4]
        mov     dword ptr [eax + 0x6c], 0
        pop     esi
        ret
    }
}
