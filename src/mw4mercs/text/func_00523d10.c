/*
 * FUN_00523d10 (324 B) — Variant name lookup helper.
 *
 * __stdcall with 12 bytes of parameters. Looks up a variant name from a
 * table, builds a path string, and calls into the variant system.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void * __cdecl FUN_004125e0(void *this, const char *a, const char *b);
extern void * __cdecl FUN_00412740(void *this, void *src);
extern void __stdcall FUN_004084e0(void *ptr);
extern int __fastcall FUN_00523e60(int a);
extern int __fastcall FUN_00546750(int a, int b, int c);
extern void __fastcall FUN_00412780(void *param);

__declspec(naked) void __stdcall FUN_00523d10(void)
{
    

extern int DAT_007dd268;
extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 8]
        sub     esp, 0x8
        push    esi
        mov     esi, dword ptr [edx]
        push    edi
        mov     edi, dword ptr [ecx]
        test    edi, edi
        jge     l_check_upper
        xor     eax, eax
        pop     edi
        pop     esi
        add     esp, 0x8
        ret     0xc
l_check_upper:
        cmp     edi, 0x18
        jl      l_valid_index
        xor     eax, eax
        pop     edi
        pop     esi
        add     esp, 0x8
        ret     0xc
l_valid_index:
        mov     eax, dword ptr [eax + 4]
        mov     ecx, dword ptr [eax]
        mov edx, dword ptr [DAT_007dd268]
        mov     eax, dword ptr [edx + 0x409a4]
        lea     eax, [eax + ecx*4]
        mov     cx, word ptr [eax]
        cmp cx, word ptr [DAT_007db0ac]
        mov     word ptr [esp + 0x8], cx
        mov     ax, word ptr [eax + 2]
        mov     word ptr [esp + 0xa], ax
        mov     dword ptr [esp + 0x1c], 0
        jnz     l_common
        cmp ax, word ptr [DAT_007db0ae]
        jnz     l_common
        push    0x76c724
        lea     ecx, [esp + 0x20]
        call    FUN_00412780
        mov     ecx, dword ptr [esp + 0x1c]
        push    esi
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_dec_skip1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_dec_skip1
        push    eax
        call    FUN_004084e0
        add     esp, 4
l_dec_skip1:
        mov     edx, dword ptr [esp + 0x1c]
        push    0x779f4c
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_dec_skip2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_dec_skip2
        push    eax
        call    FUN_004084e0
        add     esp, 4
l_dec_skip2:
l_common:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [ecx + 0xc]
        lea     edx, [esp + 0x1c]
        push    edx
        push    ecx
        lea     eax, [esp + 0x10]
        mov     ecx, esp
        push    eax
        xor     esi, 0x85739531
        call    FUN_00523e60
        push    edi
        mov     ecx, esi
        call    FUN_00546750
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      l_dec_skip3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_dec_skip3
        push    eax
        call    FUN_004084e0
        add     esp, 4
l_dec_skip3:
        pop     edi
        mov     eax, 0x1
        pop     esi
        add     esp, 0x8
        ret     0xc
    }


}
