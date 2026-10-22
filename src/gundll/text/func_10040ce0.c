/*
 * FUN_10040ce0 (47 B) — __cdecl.
 * if (0x10054720 <= param_1 <= 0x10054980) FUN_10039b7a(((param_1-0x10054720)>>5)+0x1c);
 * else LeaveCriticalSection(param_1 + 0x20) via IAT.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10039b7a(void);
extern void *g_10049064;

__declspec(naked) void FUN_10040ce0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, 0x10054720
        cmp     eax, ecx
        jb      leave_cs
        cmp     eax, 0x10054980
        ja      leave_cs
        sub     eax, ecx
        sar     eax, 5
        add     eax, 0x1c
        push    eax
        call    FUN_10039b7a
        pop     ecx
        ret
    leave_cs:
        add     eax, 0x20
        push    eax
        call    dword ptr [g_10049064]
        ret
    }
}
