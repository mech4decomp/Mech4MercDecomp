/*
 * FUN_0048bb60 (171 B) — MLR grow-array helper (__thiscall, RET 0x4).
 * Reallocates a 0x20-byte-element array (with a leading count header),
 * initializing new elements via FUN_004911e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void* __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004911e0(void);

__declspec(naked) void FUN_0048bb60(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x4]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        cmp     edi, eax
        mov     dword ptr [esp + 0xc], esi
        jz      L_bc04
        mov     eax, dword ptr [esi]
        xor     ebx, ebx
        cmp     edi, ebx
        jbe     L_bbee
        cmp     eax, ebx
        jz      L_bb95
        mov     ecx, dword ptr [eax - 0x4]
        add     eax, -0x4
        push    eax
        dec     ecx
        call    FUN_004084e0
        add     esp, 0x4
L_bb95:
        mov     eax, edi
        shl     eax, 0x5
        add     eax, 0x4
        push    eax
        mov     dword ptr [esi + 0x4], edi
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_bc02
        push    ebp
        lea     ebp, [eax + 0x4]
        mov     dword ptr [eax], edi
        lea     eax, [edi - 1]
        cmp     eax, ebx
        mov     esi, ebp
        jl      L_bbde
        lea     edi, [eax + 1]
L_bbbf:
        mov     ecx, esi
        call    FUN_004911e0
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi + 0x10], ebx
        mov     dword ptr [esi + 0x14], ebx
        mov     dword ptr [esi + 0x18], ebx
        mov     dword ptr [esi + 0x1c], ebx
        mov     dword ptr [esi + 0x8], ebx
        add     esi, 0x20
        dec     edi
        jnz     L_bbbf
L_bbde:
        mov     esi, dword ptr [esp + 0x10]
        mov     ebx, ebp
        pop     ebp
        pop     edi
        mov     dword ptr [esi], ebx
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x4
L_bbee:
        cmp     eax, ebx
        jz      L_bc02
        mov     ecx, dword ptr [eax - 0x4]
        add     eax, -0x4
        push    eax
        dec     ecx
        call    FUN_004084e0
        add     esp, 0x4
L_bc02:
        mov     dword ptr [esi], ebx
L_bc04:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
