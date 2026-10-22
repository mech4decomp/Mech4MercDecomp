/*
 * FUN_00532ec0 (344 B) — __fastcall function.
 *
 * Processes mission data, computes string lengths and updates counters.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

/* extern function declarations */
extern void __fastcall FUN_0041ee70(int a);
extern void __fastcall FUN_0041f030(void *a, int b);
extern void __fastcall FUN_0041ef60(void);
extern void __fastcall FUN_004ce190(int a, int b, void *c, int d);

__declspec(naked) void FUN_00532ec0(void)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_007db094;
extern int DAT_0076b404;
extern int DAT_007dd268;
extern int DAT_007dab40;
extern int DAT_007dab44;
__asm {
/* __emit: mov eax,[0x007db094] */
        mov eax, dword ptr [DAT_007db094]
        sub     esp, 0x2c
        test    eax, eax
        push    esi
        mov     esi, ecx
        jz      done
        cmp     dword ptr [esi + 0x3534], 2
        jnz     done
        mov     al, byte ptr [esi + 0x3078]
        test    al, al
        jz      done
        push    edi
        push    0x0
        lea     ecx, [esp + 0x10]
        call    FUN_0041ee70
        mov     esi, [esi + 0x239dec]
        test    esi, esi
        mov     dword ptr [esp + 0x8], 0x0
        jz      no_wstr
        push    esi
        /* __emit: call dword ptr [0x0076b404] - indirect call through import (wcslen) */
        call dword ptr [DAT_0076b404]
        add     esp, 0x4
        inc     eax
        mov     dword ptr [esp + 0x8], eax
        push    0x4
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0041f030
        mov     ecx, [esp + 0x8]
        lea     edx, [ecx + ecx]
        push    edx
        push    esi
        lea     ecx, [esp + 0x14]
        call    FUN_0041f030
        /* __emit: mov eax,[0x007dd268] */
        mov eax, dword ptr [DAT_007dd268]
        mov     ecx, [eax + 0x40ee8]
        mov     edi, [ecx + 0x80]
        or      ecx, 0xffffffff
        xor     eax, eax
        /* __emit: repne scasb - MSVC6 inline asm may not encode repne scasb correctly */
        __asm _emit 0xF2 __asm _emit 0xAE
        not     ecx
        push    0x4
        lea     edx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], ecx
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_0041f030
        mov     eax, [esp + 0x8]
        test    eax, eax
        jz      do_final_push
        push    eax
        /* __emit: mov eax,[0x007dd268] */
        mov eax, dword ptr [DAT_007dd268]
        mov     ecx, [eax + 0x40ee8]
        mov     edx, [ecx + 0x80]
        push    edx
        jmp     do_call
    no_wstr:
        push    0x4
        lea     eax, [esp + 0xc]
        push    eax
    do_call:
        lea     ecx, [esp + 0x14]
        call    FUN_0041f030
    do_final_push:
        mov     ecx, [esp + 0x1c]
        mov     eax, [esp + 0x24]
        /* __emit: mov esi,[0x007dab40] */
        mov esi, dword ptr [DAT_007dab40]
        sub     eax, ecx
        /* __emit: mov ecx,[0x007db094] */
        mov ecx, dword ptr [DAT_007db094]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0x28]
        /* __emit: mov ecx,[0x007dab44] */
        mov ecx, dword ptr [DAT_007dab44]
        mov     ecx, [ecx]
        xor     ecx, esi
        lea     esi, [ecx + 0x14]
        mov     ecx, [esi]
        xor     ecx, 0x85739531
        mov     ecx, [ecx + 0x1814]
        mov     edi, [ecx + edx*4 + 0x3c44]
        add     ecx, 0x3c3c
        shl     eax, 3
        add     edi, eax
        mov     dword ptr [ecx + edx*4 + 0x8], edi
        mov     edi, [ecx + 0xc00]
        add     edi, eax
        push    0x1
        lea     eax, [esp + 0x10]
        push    eax
        mov     dword ptr [ecx + 0xc00], edi
        mov     ecx, [esi]
        push    0x15
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004ce190
        lea     ecx, [esp + 0xc]
        call    FUN_0041ef60
        pop     edi
    done:
        pop     esi
        add     esp, 0x2c
        ret
    }


}
