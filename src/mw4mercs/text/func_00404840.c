/*
 * FUN_00404840 (33 B) — __stdcall (RET 0xc). Returns 3 if a global flag
 * is set, otherwise calls FUN_004c9030 on a global buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007b7a06;

extern void __cdecl FUN_004c9030(void);

__declspec(naked) void FUN_00404840(void)
{
    __asm {
        mov     al, byte ptr [g_007b7a06]
        test    al, al
        jz      L1
        mov     eax, 0x3
        ret     0xc
L1:
        push    0x7b7e3c
        call    FUN_004c9030
        add     esp, 0x4
        ret     0xc
    }
}
