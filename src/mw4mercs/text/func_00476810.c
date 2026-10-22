/* FUN_00476810 - MLR vtable-set + tail call (11 B, __fastcall/__thiscall) */

extern int g_76f3c0;   /* vtable pointer stored into [ecx] */

extern void __cdecl FUN_0047ab90(void);

__declspec(naked) void func_00476810(void)
{
    __asm {
        mov dword ptr [ecx], offset g_76f3c0
        jmp FUN_0047ab90
    }
}
