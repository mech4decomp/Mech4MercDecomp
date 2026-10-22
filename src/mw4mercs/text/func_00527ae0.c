/*
 * FUN_00527ae0 (197 B) — Control mapping initialization helper.
 *
 * __stdcall (RET 0x8). Reads XOR-encoded global data, calls FUN_0050b0a0
 * to look up a control mapping, then initializes OM_Controls via
 * FUN_006bbd90 / FUN_006beb70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_0050b0a0(int a, int b, void *c, void *d);
extern void *__stdcall FUN_006bbd90(const char *name, int hint);
extern void __stdcall FUN_006beb70(void *obj, const char *name, int flag, void *data);

int DAT_007dab44; /* 0x007dab44 */
int DAT_007dab40; /* 0x007dab40 */
int DAT_007dd230; /* 0x007dd230 */
int DAT_007dd304; /* 0x007dd304 */
int DAT_007dd308; /* 0x007dd308 */

__declspec(naked) int __stdcall FUN_00527ae0(int param_1)
{
    __asm {
        mov     eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [DAT_007dab40]
        sub     esp, 8
        push    esi
        xor     eax, ecx
        mov     eax, dword ptr [eax + 0x2c]
        push    edi
        lea     ecx, [esp + 0x0c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        lea     edx, [esp + 0x0c]
        push    edx
        mov     edx, dword ptr [ecx + 4]
        mov     esi, dword ptr [edx]
        mov     ecx, dword ptr [DAT_007dd230]
        xor     eax, 0x85739531
        push    eax
        test    esi, esi
        setnz   al
        push    eax
        call    FUN_0050b0a0
        mov     edi, eax
        test    edi, edi
        jz      l_done
        mov     ecx, dword ptr [esp + 0x08]
        push    0
        push    0x77a42c
        mov     dword ptr [esp + 0x1c], 0x2ef5
        mov     dword ptr [DAT_007dd304], ecx
        mov     dword ptr [DAT_007dd308], 3
        call    FUN_006bbd90
        mov     esi, eax
        test    esi, esi
        jnz     l_got_obj
        push    0xffffff38
        push    0x77a42c
        call    FUN_006bbd90
        mov     esi, eax
    l_got_obj:
        lea     edx, [esp + 0x14]
        push    edx
        push    1
        push    0x77a41c
        push    esi
        call    FUN_006beb70
        cmp     edi, 2
        jnz     l_done
        mov     eax, dword ptr [esp + 0x0c]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    1
        push    0x77a41c
        push    esi
        mov     dword ptr [DAT_007dd304], eax
        call    FUN_006beb70
    l_done:
        pop     edi
        mov     eax, 1
        pop     esi
        add     esp, 8
        ret     8
    }
}
