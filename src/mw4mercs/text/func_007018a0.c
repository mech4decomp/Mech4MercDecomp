/*
 * FUN_007018a0 (23 B) — gosScript linked-list push (__stdcall, 1 arg).
 * Links the given node into the head of the g_00856a7c list and returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00856a7c;

__declspec(naked) void FUN_007018a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [g_00856a7c]
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [g_00856a7c], eax
        mov     al, 0x1
        ret     0x4
    }
}
