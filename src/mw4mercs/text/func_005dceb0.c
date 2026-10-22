/*
 * FUN_005DCEB0 (305 B) — Iterates over a list of objects (param[0]+8 stepping
 * by 0x38), comparing each against [this+0x170] via virtual method +0x60.
 * Performs various state updates based on FUN_00415230 checks and float
 * comparisons, and may clear *param_3.
 *
 * __thiscall (ECX = this), two stack params, RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __stdcall FUN_00415230(void *arg);
extern float __stdcall FUN_00707E70(int v);
extern void __stdcall FUN_005FB8E0(void *this);

__declspec(naked) void __stdcall FUN_005DCEB0(void *param1, void *param3)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_007f25c0;
extern int DAT_007f268c;
extern int DAT_0076d598;
__asm {
push    ecx
        mov     edx, ecx
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        /* __emit: MSVC6 drops the 0 displacement in mov [esp],edx (89 54 24 00) */
        __emit 0x89
        __emit 0x54
        __emit 0x24
        __emit 0x00
        jbe     early_ret
        push    ebx
        mov     ebx, dword ptr [ecx]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [edx + 0x170]
        add     ebx, 0x8
        mov     dword ptr [esp + 0x18], eax
loop_top:
        test    edi, edi
        jz      LBF
        mov     esi, dword ptr [ebx]
        test    esi, esi
        jz      LBF
        cmp     edi, esi
        jz      LBF
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x60]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     ebp, eax
        call    dword ptr [edx + 0x60]
        cmp     ebp, eax
        jz      L58
        mov eax, dword ptr [DAT_007f25c0]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L58
        mov eax, dword ptr [DAT_007f25c0]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L58
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [edi + 0x440]
        fnstsw ax
        test    ah, 0x41
        jnz     L58
        mov     eax, dword ptr [esi + 0x30]
        mov     ebp, dword ptr [esp + 0x10]
        push    0x0
        mov     dword ptr [ebp + 0x1dc], eax
        call    FUN_00707E70
        fstp    dword ptr [ebp + 0x1e0]
L58:
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     LBF
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     LBF
        mov     al, byte ptr [esi + 0xdc]
        test    al, al
        jnz     LBF
        mov     ecx, edi
        call    FUN_005FB8E0
        fcomp dword ptr [DAT_0076d598]
        fnstsw ax
        test    ah, 0x40
        jnz     LB8
        mov     eax, dword ptr [esi + 0x2fc]
        test    eax, eax
        jnz     LB8
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x60]
        mov     ebp, eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x60]
        cmp     eax, ebp
        jnz     LBF
LB8:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     byte ptr [ecx], 0x0
LBF:
        mov     eax, dword ptr [esp + 0x18]
        add     ebx, 0x38
        dec     eax
        mov     dword ptr [esp + 0x18], eax
        jnz     loop_top
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        pop     ecx
        ret     8
early_ret:
        mov     al, 0x1
        pop     ecx
        ret     8
    }


}
