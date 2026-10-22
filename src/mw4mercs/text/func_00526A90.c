/*
 * FUN_00526A90 (295 B) — Iterator/processor for a list of items (variant 3).
 *
 * Iterates through a collection, copies string data, stores integer values.
 * CFLAGS: /O1
 */

#include <windows.h>

/* Function declarations */
extern char __stdcall FUN_00597360(void);
extern int __stdcall FUN_00416bc0(int param);
extern int __stdcall FUN_00416cc0(void);
extern void __stdcall FUN_006f4230(void *ptr);
extern void *__stdcall FUN_006f3c80(int size, int flags);
extern void __stdcall FUN_00416c60(void);

/* Absolute data symbols (dword) referenced by the function */
extern int DAT_007dab40;
extern int DAT_007dab44;

__declspec(naked) void FUN_00526A90(void)
{
    
__asm {
sub     esp, 0x1c
        mov     eax, dword ptr [esp + 0x20]     ; param_1
        mov     ecx, dword ptr [DAT_007dab40]   ; mov ecx, [0x007dab40]
        push    ebx
        mov     ebx, dword ptr [eax + 0x4]
        push    ebp
        mov     ebp, dword ptr [eax + 0xc]
        push    esi
        mov     esi, dword ptr [eax + 0x8]
        mov     eax, dword ptr [DAT_007dab44]   ; mov eax, [0x007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x44]
        push    edi
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x34]
        xor     edi, edi
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x30], edi
        call    FUN_00597360
        test    al, al
        jz      early_exit

        mov     edx, dword ptr [DAT_007dab44]   ; mov edx, [0x007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [DAT_007dab40]   ; xor eax, [0x007dab40]
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x24]
        add     edx, 0x34
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], 0x77a3cc
        call    FUN_00416cc0
        mov     ebp, eax
        test    ebp, ebp
        jz      cleanup

        sub     esi, ebx
        mov     dword ptr [esp + 0x10], esi
check_item3:
        mov     eax, dword ptr [ebp + 0x24]
        test    eax, eax
        jle     next_iter3

        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      alloc_buf
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0x0

alloc_buf:
        push    0x0
        push    0x80
        call    FUN_006f3c80
        mov     edi, dword ptr [ebp + 0x20]
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebx], edx
        mov     edi, edx
        mov     edx, dword ptr [esp + 0x10]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb

        mov     ecx, dword ptr [ebp + 0x24]
        mov     dword ptr [edx + ebx], ecx
        inc     dword ptr [esp + 0x30]
        add     ebx, 0x4

next_iter3:
        lea     ecx, [esp + 0x18]
        call    FUN_00416cc0
        mov     ebp, eax
        test    ebp, ebp
        jnz     check_item3

        mov     edi, dword ptr [esp + 0x30]

cleanup:
        lea     ecx, [esp + 0x18]
        call    FUN_00416c60
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [eax], edi
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x1c
        ret     0x8

early_exit:
        mov     dword ptr [ebp], edi
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x1c
        ret     0x8
    }


}
