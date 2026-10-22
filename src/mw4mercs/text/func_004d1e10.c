/*
 * FUN_004d1e10 (149 B) — MLR network subsystem: resize/reinit a short-pair
 * array (renderer table). __thiscall (this=ECX), RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);

__declspec(naked) void FUN_004d1e10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x4]
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, eax
        jz      L_4d1e7f
        test    edi, edi
        jbe     L_4d1e6e
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_4d1e32
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4d1e32:
        lea     eax, [edi*4 + 0]
        push    eax
        mov     dword ptr [esi + 0x4], edi
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4d1e68
        lea     edx, [edi - 1]
        test    edx, edx
        mov     ecx, eax
        jl      L_4d1e6a
        inc     edx
L_4d1e53:
        mov     word ptr [ecx], 0xffff
        mov     word ptr [ecx + 0x2], 0
        add     ecx, 0x4
        dec     edx
        jnz     L_4d1e53
        mov     dword ptr [esi], eax
        jmp     L_4d1e7f
L_4d1e68:
        xor     eax, eax
L_4d1e6a:
        mov     dword ptr [esi], eax
        jmp     L_4d1e7f
L_4d1e6e:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0
L_4d1e7f:
        mov     ecx, dword ptr [esi + 0x4]
        test    ecx, ecx
        jbe     L_4d1ea0
        mov     eax, dword ptr [esp + 0xc]
        mov     dx, word ptr [eax]
        mov     di, word ptr [eax + 0x2]
        mov     eax, dword ptr [esi]
L_4d1e93:
        mov     word ptr [eax], dx
        mov     word ptr [eax + 0x2], di
        add     eax, 0x4
        dec     ecx
        jnz     L_4d1e93
L_4d1ea0:
        pop     edi
        pop     esi
        ret     0x8
    }
}
