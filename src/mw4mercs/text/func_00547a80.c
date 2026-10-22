// func_00547A80 - thiscall: destructor-like function with reference counting
// If flag & 1, decrements refcount and potentially frees

#include "mw4/common.h"

extern void __cdecl FUN_004169C0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415E30(void);
extern void __cdecl FUN_004084E0(void);

__declspec(naked) void* __stdcall func_00547A80(int flag)
{
    

extern int DAT_007ddd6c;
extern int DAT_007ddd68;
__asm {
push    esi
        mov     esi, ecx
        call    FUN_004169C0
        test    byte ptr [esp + 8], 1
        je      L1
        mov ecx, dword ptr [DAT_007ddd6c]
        push    esi
        call    FUN_00416130
        dec dword ptr [DAT_007ddd68]
        jne     L1
        push    edi
        mov edi, dword ptr [DAT_007ddd6c]
        test    edi, edi
        je      L2
        mov     ecx, edi
        call    FUN_00415E30
        push    edi
        call    FUN_004084E0
        add     esp, 4
    L2:
        pop     edi
        mov     eax, esi
        mov dword ptr [DAT_007ddd6c], 0x0
        pop     esi
        ret     4
    L1:
        mov     eax, esi
        pop     esi
        ret     4
    }


}
