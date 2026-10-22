/*
 * FUN_00694EAC (282 B @ 0x694eac) - __thiscall, RET 0x14. Allocates an object,
 * builds a value via FUN_00694be0, and grows/compacts a 4-byte element array
 * (realloc via FUN_004084d0/004084e0).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00694be0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00694EAC(void)
{
    __asm {
        nop
        nop
        nop
        nop
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    0x38
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_004084d0
        xor     ebp, ebp
        add     esp, 4
        cmp     eax, ebp
        je      L_694ef3
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        push    edx
        mov     edx, dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_00694be0
        mov     esi, eax
        mov     dword ptr [esp + 0x28], esi
        jmp     L_694ef9
L_694ef3:
        mov     dword ptr [esp + 0x28], ebp
        mov     esi, ebp
L_694ef9:
        mov     edi, dword ptr [ebx + 0x1c]
        cmp     edi, dword ptr [ebx + 0x20]
        je      L_694f17
        cmp     edi, ebp
        je      L_694f07
        mov     dword ptr [edi], esi
L_694f07:
        add     edi, 4
        mov     dword ptr [ebx + 0x1c], edi
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x14
L_694f17:
        mov     ebx, dword ptr [ebx + 0x18]
        mov     eax, edi
        sub     eax, ebx
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x24], 1
        mov     dword ptr [esp + 0x20], eax
        lea     ecx, [esp + 0x24]
        jb      L_694f3a
        lea     ecx, [esp + 0x20]
L_694f3a:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x24], ecx
        je      L_694f56
        lea     edx, [ecx*4]
        push    edx
        call    FUN_004084d0
        add     esp, 4
        mov     ebp, eax
L_694f56:
        cmp     ebx, edi
        mov     eax, ebp
        je      L_694f70
        mov     ecx, ebx
L_694f5e:
        test    eax, eax
        je      L_694f66
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
L_694f66:
        add     ecx, 4
        add     eax, 4
        cmp     ecx, edi
        jne     L_694f5e
L_694f70:
        test    eax, eax
        je      L_694f76
        mov     dword ptr [eax], esi
L_694f76:
        cmp     edi, edi
        lea     esi, [eax + 4]
        je      L_694f94
        mov     eax, edi
        sub     eax, esi
L_694f81:
        test    esi, esi
        je      L_694f8a
        mov     ecx, dword ptr [eax + esi]
        mov     dword ptr [esi], ecx
L_694f8a:
        add     esi, 4
        lea     edx, [eax + esi]
        cmp     edx, edi
        jne     L_694f81
L_694f94:
        test    ebx, ebx
        mov     dword ptr [esp + 0x20], ebx
        je      L_694fa5
        push    ebx
        call    FUN_004084e0
        add     esp, 4
L_694fa5:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        pop     edi
        mov     dword ptr [eax + 0x1c], esi
        pop     esi
        mov     dword ptr [eax + 0x18], ebp
        lea     edx, [ebp + ecx*4]
        pop     ebp
        mov     dword ptr [eax + 0x20], edx
        mov     eax, dword ptr [esp + 0x1c]
        pop     ebx
        pop     ecx
        ret     0x14
    }
}
