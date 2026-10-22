/*
 * FUN_0065d1c0 (34 B) — __cdecl wrapper: calls FUN_006f4950(global),
 * then FUN_0065cdc0(arg2, arg1), then tail-jumps to FUN_006f49a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dd234;

extern void FUN_006f4950(void);
extern void FUN_0065cdc0(void);
extern void FUN_006f49a0(void);

__declspec(naked) void FUN_0065d1c0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dd234]
        push    eax
        call    FUN_006f4950
        mov     ecx, dword ptr [esp+4]
        mov     edx, dword ptr [esp+8]
        push    ecx
        push    edx
        call    FUN_0065cdc0
        add     esp, 8
        jmp     FUN_006f49a0
    }
}
