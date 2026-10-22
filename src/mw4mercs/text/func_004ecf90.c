/*
 * FUN_004ECF90 (26 B) — Linked list cleanup iterator.
 *
 * __thiscall (ECX = this), RET 0 (no stack params).
 * Iterates linked list at [this+0x10], calling FUN_004ED840()
 * for each entry whose first field is non-zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ed840(void);

__declspec(naked) void __fastcall FUN_004ecf90(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, [ECX + 0x10]
    l_test:
        TEST ESI, ESI
        JZ   l_done
        MOV  ECX, [ESI]
        TEST ECX, ECX
        MOV  ESI, [ESI + 0x4]
        JZ   l_done
        CALL FUN_004ed840
        JMP  l_test
    l_done:
        POP  ESI
        RET
    }
}
