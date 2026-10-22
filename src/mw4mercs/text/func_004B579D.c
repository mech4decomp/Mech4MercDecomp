/*
 * FUN_004B579D (279 B @ 0x4b579d) - __thiscall, RET 4. Resizes a 16-byte
 * element array (alloc/free via FUN_004084d0/004084e0), copies elements, and
 * zero-fills the new tail.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004bf3f0(void);

__declspec(naked) void FUN_004B579D(void)
{
    __asm {
        nop
        nop
        nop
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, ecx
        mov     ebx, dword ptr [edi + 0x154]
        and     esi, 0xffff
        mov     ebp, ebx
        cmp     esi, ebp
        mov     dword ptr [esp + 0x18], ebx
        je      L_4b5878
        test    esi, esi
        jbe     L_4b5859
        mov     eax, esi
        shl     eax, 4
        push    eax
        call    FUN_004084d0
        mov     edx, dword ptr [edi + 0x150]
        add     esp, 4
        test    edx, edx
        mov     ebx, eax
        mov     dword ptr [esp + 0x14], ebx
        je      L_4b5845
        cmp     esi, ebp
        mov     ecx, esi
        jb      L_4b57f5
        mov     ecx, ebp
L_4b57f5:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        je      L_4b5836
        mov     eax, ecx
        shl     eax, 4
        sub     edx, ebx
        add     eax, ebx
        mov     dword ptr [esp + 0x10], edx
        inc     ecx
        jmp     L_4b5810
L_4b580c:
        mov     edx, dword ptr [esp + 0x10]
L_4b5810:
        add     edx, eax
        mov     ebp, dword ptr [edx]
        mov     ebx, eax
        mov     dword ptr [ebx], ebp
        mov     ebp, dword ptr [edx + 4]
        mov     dword ptr [ebx + 4], ebp
        mov     ebp, dword ptr [edx + 8]
        mov     dword ptr [ebx + 8], ebp
        mov     edx, dword ptr [edx + 0xc]
        dec     ecx
        sub     eax, 0x10
        test    ecx, ecx
        mov     dword ptr [ebx + 0xc], edx
        ja      L_4b580c
        mov     ebx, dword ptr [esp + 0x14]
L_4b5836:
        mov     eax, dword ptr [edi + 0x150]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_4b5845:
        mov     dword ptr [edi + 0x150], ebx
        mov     ebx, dword ptr [esp + 0x18]
        xor     ecx, ecx
        mov     dword ptr [edi + 0x154], esi
        jmp     L_4b587a
L_4b5859:
        mov     eax, dword ptr [edi + 0x150]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        xor     ecx, ecx
        mov     dword ptr [edi + 0x150], ecx
        mov     dword ptr [edi + 0x154], esi
        jmp     L_4b587a
L_4b5878:
        xor     ecx, ecx
L_4b587a:
        cmp     ebx, esi
        jae     L_4b589e
        mov     ebp, dword ptr [edi + 0x150]
        mov     eax, ebx
        shl     eax, 4
        add     eax, ebp
        sub     esi, ebx
L_4b588d:
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], ecx
        add     eax, 0x10
        dec     esi
        jne     L_4b588d
L_4b589e:
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, edi
        call    FUN_004bf3f0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     4
    }
}
