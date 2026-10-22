/*
 * FUN_1001c2a0 (36 B) - __stdcall, RET 0x4.
 * Validates param via FUN_1001c280, then calls FUN_10001d60.
 *
 * CFLAGS: /O1
 */

extern char __cdecl FUN_1001c280(void *p);
extern void __cdecl FUN_10001d60(void *p);

__declspec(naked) void __stdcall FUN_1001c2a0(void)
{
    __asm {
        mov     edx, dword ptr [esp+4]
        push    edx
        call    FUN_1001c280
        test    al, al
        jnz     L1
        mov     eax, 0x80070057
        ret     4
L1:
        push    edx
        call    FUN_10001d60
        add     esp, 4
        xor     eax, eax
        ret     4
    }
}
