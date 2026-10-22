/*
 * FUN_10040cbd (35 B) — __cdecl.
 * If param_1 < 0x14: FUN_10039b19(param_1 + 0x1c).
 * Else: EnterCriticalSection(param_2 + 0x20) via IAT.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10039b19(void);
extern void *g_10049068;

__declspec(naked) void FUN_10040cbd(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        cmp     eax, 0x14
        jge     enter_cs
        add     eax, 0x1c
        push    eax
        call    FUN_10039b19
        pop     ecx
        ret
    enter_cs:
        mov     eax, dword ptr [esp + 0x8]
        add     eax, 0x20
        push    eax
        call    dword ptr [g_10049068]
        ret
    }
}
