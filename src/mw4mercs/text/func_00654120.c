/*
 * FUN_00654120 (40 B) — __thiscall, RET 0x8 (2 float params).
 *
 * Calls FUN_00653b60(param1 + 0x0077016c, param2 + 0x0077016c, this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_77016c;   /* 0x0077016c */
extern void __stdcall FUN_00653b60(void);

__declspec(naked) void __stdcall FUN_00654120(void)
{
    __asm {
        fld     dword ptr [esp + 0x8]
        push    ecx
        fadd    dword ptr [g_77016c]
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [g_77016c]
        fstp    dword ptr [esp]
        call    FUN_00653b60
        add     esp, 0xc
        ret     0x8
    }
}
