/*
 * FUN_0040d5b0 (53 B) — calls FUN_0041d780 with two float args
 *   (g_0076d078 + g_0076d074) and (-g_0076d074 - g_0076d078),
 *   returns AL=1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d078;
extern float g_0076d074;

extern void __cdecl FUN_0041d780(void);

__declspec(naked) void FUN_0040d5b0(void)
{
    __asm {
        fld     dword ptr [g_0076d078]
        push    ecx
        fadd    dword ptr [g_0076d074]
        fstp    dword ptr [esp]
        call    FUN_0041d780
        fstp    st(0)
        fld     dword ptr [g_0076d074]
        fchs
        fsub    dword ptr [g_0076d078]
        fstp    dword ptr [esp]
        call    FUN_0041d780
        fstp    st(0)
        add     esp, 0x4
        mov     al, 0x1
        ret
    }
}
