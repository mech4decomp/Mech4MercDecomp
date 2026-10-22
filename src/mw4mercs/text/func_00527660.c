/*
 * FUN_00527660 (442 B) — Game data string lookup by index.
 *
 * Looks up a string from game data structures based on a mode/index value.
 * Uses a jump table for dispatch.
 * CFLAGS: /O1
 */

#include <windows.h>

/* Function declarations */
extern void __stdcall FUN_006f4230(void *ptr);
extern void *__stdcall FUN_006f3c80(int size, int flags);
extern int __stdcall FUN_0050c5d0(int param);
extern int __stdcall FUN_0050c990(void);
extern int __stdcall FUN_0050c850(int param);

/* Absolute data symbols (dword) referenced by the function */
extern int DAT_007dab40;
extern int DAT_007dab44;
extern int DAT_007dd230;
extern int DAT_007dd304;
extern int DAT_007dd308;

__declspec(naked) void FUN_00527660(void)
{
    
__asm {
mov     eax, dword ptr [esp + 0x4]     ; param_1
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [DAT_007dd304]   ; mov edx, [0x007dd304]
        push    ebx
        push    esi
        mov     esi, dword ptr [eax + 0xc]     ; piVar2
        mov     dword ptr [ecx], edx            ; *param_1->field_4 = DAT_007dd304
        mov     edx, dword ptr [eax + 0x8]
        mov     ecx, dword ptr [DAT_007dd308]   ; mov ecx, [0x007dd308]
        mov     eax, dword ptr [esi]            ; iVar3 = *piVar2
        test    eax, eax
        push    edi
        mov     dword ptr [edx], ecx            ; *param_1->field_8 = DAT_007dd308
        mov     edi, ecx                        ; uVar4 = DAT_007dd308
        jz      alloc_buf
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0x0

alloc_buf:
        push    0x0
        push    0x81
        call    FUN_006f3c80
        cmp     edi, 0x3
        mov     ebx, eax
        mov     dword ptr [esi], ebx
        ja      done_switch

        ; Jump table dispatch
        ; __emit: MSVC6 can't encode JMP dword ptr [reg*4 + imm32] (SIB with absolute base)
        __asm _emit 0xFF __asm _emit 0x24 __asm _emit 0xBD
        __asm _emit 0x1C __asm _emit 0x78 __asm _emit 0x52 __asm _emit 0x00

case_0:
        mov     eax, dword ptr [DAT_007dd304]   ; mov eax, [0x007dd304]
        lea     ecx, [eax + eax * 8]
        lea     edx, [eax + ecx * 2]
        mov     eax, dword ptr [DAT_007dd230]   ; mov eax, [0x007dd230]
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [ecx + edx * 8 + 0x7c]
        test    edx, edx
        mov     eax, 0x77a438                   ; "none"
        jz      do_strcpy
        mov     eax, dword ptr [DAT_007dab44]   ; mov eax, [0x007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]   ; xor ecx, [0x007dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x34]          ; call dword ptr [eax + 0x34]
        jmp     do_strcpy

case_1:
        mov     eax, dword ptr [DAT_007dd304]   ; mov eax, [0x007dd304]
        lea     ecx, [eax + eax * 8]
        lea     edx, [eax + ecx * 2]
        mov     eax, dword ptr [DAT_007dd230]   ; mov eax, [0x007dd230]
        mov     ecx, dword ptr [eax + 0x10]
        lea     ecx, [ecx + edx * 8]
        call    FUN_0050c5d0
        jmp     do_strcpy

case_2:
        mov     eax, dword ptr [DAT_007dd304]   ; mov eax, [0x007dd304]
        lea     ecx, [eax + eax * 8]
        lea     edx, [eax + ecx * 2]
        mov     eax, dword ptr [DAT_007dd230]   ; mov eax, [0x007dd230]
        mov     ecx, dword ptr [eax + 0x10]
        mov     al, byte ptr [ecx + edx * 8 + 0x74]
        test    al, al
        lea     ecx, [ecx + edx * 8]
        jz      case_2_null

        mov     eax, dword ptr [ecx + 0x8c]
        cmp     eax, 0x200
        jnz     case_2_check_201

        mov     edx, dword ptr [DAT_007dab44]   ; mov edx, [0x007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [DAT_007dab40]   ; xor eax, [0x007dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x2b7
        call    dword ptr [edx + 0x34]          ; call dword ptr [edx + 0x34]
        jmp     do_strcpy_2

case_2_check_201:
        cmp     eax, 0x201
        jnz     case_2_other

        mov     ecx, dword ptr [DAT_007dab44]   ; mov ecx, [0x007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [DAT_007dab40]   ; xor edx, [0x007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0x2b6
        call    dword ptr [eax + 0x34]          ; call dword ptr [eax + 0x34]
        jmp     do_strcpy

case_2_other:
        call    FUN_0050c990

do_strcpy_2:
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        ret     0x8

case_2_null:
        pop     edi
        mov     dword ptr [esi], 0x0
        pop     esi
        mov     eax, 0x1
        pop     ebx
        ret     0x8

case_3:
        mov     eax, dword ptr [DAT_007dd304]   ; mov eax, [0x007dd304]
        lea     ecx, [eax + eax * 8]
        lea     edx, [eax + ecx * 2]
        mov     eax, dword ptr [DAT_007dd230]   ; mov eax, [0x007dd230]
        mov     ecx, dword ptr [eax + 0x10]
        lea     ecx, [ecx + edx * 8]
        call    FUN_0050c850

do_strcpy:
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, ebx
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb

done_switch:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        ret     0x8
    }


}
