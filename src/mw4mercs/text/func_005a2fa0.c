/*
 * func_005a2fa0 - Allocate and construct Gyro object
 * Calls alloc(0x20), then constructs at 0x783f70 with params
 * Stores result in global 0x7F203C
 */
__declspec(naked) void func_005a2fa0()
{
    

extern void __cdecl FUN_1004084d3(void);
extern int DAT_007dc140;
extern void __cdecl FUN_1004d5bf0(void);
extern int DAT_007f203c;
__asm {
push    0x20
        call FUN_1004084d3
        add     esp, 0x4
        test    eax, eax
        jz      null_ret
        mov ecx, dword ptr [DAT_007dc140]
        push    0x0
        push    0x0
        push    ecx
        push    0x783f70
        push    0x449
        mov     ecx, eax
        call FUN_1004d5bf0
        mov dword ptr [DAT_007f203c], eax
        ret
    null_ret:
        mov dword ptr [DAT_007f203c], 0x0
        ret
    }


}
