/* Auto-generated: FUN_005948a0 (0x005948A0) - 128 bytes, __thiscall */

#include "mw4/common.h"

/* External function declarations */
void __cdecl FUN_004084e0(void *);
void __cdecl FUN_00594a20(void);

__declspec(naked) void __fastcall func_005948a0(int param1)
{
    

extern int DAT_0076b2ac;
extern int DAT_007dd268;
__asm {
push    ecx
        push    ebx
        push    ebp
        mov     ebp, [ecx+0x1c]
        push    esi
        push    edi
        mov     [esp+0x10], ecx
label_loop:
        test    ebp, ebp
        je      label_exit
        mov     edi, [ebp]
        test    edi, edi
        mov     ebp, [ebp+0x04]
        je      label_exit
        mov     esi, [edi+0x24]
        test    esi, esi
        je      label_skip_inc
        inc     byte ptr [esi-0x01]
label_skip_inc:
        mov     eax, [esp+0x18]
        push    eax
        push    esi
        call dword ptr [DAT_0076b2ac]
        add     esp, 0x08
        mov     ebx, eax
        neg     ebx
        sbb     bl, bl
        inc     bl
        test    esi, esi
        je      label_skip_free
        mov     cl, [esi-0x01]
        lea     eax, [esi-0x01]
        dec     cl
        mov     [eax], cl
        jne     label_skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
label_skip_free:
        test    bl, bl
        je      label_loop
        mov eax, dword ptr [DAT_007dd268]
        test    eax, eax
        je      label_loop
        mov     al, [edi+0x10]
        test    al, al
        jne     label_loop
        mov     ecx, [esp+0x10]
        push    edi
        call    FUN_00594a20
        mov     byte ptr [edi+0x10], 0x01
        jmp     label_loop
label_exit:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x0004
    }




}
