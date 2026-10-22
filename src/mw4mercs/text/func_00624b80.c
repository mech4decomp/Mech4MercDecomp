/*
 * FUN_00624b80 (12 B) — __cdecl wrapper: calls operator delete
 * (FUN_004084e0) on the single pointer argument.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00624b80(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        call    FUN_004084e0
        pop     ecx
        ret
    }
}
