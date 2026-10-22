/*
 * func_005efd60 - __thiscall
 * Sets a float field to a constant or to a computed value depending on a byte flag.
 */
__declspec(naked) void func_005efd60()
{
    

extern void __cdecl FUN_10041500d(void);
__asm {
push    esi
        mov     esi, ecx
        cmp     byte ptr [esi + 0x1c4], 1
        jnz     compute
        mov     dword ptr [esi + 0x1b4], 0x3f000000
        pop     esi
        ret
    compute:
        call FUN_10041500d
        fstp    dword ptr [esi + 0x1b4]
        pop     esi
        ret
    }


}
