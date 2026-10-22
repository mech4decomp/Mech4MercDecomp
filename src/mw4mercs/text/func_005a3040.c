/*
 * func_005a3040 - Destructor for Gyro-related object
 * __thiscall: ECX = this, stack: flags (bit 0 = free)
 */
__declspec(naked) void func_005a3040()
{
    

extern void __cdecl FUN_005a3062(void);
extern void __cdecl FUN_1004084d5(void);
__asm {
push    esi
        mov     esi, ecx
        call FUN_005a3062
        test    byte ptr [esp + 0x8], 0x1
        jz      skip_free
        push    esi
        call FUN_1004084d5
        add     esp, 0x4
    skip_free:
        mov     eax, esi
        pop     esi
        ret     0x4
    }


}
