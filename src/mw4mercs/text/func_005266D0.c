/*
 * FUN_005266D0 (624 B) — Iterator/processor for a list of items.
 *
 * Iterates through a collection, copies string data, computes derived values.
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* Function declarations */
extern int __stdcall FUN_00416bc0(int param);
extern int __stdcall FUN_00416cc0(void);
extern void __stdcall FUN_006f4230(void *ptr);
extern void *__stdcall FUN_006f3c80(int size, int flags);
extern int __stdcall FUN_005dee50(void);
extern int __stdcall FUN_005dee60(void);
extern int __stdcall FUN_005dee70(void);
extern int __stdcall FUN_005dee80(void);
extern void __stdcall FUN_004084e0(void *ptr);
extern void __stdcall FUN_00416c60(void);

/* Data symbols */
extern int DAT_007dab44;   /* 0x007DAB44 */
extern int DAT_007dab40;   /* 0x007DAB40 */

/* MOV dword ptr [ESP+0], ECX — __emit: MSVC6 encodes as 89 0C 24 (3B) not 89 4C 24 00 (4B) */
#define EMIT_MOV_ESP0_ECX \
    __asm _emit 0x89 \
    __asm _emit 0x4C \
    __asm _emit 0x24 \
    __asm _emit 0x00

__declspec(naked) void FUN_005266D0(void)
{
    __asm {
        sub     esp, 0x40
        mov     eax, dword ptr [esp + 0x44]     ; param_1
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x4], edx
        mov     edx, dword ptr [eax + 0x1c]
        EMIT_MOV_ESP0_ECX                       ; mov [esp+0], ecx
        mov     ecx, dword ptr [eax + 0x18]
        push    ebx
        mov     ebx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [eax + 0x24]
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, dword ptr [eax + 0x20]
        push    ebp
        push    esi
        mov     esi, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x34], edx
        mov     edx, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [eax + 0x28]
        push    edi
        mov     edi, dword ptr [eax + 0xc]
        mov     eax, dword ptr [DAT_007dab44]   ; mov eax, [0x007dab44]
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [DAT_007dab40]   ; mov edx, [0x007dab40]
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        add     edx, 0x40
        push    edx
        lea     ecx, [esp + 0x40]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x3c]
        mov     dword ptr [esp + 0x3c], 0x77a38c
        mov     dword ptr [esp + 0x54], 0x0
        call    FUN_00416cc0
        mov     ebp, eax
        test    ebp, ebp
        jz      loop_end

    loop_start:
        mov     eax, esi
        sub     eax, ebx
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, edi
        sub     eax, ebx
        mov     dword ptr [esp + 0x30], eax
        mov     eax, dword ptr [esp + 0x10]
        sub     eax, ebx
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [esp + 0x14]
        sub     eax, ebx
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esp + 0x18]
        sub     eax, ebx
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, ebx
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0x20]
        sub     eax, ebx
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [esp + 0x24]
        sub     eax, ebx
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [esp + 0x28]
        sub     eax, ebx
        mov     dword ptr [esp + 0x34], eax

    check_item:
        mov     al, byte ptr [ebp + 0x14]
        test    al, al
        jnz     next_iter
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jz      next_iter
        mov     esi, dword ptr [ebp + 0x18]
        test    esi, esi
        jz      next_iter

        ; Process item
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
        mov     edi, dword ptr [esi + 0x10]
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
        mov     edx, dword ptr [esp + 0x2c]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb

        mov     esi, dword ptr [ebp + 0x18]
        mov     ecx, dword ptr [esi + 0x20]
        mov     eax, dword ptr [esi + 0x58]
        mov     dword ptr [edx + ebx], ecx
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [ecx + ebx], eax
        mov     ecx, esi
        call    FUN_005dee50
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [edx + ebx], eax
        mov     eax, dword ptr [esi + 0x5c]
        mov     dword ptr [ecx + ebx], eax
        mov     ecx, esi
        call    FUN_005dee60
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, esi
        mov     dword ptr [edx + ebx], eax
        call    FUN_005dee70
        mov     ecx, dword ptr [esp + 0x1c]
        lea     eax, [eax + eax * 4]
        shl     eax, 1
        mov     dword ptr [ecx + ebx], eax
        mov     ecx, esi
        call    FUN_005dee80
        mov     esi, dword ptr [esp + 0x24]
        cdq
        sub     eax, edx
        mov     edx, dword ptr [esp + 0x20]
        sar     eax, 1
        mov     dword ptr [edx + ebx], eax

        ; Free old string at [esi + ebx]
        mov     eax, dword ptr [esi + ebx]
        test    eax, eax
        jz      alloc_buf2
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + ebx], 0x0

    alloc_buf2:
        push    0x0
        push    0x80
        call    FUN_006f3c80
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esi + ebx], eax

        ; String copy with refcount
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [eax + 0x10]
        test    edx, edx
        jz      strlen2
        inc     byte ptr [edx - 0x1]

    strlen2:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x28]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        test    edx, edx
        rep     movsb
        jz      done_refcount2
        mov     cl, byte ptr [edx - 0x1]
        lea     eax, [edx - 0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     done_refcount2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

    done_refcount2:
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ecx + 0x20]
        mov     ecx, dword ptr [esp + 0x54]
        mov     eax, dword ptr [esp + 0x34]
        inc     ecx
        mov     dword ptr [eax + ebx], edx
        mov     dword ptr [esp + 0x54], ecx
        add     ebx, 0x4

    next_iter:
        lea     ecx, [esp + 0x3c]
        call    FUN_00416cc0
        mov     ebp, eax
        test    ebp, ebp
        jnz     check_item

    loop_end:
        mov     ecx, dword ptr [esp + 0x54]
        mov     edx, dword ptr [esp + 0x38]
        mov     dword ptr [edx], ecx
        lea     ecx, [esp + 0x3c]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x40
        ret     0x8
    }
}
