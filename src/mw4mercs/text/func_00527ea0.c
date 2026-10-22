/*
 * FUN_00527ea0 (278 B) — Control mapping initialization helper (variant 3).
 *
 * __stdcall (RET 0x8). Checks device type via FUN_00723bd0, queries
 * capabilities via FUN_00723b40, then calls FUN_0050c2a0 and initializes
 * OM_Controls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_00723bd0(void);
extern int __stdcall FUN_00723b40(int a);
extern int __stdcall FUN_0050c2a0(int a, int b, int c, int d);
extern void *__stdcall FUN_006bbd90(const char *name, int hint);
extern void __stdcall FUN_006beb70(void *obj, const char *name, int flag, void *data);

int DAT_007dab44; /* 0x007dab44 */
int DAT_007dab40; /* 0x007dab40 */
int DAT_007dd230; /* 0x007dd230 */
int DAT_007dd304; /* 0x007dd304 */
int DAT_007dd308; /* 0x007dd308 */

__declspec(naked) int __stdcall FUN_00527ea0(int param_1)
{
    __asm {
        push    ecx
        push    edi
        call    FUN_00723bd0
        mov     edi, eax
        test    edi, edi
        jz      l_fail
        cmp     edi, 0x10
        jz      l_fail
        cmp     edi, 0x12
        jz      l_fail
        cmp     edi, 0x11
        jz      l_fail
        push    esi
        push    0x10
        xor     esi, esi
        call    FUN_00723b40
        cmp     eax, 1
        jz      l_set_bit2
        cmp     eax, 2
        jnz     l_check_11
    l_set_bit2:
        mov     esi, 2
    l_check_11:
        push    0x11
        call    FUN_00723b40
        cmp     eax, 1
        jz      l_set_bit0
        cmp     eax, 2
        jnz     l_check_12
    l_set_bit0:
        or      esi, 1
    l_check_12:
        push    0x12
        call    FUN_00723b40
        cmp     eax, 1
        jz      l_set_bit2_2
        cmp     eax, 2
        jnz     l_after_caps
    l_set_bit2_2:
        or      esi, 4
    l_after_caps:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax + 4]
        mov     ecx, dword ptr [esi * 4 + 0x778324]
        mov     esi, dword ptr [edx]
        mov     eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [DAT_007dab40]
        push    ecx
        xor     eax, edx
        mov     ecx, dword ptr [eax + 0x2c]
        push    edi
        xor     ecx, 0x85739531
        push    esi
        push    ecx
        mov     ecx, dword ptr [DAT_007dd230]
        call    FUN_0050c2a0
        lea     edx, [esp + 0x08]
        push    edx
        push    1
        push    0x77a41c
        push    0
        push    0x77a42c
        mov     edi, eax
        mov     dword ptr [esp + 0x1c], 0x2ef5
        mov     dword ptr [DAT_007dd304], esi
        mov     dword ptr [DAT_007dd308], 1
        call    FUN_006bbd90
        push    eax
        call    FUN_006beb70
        cmp     edi, esi
        pop     esi
        jz      l_done
        lea     eax, [esp + 0x04]
        push    eax
        push    1
        push    0x77a41c
        push    0
        push    0x77a42c
        mov     dword ptr [DAT_007dd304], edi
        call    FUN_006bbd90
        push    eax
        call    FUN_006beb70
    l_done:
        mov     eax, 1
        pop     edi
        pop     ecx
        ret     8
    l_fail:
        xor     eax, eax
        pop     edi
        pop     ecx
        ret     8
    }
}
