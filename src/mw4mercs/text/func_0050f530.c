/*
 * func_0050F530 - Constructor / initializer
 * Calls base initializer, zeroes fields 0x2c-0x48, sets field 0x1c to -1
 */
__declspec(naked) void func_0050F530()
{
    

extern void __cdecl FUN_006bbed2(void);
__asm {
push    esi
        mov     esi, ecx
        call FUN_006bbed2
        xor     eax, eax
        mov     [esi + 0x2c], eax
        mov     [esi + 0x30], eax
        mov     [esi + 0x34], eax
        mov     [esi + 0x38], eax
        mov     [esi + 0x3c], eax
        mov     [esi + 0x40], eax
        mov     [esi + 0x44], eax
        mov     [esi + 0x48], eax
        mov     dword ptr [esi + 0x1c], 0xffffffff
        pop     esi
        ret
    }


}
