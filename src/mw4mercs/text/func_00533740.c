/*
 * FUN_00533740 (497 B) — __fastcall function.
 *
 * Iterates through mission entries, copies string data, and calls
 * various helper functions.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* extern function declarations */
extern void __fastcall FUN_00416bc0(int a);
extern int __fastcall FUN_00416cc0(void);
extern void __fastcall FUN_0041ee70(int a);
extern void __fastcall FUN_0041f030(void *a, int b);
extern void __fastcall FUN_005444e0(int a, void *b);
extern int __fastcall FUN_005dee60(void);
extern int __fastcall FUN_005dee50(void);
extern int __fastcall FUN_005deed0(void);
extern int __fastcall FUN_005deef0(void);
extern int __fastcall FUN_005def10(void);
extern int __fastcall FUN_005dee70(void);
extern int __fastcall FUN_005dee80(void);
extern int __fastcall FUN_005dee90(void);
extern int __fastcall FUN_005deeb0(void);
extern void __fastcall FUN_0041ef60(void);
extern void __fastcall FUN_00416c60(void);

__declspec(naked) void FUN_00533740(void)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x48
        /* __emit: mov eax,[0x007dab44] */
        mov eax, dword ptr [DAT_007dab44]
        push    ebp
        /* __emit: mov ebp,[0x007dab40] */
        mov ebp, dword ptr [DAT_007dab40]
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, [eax]
        xor     ecx, ebp
        mov     edx, [ecx + 0x44]
        xor     edx, 0x85739531
        add     edx, 0x40
        push    edx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x18], edi
        call    FUN_00416bc0
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], 0x77a38c
        call    FUN_00416cc0
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0xc], 0x0
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jz      done_outer
        push    ebx
        lea     ebp, [edi + 0x205f34]
    loop_start:
        mov     al, byte ptr [esi + 0x14]
        test    al, al
        jnz     next_iter
        mov     al, byte ptr [esi + 0x1c]
        test    al, al
        jz      next_iter
        push    0x0
        lea     ecx, [esp + 0x34]
        call    FUN_0041ee70
        mov     ebx, [esi + 0x18]
        push    0x1
        push    0x77a8c4
        lea     ecx, [esp + 0x38]
        call    FUN_0041f030
        mov     eax, [esi + 0x10]
        mov     cx, word ptr [eax + 0x18]
        mov     dx, word ptr [eax + 0x1a]
        add     eax, 0x18
        push    0x4
        lea     eax, [esp + 0x18]
        mov     word ptr [esp + 0x18], cx
        mov     word ptr [esp + 0x1a], dx
        mov     edx, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x38]
        call    dword ptr [edx + 0x24]
        mov     eax, [esp + 0x30]
        push    0x0
        lea     ecx, [esp + 0x34]
        call    dword ptr [eax + 0xc]
        mov     edx, [esp + 0x10]
        lea     ecx, [esp + 0x30]
        push    ecx
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x40], 0xffffffec
        call    FUN_005444e0
        mov     edi, [ebx + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        /* __emit: repne scasb (MSVC6 inline asm cannot encode repne scasb) */
        __asm _emit 0xF2 __asm _emit 0xAE
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [ebp - 0x200]
        mov     esi, edi
        mov     byte ptr [ebp], 0x1
        mov     edi, edx
        mov     byte ptr [ebp + 1], 0x1
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     ecx, ebx
        call    FUN_005dee60
        mov     ecx, ebx
        mov     dword ptr [ebp + 0x110], eax
        call    FUN_005dee50
        mov     ecx, ebx
        mov     dword ptr [ebp + 0x114], eax
        call    FUN_005deed0
        mov     ecx, ebx
        mov     dword ptr [ebp + 0x118], eax
        call    FUN_005deef0
        mov     ecx, ebx
        mov     dword ptr [ebp + 0x11c], eax
        call    FUN_005def10
        mov     ecx, ebx
        mov     dword ptr [ebp + 0x120], eax
        call    FUN_005dee70
        mov     ecx, ebx
        mov     dword ptr [ebp + 0x124], eax
        call    FUN_005dee80
        mov     ecx, ebx
        mov     dword ptr [ebp + 0x128], eax
        call    FUN_005dee90
        mov     ecx, ebx
        mov     dword ptr [ebp + 0x12c], eax
        call    FUN_005deeb0
        mov     cx, word ptr [ebx + 0x14]
        mov     dx, word ptr [ebx + 0x16]
        mov     dword ptr [ebp + 0x130], eax
        mov     eax, [esp + 0x10]
        mov     word ptr [ebp + 0x10c], cx
        mov     word ptr [ebp + 0x10e], dx
        cmp     eax, 3
        setge   al
        lea     ecx, [esp + 0x30]
        mov     byte ptr [ebp + 0x2098], al
        call    FUN_0041ef60
        mov     edi, [esp + 0x18]
    next_iter:
        mov     edx, [esp + 0x10]
        inc     edx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x10], edx
        add     ebp, 0x22ac
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jnz     loop_start
        pop     ebx
    done_outer:
        lea     ecx, [esp + 0x18]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x48
        ret
    }


}
