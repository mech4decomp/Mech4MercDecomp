/*
 * FUN_004766F0 (287 B @ 0x4766f0) - __thiscall, RET 4. Resizes a 4-byte
 * element array (realloc via FUN_004084d0/004084e0) and copies elements via
 * vtable dispatch. (Block 0x4766E1 is 288 B; the last byte is 0x90 padding.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_0047a6b0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004766F0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        mov     ebx, ecx
        push    esi
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_0047a6b0
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_4767dd
        mov     ecx, dword ptr [eax + 0x24]
        test    ecx, ecx
        jbe     L_4767dd
        mov     eax, dword ptr [esi]
        push    edi
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0xa8]
        mov     esi, dword ptr [ebx + 0xc]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [esi + 0x24]
        cmp     ecx, edi
        mov     dword ptr [esp + 0x10], ecx
        je      L_4767b7
        test    ecx, ecx
        jbe     L_476799
        lea     eax, [ecx*4]
        push    ebp
        push    eax
        call    FUN_004084d0
        mov     ebp, dword ptr [esi + 0x20]
        add     esp, 4
        test    ebp, ebp
        mov     ebx, eax
        je      L_47678f
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, edi
        jb      L_47676a
        mov     ecx, edi
L_47676a:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        je      L_476786
        mov     edx, ebp
        lea     eax, [ebx + ecx*4]
        sub     edx, ebx
        inc     ecx
L_476779:
        mov     edi, dword ptr [edx + eax]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_476779
L_476786:
        push    ebp
        call    FUN_004084e0
        add     esp, 4
L_47678f:
        mov     dword ptr [esi + 0x20], ebx
        mov     ebx, dword ptr [esp + 0x18]
        pop     ebp
        jmp     L_4767ac
L_476799:
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x20], 0
L_4767ac:
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x1c]
L_4767b7:
        mov     eax, dword ptr [esi + 0x20]
        mov     esi, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ebx]
        mov     edi, eax
        rep     movsd
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0xa4]
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0xc
        ret     4
L_4767dd:
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0xa8]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 8]
        mov     edx, dword ptr [ebx]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0xa4]
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0xc
        ret     4
    }
}
