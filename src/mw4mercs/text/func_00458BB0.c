/*
 * FUN_00458BB0 (194 B) — computes a per-element flag array using dot products
 * and calls a virtual method.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7d98fc;
extern float g_76c5b0;
extern void __cdecl FUN_00458c80(void);

__declspec(naked) void FUN_00458BB0(void)
{
    __asm {
        sub     esp, 8
        push    ebp
        mov     ebp, ecx
        mov     edx, dword ptr [ebp+0x58]
        xor     eax, eax
        cmp     edx, eax
        mov     dword ptr [esp+4], eax
        jg      L_8bcd
        mov     byte ptr [ebp+0x10], al
        pop     ebp
        add     esp, 8
        ret     8
    L_8bcd:
        mov     ecx, dword ptr [ebp+0x5c]
        push    ebx
        mov     eax, edx
        shl     eax, 4
        push    esi
        lea     esi, [eax+ecx-0x10]
        mov     eax, dword ptr [g_7d98fc]
        push    edi
        mov     edi, dword ptr [eax]
        test    byte ptr [ebp+0x28], 0x10
        mov     dword ptr [esp+0x14], edi
        jne     L_8bfb
        mov     ecx, ebp
        call    FUN_00458c80
        mov     ebx, 1
        jmp     L_8c58
    L_8bfb:
        mov     ecx, edx
        mov     ebx, ecx
        shr     ecx, 2
        xor     eax, eax
        rep stosd
        mov     ecx, ebx
        and     ecx, 3
        rep stosb
        lea     ecx, [edx-1]
        test    ecx, ecx
        jl      L_8c54
        mov     edx, dword ptr [esp+0x1c]
        mov     ebx, dword ptr [esp+0x10]
        mov     edi, dword ptr [esp+0x14]
    L_8c20:
        fld     dword ptr [esi+4]
        fmul    dword ptr [edx+4]
        fld     dword ptr [esi+8]
        fmul    dword ptr [edx+8]
        faddp   st(1), st(0)
        fld     dword ptr [esi]
        fmul    dword ptr [edx]
        faddp   st(1), st(0)
        fsub    dword ptr [esi+0xc]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jne     L_8c4c
        mov     ebx, 1
        mov     byte ptr [ecx+edi], bl
    L_8c4c:
        sub     esi, 0x10
        dec     ecx
        jns     L_8c20
        jmp     L_8c58
    L_8c54:
        mov     ebx, dword ptr [esp+0x10]
    L_8c58:
        mov     edx, dword ptr [ebp]
        mov     ecx, ebp
        mov     byte ptr [ebp+0x10], bl
        call    dword ptr [edx+0x98]
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        pop     ebp
        add     esp, 8
        ret     8
    }
}
