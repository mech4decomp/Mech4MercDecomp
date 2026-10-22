/*
 * FUN_00685100 (447 B) — __thiscall (ECX = this), RET 4.
 *
 * Serializes a set of fields through a virtual writer (vtable+0x24),
 * then iterates two arrays calling FUN_006855e0 / FUN_00685560.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006855e0(void);
extern void __cdecl FUN_00685560(void);

__declspec(naked) void __stdcall FUN_00685100(void *param)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        mov     ebx, 0x1
        push    ebx
        lea     ecx, [edi + 0x3e]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0xc
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esi]
        push    0xc
        lea     ecx, [edi + 0xc]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    ebx
        lea     eax, [edi + 0x3c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    ebx
        lea     eax, [edi + 0x3d]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ebp, dword ptr [edi + 0x2c]
        test    ebp, ebp
        jz      L1
        mov     edx, dword ptr [esi]
        push    ebx
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x20], bl
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [ebp]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x18], ecx
        push    0x4
        lea     eax, [esp + 0x1c]
        jmp     L2
L1:
        mov     edx, dword ptr [esi]
        mov     byte ptr [esp + 0x18], 0x0
        push    ebx
        lea     eax, [esp + 0x1c]
L2:
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ebp, dword ptr [edi + 0x30]
        test    ebp, ebp
        jz      L3
        mov     edx, dword ptr [esi]
        push    ebx
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x20], bl
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [ebp]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x18], ecx
        push    0x4
        lea     eax, [esp + 0x1c]
        jmp     L4
L3:
        mov     edx, dword ptr [esi]
        mov     byte ptr [esp + 0x18], 0x0
        push    ebx
        lea     eax, [esp + 0x1c]
L4:
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x5c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0x68]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [edi + 0x44]
        mov     ecx, dword ptr [edi + 0x48]
        sub     ecx, edx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        push    0x4
        lea     eax, [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [edi + 0x50]
        mov     ecx, dword ptr [edi + 0x54]
        sub     ecx, eax
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        push    0x4
        lea     eax, [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [edi + 0x50]
        mov     ebx, dword ptr [edi + 0x54]
        xor     ecx, ecx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], ecx
        jz      L6
        mov     edx, dword ptr [edi + 0x60]
L5:
        cmp     edx, eax
        jz      L7
        add     eax, 0x18
        inc     ecx
        cmp     eax, ebx
        jnz     L5
L7:
        mov     dword ptr [esp + 0x10], ecx
L6:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ebp, dword ptr [edi + 0x44]
        mov     edi, dword ptr [edi + 0x48]
        cmp     ebp, edi
        jz      L8
L9:
        push    esi
        mov     ecx, ebp
        call    FUN_006855e0
        add     ebp, 0xc
        cmp     ebp, edi
        jnz     L9
L8:
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, ebx
        jz      L10
L11:
        push    esi
        mov     ecx, edi
        call    FUN_00685560
        add     edi, 0x18
        cmp     edi, ebx
        jnz     L11
L10:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
