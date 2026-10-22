/*
 * FUN_00687800 (115 B) — Copy a run of 0x18-byte elements.
 *
 * __thiscall (ECX = this), RET 8 (two stack params). Copies
 * (this->[4] - param2) / 0x18 elements from param2 to param1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void * __fastcall FUN_00687800(void *param1, void *param2)
{
    __asm {
        mov     eax, dword ptr [ecx + 4]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        sub     eax, ebx
        mov     edx, eax
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 2
        mov     eax, edx
        shr     eax, 0x1f
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        add     edx, eax
        test    edx, edx
        push    esi
        mov     esi, ebp
        jle     l_done
        push    edi
        mov     edi, ebp
        lea     eax, [ebx + 8]
        sub     edi, ebx
    l_loop:
        mov     ebx, dword ptr [eax - 8]
        mov     dword ptr [esi], ebx
        mov     ebx, dword ptr [eax - 4]
        mov     dword ptr [esi + 4], ebx
        mov     ebx, dword ptr [eax]
        mov     dword ptr [edi + eax], ebx
        mov     ebx, dword ptr [eax + 4]
        mov     dword ptr [esi + 0xc], ebx
        mov     bl, byte ptr [eax + 8]
        mov     byte ptr [esi + 0x10], bl
        mov     ebx, dword ptr [eax + 0xc]
        mov     dword ptr [esi + 0x14], ebx
        add     esi, 0x18
        add     eax, 0x18
        dec     edx
        jnz     l_loop
        pop     edi
        mov     dword ptr [ecx + 4], esi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     8
    l_done:
        mov     dword ptr [ecx + 4], esi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     8
    }
}
