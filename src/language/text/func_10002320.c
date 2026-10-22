/*
 * FUN_10002320 (7 B) — tail-jump stub: loads param_1 into EDI and jumps
 * into the shared tail of FUN_10002330 at 0x10002391.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10002320(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 8]
        __emit 0xEB   /* __emit: rel8 jmp to 0x10002391 (inside FUN_10002330); MSVC cannot resolve a cross-function rel8 target */
        __emit 0x6A
    }
}
