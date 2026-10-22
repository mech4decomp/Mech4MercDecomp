/*
 * FUN_0069A6C0 (148 B) — __thiscall (2 stack args, RET 8). Walks a binary
 * tree of string ranges ([ebx+0x10]/[ebx+0x14] bounds, [ebx+8]/[ebx+0xC]
 * children) using repe cmpsb to locate a matching range; stores the found
 * node to [arg1].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0069A6C0(void)
{
    __asm {
        sub     esp, 0xc
        mov     ecx, dword ptr [ecx]
        push    ebx
        mov     ebx, dword ptr [ecx + 4]
        test    ebx, ebx
        mov     dword ptr [esp + 4], ecx
        je      loc_69a747
        mov     eax, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [eax + 4]
        push    esi
        push    edi
        mov     edi, dword ptr [eax]
        sub     ebp, edi
        mov     dword ptr [esp + 0x24], edi
        mov     dword ptr [esp + 0x14], ebp
        jmp     loc_69a6ed
loc_69a6e9:
        mov     edi, dword ptr [esp + 0x24]
loc_69a6ed:
        mov     esi, dword ptr [ebx + 0x10]
        mov     eax, dword ptr [ebx + 0x14]
        sub     eax, esi
        cmp     ebp, eax
        mov     dword ptr [esp + 0x18], eax
        lea     ecx, [esp + 0x14]
        jl      loc_69a705
        lea     ecx, [esp + 0x18]
loc_69a705:
        mov     ecx, dword ptr [ecx]
        xor     edx, edx
        repe    cmpsb
        je      loc_69a712
        sbb     edx, edx
        sbb     edx, -1
loc_69a712:
        test    edx, edx
        jne     loc_69a721
        cmp     eax, ebp
        jl      loc_69a72c
        cmp     eax, ebp
        setg    dl
        test    edx, edx
loc_69a721:
        jl      loc_69a72c
        mov     dword ptr [esp + 0x10], ebx
        mov     ebx, dword ptr [ebx + 8]
        jmp     loc_69a72f
loc_69a72c:
        mov     ebx, dword ptr [ebx + 0xc]
loc_69a72f:
        test    ebx, ebx
        jne     loc_69a6e9
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0xc
        ret     8
loc_69a747:
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0xc
        ret     8
    }
}
