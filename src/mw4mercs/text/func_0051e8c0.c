/*
 * FUN_0051e8c0 (720 B) — Pilot data initialization.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param).
 * Initializes pilot data structures, allocates memory, and
 * sets up linked lists.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_00617530(int param);
extern void __stdcall FUN_004d1f80(int param1, int param2);
extern int __stdcall FUN_00595b60(int param);
extern void * __stdcall FUN_004084d0(int size);
extern int __stdcall FUN_00592a70(int param);
extern int __stdcall FUN_0040c0e0(void);
extern int __stdcall FUN_00593ce0(void);
extern int __stdcall FUN_0059d0c0(int param);
extern void __stdcall FUN_006194b0(int param1, int param2, int param3);
extern void __stdcall FUN_004d21c0(void);
extern void __stdcall FUN_00412780(const char *str);
extern void __stdcall FUN_005169d0(void);
extern void __stdcall FUN_00516b30(void);
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void __fastcall FUN_0051e8c0(void)
{
    __asm {
        sub     esp, 0x9c
        push    ebx
        push    ebp
        mov     ebx, ecx

        mov     eax, dword ptr [ebx + 0x40970]
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        push    esi
        push    edi
        push    eax
        xor     edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x44]
        xor     ecx, 0x85739531
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_00617530

        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        lea     eax, [ecx + 0x44]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [eax]
        xor     edx, 0x85739531
        mov     esi, dword ptr [edx + 0x24]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x1c]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x34]
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [ecx + 0x48]
        push    1
        add     edx, 0x34
        push    edx
        lea     ecx, [esp + 0x70]
        call    FUN_004d1f80

        mov     al, byte ptr [esp + 0xb0]
        test    al, al
        jz      l_no_param

        mov     eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        mov     edi, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ebx + 0x40d10]
        xor     eax, edi
        mov     edx, dword ptr [eax + 0x44]
        xor     edx, 0x85739531
        push    ecx
        mov     ecx, dword ptr [edx + 0x34]
        xor     ebp, ebp
        call    FUN_00595b60
        mov     edi, eax

        push    1
        lea     eax, [edi + 0x34]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_004d1f80

        push    0x9c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_alloc_fail1

        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, eax
        call    FUN_00592a70
        mov     dword ptr [esp + 0x10], eax
        jmp     l_alloc_cont

    l_alloc_fail1:
        mov     dword ptr [esp + 0x10], 0

    l_alloc_done1:
        mov     eax, dword ptr [esp + 0x10]
    l_alloc_cont:
        mov     edx, dword ptr [edi + 0x50]
        mov     dword ptr [eax + 0x40], edx
        add     eax, 0x38
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x18], 0x77a0dc
        call    FUN_0040c0e0
        test    eax, eax
        jz      l_skip_loop

    l_collect_loop:
        mov     ebp, dword ptr [eax + 0x44]
        lea     ecx, [esp + 0x18]
        call    FUN_0040c0e0
        test    eax, eax
        jnz     l_collect_loop

    l_skip_loop:
        mov     edi, dword ptr [esi + 0x1c]
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x10], edi
        call    FUN_00593ce0
        test    eax, eax
        jz      l_no_match

        mov     eax, ebp
        jmp     l_set_sizes

    l_no_match:
        mov     ecx, dword ptr [esp + 0x14]
        push    0
        call    FUN_0059d0c0
        add     eax, ebp

    l_set_sizes:
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [DAT_007dab40]
        sub     edi, eax
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x1c], edi
        xor     esi, esi
        push    esi
        xor     edx, ecx
        mov     ecx, dword ptr [edx + 0x44]
        push    esi
        push    1
        xor     ecx, 0x85739531
        call    FUN_006194b0

        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        lea     eax, [ecx + 0x44]
        xor     edx, 0x85739531
        cmp     dword ptr [edx + 0x34], esi
        jz      l_skip_clear1

        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x34]
        mov     dword ptr [edx + 0x44], esi

    l_skip_clear1:
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        cmp     dword ptr [ecx + 0x24], esi
        jz      l_skip_clear2

        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x24]
        mov     dword ptr [eax + 0x18], esi

    l_skip_clear2:
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, esi
        jz      l_skip_release

        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]

    l_skip_release:
        lea     ecx, [esp + 0x24]
        call    FUN_004d21c0
        jmp     l_common

    l_no_param:
        mov     edi, dword ptr [esi + 0x1c]
        mov     ebx, dword ptr [ebx + 0x40d10]
        push    0x9c
        mov     dword ptr [esi + 0x10], edi
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_alloc_fail2

        lea     ecx, [esp + 0x68]
        push    ecx
        mov     ecx, eax
        call    FUN_00592a70
        mov     ebp, eax
        jmp     l_alloc_done2

    l_alloc_fail2:
        xor     ebp, ebp

    l_alloc_done2:
        mov     ecx, ebp
        call    FUN_00593ce0
        test    eax, eax
        jz      l_no_match2

        mov     eax, ebx
        jmp     l_set_sizes2

    l_no_match2:
        mov     ecx, dword ptr [esp + 0x14]
        push    0
        call    FUN_0059d0c0
        add     eax, ebx

    l_set_sizes2:
        mov     edx, dword ptr [DAT_007dab44]
        sub     edi, eax
        mov     dword ptr [esi + 0x14], eax
        mov     eax, dword ptr [edx]
        mov     dword ptr [esi + 0x1c], edi
        mov     esi, dword ptr [DAT_007dab40]
        push    0
        xor     eax, esi
        mov     ecx, dword ptr [eax + 0x44]
        push    0
        push    1
        xor     ecx, 0x85739531
        call    FUN_006194b0

        test    ebp, ebp
        jz      l_skip_release2

        mov     edx, dword ptr [ebp]
        push    1
        mov     ecx, ebp
        call    dword ptr [edx]

    l_skip_release2:
        mov     ebx, dword ptr [esp + 0x10]

    l_common:
        mov     eax, dword ptr [DAT_007dab44]
        mov     esi, dword ptr [eax]
        xor     esi, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [esi + 0x44]
        mov     ecx, dword ptr [esi + 0xc]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x34]
        mov     eax, dword ptr [eax + 0x48]
        mov     eax, dword ptr [eax + 0x38]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x34]

        mov     ecx, dword ptr [esi + 0xc]
        xor     ecx, 0x85739531
        push    eax
        add     ecx, 0xa8
        call    FUN_00412780

        mov     ecx, ebx
        call    FUN_005169d0
        mov     ecx, ebx
        call    FUN_00516b30

        lea     ecx, [esp + 0x68]
        call    FUN_004d21c0

        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x9c
        ret     4
    }
}
