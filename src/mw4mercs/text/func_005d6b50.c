/*
 * FUN_005d6b50 (148 B) — Remove element matching param from parallel arrays.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005d6b50(void *param)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x14]
        mov     edx, dword ptr [ecx + 0x18]
        cmp     eax, edx
        push    ebx
        mov     ebx, dword ptr [ecx + 0x20]
        push    esi
        push    edi
        jz      L6BDE
        mov     esi, dword ptr [esp + 0x10]
L6B64:
        cmp     dword ptr [eax], esi
        jz      L6B72
        add     eax, 0x4
        add     ebx, 0xc
        cmp     eax, edx
        jnz     L6B64
L6B72:
        cmp     eax, edx
        jz      L6BDE
        mov     esi, dword ptr [ecx + 0x18]
        lea     edi, [eax + 0x4]
        cmp     edi, esi
        jz      L6B96
        mov     edx, esi
        sub     edx, edi
        sar     edx, 0x2
        test    edx, edx
        jle     L6B96
L6B8B:
        mov     edi, dword ptr [eax + 0x4]
        mov     dword ptr [eax], edi
        add     eax, 0x4
        dec     edx
        jnz     L6B8B
L6B96:
        add     esi, -0x4
        mov     dword ptr [ecx + 0x18], esi
        mov     esi, dword ptr [ecx + 0x24]
        lea     eax, [ebx + 0xc]
        cmp     eax, esi
        jz      L6BD8
        mov     edx, esi
        sub     edx, eax
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        jle     L6BD8
        lea     eax, [ebx + 0x14]
L6BC1:
        mov     edi, dword ptr [eax - 0x8]
        mov     dword ptr [eax - 0x14], edi
        mov     edi, dword ptr [eax - 0x4]
        mov     dword ptr [eax - 0x10], edi
        mov     edi, dword ptr [eax]
        mov     dword ptr [eax - 0xc], edi
        add     eax, 0xc
        dec     edx
        jnz     L6BC1
L6BD8:
        add     esi, -0xc
        mov     dword ptr [ecx + 0x24], esi
L6BDE:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
