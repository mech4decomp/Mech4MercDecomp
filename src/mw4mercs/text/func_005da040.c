/*
 * FUN_005da040 (16 B) — If param != 0, call FUN_004084e0(param).
 *
 * __cdecl, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_005da040(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      done
        push    eax
        call    FUN_004084e0
        pop     ecx
done:
        ret
    }
}
