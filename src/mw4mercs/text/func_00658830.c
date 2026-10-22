/*
 * FUN_00658830 (18 B) — ABL tree-node helper: if the passed pointer is
 * non-null, delete it via FUN_004084e0 (operator delete / free wrapper).
 * __stdcall RET 8 (this + one arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00658830(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        test    eax, eax
        jz      skip
        push    eax
        call    FUN_004084e0
        pop     ecx
skip:
        ret     8
    }
}
