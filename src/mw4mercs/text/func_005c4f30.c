/*
 * func_005c4f30 - FUN_005c4f30
 * Allocates/initializes a small structure from a global pool.
 */
__declspec(naked) void func_005c4f30()
{
    

extern int DAT_007f24cc;
extern void __cdecl FUN_10041610f(void);
__asm {
        mov ecx, dword ptr [DAT_007f24cc]
        call FUN_10041610f
        test    eax, eax
        jz      L5a
        mov     ecx, [esp + 4]
        mov     edx, [esp + 8]
        mov     [eax + 8], ecx
        mov     dword ptr [eax + 4], 0x6
        mov     byte ptr [eax], 0x0
        mov     [eax + 0xc], edx
        ret     8
    L5a:
        mov     ecx, [esp + 4]
        mov     edx, [esp + 8]
        xor     eax, eax
        mov     [eax + 8], ecx
        mov     [eax + 0xc], edx
        ret     8
    }


}
