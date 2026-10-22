/*
 * func_005a2fe0 - Destroy Gyro object
 * Calls destructor then free on global 0x7F203C, then zeros it
 */
__declspec(naked) void func_005a2fe0()
{
    

extern int DAT_007f203c;
extern void __cdecl FUN_1004d5d18(void);
extern void __cdecl FUN_1004084d2(void);
__asm {
push    esi
        mov esi, dword ptr [DAT_007f203c]
        test    esi, esi
        jz      zero_global
        mov     ecx, esi
        call FUN_1004d5d18
        push    esi
        call FUN_1004084d2
        add     esp, 0x4
    zero_global:
        mov dword ptr [DAT_007f203c], 0x0
        pop     esi
        ret
    }


}
