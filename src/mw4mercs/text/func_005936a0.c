/* Auto-generated: FUN_005936a0 (0x005936A0) - 125 bytes, __thiscall */

#include "mw4/common.h"

/* External function declarations */
void __cdecl FUN_00412570(void *);
int __cdecl FUN_00417a40(void);
void * __cdecl FUN_00417a10(int);
void __cdecl FUN_00412740(void *);
void __cdecl FUN_004084e0(void *);

__declspec(naked) void * __fastcall func_005936a0(int param1)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     esi, ecx
        push    0x00782c18
        lea     ecx, [esp+0x0c]
        call    FUN_00412570
        lea     edi, [esi+0x38]
        mov     esi, [esi+0x40]
        mov     ecx, edi
        call    FUN_00417a40
        cmp     esi, eax
        jae     label_use_size
        mov     eax, esi
        jmp     label_check
label_use_size:
        mov     ecx, edi
        call    FUN_00417a40
        dec     eax
label_check:
        test    eax, eax
        jl      label_done
        push    eax
        mov     ecx, edi
        call    FUN_00417a10
        add     eax, 0x3c
        push    eax
        lea     ecx, [esp+0x0c]
        call    FUN_00412740
label_done:
        mov     eax, [esp+0x08]
        test    eax, eax
        mov     esi, [esp+0x10]
        mov     [esi], eax
        je      label_skip_free
        inc     byte ptr [eax-0x01]
        mov     eax, [esp+0x08]
        test    eax, eax
        je      label_skip_free
        mov     cl, [eax-0x01]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     label_skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
label_skip_free:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x0004
    }
}
