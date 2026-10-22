/*
 * FUN_1002f530 (159 B) — __fastcall, RET 0x4.
 * Allocates a 0x14-byte buffer via object vtable, copies a source struct
 * (with optional deep-copy of a sub-buffer) into it, returns the buffer.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_1002f530(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x8]
        mov     ecx, dword ptr [eax]
        push    0x14
        push    eax
        xor     edi, edi
        call    dword ptr [ecx + 0xc]
        mov     ebp, eax
        test    ebp, ebp
        jz      L_c6
        mov     ebx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ebx]
        test    al, 0x2
        jz      L_61
        mov     eax, dword ptr [ebx + 0x10]
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [ebx + 0x10]
        jmp     L_99
    L_61:
        test    al, 0x4
        jz      L_6a
        mov     eax, dword ptr [ebx + 0x10]
        jmp     L_99
    L_6a:
        mov     ecx, dword ptr [ebx + 0xc]
        test    ecx, ecx
        jz      L_97
        mov     eax, dword ptr [esi + 0x8]
        mov     edx, dword ptr [eax]
        push    ecx
        push    eax
        call    dword ptr [edx + 0xc]
        test    eax, eax
        jz      L_bc
        mov     ecx, dword ptr [ebx + 0xc]
        mov     esi, dword ptr [ebx + 0x10]
        mov     edx, ecx
        shr     ecx, 0x2
        mov     edi, eax
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        jmp     L_99
    L_97:
        xor     eax, eax
    L_99:
        mov     ecx, dword ptr [ebx + 0x4]
        mov     dword ptr [ebp + 0x4], ecx
        mov     edx, dword ptr [ebx]
        mov     dword ptr [ebp], edx
        mov     ecx, dword ptr [ebx + 0x8]
        pop     edi
        mov     dword ptr [ebp + 0x8], ecx
        mov     edx, dword ptr [ebx + 0xc]
        mov     dword ptr [ebp + 0x10], eax
        pop     esi
        mov     dword ptr [ebp + 0xc], edx
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0x4
    L_bc:
        mov     esi, dword ptr [esi + 0x8]
        mov     eax, dword ptr [esi]
        push    ebp
        push    esi
        call    dword ptr [eax + 0x14]
    L_c6:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
