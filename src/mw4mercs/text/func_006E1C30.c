/*
 * FUN_006E1C30 (26 B) — if the global at 0x840850 is non-zero, calls
 * FUN_006E2470 with two stack arguments.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_840850;
extern void __cdecl FUN_006E2470(void);

__declspec(naked) void FUN_006E1C30(void)
{
    __asm {
        mov     ecx, dword ptr [g_840850]
        test    ecx, ecx
        je      done
        mov     eax, dword ptr [esp+8]
        mov     edx, dword ptr [esp+4]
        push    eax
        push    edx
        call    FUN_006E2470
    done:
        ret
    }
}
