/*
 * FUN_00547c50 (16 B) — If param != 0, calls FUN_0040F4E0(param); returns.
 * Bytes: 8B 44 24 04 85 C0 74 07 50 E8 82 08 EC FF 59 C3
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00547c50(void)
{
    

extern void __cdecl FUN_1004084dc(void);
__asm {
mov     eax, dword ptr [esp + 4]
        test    eax, eax
        je      skip
        push    eax
        call FUN_1004084dc
        pop     ecx
    skip:
        ret
    }


}
