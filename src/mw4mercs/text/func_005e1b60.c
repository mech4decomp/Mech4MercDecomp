/*
 * FUN_005e1b60 (38 B) — __thiscall dispatcher on a small enum param.
 *
 * param==1 -> FUN_005e1a80(this); param==2 -> FUN_005e1b30();
 * param==3 -> FUN_005e1ae0(); else return.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005e1ae0(void);
extern void __cdecl FUN_005e1b30(void);
extern void __cdecl FUN_005e1a80(void *this);

__declspec(naked) void __stdcall FUN_005e1b60(void *this, int param)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        dec     eax
        jz      l_case1
        dec     eax
        jz      l_case2
        dec     eax
        jnz     l_ret
        call    FUN_005e1ae0
        ret     4
    l_case2:
        call    FUN_005e1b30
        ret     4
    l_case1:
        push    ecx
        call    FUN_005e1a80
    l_ret:
        ret     4
    }
}
