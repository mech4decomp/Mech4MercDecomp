/* func_0047fef0 - MLR PMesh: set vtable + tail-jump to base dtor (__fastcall) */

extern void __cdecl FUN_00480b50(void);
extern char g_76f628[];

__declspec(naked) void func_0047fef0(void)
{
    __asm {
        mov     dword ptr [ecx], offset g_76f628
        jmp     FUN_00480b50
    }
}
