/*
 * FUN_1000b7b0 (24 B) - __cdecl. Thin wrapper: calls
 * FUN_1000b450(param_1, L"ReportStatus", param_2).
 *
 * __cdecl, 2 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000b450(void *, void *, void *);

__declspec(naked) void __cdecl FUN_1000b7b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x4]
        push    eax
        push    0x10025fb4
        push    ecx
        call    FUN_1000b450
        add     esp, 0xc
        ret
    }
}
