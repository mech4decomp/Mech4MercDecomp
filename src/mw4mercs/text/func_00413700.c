/*
 * FUN_00413700 (290 B) — __thiscall (RET 0xc). Serializes a string-table
 * node through a stream object (ESI = param2) via its virtual method at
 * vtable offset +0x24, with two distinct paths depending on whether the
 * node's [0x18] field is zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004138d0(void);

__declspec(naked) void FUN_00413700(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x8
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     ecx, dword ptr [edi + 0x18]
        lea     ebx, [edi + 0x18]
        xor     eax, eax
        cmp     ecx, eax
        jnz     L1
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], eax
        push    0x4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x2
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x1
        lea     ebp, [edi + 0x27]
        push    ebp
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        xor     eax, eax
        mov     al, byte ptr [ebp]
        test    al, al
        jbe     L2
        mov     edx, dword ptr [esi]
        and     eax, 0xff
        push    eax
        add     edi, 0x28
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
L1:
        cmp     dword ptr [edi + 0x8], eax
        jnz     L3
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        mov     ecx, edi
        call    FUN_004138d0
L3:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        push    ebx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     ebx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [ebx + 0x10]
        mov     ecx, dword ptr [ebx + 0x14]
        sub     ecx, edx
        mov     edx, dword ptr [esi]
        lea     eax, [edi + 0x20]
        push    0x4
        mov     dword ptr [eax], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esi]
        push    0x2
        lea     ecx, [edi + 0x24]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [eax]
        push    0x1
        lea     ebp, [edi + 0x27]
        push    ebp
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        xor     eax, eax
        mov     al, byte ptr [ebp]
        test    al, al
        jbe     L4
        mov     edx, dword ptr [esi]
        and     eax, 0xff
        push    eax
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
L4:
        mov     eax, dword ptr [edi + 0x18]
        mov     ecx, dword ptr [edi + 0x8]
        mov     edx, dword ptr [ebx]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x24]
L2:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
