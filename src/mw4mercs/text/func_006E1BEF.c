/*
 * FUN_006E1BEF (22 B) — if the global at 0x840850 is non-zero, calls
 * FUN_006E21D0 with the stack argument.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_840850;
extern void __cdecl FUN_006E21D0(void);

__declspec(naked) void FUN_006E1BEF(void)
{
    __asm {
        nop
        mov     ecx, dword ptr [g_840850]
        test    ecx, ecx
        je      done
        mov     eax, dword ptr [esp+4]
        push    eax
        call    FUN_006E21D0
    done:
        ret
    }
}
