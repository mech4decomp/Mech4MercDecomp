/*
 * FUN_00524500 (335 B) — Variant name lookup helper (variant 2).
 *
 * __stdcall with 8 bytes of parameters. Looks up a variant name from a
 * table, builds a path string, and calls into the variant system.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void * __cdecl FUN_004125e0(void *this, const char *a, const char *b);
extern void * __cdecl FUN_00412740(void *this, void *src);
extern void __stdcall FUN_004084e0(void *ptr);
extern void __fastcall FUN_00412780(void *param);
extern int __fastcall FUN_00523e60(int a);
extern int __fastcall FUN_00546750(int a, int b, int c);

__declspec(naked) void __stdcall FUN_00524500(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007dd268;
extern int DAT_007db0ac;
extern int DAT_007db0ae;
__asm {
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 4]
        sub     esp, 0x8
        push    ebx
        mov     ebx, dword ptr [eax + 0xc]
        push    esi
        xor edx, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [edx + 0xc]
        push    edi
        mov     edi, dword ptr [ecx]
        xor     esi, 0x85739531
        test    edi, edi
        jge     l_check_upper
        or      eax, 0xffffffff
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0x8
l_check_upper:
        cmp     edi, 0x18
        jl      l_valid_index
        or      eax, 0xffffffff
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0x8
l_valid_index:
        mov     edx, dword ptr [eax + 8]
        mov     eax, dword ptr [edx]
        mov ecx, dword ptr [DAT_007dd268]
        mov     edx, dword ptr [ecx + 0x409a4]
        mov     cx, word ptr [edx + eax*4 - 4]
        cmp cx, word ptr [DAT_007db0ac]
        lea     eax, [edx + eax*4 - 4]
        mov     word ptr [esp + 0xc], cx
        mov     ax, word ptr [eax + 2]
        mov     word ptr [esp + 0xe], ax
        mov     dword ptr [esp + 0x18], 0
        jnz     l_common
        cmp ax, word ptr [DAT_007db0ae]
        jnz     l_common
        push    0x76c724
        lea     ecx, [esp + 0x1c]
        call    FUN_00412780
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x10]
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
        mov     edx, dword ptr [esp + 0x18]
        push    0x779f4c
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x10]
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
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        lea     edx, [esp + 0x14]
        mov     ecx, esp
        push    edx
        call    FUN_00523e60
        push    edi
        mov     ecx, esi
        call    FUN_00546750
        mov     eax, dword ptr [esp + 0x18]
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
        pop     esi
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x8
        ret     0x8
    }


}
