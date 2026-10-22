/*
 * FUN_006855e0 (160 B) — __thiscall (ECX = this), RET 4.
 *
 * Serializes fields of `this` through a virtual method (vtable+0x24)
 * on param_1, conditionally writing flag bytes and pointer values.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006855e0(void *param)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x4
        lea     ecx, [edi + 0x8]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     ebp, dword ptr [edi]
        test    ebp, ebp
        jz      l_else
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x18], 0x1
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [ebp]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x10], ecx
        push    0x4
        lea     eax, [esp + 0x14]
        jmp     l_join
    l_else:
        mov     edx, dword ptr [esi]
        mov     byte ptr [esp + 0x10], 0x0
        push    0x1
        lea     eax, [esp + 0x14]
    l_join:
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edi, dword ptr [edi + 0x4]
        test    edi, edi
        jz      l_else2
    l_loop:
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x18], 0x1
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        ret     4
    l_else2:
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x18], 0x0
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        ret     4
    }
}
