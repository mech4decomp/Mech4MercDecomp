/*
 * FUN_0048ba50 (258 B) — MLR grow-array helper (__thiscall, RET 0x4).
 * Reallocates a 0x30-byte-element array to a new capacity, copying
 * existing elements and initializing new ones via FUN_00491d50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void* __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00491d50(void);

__declspec(naked) void FUN_0048ba50(void)
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
        jz      L_bb4c
        test    ebp, ebp
        jbe     L_bb38
        push    esi
        lea     eax, [ebp + ebp*2]
        shl     eax, 0x4
        push    edi
        push    eax
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      L_baa7
        lea     eax, [ebp - 1]
        test    eax, eax
        mov     esi, edi
        jl      L_baa9
        lea     ebx, [eax + 1]
L_ba94:
        mov     ecx, esi
        call    FUN_00491d50
        add     esi, 0x30
        dec     ebx
        jnz     L_ba94
        mov     ebx, dword ptr [esp + 0x10]
        jmp     L_baa9
L_baa7:
        xor     edi, edi
L_baa9:
        mov     esi, dword ptr [ebx]
        test    esi, esi
        jz      L_bb2b
        mov     edx, dword ptr [ebx + 0x4]
        cmp     ebp, edx
        jnc     L_bab8
        mov     edx, ebp
L_bab8:
        mov     ecx, edx
        dec     edx
        test    ecx, ecx
        jz      L_bb22
        lea     ecx, [edx + edx*2]
        shl     ecx, 0x4
        lea     eax, [ecx + esi]
        lea     ecx, [ecx + edi + 0x8]
        inc     edx
L_bacd:
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
        mov     ebx, dword ptr [eax + 0x20]
        mov     dword ptr [ecx + 0x18], ebx
        mov     ebx, dword ptr [eax + 0x24]
        mov     dword ptr [ecx + 0x1c], ebx
        mov     ebx, dword ptr [eax + 0x28]
        mov     dword ptr [ecx + 0x20], ebx
        mov     ebx, dword ptr [eax + 0x2c]
        mov     dword ptr [ecx + 0x24], ebx
        dec     edx
        sub     eax, 0x30
        sub     ecx, 0x30
        test    edx, edx
        ja      L_bacd
        mov     ebx, dword ptr [esp + 0x10]
L_bb22:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_bb2b:
        mov     dword ptr [ebx], edi
        pop     edi
        pop     esi
        mov     dword ptr [ebx + 0x4], ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
L_bb38:
        mov     edx, dword ptr [ebx]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx], 0x0
        mov     dword ptr [ebx + 0x4], ebp
L_bb4c:
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
