// func_00545700 - looks up a string in a hash table, returns matching object or NULL

#include "mw4/common.h"

extern void* __cdecl FUN_004CDFA0(void);
extern void* __cdecl FUN_004CEEB0(void);
extern int __cdecl FUN_00415230(void);

__declspec(naked) void* __stdcall func_00545700(const char* name)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f268c;
__asm {
mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        push    esi
        mov esi, dword ptr [DAT_007dab40]
        xor     ecx, ecx
        xor     eax, esi
        mov     esi, dword ptr [esp + 8]
        mov     cl, byte ptr [esi]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004CDFA0
        test    eax, eax
        je      L1
        push    esi
        mov     ecx, eax
        call    FUN_004CEEB0
        mov     esi, eax
        test    esi, esi
        je      L1
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jne     L1
        mov     eax, esi
        pop     esi
        ret
    L1:
        xor     eax, eax
        pop     esi
        ret
    }


}
