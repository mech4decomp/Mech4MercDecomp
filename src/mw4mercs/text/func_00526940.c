/*
 * FUN_00526940 (336 B) — Iterator/processor for a list of items (variant 2).
 *
 * Iterates through a collection, copies string data, sets flags.
 * CFLAGS: /O1
 */

#include <windows.h>

/* Function declarations */
extern char __stdcall FUN_00597360(void);
extern int __stdcall FUN_00416bc0(int param);
extern int __stdcall FUN_00416cc0(void);
extern void __stdcall FUN_006f4230(void *ptr);
extern void *__stdcall FUN_006f3c80(int size, int flags);
extern void __stdcall FUN_004084e0(void *ptr);
extern void __stdcall FUN_00416c60(void);

/* Absolute data symbols (dword) referenced by the function */
extern int DAT_007dab40;
extern int DAT_007dab44;

__declspec(naked) void FUN_00526940(void)
{
    __asm {
        sub     esp, 0x1c
        mov     eax, dword ptr [esp + 0x20]     ; param_1
        mov     ecx, dword ptr [DAT_007dab40]   ; mov ecx, [0x007dab40]
        push    ebx
        mov     ebx, dword ptr [eax + 0x4]
        push    ebp
        push    esi
        mov     esi, dword ptr [eax + 0xc]
        push    edi
        mov     edi, dword ptr [eax + 0x8]
        mov     eax, dword ptr [DAT_007dab44]   ; mov eax, [0x007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x34]
        xor     ebp, ebp
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x30], ebp
        call    FUN_00597360
        test    al, al
        jz      early_exit

        mov     edx, dword ptr [DAT_007dab44]   ; mov edx, [0x007dab44]
        mov     ecx, dword ptr [DAT_007dab40]   ; mov ecx, [0x007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        add     ecx, 0x54
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], 0x779f0c
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jz      cleanup

        sub     edi, ebx
        mov     dword ptr [esp + 0x10], edi
check_item2:
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      next_iter2

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
        mov     edx, dword ptr [esi + 0x10]
        test    edx, edx
        mov     ebp, eax
        mov     dword ptr [ebx], ebp
        __asm _emit 0x74 __asm _emit 0x03    ; jz +3 (skip inc)  __emit: MSVC6 encodes label jz as near 0F 84, not short 74
        inc     byte ptr [edx - 0x1]

strlen:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        test    edx, edx
        rep     movsb
        jz      done_refcount
        mov     cl, byte ptr [edx - 0x1]
        lea     eax, [edx - 0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     done_refcount
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

done_refcount:
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + ebx], 0x1
        inc     dword ptr [esp + 0x30]
        add     ebx, 0x4

next_iter2:
        lea     ecx, [esp + 0x18]
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jnz     check_item2

        mov     ebp, dword ptr [esp + 0x30]

cleanup:
        lea     ecx, [esp + 0x18]
        call    FUN_00416c60
        mov     edx, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        mov     dword ptr [edx], ebp
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x1c
        ret     0x8

early_exit:
        pop     edi
        mov     dword ptr [esi], ebp
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x1c
        ret     0x8
    }
}
