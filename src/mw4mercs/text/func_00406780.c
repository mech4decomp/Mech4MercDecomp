/*
 * FUN_00406780 (23 B) — __stdcall (RET 0xC). Dereferences a pointer
 * chain and forwards two values to FUN_006FDE60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b7ea4;
extern void __cdecl FUN_006FDE60(void);

__declspec(naked) void FUN_00406780(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007b7ea4]
        push    edx
        push    eax
        call    FUN_006FDE60
        ret     0xc
    }
}
