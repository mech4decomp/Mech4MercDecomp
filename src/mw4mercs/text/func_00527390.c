/*
 * FUN_00527390 (713 B) — Game data string table loader.
 *
 * Loads string data from game structures into allocated buffers.
 * CFLAGS: /O1
 */

#include <windows.h>

/* Function declarations */
extern int __stdcall FUN_0050ac80(int param);
extern void __stdcall FUN_006f4230(void *ptr);
extern void *__stdcall FUN_006f3c80(int size, int flags);
extern int __stdcall FUN_0050c5d0(int param);
extern int __stdcall FUN_0050c990(void);
extern int __stdcall FUN_0050c850(int param);

/* Absolute data symbols (dword) referenced by the function */
extern int DAT_007dab40;
extern int DAT_007dab44;
extern int DAT_007dd230;

__declspec(naked) void FUN_00527390(void)
{
    __asm {
        sub     esp, 0x14
        mov     ecx, dword ptr [DAT_007dd230]    ; mov ecx, [0x007dd230]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x28]     ; param_1
        mov     eax, dword ptr [edi + 0x14]     ; iVar8
        mov     esi, dword ptr [edi + 0x8]      ; iVar12
        mov     ebx, dword ptr [edi + 0xc]      ; piVar11
        mov     ebp, dword ptr [edi + 0x10]     ; iVar7
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [ecx + 0xc]      ; local_10
        test    eax, eax
        jnz     have_local10
        push    eax
        call    FUN_0050ac80
        mov     ecx, dword ptr [DAT_007dd230]    ; mov ecx, [0x007dd230]
        mov     eax, dword ptr [ecx + 0xc]

have_local10:
        mov     edx, dword ptr [edi + 0x18]
        mov     ecx, dword ptr [DAT_007dab44]    ; mov ecx, [0x007dab44]
        mov     edi, dword ptr [DAT_007dab40]    ; mov edi, [0x007dab40]
        mov     dword ptr [edx], eax            ; *param_1->field_18 = local_10
        mov     edx, dword ptr [ecx]
        xor     edx, edi
        mov     edi, dword ptr [edx + 0xc]
        xor     edi, 0x85739531
        test    eax, eax
        mov     dword ptr [esp + 0x18], edi     ; save uVar2
        jle     done

        mov     ecx, ebp
        sub     ecx, ebx
        mov     dword ptr [esp + 0x10], ecx     ; iVar7 - piVar11
        mov     ecx, dword ptr [esp + 0x14]     ; iVar8
        sub     esi, ebx                        ; iVar12 - piVar11
        sub     ecx, ebx                        ; iVar8 - piVar11
        mov     dword ptr [esp + 0x28], 0x0     ; param_1 = 0
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x20], ecx
        mov     dword ptr [esp + 0x14], eax     ; local_10 (counter)
        jmp     loop_check

loop_restore:
        mov     edi, dword ptr [esp + 0x18]     ; restore uVar2
        mov     esi, dword ptr [esp + 0x1c]     ; restore iVar12

loop_check:
        mov     eax, dword ptr [esi + ebx]      ; *(iVar12 + piVar11)
        test    eax, eax
        jz      skip_free1
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + ebx], 0x0

skip_free1:
        push    0x0
        push    0x81
        call    FUN_006f3c80
        mov     edx, dword ptr [esp + 0x28]     ; param_1
        mov     ebp, eax
        mov     eax, dword ptr [DAT_007dd230]    ; mov eax, [0x007dd230]
        mov     ecx, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [ecx + edx * 1 + 0x7c]
        test    ecx, ecx
        mov     dword ptr [esi + ebx], ebp
        mov     eax, 0x76b768                   ; default empty string
        jz      have_string1
        mov     eax, dword ptr [edi]            ; vtable
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x34]          ; call dword ptr [eax + 0x34]

have_string1:
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb

        ; Second buffer
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      skip_free2
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0x0

skip_free2:
        push    0x0
        push    0x81
        call    FUN_006f3c80
        mov     esi, dword ptr [esp + 0x28]     ; param_1
        mov     ebp, eax
        mov     eax, dword ptr [DAT_007dd230]    ; mov eax, [0x007dd230]
        mov     ecx, dword ptr [eax + 0x10]
        add     ecx, esi
        mov     dword ptr [ebx], ebp
        call    FUN_0050c5d0
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb

        ; Third buffer
        mov     esi, dword ptr [esp + 0x10]     ; iVar7 - piVar11
        mov     eax, dword ptr [esi + ebx]
        test    eax, eax
        jz      skip_free3
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + ebx], 0x0

skip_free3:
        push    0x0
        push    0x81
        call    FUN_006f3c80
        mov     edx, dword ptr [esp + 0x28]     ; param_1
        mov     esi, dword ptr [esp + 0x10]
        mov     ebp, eax
        mov     eax, dword ptr [DAT_007dd230]    ; mov eax, [0x007dd230]
        mov     ecx, dword ptr [eax + 0x10]
        mov     al, byte ptr [ecx + edx * 1 + 0x74]
        add     ecx, edx
        test    al, al
        mov     dword ptr [esi + ebx], ebp
        jz      check_free_ebp

        mov     eax, dword ptr [ecx + 0x8c]
        cmp     eax, 0x200
        jnz     check_201

        ; case 0x200
        mov     eax, dword ptr [DAT_007dab44]    ; mov eax, [0x007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]    ; xor ecx, [0x007dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x2b7
        call    dword ptr [edx + 0x34]          ; call dword ptr [edx + 0x34]
        ; fall through to do_strcpy_third

do_strcpy_third:
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, ebp
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        jmp     after_third                     ; short jump (EB) to after_third

check_201:
        cmp     eax, 0x201
        jnz     call_other

        ; case 0x201
        mov     ecx, dword ptr [DAT_007dab44]    ; mov ecx, [0x007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [DAT_007dab40]    ; xor edx, [0x007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0x2b6
        call    dword ptr [eax + 0x34]          ; call dword ptr [eax + 0x34]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, ebp
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        jmp     after_third                     ; short jump (EB) to after_third

call_other:
        call    FUN_0050c990
        jmp     do_strcpy_third                 ; short jump (EB) to do_strcpy_third

check_free_ebp:
        test    ebp, ebp
        jz      after_third
        push    ebp
        call    FUN_006f4230
        mov     dword ptr [esi + ebx], 0x0

after_third:
        ; Fourth buffer
        mov     esi, dword ptr [esp + 0x20]     ; iVar8 - piVar11
        mov     eax, dword ptr [esi + ebx]
        test    eax, eax
        jz      skip_free4
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + ebx], 0x0

skip_free4:
        push    0x0
        push    0x81
        call    FUN_006f3c80
        mov     ecx, dword ptr [DAT_007dd230]    ; mov ecx, [0x007dd230]
        mov     ecx, dword ptr [ecx + 0x10]
        mov     edi, dword ptr [esp + 0x28]     ; param_1
        mov     ebp, eax
        add     ecx, edi
        mov     dword ptr [esi + ebx], ebp
        call    FUN_0050c850
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        mov     eax, dword ptr [esp + 0x14]     ; counter
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb

        mov     ecx, dword ptr [esp + 0x28]     ; param_1
        add     ecx, 0x98
        add     ebx, 0x4
        dec     eax
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x14], eax
        jnz     loop_restore

done:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x14
        ret     0x8
    }
}
