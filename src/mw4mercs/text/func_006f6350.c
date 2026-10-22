/*
 * FUN_006F6350 (29 B) — Conditional check + return pointer or NULL.
 *
 * __fastcall (ECX = this). If byte at this+0x40 is non-zero,
 * calls FUN_006F5AE0(this+0x40). If that returns non-zero,
 * returns this+0x40. Otherwise returns NULL (0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_006f5ae0(void *ptr);

__declspec(naked) void __fastcall FUN_006f6350(void)
{
    __asm {
        MOV AL, byte ptr [ECX + 0x40]
        TEST AL, AL
        PUSH ESI
        LEA ESI, [ECX + 0x40]
        JZ l_return_null
        PUSH ESI
        CALL FUN_006f5ae0
        TEST AL, AL
        JZ l_return_null
        MOV EAX, ESI
        POP ESI
        RET
    l_return_null:
        XOR EAX, EAX
        POP ESI
        RET
    }
}
