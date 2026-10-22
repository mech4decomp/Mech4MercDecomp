/*
 * FUN_0054ae70 (669 B) — Large struct destructor/cleanup (__thiscall).
 *
 * ECX = this (large struct). Frees sub-objects, calls cleanup functions.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_004c8e90(int a);
extern int __stdcall FUN_00637b10(void);
extern void __stdcall FUN_004084e0(int ptr);
extern int __stdcall FUN_00417ad0(void *this);
extern int __stdcall FUN_006272d0(int a);
extern int __stdcall FUN_0041fd80(void *this);
extern int __stdcall FUN_0072f090(void *p);
extern int __stdcall FUN_00417980(void *this);
extern int __stdcall FUN_0041fc90(void *this);
extern int __stdcall FUN_00415380(void *this);
extern int __stdcall FUN_004f9b40(void *this);

__declspec(naked) void __fastcall FUN_0054ae70(void *this)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007dc6b4;
__asm {
sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    0xb
        mov     dword ptr [esi], 0x77cd9c
        call    FUN_004c8e90
        add     esp, 0x4
        call    FUN_00637b10
        mov     eax, dword ptr [esi + 0x938]
        xor     ebx, ebx
        cmp     eax, ebx
        mov     dword ptr [esi + 0x2d0], ebx
        jz      l_free_938_done
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
l_free_938_done:
        lea     edi, [esi + 0x93c]
        mov     ebp, 0x6
l_free_93c_loop:
        mov     eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        add     edi, 0x4
        dec     ebp
        jnz     l_free_93c_loop

        lea     eax, [esi + 0x2f0]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], 0x77d010
        mov     dword ptr [esi + 0x2f8], ebx
l_traverse_loop:
        cmp     eax, ebx
        jz      l_traverse_done
        mov     edi, dword ptr [eax]
        cmp     edi, ebx
        jz      l_traverse_done
        lea     ecx, [esp + 0x10]
        call    FUN_00417ad0
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx]
        mov     eax, dword ptr [esp + 0x18]
        jmp     l_traverse_loop
l_traverse_done:

        /* 0x0054AF04: mov eax, [0x007dab44] */
        mov eax, dword ptr [DAT_007dab44]

        mov     ecx, dword ptr [eax]

        /* 0x0054AF0B: xor ecx, [0x007dab40] */
        xor ecx, dword ptr [DAT_007dab40]

        mov     edx, dword ptr [ecx + 0x40]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x40]
        jz      l_skip_xor_call
        mov     ecx, dword ptr [eax]
        push    0x1
        xor     ecx, 0x85739531
        call    FUN_006272d0
l_skip_xor_call:
        lea     ebp, [esi + 0x318]
        mov     ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        jz      l_after_fd80
        mov     ecx, ebp
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xe0]
        mov     edx, dword ptr [eax]
        push    ebx
        push    0x5
        mov     ecx, eax
        call    dword ptr [edx + 4]
l_after_fd80:

        /* 0x0054AF56: mov eax, [0x007dc6b4] */
        mov eax, dword ptr [DAT_007dc6b4]

        mov     eax, dword ptr [eax + 0x34]
        cmp     eax, ebx
        jz      l_after_ff_free
        cmp     byte ptr [eax + 0x50], bl
        jz      l_after_ff_free
        lea     ecx, [esi + 0x4b8]
        push    ecx
        call    FUN_0072f090
        lea     edx, [esi + 0x4bc]
        push    edx
        call    FUN_0072f090
        lea     eax, [esi + 0x4c0]
        push    eax
        call    FUN_0072f090
        lea     ecx, [esi + 0x4c4]
        push    ecx
        call    FUN_0072f090
        lea     edx, [esi + 0x4c8]
        push    edx
        call    FUN_0072f090
        lea     eax, [esi + 0x4cc]
        push    eax
        call    FUN_0072f090
        lea     ecx, [esi + 0x4d0]
        push    ecx
        call    FUN_0072f090
        lea     edx, [esi + 0x4d4]
        push    edx
        call    FUN_0072f090
        lea     eax, [esi + 0x4d8]
        push    eax
        call    FUN_0072f090
        lea     ecx, [esi + 0x4dc]
        push    ecx
        call    FUN_0072f090
l_after_ff_free:
        lea     edi, [esi + 0x934]
        mov     ebx, 0x6
l_cleanup_934_loop:
        sub     edi, 0x8
        mov     ecx, edi
        call    FUN_00417980
        dec     ebx
        jnz     l_cleanup_934_loop

        lea     edi, [esi + 0x80c]
        lea     ecx, [edi + 0x1c]
        call    FUN_0041fc90
        lea     ecx, [edi + 0x14]
        call    FUN_0041fc90
        mov     ecx, edi
        call    FUN_00415380

        lea     edi, [esi + 0x744]
        lea     ecx, [edi + 0x1c]
        call    FUN_0041fc90
        lea     ecx, [edi + 0x14]
        call    FUN_0041fc90
        mov     ecx, edi
        call    FUN_00415380

        lea     ecx, [esi + 0x738]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x730]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x728]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x720]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x718]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x710]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x6d0]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x6c8]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x6a8]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x6a0]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x690]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x688]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x680]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x66c]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x664]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x65c]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x5b0]
        call    FUN_0041fc90
        mov     ecx, ebp
        call    FUN_0041fc90
        lea     ecx, [esi + 0x2f0]
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_004f9b40
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
    }


}
