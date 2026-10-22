/* Auto-generated: FUN_0059fb90 (0x0059FB90) - 128 bytes, __thiscall, ret 0xc */

#include "mw4/common.h"

/* External function declarations */
void * __cdecl FUN_00416b60(void *);
void __cdecl FUN_00412780(void *);
void * __cdecl FUN_004084d0(int);
void * __cdecl FUN_0059f090(int, int);
void __cdecl FUN_00416a90(void *, void *);

__declspec(naked) void __fastcall func_0059fb90(int param1, int param2, int param3)
{
    
__asm {
mov     eax, [esp+0x04]
        mov     edx, [eax+0x78]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        lea     ecx, [eax+0x78]
        call    dword ptr [edx+0x04]
        lea     ebx, [eax+0x30]
        lea     ebp, [edi+0x34]
        push    ebx
        mov     ecx, ebp
        call    FUN_00416b60
        mov     esi, eax
        test    esi, esi
        je      label_alloc
        mov     edx, [esi+0x1c]
        mov     eax, [esp+0x18]
        inc     edx
        push    eax
        lea     ecx, [esi+0x20]
        mov     [esi+0x1c], edx
        call    FUN_00412780
        jmp     label_done
label_alloc:
        push    0x28
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        je      label_null
        mov     ecx, [esp+0x18]
        mov     edx, [esp+0x14]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_0059f090
        mov     esi, eax
        jmp     label_insert
label_null:
        xor     esi, esi
label_insert:
        push    ebx
        push    esi
        mov     ecx, ebp
        call    FUN_00416a90
label_done:
        mov     al, [esp+0x1c]
        test    al, al
        je      label_skip_inc
        inc     dword ptr [esi+0x24]
label_skip_inc:
        inc     dword ptr [edi+0x50]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x000c
    }


}
