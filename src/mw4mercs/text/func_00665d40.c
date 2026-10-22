/*
 * FUN_00665d40 (192 B) — ABL list validation/transform. Iterates a
 * pointer range [*this, this[1]); checks field +0x41c values, then
 * builds a matrix via FUN_005d5510/005d5530/005d57e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005d5510(int, int);
extern void __cdecl FUN_005d5530(int, int);
extern int __cdecl FUN_005d57e0(void);

__declspec(naked) void FUN_00665d40(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [ecx]
        push    edi
        mov     edi, dword ptr [ecx + 0x4]
        mov     eax, esi
        cmp     eax, edi
        mov     dl, 0x1
        mov     dword ptr [esp + 0x10], esi
        jz      L_665d76
        mov     ecx, 0x5
L_665d5f:
        mov     ebx, dword ptr [eax]
        cmp     dword ptr [ebx + 0x41c], ecx
        jz      L_665d6b
        xor     dl, dl
L_665d6b:
        add     eax, 0x4
        cmp     eax, edi
        jnz     L_665d5f
        test    dl, dl
        jz      L_665d7e
L_665d76:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        pop     ecx
        ret
L_665d7e:
        mov     eax, esi
        cmp     eax, edi
        mov     cl, 0x1
        jz      L_665df8
L_665d86:
        mov     edx, dword ptr [eax]
        mov     ebx, dword ptr [edx + 0x41c]
        test    ebx, ebx
        jnz     L_665d94
        xor     cl, cl
L_665d94:
        add     eax, 0x4
        cmp     eax, edi
        jnz     L_665d86
        test    cl, cl
        jnz     L_665df8
        mov     ebp, esi
        cmp     ebp, edi
        mov     dword ptr [esp + 0x18], 0x0
        jz      L_665df8
        jmp     L_665db3
L_665daf:
        mov     esi, dword ptr [esp + 0x10]
L_665db3:
        xor     ebx, ebx
        cmp     esi, edi
        jz      L_665dcd
L_665db9:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [ebp]
        push    eax
        push    ebx
        call    FUN_005d5510
        add     esi, 0x4
        inc     ebx
        cmp     esi, edi
        jnz     L_665db9
L_665dcd:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        mov     esi, dword ptr [ebp]
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005d5530
        mov     ecx, esi
        call    FUN_005d57e0
        mov     ecx, dword ptr [esp + 0x18]
        add     ebp, 0x4
        inc     ecx
        cmp     ebp, edi
        mov     dword ptr [esp + 0x18], ecx
        jnz     L_665daf
L_665df8:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret
    }
}
