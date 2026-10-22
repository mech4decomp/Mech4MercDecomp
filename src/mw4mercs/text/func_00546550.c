/*
 * FUN_00546550 (223 B) — __thiscall method. Sets a per-index record type,
 * counts matching entries, and dispatches.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __stdcall FUN_00540090(void);
extern void __stdcall FUN_00540330(int param1);
extern int __fastcall FUN_00543ec0(void);
extern void __stdcall FUN_004084e0(int ptr);

__declspec(naked) void __fastcall FUN_00546550(void)
{
    

extern int DAT_007db090;
__asm {
push    ebx
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi + 0x50]
        mov     eax, dword ptr [ebx + 0xe4]
        test    eax, eax
        push    edi
        jz      l_exit

        mov     edx, dword ptr [esp + 0x14]
        cmp     edx, 8
        jnz     l_not_type8

        mov     eax, dword ptr [esp + 0x10]
        imul    eax, eax, 0x22ac
        mov     dword ptr [eax + esi + 0x205f38], edx
        jmp     l_after_count

l_not_type8:
        xor     edi, edi
        lea     eax, [esi + 0x3548]
        mov     ecx, 0xff

l_loop1_start:
        cmp     byte ptr [eax - 0x10], 0
        jz      l_loop1_next
        cmp     dword ptr [eax], edx
        jnz     l_loop1_next
        inc     edi
l_loop1_next:
        add     eax, 0x2038
        dec     ecx
        jnz     l_loop1_start

        lea     eax, [esi + 0x205f38]
        mov     ecx, 0x18

l_loop2_start:
        cmp     byte ptr [eax - 4], 0
        jz      l_loop2_next
        cmp     dword ptr [eax], edx
        jnz     l_loop2_next
        inc     edi
l_loop2_next:
        add     eax, 0x22ac
        dec     ecx
        jnz     l_loop2_start

        lea     ecx, [edx + edx * 4]
        shl     ecx, 4
        mov     eax, dword ptr [ecx + ebx + 0xec]
        inc     edi
        cmp     edi, eax
        jg      l_after_count

        mov     edi, dword ptr [esp + 0x10]
        mov     eax, edi
        imul    eax, eax, 0x22ac
        add     eax, esi
        mov     dword ptr [eax + 0x205f38], edx
        mov     ecx, esi
        mov     byte ptr [eax + 0x205f35], 0
        call    FUN_00540090

        push    edi
        mov     ecx, esi
        call    FUN_00540330

l_after_count:
        mov     ecx, esi
        call    FUN_00543ec0

        mov     edi, eax
        test    edi, edi
        jz      l_exit

        mov eax, dword ptr [DAT_007db090]
        mov     edx, dword ptr [esi]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x28]
        push    edi
        push    0
        push    0
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x30]

        push    edi
        call    FUN_004084e0
        add     esp, 4

l_exit:
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }


}
