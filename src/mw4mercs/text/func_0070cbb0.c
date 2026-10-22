/*
 * FUN_0070cbb0 (26 B) — forwards 3 args plus a pointer to a stack slot to
 * FUN_0070cbd0 (gosScript command dispatch helper).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0070cbd0(void);

__declspec(naked) void FUN_0070cbb0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x4]
        lea     eax, [esp + 0xc]
        push    eax
        push    ecx
        push    edx
        push    0x0
        call    FUN_0070cbd0
        add     esp, 0x10
        ret
    }
}
