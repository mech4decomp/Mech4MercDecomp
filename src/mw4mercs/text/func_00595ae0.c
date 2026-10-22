/* Auto-generated: FUN_00595ae0 (0x00595AE0) - 125 bytes, __thiscall */

#include "mw4/common.h"

/* External function declarations */
void __cdecl FUN_004128e0(void *);
void __cdecl FUN_004084e0(void *);

__declspec(naked) void * __fastcall func_00595ae0(int param1)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        lea     ecx, [esp+0x14]
        call    FUN_004128e0
        mov     edi, [esi+0x10]
        mov     edx, [esp+0x14]
label_loop:
        test    edi, edi
        je      label_no_list
        mov     eax, [edi]
        test    eax, eax
        mov     edi, [edi+0x04]
        mov     ebp, eax
        je      label_done
        mov     eax, [eax+0x10]
        mov     esi, edx
label_strcmp:
        mov     bl, [eax]
        mov     cl, bl
        cmp     bl, [esi]
        jne     label_cmp_done
        test    cl, cl
        je      label_match
        mov     bl, [eax+0x01]
        mov     cl, bl
        cmp     bl, [esi+0x01]
        jne     label_cmp_done
        add     eax, 0x02
        add     esi, 0x02
        test    cl, cl
        jne     label_strcmp
label_match:
        xor     eax, eax
        jmp     label_cmp_result
label_cmp_done:
        sbb     eax, eax
        sbb     eax, -1
label_cmp_result:
        test    eax, eax
        je      label_done
        jmp     label_loop
label_no_list:
        xor     ebp, ebp
label_done:
        test    edx, edx
        je      label_skip_free
        mov     cl, [edx-0x01]
        lea     eax, [edx-0x01]
        dec     cl
        mov     [eax], cl
        jne     label_skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
label_skip_free:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0x0004
    }
}
