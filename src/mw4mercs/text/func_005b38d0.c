/*
 * FUN_005b38d0 (18 B) — If param_1 != 0, call FUN_004084e0(param_1).
 *
 * __stdcall, RET 8 (two stack params; only first used).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_005b38d0(void *param_1, void *param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      done
        push    eax
        call    FUN_004084e0
        pop     ecx
done:
        ret     8
    }
}
