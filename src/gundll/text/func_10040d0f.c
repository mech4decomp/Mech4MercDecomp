/*
 * FUN_10040d0f (35 B) — __cdecl.
 * If param_1 < 0x14: FUN_10039b7a(param_1 + 0x1c).
 * Else: LeaveCriticalSection(param_2 + 0x20) via IAT.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10039b7a(void);
extern void *g_10049064;

__declspec(naked) void FUN_10040d0f(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        cmp     eax, 0x14
        jge     leave_cs
        add     eax, 0x1c
        push    eax
        call    FUN_10039b7a
        pop     ecx
        ret
    leave_cs:
        mov     eax, dword ptr [esp + 0x8]
        add     eax, 0x20
        push    eax
        call    dword ptr [g_10049064]
        ret
    }
}
