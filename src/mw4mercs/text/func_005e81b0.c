// func_005e81b0 - constructor: allocates + initializes two objects, stores global

#include "mw4/common.h"

extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005013f0(void);
extern void __cdecl FUN_005016b0(void);

__declspec(naked) void __stdcall func_005e81b0(void)
{
    

extern int DAT_007f26a0;
extern int DAT_007f268c;
extern int DAT_007f2574;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_allocfail1
        mov eax, dword ptr [DAT_007f26a0]
        mov ecx, dword ptr [DAT_007f268c]
        push    0x502c60
        push    0x5028b0
        push    0x62efa0
        push    0x62ec80
        push    0x62e8e0
        push    eax
        push    0x62df30
        push    0x5e82b0
        push    0
        push    0
        push    ecx
        push    0x7895f4
        push    0x4b0
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x6039e0
        mov dword ptr [DAT_007f2574], esi
        jmp     L_after
    L_allocfail1:
        mov dword ptr [DAT_007f2574], 0x0

    L_after:
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_allocfail2
        push    0x464
        push    0x9
        push    0x7895e8
        push    0xd
        mov     ecx, esi
        call    FUN_005013f0
        mov edx, dword ptr [DAT_007f2574]
        push    esi
        lea     ecx, [edx + 0x44]
        mov     dword ptr [esi], 0x7895d8
        call    FUN_005016b0
        pop     esi
        ret
    L_allocfail2:
        mov edx, dword ptr [DAT_007f2574]
        xor     esi, esi
        push    esi
        lea     ecx, [edx + 0x44]
        call    FUN_005016b0
        pop     esi
        ret
    }


}
