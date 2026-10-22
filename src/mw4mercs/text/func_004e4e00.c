/*
 * FUN_004e4e00 (674 B) — MLR/Adept state-engine update (__thiscall, RET 4).
 * Computes 4 byte results from FPU math on this/global state, compares
 * against stored state, and runs nested loops calling FUN_004e2ee0 /
 * FUN_004154d0 / FUN_004179b0, then FUN_004b5df0 + FUN_004821f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076c5b0;
extern float g_0076d070;
extern float g_0076dd60;
extern float g_007b220c;
extern int   g_007dc728;
extern int   FUN_004e2ee0(int a, int b);
extern void  FUN_004154d0(void);
extern void  FUN_004179b0(void);
extern void  FUN_004b5df0(void);
extern void  FUN_004821f0(void);

__declspec(naked) void FUN_004e4e00(void)
{
    __asm {
        sub     esp, 0x10
        fld     dword ptr [g_0076d064]
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [g_007dc728]
        fdiv    dword ptr [ecx+0x154]
        push    edi
        mov     edi, dword ptr [esp+0x24]
        mov     eax, dword ptr [edi+0x18]
        mov     dword ptr [esp+0x14], eax
        fld     dword ptr [g_0076d064]
        fdiv    dword ptr [ecx+0x158]
        fstp    dword ptr [esp+0x18]
        fld     dword ptr [edi+0x38]
        fld     st(0)
        fsub    dword ptr [edi+0x44]
        fsub    dword ptr [ecx+0x15c]
        fmul    st(0), st(2)
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
                __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_4e4e5c
        fstp    st(0)
        mov     byte ptr [esp+0x10], 0x0
        jmp     L_4e4e74
    L_4e4e5c:
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp+0x1c]
        mov     dl, byte ptr [esp+0x1c]
        mov     byte ptr [esp+0x10], dl
    L_4e4e74:
        fadd    dword ptr [edi+0x44]
        mov     al, byte ptr [ecx+0x150]
        fsub    dword ptr [ecx+0x15c]
        fmul    st(0), st(1)
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp+0x1c]
        mov     bl, byte ptr [esp+0x1c]
        cmp     bl, al
        fstp    st(0)
        mov     byte ptr [esp+0x11], bl
        jc      L_4e4ea9
        dec     al
        mov     byte ptr [esp+0x11], al
    L_4e4ea9:
        fld     dword ptr [esp+0x14]
        fsub    dword ptr [edi+0x44]
        fsub    dword ptr [ecx+0x160]
        fmul    dword ptr [esp+0x18]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
                __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_4e4ed0
        fstp    st(0)
        mov     byte ptr [esp+0x12], 0x0
        jmp     L_4e4ee8
    L_4e4ed0:
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp+0x1c]
        mov     al, byte ptr [esp+0x1c]
        mov     byte ptr [esp+0x12], al
    L_4e4ee8:
        fld     dword ptr [esp+0x14]
        mov     al, byte ptr [ecx+0x151]
        fadd    dword ptr [edi+0x44]
        fsub    dword ptr [ecx+0x160]
        fmul    dword ptr [esp+0x18]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp+0x1c]
        mov     bl, byte ptr [esp+0x1c]
        cmp     bl, al
        mov     byte ptr [esp+0x13], bl
        jc      L_4e4f21
        dec     al
        mov     byte ptr [esp+0x13], al
    L_4e4f21:
        mov     dl, byte ptr [esi+0x14]
        mov     bl, byte ptr [esp+0x10]
        cmp     bl, dl
        jnz     L_4e4f88
        mov     al, byte ptr [esp+0x11]
        cmp     al, byte ptr [esi+0x15]
        jnz     L_4e4f88
        mov     al, byte ptr [esp+0x12]
        cmp     al, byte ptr [esi+0x16]
        jnz     L_4e4f88
        mov     al, byte ptr [esp+0x13]
        cmp     al, byte ptr [esi+0x17]
        jnz     L_4e4f88
        fld     dword ptr [edi+0x3c]
        fcomp   dword ptr [g_007b220c]
        fnstsw  ax
                __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_4e4f5e
        mov     ebx, 0x1
        jmp     L_4e4f60
    L_4e4f5e:
        xor     ebx, ebx
    L_4e4f60:
        mov     eax, dword ptr [esi+0x10]
        fld     dword ptr [eax+0x8]
        fcomp   dword ptr [g_007b220c]
        fnstsw  ax
                __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_4e4f7a
        mov     eax, 0x1
        jmp     L_4e4f7c
    L_4e4f7a:
        xor     eax, eax
    L_4e4f7c:
        xor     eax, ebx
        jz      L_4e5080
        mov     bl, byte ptr [esp+0x10]
    L_4e4f88:
        cmp     dl, 0xff
        jnc     L_4e4ff6
        mov     al, dl
        cmp     al, byte ptr [esi+0x15]
        mov     byte ptr [esp+0x14], al
        ja      L_4e4ff6
    L_4e4f98:
        mov     bl, byte ptr [esi+0x16]
        cmp     bl, byte ptr [esi+0x17]
        mov     byte ptr [esp+0x18], bl
        ja      L_4e4fe5
    L_4e4fa4:
        mov     ebp, dword ptr [esp+0x14]
    L_4e4fa8:
        mov     edx, dword ptr [esp+0x18]
        push    edx
        push    ebp
        call    FUN_004e2ee0
        mov     edi, eax
        lea     eax, [edi+0x170]
        push    eax
        mov     ecx, esi
        call    FUN_004154d0
        mov     al, byte ptr [esi+0x17]
        mov     ecx, dword ptr [g_007dc728]
        inc     bl
        cmp     bl, al
        mov     byte ptr [edi+0x178], 0x1
        mov     byte ptr [esp+0x18], bl
        jbe     L_4e4fa8
        mov     al, byte ptr [esp+0x14]
        mov     edi, dword ptr [esp+0x24]
    L_4e4fe5:
        mov     dl, byte ptr [esi+0x15]
        inc     al
        cmp     al, dl
        mov     byte ptr [esp+0x14], al
        jbe     L_4e4f98
        mov     bl, byte ptr [esp+0x10]
    L_4e4ff6:
        fld     dword ptr [edi+0x3c]
        mov     al, byte ptr [esp+0x12]
        fcomp   dword ptr [g_007b220c]
        mov     dl, byte ptr [esp+0x11]
        mov     byte ptr [esi+0x16], al
        mov     byte ptr [esi+0x15], dl
        mov     dl, byte ptr [esp+0x13]
        fnstsw  ax
        mov     byte ptr [esi+0x14], bl
        mov     byte ptr [esi+0x17], dl
                __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_4e5080
        cmp     bl, byte ptr [esp+0x11]
        mov     byte ptr [esp+0x14], bl
        ja      L_4e5080
    L_4e5028:
        mov     bl, byte ptr [esi+0x16]
        cmp     bl, byte ptr [esi+0x17]
        mov     byte ptr [esp+0x18], bl
        ja      L_4e506f
    L_4e5034:
        mov     ebp, dword ptr [esp+0x14]
    L_4e5038:
        mov     eax, dword ptr [esp+0x18]
        push    eax
        push    ebp
        call    FUN_004e2ee0
        mov     edi, eax
        push    esi
        lea     ecx, [edi+0x170]
        call    FUN_004179b0
        mov     al, byte ptr [esi+0x17]
        mov     ecx, dword ptr [g_007dc728]
        inc     bl
        cmp     bl, al
        mov     byte ptr [edi+0x178], 0x1
        mov     byte ptr [esp+0x18], bl
        jbe     L_4e5038
        mov     edi, dword ptr [esp+0x24]
    L_4e506f:
        mov     al, byte ptr [esp+0x14]
        mov     dl, byte ptr [esi+0x15]
        inc     al
        cmp     al, dl
        mov     byte ptr [esp+0x14], al
        jbe     L_4e5028
    L_4e5080:
        push    edi
        mov     ecx, esi
        call    FUN_004b5df0
        mov     ecx, dword ptr [edi+0x44]
        mov     edx, dword ptr [edi+0x40]
        push    ecx
        mov     ecx, dword ptr [esi+0x10]
        push    edx
        call    FUN_004821f0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x4
    }
}
