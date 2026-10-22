/*
 * FUN_004c6960 (218 B) - MLR node/mesh data loader. __thiscall, RET 0x4.
 * Reads a pointer from the node, dispatches through a virtual method on the
 * parent object (+0x24) to load per-node data, optionally calls
 * FUN_004b99a0, and loads matrices/vectors based on flag bits.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004b99a0(void);

__declspec(naked) void __fastcall FUN_004c6960(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [eax]
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esp + 0x10]
        mov     dword ptr [esp + 0x10], ecx
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ebx, [esi + 0x18]
        push    ebx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [esi + 0x140]
        test    ecx, ecx
        jz      L69A0
        push    edi
        call    FUN_004b99a0
L69A0:
        test    byte ptr [ebx], 0x1
        jnz     L69B2
        mov     eax, dword ptr [edi]
        push    0x30
        lea     ecx, [esi + 0x50]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x24]
L69B2:
        mov     edx, dword ptr [ebx]
        shr     edx, 0x5
        test    dl, 0x1
        jz      L69F5
        mov     eax, dword ptr [edi]
        push    0x30
        lea     ecx, [esi + 0xb0]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [eax]
        push    0xc
        lea     ecx, [esi + 0xe0]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        add     esi, 0xec
        push    esi
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     0x4
L69F5:
        mov     ecx, dword ptr [esi + 0xcc]
        mov     eax, dword ptr [esi + 0xbc]
        mov     edx, dword ptr [esi + 0xdc]
        mov     dword ptr [esp + 0x14], ecx
        push    0xc
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], edx
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [edi]
        push    0x4
        add     esi, 0xec
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     0x4
    }
}
