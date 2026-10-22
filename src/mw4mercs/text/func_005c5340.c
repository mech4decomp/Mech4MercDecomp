/*
 * func_005c5340 - FUN_005c5340
 * Allocates/initializes a structure from a global pool.
 */
__declspec(naked) void func_005c5340()
{
    

extern int DAT_007f24cc;
extern void __cdecl FUN_10041610e(void);
extern void __cdecl FUN_1005b35ec(void);
__asm {
        mov ecx, dword ptr [DAT_007f24cc]
        push    esi
        call FUN_10041610e
        test    eax, eax
        jz      L35e
        mov     dword ptr [eax + 4], 0x2
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     L360
    L35e:
        xor     esi, esi
    L360:
        mov     eax, [esp + 0x10]
        mov     ecx, [esp + 0x14]
        mov     [esi + 8], eax
        mov     [esi + 0xc], ecx
        mov     ecx, [esp + 8]
        mov     edx, [ecx]
        sub     esp, 0xc
        mov     eax, esp
        mov     [eax], edx
        mov     edx, [ecx + 4]
        mov     ecx, [ecx + 8]
        mov     [eax + 8], ecx
        mov     ecx, esi
        mov     [eax + 4], edx
        call FUN_1005b35ec
        mov     dl, [esp + 0xc]
        mov     [esi + 0x24], dl
        mov     eax, esi
        pop     esi
        ret     0x10
    }


}
