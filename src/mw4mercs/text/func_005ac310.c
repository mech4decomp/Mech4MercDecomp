/*
 * FUN_005ac310 (36 B) - __thiscall (ECX = this), RET 4.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_005ac310(void *this_, char param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x785964
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        jz      L_skip
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
