/*
 * FUN_005e2000 (13 B) — __stdcall wrapper: forwards one stack arg to
 * FUN_0062f530, RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0062f530(void *p);

__declspec(naked) void __stdcall FUN_005e2000(void *p)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        call    FUN_0062f530
        ret     4
    }
}
