/*
 * FUN_004C1920 (44 B) — Fastcall helper with conditional dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c1950(void);
extern void __cdecl FUN_004c1a10(int a, int b);

__declspec(naked) void __fastcall FUN_004c1920(int param_1)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x18]
        shr     eax, 5
        not     al
        lea     edx, [ecx + 0xb0]
        test    al, 1
        mov     eax, dword ptr [ecx + 0x174]
        push    edx
        push    eax
        jz      l_call_1a10

        call    FUN_004c1950
        add     esp, 8
        ret

    l_call_1a10:
        call    FUN_004c1a10
        add     esp, 8
        ret
    }
}
