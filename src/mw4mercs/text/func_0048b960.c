/*
 * FUN_0048b960 (231 B) — MLR grow-array helper (__thiscall, RET 0x4).
 * Reallocates a 0x20-byte-element array to a new capacity, copying
 * existing elements and initializing new ones via FUN_00491b20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void* __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00491b20(void);

__declspec(naked) void FUN_0048b960(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x4]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        cmp     ebp, eax
        mov     dword ptr [esp + 0x8], ebx
        jz      L_ba41
        test    ebp, ebp
        jbe     L_ba2d
        push    esi
        mov     eax, ebp
        shl     eax, 0x5
        push    edi
        push    eax
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      L_b9b5
        lea     eax, [ebp - 1]
        test    eax, eax
        mov     esi, edi
        jl      L_b9b7
        lea     ebx, [eax + 1]
L_b9a2:
        mov     ecx, esi
        call    FUN_00491b20
        add     esi, 0x20
        dec     ebx
        jnz     L_b9a2
        mov     ebx, dword ptr [esp + 0x10]
        jmp     L_b9b7
L_b9b5:
        xor     edi, edi
L_b9b7:
        mov     esi, dword ptr [ebx]
        test    esi, esi
        jz      L_ba20
        mov     edx, dword ptr [ebx + 0x4]
        cmp     ebp, edx
        jnc     L_b9c6
        mov     edx, ebp
L_b9c6:
        mov     ecx, edx
        dec     edx
        test    ecx, ecx
        jz      L_ba17
        mov     ecx, edx
        shl     ecx, 0x5
        lea     eax, [ecx + esi]
        lea     ecx, [ecx + edi + 0x8]
        inc     edx
L_b9da:
        mov     ebx, dword ptr [eax]
        mov     dword ptr [ecx - 0x8], ebx
        mov     ebx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx - 0x4], ebx
        mov     ebx, dword ptr [eax + 0x8]
        mov     dword ptr [ecx], ebx
        mov     ebx, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0x4], ebx
        mov     ebx, dword ptr [eax + 0x10]
        mov     dword ptr [ecx + 0x8], ebx
        mov     ebx, dword ptr [eax + 0x14]
        mov     dword ptr [ecx + 0xc], ebx
        mov     ebx, dword ptr [eax + 0x18]
        mov     dword ptr [ecx + 0x10], ebx
        mov     ebx, dword ptr [eax + 0x1c]
        mov     dword ptr [ecx + 0x14], ebx
        dec     edx
        sub     eax, 0x20
        sub     ecx, 0x20
        test    edx, edx
        ja      L_b9da
        mov     ebx, dword ptr [esp + 0x10]
L_ba17:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_ba20:
        mov     dword ptr [ebx], edi
        pop     edi
        pop     esi
        mov     dword ptr [ebx + 0x4], ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
L_ba2d:
        mov     edx, dword ptr [ebx]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx], 0x0
        mov     dword ptr [ebx + 0x4], ebp
L_ba41:
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
