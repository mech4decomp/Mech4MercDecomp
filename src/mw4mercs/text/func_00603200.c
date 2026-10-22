/*
 * FUN_00603200 (5 B) — returns [esp+4] (a pointer) in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00603200(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        ret
    }
}
