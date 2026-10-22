/*
 * FUN_005eca90 (155 B) — __thiscall method (ECX = this), RET 4.
 *
 * State check with FPU comparison and vtable dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005ef5a0(void *p);
extern void __stdcall FUN_00707e70(void *p);

__declspec(naked) void __stdcall FUN_005eca90(void *param)
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
        push    edi
        jnz     LAC8
        mov     ecx, esi
        call    FUN_005ef5a0
        test    al, al
        jnz     LAB2
        pop     edi
        pop     esi
        ret     4
LAB2:
        mov     edx, dword ptr [esi + 0xe0]
        mov     ecx, dword ptr [edx + 0x14]
        xor     eax, eax
        cmp     ecx, 0x1
        pop     edi
        setz    al
        pop     esi
        ret     4
LAC8:
        mov     edi, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [edi + 0x14]
        cmp     eax, 0x7
        jnz     LB1C
        push    0x0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0xec]
        fild    dword ptr [esp + 0xc]
        fmul dword ptr [DAT_0078235c]
        fld     dword ptr [esi + 0x1d0]
        fmul dword ptr [DAT_007704c0]
        faddp   st(1), st
        fsubr   dword ptr [esi + 0x1d0]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      LB15
        mov     eax, dword ptr [edi]
        push    0x0
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
LB15:
        pop     edi
        mov     al, 0x1
        pop     esi
        ret     4
LB1C:
        xor     ecx, ecx
        cmp     eax, 0x1
        setz    cl
        pop     edi
        mov     al, cl
        pop     esi
        ret     4
    }


}
