/* func_0047fe60 - MLR PMesh scalar deleting destructor (__thiscall, RET 0x4) */

extern void __cdecl FUN_0047fef0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void func_0047fe60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0047fef0
        test    byte ptr [esp+0x8], 0x1
        jz      L78
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L78:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
