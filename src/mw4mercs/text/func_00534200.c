/*
 * FUN_00534200 (1058 B) — __thiscall function with EBP frame.
 *
 * Creates player creation message with mech resource data.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

/* extern function declarations */
extern int __fastcall FUN_005444a0(int a);
extern void *__cdecl FUN_004084c0(int a, int b);
extern void __fastcall FUN_0041e690(void *a, int b, int c);
extern int __fastcall FUN_0041e950(void *a, int b);
extern void __fastcall FUN_0041e710(void);
extern int __fastcall FUN_004d2cb0(void);
extern void __fastcall FUN_0041e720(void *a, int b);
extern int __cdecl FUN_0070e390(void *a);
extern int __cdecl FUN_0070e3c0(void *a, void *b, int c);
extern int __cdecl FUN_0070e460(void *a, void *b);
extern int __fastcall FUN_004d2e00(void *a, void *b, int c, int d, int e, int f, int g);
extern void __fastcall FUN_004d1f80(void *a, int b);
extern void __fastcall FUN_004d21c0(void);
extern void __fastcall FUN_004d1f10(void);
extern void __fastcall FUN_004d2230(const char *a, int b);
extern void __fastcall FUN_004d2000(const char *a, int b);
extern void *__cdecl FUN_004084d0(int size);
extern void __fastcall FUN_00534630(int a, int b, int c, int d);
extern void __fastcall FUN_004ea0f0(void *a);
extern void __fastcall FUN_00428850(void *a);
extern int __cdecl FUN_006fab90(const char *msg);

__declspec(naked) void FUN_00534200(void)
{
    

extern int DAT_007dd234;
extern int DAT_007db0b8;
extern int DAT_0076b420;
extern int DAT_007ddd1f;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x318
        push    ebx
        push    esi
        push    edi
        mov     edi, [ebp + 8]
        mov     ebx, ecx
        push    edi
        mov     dword ptr [ebp - 0x1c], ebx
        call    FUN_005444a0
        mov     esi, eax
        mov     eax, [esi]
        push    0x1
        lea     ecx, [ebp - 1]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     al, byte ptr [ebp - 1]
        cmp     al, 2
        mov     word ptr [ebp - 8], 0xffff
        mov     word ptr [ebp - 6], 0x0
        jnz     check_1
        mov edx, dword ptr [DAT_007dd234]
        mov     edi, [esi + 0x1c]
        push    edx
        dec     edi
        push    edi
        call    FUN_004084c0
        add     esp, 0x8
        push    0x0
        push    edi
        push    eax
        lea     ecx, [ebp - 0x3c]
        call    FUN_0041e690
        mov     eax, [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 4]
        push    eax
        lea     ecx, [ebp - 0x3c]
        call    FUN_0041e950
        mov     edx, [ebp - 0x3c]
        push    0x0
        lea     ecx, [ebp - 0x3c]
        call    dword ptr [edx + 0xc]
        mov     esi, [ebp - 0x28]
        lea     ecx, [ebp - 0x3c]
        mov     dword ptr [ebp - 0x34], 0xffffffec
        call    FUN_0041e710
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    check_1:
        cmp     al, 1
        jnz     check_0
        mov     eax, edi
        shl     eax, 7
        add     eax, edi
        shl     eax, 3
        sub     eax, edi
        lea     ebx, [ebx + eax*8]
        mov     eax, [ebx + 0x3578]
        test    eax, eax
        mov     dword ptr [ebp - 0x10], ebx
        jnz     existing
        mov ecx, dword ptr [DAT_007db0b8]
        call    FUN_004d2cb0
        mov     edx, [esi]
        push    0x0
        mov     ecx, esi
        mov     ebx, eax
        mov     eax, [esi + 0x1c]
        dec     eax
        push    eax
        call    dword ptr [edx + 4]
        push    eax
        lea     ecx, [ebp - 0x138]
        call    FUN_0041e690
        movsx   eax, bx
        push    eax
        lea     ecx, [ebp - 0x318]
        push    0x77b368
        push    ecx
        call dword ptr [DAT_0076b420]
        mov ecx, dword ptr [DAT_007db0b8]
        add     esp, 0xc
        push    0x0
        push    0x0
        push    0x3f
        push    ebx
        push    0x0
        lea     edx, [ebp - 0x318]
        push    edx
        lea     eax, [ebp - 0x138]
        push    eax
        call    FUN_004d2e00
        mov     esi, [ebp - 0x10]
        push    0x1
        lea     ecx, [ebp - 0x14]
        push    ecx
        lea     ecx, [ebp - 0x80]
        mov     dword ptr [esi + 0x3578], eax
        mov     word ptr [ebp - 0x14], bx
        mov     word ptr [ebp - 0x12], 0x1
        call    FUN_004d1f80
        push    0x1
        lea     edx, [ebp - 0xc]
        push    edx
        lea     ecx, [ebp - 0xd4]
        mov     byte ptr [esi + 0x357c], 0x0
        mov     word ptr [ebp - 0xc], bx
        mov     word ptr [ebp - 0xa], 0x3
        call    FUN_004d1f80
        mov     eax, [ebp - 0x98]
        test    eax, eax
        jz      set_fail
        mov     eax, [ebp - 0xb8]
        test    eax, eax
        ja      do_hash
    set_fail:
        mov     byte ptr [esi + 0x357c], 0x1
        jmp     after_hash2
    do_hash:
        push    0x10
        lea     eax, [ebp - 0x90]
        push    eax
        lea     ecx, [ebp - 0xd4]
        call    FUN_0041e720
        mov     edx, [ebp - 0x80]
        push    0x0
        lea     ecx, [ebp - 0x80]
        call    dword ptr [edx + 0xc]
        lea     eax, [ebp - 0x218]
        push    eax
        mov     dword ptr [ebp - 0x78], 0xffffffec
        call    FUN_0070e390
        push    0x4
        lea     ecx, [ebp - 0x18]
        push    ecx
        lea     edx, [ebp - 0x218]
        push    edx
        mov     dword ptr [ebp - 0x18], 0xa1252388
        call    FUN_0070e3c0
        mov     eax, [ebp - 0x6c]
        mov     ecx, [ebp - 0x70]
        mov     esi, [ebp - 0x64]
        sub     ecx, eax
        add     ecx, esi
        push    ecx
        push    eax
        lea     edx, [ebp - 0x218]
        push    edx
        call    FUN_0070e3c0
        lea     eax, [ebp - 0x218]
        push    eax
        lea     ecx, [ebp - 0x2c]
        push    ecx
        call    FUN_0070e460
        mov     ecx, 4
        lea     edi, [ebp - 0x90]
        lea     esi, [ebp - 0x2c]
        xor     edx, edx
        repe    cmpsd
        jz      after_hash_skip
        mov     eax, [ebp - 0x10]
        mov     byte ptr [eax + 0x357c], 0x1
    after_hash_skip:
        mov     edi, [ebp + 8]
    after_hash2:
        mov     ecx, [ebp - 0x6c]
        mov     word ptr [ecx + 0x11c], bx
        lea     ecx, [ebp - 0xd4]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x80]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x138]
        call    FUN_0041e710
        mov     word ptr [ebp - 8], bx
        mov     ebx, [ebp - 0x1c]
        mov     word ptr [ebp - 6], 0x1
        jmp     after_switch
    existing:
        mov     bx, word ptr [eax + 0x1a]
        push    0x1
        lea     edx, [ebp + 8]
        push    edx
        lea     ecx, [ebp - 0xd4]
        mov     word ptr [ebp + 8], bx
        mov     word ptr [ebp + 0xa], 0x1
        call    FUN_004d1f80
        mov     eax, [ebp - 0xc0]
        lea     ecx, [ebp - 0xd4]
        mov     word ptr [eax + 0x11c], bx
        call    FUN_004d21c0
        mov     word ptr [ebp - 8], bx
        mov     ebx, [ebp - 0x1c]
        mov     word ptr [ebp - 6], 0x1
        jmp     after_switch
    check_0:
        test    al, al
        jnz     bad_msg
        mov     edx, [esi]
        push    0x4
        lea     eax, [ebp - 8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        jmp     after_switch
    bad_msg:
        push    0x77b458
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      after_switch
        int     3
    after_switch:
        push    0x1
        lea     ecx, [ebp - 8]
        push    ecx
        lea     ecx, [ebp - 0x1c0]
        call    FUN_004d1f80
        lea     ecx, [ebp - 0x118]
        call    FUN_004d1f10
        mov al, byte ptr [DAT_007ddd1f]
        test    al, al
        push    0x0
        jz      use_simple
        push    0x77b420
        jmp     after_interface
    use_simple:
        push    0x77b3ec
    after_interface:
        lea     ecx, [ebp - 0x118]
        call    FUN_004d2230
        push    0x0
        push    0x77b3c8
        lea     ecx, [ebp - 0x17c]
        call    FUN_004d2000
        push    0x7c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      alloc_fail
        push    0x0
        push    0x2
        push    0x7c
        push    0x2
        mov     ecx, esi
        call    FUN_00534630
        push    0x7dc694
        lea     ecx, [esi + 0x18]
        mov     dword ptr [esi + 0x10], 0x426
        mov     dword ptr [esi + 0x14], 0x0
        call    FUN_004ea0f0
        push    0x7b9460
        lea     ecx, [esi + 0x1c]
        call    FUN_00428850
        mov     dword ptr [esi + 0x4c], 0x2
        mov     dword ptr [esi + 0x50], 0x0
        mov     dx, word ptr [ebp - 0x13c]
        mov     word ptr [esi + 0x54], dx
        mov     ax, word ptr [ebp - 0x13a]
        mov     word ptr [esi + 0x56], ax
        mov     dword ptr [esi + 0x58], 0x1
        or      eax, 0xffffffff
        mov     dword ptr [esi + 0x5c], eax
        mov     dword ptr [esi + 0x60], eax
        mov     cx, word ptr [ebp - 0x180]
        mov     word ptr [esi + 0x64], cx
        mov     dx, word ptr [ebp - 0x17e]
        mov     word ptr [esi + 0x66], dx
        mov     ax, word ptr [ebp - 0xd8]
        mov     edx, edi
        shl     edx, 7
        add     edx, edi
        shl     edx, 3
        sub     edx, edi
        mov     word ptr [esi + 0x68], ax
        mov     cx, word ptr [ebp - 0xd6]
        lea     eax, [ebx + edx*8]
        mov     dl, byte ptr [eax + 0x355c]
        mov     word ptr [esi + 0x6a], cx
        mov     ecx, [eax + 0x3548]
        mov     dword ptr [esi + 0x6c], ecx
        mov     ecx, [eax + 0x3550]
        mov     byte ptr [esi + 0x70], dl
        mov     edx, [eax + 0x354c]
        mov     dword ptr [esi + 0x74], ecx
        mov     dword ptr [esi + 0x78], edx
        jmp     alloc_done
    alloc_fail:
        xor     esi, esi
    alloc_done:
        add     edi, 0x2ffffff
        lea     ecx, [ebp - 0x17c]
        mov     dword ptr [esi + 0x5c], edi
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x118]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x1c0]
        call    FUN_004d21c0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }


}
