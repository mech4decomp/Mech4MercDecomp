/*
 * FUN_00527160 (361 B) — Controls/input mapping dispatcher.
 *
 * Dispatches to different control mapping functions based on a mode value.
 * CFLAGS: /O1
 */

#include <windows.h>

/* Function declarations */
extern int __stdcall FUN_0050c370(int param1, int param2, int param3, int param4);
extern int __stdcall FUN_0050c460(int param1, int param2, int param3);
extern int __stdcall FUN_0050c2a0(int param1, int param2, int param3, int param4);
extern int __stdcall FUN_006bbd90(const char *name, int param);
extern int __stdcall FUN_006beb70(int handle, const char *name, int flag, void *param);

/* Absolute data symbols (dword) referenced by the function */
extern int DAT_007dab40;
extern int DAT_007dab44;
extern int DAT_007dd230;
extern int DAT_007dd304;
extern int DAT_007dd308;

__declspec(naked) void FUN_00527160(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]     ; param_1
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax + 0x8]
        push    ebx
        mov     ebx, dword ptr [edx]           ; iVar3 = *param_1->field_8
        push    esi
        push    edi
        mov     edi, dword ptr [ecx]           ; iVar1 = *param_1->field_4
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [ecx]           ; iVar2 = *param_1->field_c
        mov     ecx, ebx
        xor     esi, esi                       ; iVar5 = 0
        dec     ecx
        jz      case_1
        dec     ecx
        jz      case_2
        dec     ecx
        jnz     after_switch_no_result

        ; case 3
        mov     eax, dword ptr [eax + 0x10]
        mov     esi, dword ptr [eax]
        mov     eax, dword ptr [DAT_007dab44]  ; mov eax, [0x007dab44]
        mov     eax, dword ptr [eax]
        xor     ecx, ecx
        test    esi, esi
        mov     esi, dword ptr [DAT_007dab40]  ; mov esi, [0x007dab40]
        setnz   cl
        xor     eax, esi
        inc     ecx
        push    ecx                            ; (*(param_1->field_10) != 0) + 1
        mov     ecx, dword ptr [eax + 0x2c]
        push    edx                            ; iVar2
        xor     ecx, 0x85739531
        push    edi                            ; iVar1
        push    ecx
        mov     ecx, dword ptr [DAT_007dd230]  ; mov ecx, [0x007dd230]
        call    FUN_0050c370
        jmp     after_switch

case_2:
        mov     eax, dword ptr [DAT_007dab44]  ; mov eax, [0x007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [DAT_007dab40]  ; xor eax, [0x007dab40]
        mov     ecx, dword ptr [eax + 0x2c]
        push    edx                            ; iVar2
        xor     ecx, 0x85739531
        push    edi                            ; iVar1
        push    ecx
        mov     ecx, dword ptr [DAT_007dd230]  ; mov ecx, [0x007dd230]
        call    FUN_0050c460
        jmp     after_switch

case_1:
        sar     edx, 8
        cmp     edx, 0x1b
        ; __emit: MSVC6 uses short jump (74 xx) but ref uses 32-bit JZ (0F 84 xx xx xx xx)
        __asm _emit 0x0F __asm _emit 0x84 __asm _emit 0xCC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00

        mov     eax, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax]
        sar     eax, 8
        cmp     eax, 0x11
        jg      gt_0x11
        jz      val_4
        test    eax, eax
        jz      val_1
        cmp     eax, 0x10
        jnz     val_1
        mov     ecx, 0x2
        jmp     call_func

gt_0x11:
        cmp     eax, 0x12
        jz      val_0x10
        cmp     eax, 0x111
        jz      val_4

val_1:
        mov     ecx, 0x1
        jmp     call_func

val_4:
        mov     ecx, 0x4
        jmp     call_func

val_0x10:
        mov     ecx, 0x10

call_func:
        mov     eax, dword ptr [DAT_007dab44]  ; mov eax, [0x007dab44]
        mov     eax, dword ptr [eax]
        mov     esi, dword ptr [DAT_007dab40]  ; mov esi, [0x007dab40]
        push    ecx
        xor     eax, esi
        mov     ecx, dword ptr [eax + 0x2c]
        push    edx
        xor     ecx, 0x85739531
        push    edi
        push    ecx
        mov     ecx, dword ptr [DAT_007dd230]  ; mov ecx, [0x007dd230]
        call    FUN_0050c2a0

after_switch:
        mov     esi, eax                       ; iVar5
after_switch_no_result:

done:
        push    0x0
        push    0x77a42c                       ; "OM_Controls"
        mov     dword ptr [esp + 0x18], 0x2ef5
        mov     dword ptr [DAT_007dd304], edi  ; mov [0x007dd304], edi
        mov     dword ptr [DAT_007dd308], ebx  ; mov [0x007dd308], ebx
        call    FUN_006bbd90
        mov     ebx, eax
        test    ebx, ebx
        jnz     have_handle
        push    0xffffff38
        push    0x77a42c                       ; "OM_Controls"
        call    FUN_006bbd90
        mov     ebx, eax

have_handle:
        lea     edx, [esp + 0x10]
        push    edx
        push    0x1
        push    0x77a41c                       ; "@OM_Controls@"
        push    ebx
        call    FUN_006beb70
        cmp     esi, edi
        jz      done2
        lea     eax, [esp + 0x10]
        push    eax
        push    0x1
        push    0x77a41c                       ; "@OM_Controls@"
        push    ebx
        mov     dword ptr [DAT_007dd304], esi  ; mov [0x007dd304], esi
        call    FUN_006beb70

done2:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        ret     0x8
    }
}
