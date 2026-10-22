/*
 * FUN_00518640 (324 B) — String triplet setter helper.
 *
 * __thiscall (ECX = this). Frees three existing string buffers at
 * offsets 0x40d00/0x40d04/0x40d08, then conditionally allocates
 * copies of up to 3 string params. Sets 0x40d0c to 0, 1, or -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004084e0(int ptr);
extern void * __stdcall FUN_004084d0(int size);

__declspec(naked) void __fastcall FUN_00518640(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebx, ecx

        mov     eax, dword ptr [ebx + 0x40d00]
        xor     ebp, ebp
        cmp     eax, ebp
        push    esi
        push    edi
        jz      l_free2

        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0x40d00], ebp

    l_free2:
        mov     eax, dword ptr [ebx + 0x40d04]
        cmp     eax, ebp
        jz      l_free3

        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0x40d04], ebp

    l_free3:
        mov     eax, dword ptr [ebx + 0x40d08]
        cmp     eax, ebp
        jz      l_setup

        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 0x40d08], ebp

    l_setup:
        mov     esi, dword ptr [esp + 0x18]
        cmp     esi, ebp
        mov     dword ptr [ebx + 0x40d0c], ebp
        jz      l_param2

        ; strlen(param3 = [esp+0x18])
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_004084d0

        ; strlen again for copy
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     edi, esi
        xor     eax, eax
        add     esp, 4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     dword ptr [ebx + 0x40d00], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb

    l_param2:
        mov     esi, dword ptr [esp + 0x14]
        cmp     esi, ebp
        jz      l_param1

        ; strlen(param2 = [esp+0x14])
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_004084d0

        ; strlen again for copy
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     edi, esi
        xor     eax, eax
        add     esp, 4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     dword ptr [ebx + 0x40d04], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb

    l_param1:
        mov     esi, dword ptr [esp + 0x1c]
        cmp     esi, ebp
        jz      l_done_null

        ; strlen(param1 = [esp+0x1c])
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_004084d0

        or      ecx, 0xffffffff
        add     esp, 4
        mov     edx, eax
        mov     edi, esi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     dword ptr [ebx + 0x40d08], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb

        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ebx + 0x40d0c], 1
        pop     ebx
        ret     0xc

    l_done_null:
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ebx + 0x40d0c], 0xffffffff
        pop     ebx
        ret     0xc
    }
}
