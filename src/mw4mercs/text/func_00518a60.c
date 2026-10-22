/*
 * FUN_00518a60 (215 B) — String ID lookup and dispatch helper.
 *
 * __stdcall (RET 0xC). Looks up string IDs from a table, collects
 * matching characters, and dispatches via obfuscated vtable call.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void * __stdcall FUN_004cdfa0(int param);

__declspec(naked) void FUN_00518a60(void)
{
    

extern int DAT_007dd268;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db090;
__asm {
        mov eax, dword ptr [DAT_007dd268]
        mov     ecx, dword ptr [eax + 0x409bc]
        sub     esp, 0x24
        test    ecx, ecx
        jnz     l_check_count
        or      eax, 0xffffffff
        add     esp, 0x24
        ret     0xc

    l_check_count:
        mov     ecx, dword ptr [eax + 0x409c0]
        test    ecx, ecx
        jg      l_loop_init
        or      eax, 0xffffffff
        add     esp, 0x24
        ret     0xc

    l_loop_init:
        push    edi
        xor     edi, edi
        test    ecx, ecx
        mov     byte ptr [esp + 4], 0
        jle     l_after_loop

        push    esi
        mov     esi, 0x409c4

    l_loop:
        mov     ecx, dword ptr [esi + eax]
        cmp     ecx, -1
        jz      l_next

        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        xor eax, dword ptr [DAT_007dab40]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        jz      l_next_continue

        mov     dl, byte ptr [eax + 0x28]
        mov     ecx, dword ptr [esp + 8]
        mov     al, byte ptr [esp + 8]
        and     ecx, 0xff
        inc     al
        mov     byte ptr [esp + ecx + 0xc], dl
        mov     byte ptr [esp + 8], al

    l_next_continue:
        mov eax, dword ptr [DAT_007dd268]

    l_next:
        mov     ecx, dword ptr [eax + 0x409c0]
        inc     edi
        add     esi, 4
        cmp     edi, ecx
        jl      l_loop

        pop     esi

    l_after_loop:
        mov     eax, dword ptr [eax + 0x409bc]
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov ecx, dword ptr [DAT_007dab40]
        push    eax
        xor     eax, eax
        mov eax, dword ptr [DAT_007db090]
        mov     al, byte ptr [eax + 0x28]
        xor     edx, ecx
        mov     ecx, dword ptr [edx + 0xc]
        push    0
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0
        push    eax
        call    dword ptr [edx + 0x30]

        mov     eax, 1
        pop     edi
        add     esp, 0x24
        ret     0xc
    }


}
