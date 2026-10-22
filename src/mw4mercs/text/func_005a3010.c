/*
 * func_005a3010 - Constructor for Gyro-related object
 * __thiscall: ECX = this, stack: param1
 */
__declspec(naked) void func_005a3010()
{
    

extern int DAT_007f203c;
extern void __cdecl FUN_1004d5b0c(void);
extern void __cdecl FUN_005a30f0(void);
__asm {
mov eax, dword ptr [DAT_007f203c]
        push    esi
        mov     esi, ecx
        push    eax
        call FUN_1004d5b0c
        mov     ecx, dword ptr [esp + 0x8]
        xor     eax, eax
        mov     dword ptr [esi + 0x10], ecx
        mov     dword ptr [esi + 0x14], eax
        mov     ecx, esi
        mov     dword ptr [esi], 0x783f84
        mov     dword ptr [esi + 0x18], eax
        call FUN_005a30f0
        mov     eax, esi
        pop     esi
        ret     0x4
    }


}
