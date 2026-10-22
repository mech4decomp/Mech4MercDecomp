/*
 * FUN_005330c0 (968 B) — __fastcall initialization function.
 *
 * Initializes mission state, processes strings, handles FPU operations.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* extern function declarations */
extern void __fastcall FUN_0041ee70(int a);
extern void __fastcall FUN_0041f030(void *a, int b);
extern void __fastcall FUN_0041de80(int a, int b);
extern void __fastcall FUN_0041ef90(int a);
extern void __fastcall FUN_0041e110(int a, int b);
extern void __fastcall FUN_0041dec0(void);
extern void __fastcall FUN_0041e690(int a, int b, int c);
extern void __fastcall FUN_00544310(int a, void *b);
extern void __fastcall FUN_00540100(int a);
extern void __fastcall FUN_0053ab70(int a, void *b);
extern void __fastcall FUN_004ce190(int a, int b, void *c, int d);
extern void __fastcall FUN_0041e710(void);
extern void __fastcall FUN_0041ef60(void);

__declspec(naked) void FUN_005330c0(void)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_007dd268;
extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_007db090;
extern int DAT_0076c5b0;
extern int DAT_007db094;
extern int DAT_007dab40;
extern int DAT_007dab44;
__asm {
sub     esp, 0x80
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    0x0
        lea     ecx, [esp + 0x3c]
        call    FUN_0041ee70
        /* __emit: mov eax,[0x007dd268] */
        mov eax, dword ptr [DAT_007dd268]
        push    0x1
        add     eax, 0x40994
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_0041f030
        /* __emit: mov eax,[0x007dd268] */
        mov eax, dword ptr [DAT_007dd268]
        test    eax, eax
        mov     ebx, 0x76ba64
        mov     ebp, ebx
        jz      skip_ptr
        mov     eax, [eax + 0x40ee8]
        test    eax, eax
        jz      skip_ptr
        mov     edx, [eax + 0x54]
        mov     ecx, [esi + 0x9c]
        mov     eax, [eax + 0x58]
        mov     ebp, [ecx + edx*4]
        mov     ebx, [ecx + eax*4]
    skip_ptr:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        /* __emit: repne scasb (MSVC6 inline asm cannot encode repne scasb) */
        __asm _emit 0xF2 __asm _emit 0xAE
        not     ecx
        dec     ecx
        mov     dword ptr [esp + 0x14], ecx
        push    0x1
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x40]
        call    FUN_0041f030
        mov     eax, [esp + 0x14]
        test    eax, eax
        jle     skip_push1
        push    eax
        push    ebx
        lea     ecx, [esp + 0x40]
        call    FUN_0041f030
    skip_push1:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        /* __emit: repne scasb (MSVC6 inline asm cannot encode repne scasb) */
        __asm _emit 0xF2 __asm _emit 0xAE
        not     ecx
        dec     ecx
        mov     ebx, 0x1
        push    ebx
        lea     edx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ecx
        push    edx
        lea     ecx, [esp + 0x40]
        call    FUN_0041f030
        mov     eax, [esp + 0x10]
        test    eax, eax
        jle     skip_push2
        push    eax
        push    ebp
        lea     ecx, [esp + 0x40]
        call    FUN_0041f030
    skip_push2:
        /* __emit: mov eax,[0x007dd268] */
        mov eax, dword ptr [DAT_007dd268]
        mov     cx, word ptr [eax + 0x4097c]
        /* __emit: cmp cx,word ptr [0x007db0ac] */
        cmp cx, word ptr [DAT_007db0ac]
        mov     ax, word ptr [eax + 0x4097e]
        jnz     else_branch
        /* __emit: cmp ax,word ptr [0x007db0ae] */
        cmp ax, word ptr [DAT_007db0ae]
        jnz     else_branch
        push    ebx
        push    0x77a8c8
        lea     ecx, [esp + 0x40]
        call    FUN_0041f030
        /* __emit: mov eax,[0x007dd268] */
        mov eax, dword ptr [DAT_007dd268]
        mov     ecx, [eax + 0x40978]
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x68]
        call    FUN_0041de80
        mov     edx, [esp + 0x7c]
        push    edx
        lea     ecx, [esp + 0x3c]
        call    FUN_0041ef90
        mov     eax, [esp + 0x7c]
        mov     ecx, [esp + 0x4c]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x68]
        call    FUN_0041e110
        mov     eax, [esp + 0x4c]
        mov     edx, [esp + 0x7c]
        mov     ecx, [esp + 0x50]
        add     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esp + 0x4c], eax
        jbe     skip_max1
        mov     dword ptr [esp + 0x50], eax
    skip_max1:
        lea     ecx, [esp + 0x60]
        call    FUN_0041dec0
        jmp     after_if
    else_branch:
        push    ebx
        push    0x77a8c4
        lea     ecx, [esp + 0x40]
        call    FUN_0041f030
        /* __emit: mov edx,[0x007dd268] */
        mov edx, dword ptr [DAT_007dd268]
        mov     eax, [esp + 0x38]
        push    0x4
        add     edx, 0x4097c
        push    edx
        lea     ecx, [esp + 0x40]
        call    dword ptr [eax + 0x24]
    after_if:
        mov     edx, [esp + 0x38]
        push    0x0
        lea     ecx, [esp + 0x3c]
        call    dword ptr [edx + 0xc]
        mov     ecx, [esp + 0x14]
        mov     eax, [esp + 0x10]
        mov     edx, [esp + 0x4c]
        add     eax, ecx
        mov     ecx, [esp + 0x50]
        lea     eax, [edx + eax + 3]
        cmp     eax, ecx
        mov     edi, 0xffffffec
        mov     dword ptr [esp + 0x40], edi
        mov     dword ptr [esp + 0x4c], eax
        jbe     skip_max2
        mov     dword ptr [esp + 0x50], eax
    skip_max2:
        mov     ecx, [esp + 0x48]
        mov     ebp, [esp + 0x54]
        sub     ecx, eax
        push    0x0
        add     ecx, ebp
        push    ecx
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_0041e690
        mov     edx, [esp + 0x38]
        push    0x0
        lea     ecx, [esp + 0x3c]
        call    dword ptr [edx + 0xc]
        mov     eax, [esp + 0x18]
        push    0x0
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x44], edi
        call    dword ptr [eax + 0xc]
        /* __emit: mov eax,[0x007db090] */
        mov eax, dword ptr [DAT_007db090]
        xor     edx, edx
        mov     dword ptr [esp + 0x20], edi
        mov     dl, byte ptr [eax + 0x28]
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        push    edx
        call    FUN_00544310
        mov     al, byte ptr [esi + 0x16]
        test    al, al
        /* __emit: mov edi,[0x007db090] */
        mov edi, dword ptr [DAT_007db090]
        jnz     skip_fpu
        xor     eax, eax
        mov     al, byte ptr [edi + 0x28]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     eax, [esi + ecx*8 + 0x3548]
        cmp     eax, 8
        lea     edx, [esi + ecx*8]
        jz      skip_fpu
        mov     cl, byte ptr [edx + 0x3539]
        test    cl, cl
        jz      skip_fpu
        mov     ecx, [esi + 0x54]
        lea     eax, [eax + eax*4]
        shl     eax, 4
        fld     dword ptr [ecx + eax + 0xfc]
        add     ecx, eax
        /* __emit: fcomp dword ptr [0x0076c5b0] */
        fcomp dword ptr [DAT_0076c5b0]
        /* __emit: fnstsw ax */
        fnstsw ax
        test    ah, 0x41
        jnz     skip_fsub1
        fld     dword ptr [ecx + 0xfc]
        fsub    dword ptr [edx + 0x5568]
        fstp    dword ptr [ecx + 0xfc]
    skip_fsub1:
        fld     dword ptr [ecx + 0x108]
        /* __emit: fcomp dword ptr [0x0076c5b0] */
        fcomp dword ptr [DAT_0076c5b0]
        /* __emit: fnstsw ax */
        fnstsw ax
        test    ah, 0x41
        jnz     skip_fpu
        fild    dword ptr [edx + 0x556c]
        fsubr   dword ptr [ecx + 0x108]
        fstp    dword ptr [ecx + 0x108]
    skip_fpu:
        xor     ecx, ecx
        mov     cl, byte ptr [edi + 0x28]
        push    ecx
        mov     ecx, esi
        call    FUN_00540100
        /* __emit: mov edx,[0x007db090] */
        mov edx, dword ptr [DAT_007db090]
        xor     eax, eax
        mov     al, byte ptr [edx + 0x28]
        mov     dword ptr [esi + 0x3534], 0x3
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     eax, [esi + ecx*8]
        mov     ecx, [eax + 0x3578]
        test    ecx, ecx
        jz      skip_callback
        mov     edx, [ecx]
        push    ebx
        call    dword ptr [edx]
        /* __emit: mov ecx,[0x007db090] */
        mov ecx, dword ptr [DAT_007db090]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        lea     eax, [esi + edx*8]
        mov     dword ptr [eax + 0x3578], 0x0
    skip_callback:
        mov     cl, byte ptr [eax + 0x357c]
        test    cl, cl
        jz      check_online
        mov     dword ptr [esi + 0x3534], ebx
        mov     dword ptr [esi + 0x205524], ebx
        mov     dword ptr [esi + 0x204d2c], ebx
        jmp     cleanup
    check_online:
        mov     al, byte ptr [esi + 0x16]
        test    al, al
        jz      do_stats
        /* __emit: mov edx,[0x007db094] */
        mov edx, dword ptr [DAT_007db094]
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        lea     eax, [esp + 0x38]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_0053ab70
        jmp     cleanup
    do_stats:
        /* __emit: mov ecx,[0x007db094] */
        mov ecx, dword ptr [DAT_007db094]
        /* __emit: mov esi,[0x007dab40] */
        mov esi, dword ptr [DAT_007dab40]
        mov     ebp, [esp + 0x48]
        mov     eax, [esp + 0x50]
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
        add     ecx, 0x3c3c
        sub     eax, ebp
        mov     ebp, [ecx + edx*4 + 0x8]
        shl     eax, 3
        add     ebp, eax
        mov     dword ptr [ecx + edx*4 + 0x8], ebp
        mov     edi, [ecx + 0xc00]
        add     edi, eax
        push    ebx
        lea     eax, [esp + 0x3c]
        push    eax
        mov     dword ptr [ecx + 0xc00], edi
        mov     ecx, [esi]
        push    0x11
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004ce190
    cleanup:
        lea     ecx, [esp + 0x18]
        call    FUN_0041e710
        lea     ecx, [esp + 0x38]
        call    FUN_0041ef60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x80
        ret
    }


}
