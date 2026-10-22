/*
 * FUN_00533490 (687 B) — __fastcall function.
 *
 * Processes mission state, handles strings, vtable calls, and stats.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* extern function declarations */
extern void __fastcall FUN_0041ee70(int a);
extern void __fastcall FUN_0041f030(void *a, int b);
extern void __fastcall FUN_00416b60(void *a);
extern void __fastcall FUN_0041e690(int a, int b, int c);
extern void __fastcall FUN_0053ab70(int a, void *b);
extern void __fastcall FUN_004ce190(int a, int b, void *c, int d);
extern void __fastcall FUN_0041e710(void);
extern void __fastcall FUN_0041ef60(void);

__declspec(naked) void FUN_00533490(void)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_007dd268;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db090;
extern int DAT_007db094;
__asm {
sub     esp, 0x58
        push    ebp
        push    edi
        mov     ebp, ecx
        push    0x0
        lea     ecx, [esp + 0x3c]
        mov     dword ptr [ebp + 0x3534], 0x3
        call    FUN_0041ee70
        /* __emit: mov eax,[0x007dd268] */
        mov eax, dword ptr [DAT_007dd268]
        push    0x1
        add     eax, 0x40994
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_0041f030
        /* __emit: mov ecx,[0x007dd268] */
        mov ecx, dword ptr [DAT_007dd268]
        mov     edi, [ecx + 0x4098c]
        or      ecx, 0xffffffff
        xor     eax, eax
        /* __emit: repne scasb (MSVC6 inline asm cannot encode repne scasb) */
        __asm _emit 0xF2 __asm _emit 0xAE
        not     ecx
        dec     ecx
        push    0x1
        lea     edx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], ecx
        push    edx
        lea     ecx, [esp + 0x40]
        call    FUN_0041f030
        mov     eax, [esp + 0x8]
        test    eax, eax
        jle     skip_push1
        push    eax
        /* __emit: mov eax,[0x007dd268] */
        mov eax, dword ptr [DAT_007dd268]
        mov     ecx, [eax + 0x4098c]
        push    ecx
        lea     ecx, [esp + 0x40]
        call    FUN_0041f030
    skip_push1:
        /* __emit: mov edx,[0x007dd268] */
        mov edx, dword ptr [DAT_007dd268]
        mov     edi, [edx + 0x40990]
        or      ecx, 0xffffffff
        xor     eax, eax
        /* __emit: repne scasb (MSVC6 inline asm cannot encode repne scasb) */
        __asm _emit 0xF2 __asm _emit 0xAE
        not     ecx
        dec     ecx
        push    0x1
        lea     eax, [esp + 0x10]
        mov     dword ptr [esp + 0x10], ecx
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_0041f030
        mov     eax, [esp + 0xc]
        test    eax, eax
        jle     skip_push2
        /* __emit: mov ecx,[0x007dd268] */
        mov ecx, dword ptr [DAT_007dd268]
        mov     edx, [ecx + 0x40990]
        push    eax
        push    edx
        lea     ecx, [esp + 0x40]
        call    FUN_0041f030
    skip_push2:
        push    esi
        push    0x1
        push    0x77a8c4
        lea     ecx, [esp + 0x44]
        call    FUN_0041f030
        /* __emit: mov eax,[0x007dab44] */
        mov eax, dword ptr [DAT_007dab44]
        /* __emit: mov ecx,[0x007dab40] */
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, [eax]
        xor     eax, ecx
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, [eax + 0x44]
        xor     ecx, 0x85739531
        add     ecx, 0x40
        mov     dword ptr [esp + 0x1c], 0x0
        call    FUN_00416b60
        mov     eax, [eax + 0x10]
        mov     dx, word ptr [eax + 0x18]
        add     eax, 0x18
        mov     ax, word ptr [eax + 0x2]
        push    0x4
        lea     ecx, [esp + 0x18]
        mov     word ptr [esp + 0x18], dx
        mov     edx, [esp + 0x40]
        push    ecx
        lea     ecx, [esp + 0x44]
        mov     word ptr [esp + 0x1e], ax
        call    dword ptr [edx + 0x24]
        mov     eax, [esp + 0x3c]
        push    0x0
        lea     ecx, [esp + 0x40]
        call    dword ptr [eax + 0xc]
        mov     ecx, [esp + 0xc]
        mov     edx, [esp + 0x10]
        mov     eax, [esp + 0x50]
        add     edx, ecx
        mov     ecx, [esp + 0x54]
        lea     eax, [eax + edx + 3]
        cmp     eax, ecx
        mov     esi, 0xffffffec
        mov     dword ptr [esp + 0x44], esi
        mov     dword ptr [esp + 0x50], eax
        jbe     skip_max
        mov     dword ptr [esp + 0x54], eax
    skip_max:
        mov     ecx, [esp + 0x4c]
        mov     edx, [esp + 0x58]
        sub     ecx, eax
        push    0x0
        add     ecx, edx
        push    ecx
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_0041e690
        /* __emit: mov edx,[0x007db090] */
        mov edx, dword ptr [DAT_007db090]
        mov     al, byte ptr [edx + 0x28]
        mov     edx, [ebp]
        mov     byte ptr [esp + 0x18], al
        mov     ecx, [esp + 0x18]
        lea     eax, [esp + 0x1c]
        and     ecx, 0xff
        push    eax
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx + 0x6c]
        test    al, al
        jz      skip_callback
        mov     edx, [esp + 0x3c]
        push    0x0
        lea     ecx, [esp + 0x40]
        call    dword ptr [edx + 0xc]
        mov     al, byte ptr [ebp + 0x16]
        test    al, al
        mov     dword ptr [esp + 0x44], esi
        jz      do_stats
        /* __emit: mov edx,[0x007db094] */
        mov edx, dword ptr [DAT_007db094]
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        lea     eax, [esp + 0x3c]
        push    eax
        push    ecx
        mov     ecx, ebp
        call    FUN_0053ab70
        jmp     skip_callback
    do_stats:
        mov     ecx, [esp + 0x4c]
        mov     eax, [esp + 0x54]
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
        lea     eax, [esp + 0x40]
        push    eax
        mov     dword ptr [ecx + 0xc00], edi
        mov     ecx, [esi]
        push    0x11
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004ce190
    skip_callback:
        /* __emit: mov ecx,[0x007db090] */
        mov ecx, dword ptr [DAT_007db090]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        pop     esi
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     ecx, [ebp + edx*8 + 0x3578]
        test    ecx, ecx
        jz      cleanup
        mov     eax, [ecx]
        push    0x1
        call    dword ptr [eax]
        /* __emit: mov ecx,[0x007db090] */
        mov ecx, dword ptr [DAT_007db090]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     dword ptr [ebp + edx*8 + 0x3578], 0x0
    cleanup:
        lea     ecx, [esp + 0x18]
        call    FUN_0041e710
        lea     ecx, [esp + 0x38]
        call    FUN_0041ef60
        pop     edi
        pop     ebp
        add     esp, 0x58
        ret
    }


}
