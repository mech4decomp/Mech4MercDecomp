/*
 * FUN_006801b0 (217 B) — HUD element update (__thiscall, RET 8).
 * Updates a double position field, a float velocity field, and a
 * per-element array (0x7b5b5c..0x7b5b84) with ftol() rounding.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern float g_007b5b58;
extern float g_007b5b5c;
extern float g_007b5b84;
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_006801b0(void)
{
    __asm {
        push    ecx
        fld     qword ptr [esp+8]
        push    ebx
        fld     st(0)
        push    ebp
        mov     ebp, ecx
        fsub    qword ptr [ebp+0x48]
        xor     ebx, ebx
        fxch
        push    esi
        fstp    qword ptr [ebp+0x48]
        push    edi
        mov     dword ptr [esp+0x18], ebx
        fadd    dword ptr [ebp+0x54]
        fst     dword ptr [esp+0x10]
        fstp    dword ptr [ebp+0x54]
        fld     dword ptr [g_0076c5b0]
        fld     dword ptr [esp+0x10]
        fcomp   dword ptr [g_007b5b58]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0x68020f
        fstp    st(0)
        fld     dword ptr [esp+0x10]
        fdiv    dword ptr [g_007b5b58]
        call    FUN_0075db4a
        mov     dword ptr [esp+0x18], eax
        fild    dword ptr [esp+0x18]
        fmul    dword ptr [g_007b5b58]
        fsubr   dword ptr [esp+0x10]
    L_0x68020f:
        fild    dword ptr [esp+0x18]
        mov     dword ptr [esp+0x10], ebx
        mov     edi, offset g_007b5b5c
        lea     esi, [ebp+0x20]
    L_0x68021f:
        fld     dword ptr [ebp+0x54]
        fmul    dword ptr [edi]
        call    FUN_0075db4a
        cmp     eax, dword ptr [esi]
        jle     L_0x680242
        mov     ecx, ebx
        mov     edx, 1
        shl     edx, cl
        mov     ecx, dword ptr [esp+0x10]
        mov     dword ptr [esi], eax
        or      ecx, edx
        mov     dword ptr [esp+0x10], ecx
    L_0x680242:
        fld     st(0)
        fmul    dword ptr [g_007b5b58]
        fmul    dword ptr [edi]
        call    FUN_0075db4a
        sub     dword ptr [esi], eax
        add     edi, 4
        inc     ebx
        add     esi, 4
        cmp     edi, offset g_007b5b84
        jl      L_0x68021f
        mov     eax, dword ptr [esp+0x18]
        fstp    st(0)
        test    eax, eax
        jz      L_0x68027b
        mov     eax, dword ptr [esp+0x10]
        fstp    dword ptr [ebp+0x54]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
    L_0x68027b:
        mov     eax, dword ptr [esp+0x10]
        fstp    st(0)
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
    }
}
