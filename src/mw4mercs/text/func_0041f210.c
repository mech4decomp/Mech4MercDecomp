/*
 * FUN_0041f210 (22 B) — __thiscall helper: calls atoi (IAT at
 * 0x0076b318) on the string at +0x18 and stores the int result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b318;

__declspec(naked) void FUN_0041f210(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x18]
        push    eax
        call    dword ptr [g_0076b318]
        mov     ecx, dword ptr [esp+0x8]
        add     esp, 0x4
        mov     dword ptr [ecx], eax
        ret     0x4
    }
}
