/*
 * FUN_004D93A0 (4 B) — __fastcall return *(int *)(ECX + 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004d93a0(void)
{
    __asm {
        mov eax, dword ptr [ecx + 4]
        ret
    }
}
