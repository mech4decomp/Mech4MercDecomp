/*
 * FUN_005d6660 (18 B) — __stdcall, RET 8 (two stack params).
 *
 * If param_1 != 0, free it via FUN_004084E0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084E0(void *ptr);

__declspec(naked) void __stdcall FUN_005d6660(void *param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      done
        push    eax
        call    FUN_004084E0
        pop     ecx
done:
        ret     8
    }
}
