/*
 * FUN_0068aac0 (159 B) — __thiscall (ECX = this), RET 4.
 *
 * Serializes several fields of `this` through a virtual method
 * (vtable+0x24) on param_1, computes a count from a range, then
 * calls FUN_006b0460(param_1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006b0460(void);

__declspec(naked) void __stdcall FUN_0068aac0(void *param)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x1
        lea     ecx, [edi + 0x24]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x40]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x30]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [edi + 0x34]
        mov     ecx, dword ptr [edi + 0x38]
        sub     ecx, edx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        push    0x4
        lea     eax, [esp + 0x18]
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ebx, dword ptr [edi + 0x34]
        mov     ebp, dword ptr [edi + 0x38]
        cmp     ebx, ebp
        jz      l_done
    l_loop:
        mov     edx, dword ptr [esi]
        push    0xc
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     ebx, 0xc
        cmp     ebx, ebp
        jnz     l_loop
    l_done:
        push    esi
        mov     ecx, edi
        call    FUN_006b0460
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
