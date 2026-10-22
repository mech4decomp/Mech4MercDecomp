/*
 * FUN_006a02d0 (13 B) — __stdcall (RET 0x8): forwards arg0 to
 * FUN_006a0410.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a0410(void *p);

__declspec(naked) void FUN_006a02d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        call    FUN_006a0410
        ret     0x8
    }
}
