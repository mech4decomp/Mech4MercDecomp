/*
 * func_005c5300 - FUN_005c5300
 * Allocates/initializes a structure from a global pool.
 */
__declspec(naked) void func_005c5300()
{
    

extern int DAT_007f24cc;
extern void __cdecl FUN_10041610f(void);
__asm {
        mov ecx, dword ptr [DAT_007f24cc]
        call FUN_10041610f
        test    eax, eax
        jz      L32d
        mov     ecx, [esp + 4]
        mov     dl, [esp + 8]
        mov     [eax + 4], ecx
        mov     ecx, [esp + 0xc]
        mov     [eax], dl
        mov     edx, [esp + 0x10]
        mov     [eax + 8], ecx
        mov     [eax + 0xc], edx
        ret     0x10
    L32d:
        mov     ecx, [esp + 0xc]
        mov     edx, [esp + 0x10]
        xor     eax, eax
        mov     [eax + 8], ecx
        mov     [eax + 0xc], edx
        ret     0x10
    }


}
