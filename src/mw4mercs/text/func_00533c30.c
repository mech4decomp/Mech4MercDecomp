/*
 * FUN_00533c30 (724 B) — __thiscall function with EBP frame.
 *
 * Handles mech resource ID lookup and creation.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

/* extern function declarations */
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
extern int __cdecl FUN_006fab90(const char *msg);

__declspec(naked) void FUN_00533c30(void)
{
    

extern int DAT_007dd234;
extern int DAT_007db0b8;
extern int DAT_0076b420;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x23c
        push    ebx
        push    esi
        mov     esi, [ebp + 0x10]
        mov     eax, [esi]
        push    edi
        mov     edi, ecx
        push    0x1
        lea     ecx, [ebp + 0x13]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     al, byte ptr [ebp + 0x13]
        xor     ebx, ebx
        cmp     al, 2
        jnz     check_1
        mov edx, dword ptr [DAT_007dd234]
        mov     edi, [esi + 0x1c]
        push    edx
        dec     edi
        push    edi
        call    FUN_004084c0
        add     esp, 0x8
        push    ebx
        push    edi
        push    eax
        lea     ecx, [ebp - 0x2c]
        call    FUN_0041e690
        mov     eax, [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 4]
        push    eax
        lea     ecx, [ebp - 0x2c]
        call    FUN_0041e950
        mov     edx, [ebp - 0x2c]
        push    ebx
        lea     ecx, [ebp - 0x2c]
        call    dword ptr [edx + 0xc]
        mov     eax, [ebp - 0x18]
        mov     ecx, [ebp + 0xc]
        mov     dword ptr [ebp - 0x24], 0xffffffec
        mov     dx, word ptr [eax + 0x64]
        mov     ax, word ptr [eax + 0x66]
        mov     word ptr [ecx], dx
        mov     word ptr [ecx + 2], ax
        lea     ecx, [ebp - 0x2c]
        call    FUN_0041e710
        pop     edi
        xor     eax, eax
        test    ebx, ebx
        pop     esi
        setnz   al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    check_1:
        cmp     al, 1
        jnz     check_0
        mov     eax, [ebp + 8]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     eax, [edi + ecx*8 + 0x3578]
        test    eax, eax
        lea     edi, [edi + ecx*8]
        mov     dword ptr [ebp - 0xc], edi
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
        lea     ecx, [ebp - 0xe4]
        call    FUN_0041e690
        movsx   eax, bx
        push    eax
        lea     ecx, [ebp - 0x23c]
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
        lea     edx, [ebp - 0x23c]
        push    edx
        lea     eax, [ebp - 0xe4]
        push    eax
        call    FUN_004d2e00
        push    0x1
        lea     ecx, [ebp + 8]
        push    ecx
        lea     ecx, [ebp - 0x70]
        mov     dword ptr [edi + 0x3578], eax
        mov     word ptr [ebp + 8], bx
        mov     word ptr [ebp + 0xa], 0x1
        call    FUN_004d1f80
        push    0x1
        lea     edx, [ebp - 4]
        push    edx
        lea     ecx, [ebp - 0xc4]
        mov     byte ptr [edi + 0x357c], 0x0
        mov     word ptr [ebp - 4], bx
        mov     word ptr [ebp - 2], 0x3
        call    FUN_004d1f80
        mov     eax, [ebp - 0x88]
        test    eax, eax
        jz      set_fail
        mov     eax, [ebp - 0xa8]
        test    eax, eax
        ja      do_hash
    set_fail:
        mov     byte ptr [edi + 0x357c], 0x1
        jmp     after_hash
    do_hash:
        push    0x10
        lea     eax, [ebp - 0x80]
        push    eax
        lea     ecx, [ebp - 0xc4]
        call    FUN_0041e720
        mov     edx, [ebp - 0x70]
        push    0x0
        lea     ecx, [ebp - 0x70]
        call    dword ptr [edx + 0xc]
        lea     eax, [ebp - 0x13c]
        push    eax
        mov     dword ptr [ebp - 0x68], 0xffffffec
        call    FUN_0070e390
        push    0x4
        lea     ecx, [ebp - 8]
        push    ecx
        lea     edx, [ebp - 0x13c]
        push    edx
        mov     dword ptr [ebp - 8], 0xa1252388
        call    FUN_0070e3c0
        mov     eax, [ebp - 0x5c]
        mov     ecx, [ebp - 0x60]
        mov     esi, [ebp - 0x54]
        sub     ecx, eax
        add     ecx, esi
        push    ecx
        push    eax
        lea     edx, [ebp - 0x13c]
        push    edx
        call    FUN_0070e3c0
        lea     eax, [ebp - 0x13c]
        push    eax
        lea     ecx, [ebp - 0x1c]
        push    ecx
        call    FUN_0070e460
        mov     ecx, 4
        lea     edi, [ebp - 0x80]
        lea     esi, [ebp - 0x1c]
        xor     edx, edx
        repe    cmpsd
        jz      after_hash
        mov     eax, [ebp - 0xc]
        mov     byte ptr [eax + 0x357c], 0x1
    after_hash:
        mov     ecx, [ebp - 0x5c]
        mov     word ptr [ecx + 0x11c], bx
        lea     ecx, [ebp - 0xc4]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x70]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0xe4]
        call    FUN_0041e710
        jmp     done_1
    existing:
        mov     bx, word ptr [eax + 0x1a]
        push    0x1
        lea     edx, [ebp + 8]
        push    edx
        lea     ecx, [ebp - 0xc4]
        mov     word ptr [ebp + 8], bx
        mov     word ptr [ebp + 0xa], 0x1
        call    FUN_004d1f80
        mov     eax, [ebp - 0xb0]
        lea     ecx, [ebp - 0xc4]
        mov     word ptr [eax + 0x11c], bx
        call    FUN_004d21c0
    done_1:
        mov     eax, [ebp + 0xc]
        mov     word ptr [eax], bx
        mov     ebx, 0x1
        mov     word ptr [eax + 2], bx
        pop     edi
        xor     eax, eax
        test    ebx, ebx
        pop     esi
        setnz   al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    check_0:
        test    al, al
        jnz     bad_msg
        mov     eax, [ebp + 0xc]
        mov     edx, [esi]
        push    0x4
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        pop     edi
        xor     eax, eax
        test    ebx, ebx
        pop     esi
        setnz   al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    bad_msg:
        push    0x77b38c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      skip_int3
        int     3
    skip_int3:
        pop     edi
        xor     eax, eax
        test    ebx, ebx
        pop     esi
        setnz   al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }


}
