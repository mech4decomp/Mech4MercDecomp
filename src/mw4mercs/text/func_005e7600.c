/*
 * FUN_005e7600 (192 B) — __thiscall, RET 0x4 (1 stack param).
 *
 * State-machine check on this+0x14 vs global 0x007db090+0x28, with
 * FPU distance comparison and virtual dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char FUN_005ef5a0(void);
extern char FUN_005ef7f0(void);
extern double FUN_00707e70(int v);

__declspec(naked) void FUN_005e7600(void)
{
    

extern int DAT_007db090;
extern int DAT_0078235c;
extern int DAT_007704c0;
__asm {
push    esi
        mov     esi, ecx
        mov ecx, dword ptr [DAT_007db090]
        mov     al, byte ptr [esi + 0x14]
        cmp     al, byte ptr [ecx + 0x28]
        jnz     L_41
        mov     ecx, esi
        call    FUN_005ef5a0
        test    al, al
        jz      L_ba
        mov     edx, dword ptr [esi + 0xe0]
        cmp     dword ptr [edx + 0x14], 0x1
        jnz     L_ba
        mov     ecx, esi
        call    FUN_005ef7f0
        test    al, al
        jz      L_ba
        mov     al, 0x1
        pop     esi
        ret     0x4
L_41:
        mov     eax, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [eax + 0x14]
        cmp     eax, 0x7
        jnz     L_a4
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [edx + 0x4]
        push    0x0
        mov     edi, eax
        call    FUN_00707e70
        fsub    qword ptr [esi + 0xec]
        fild    dword ptr [esp + 0xc]
        fmul dword ptr [DAT_0078235c]
        fld     dword ptr [edi + 0x6c]
        fmul dword ptr [DAT_007704c0]
        faddp   st(1), st
        fsubr   dword ptr [edi + 0x6c]
        pop     edi
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      L_99
        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x1
        call    dword ptr [eax + 0x4]
L_99:
        mov     ecx, esi
        call    FUN_005ef7f0
        pop     esi
        ret     0x4
L_a4:
        cmp     eax, 0x1
        jnz     L_ba
        mov     ecx, esi
        call    FUN_005ef7f0
        test    al, al
        jz      L_ba
        mov     al, 0x1
        pop     esi
        ret     0x4
L_ba:
        xor     al, al
        pop     esi
        ret     0x4
    }


}
