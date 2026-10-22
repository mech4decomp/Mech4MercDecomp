/*
 * FUN_005d6060 (613 B) — __thiscall, RET 4 (1 stack param).
 *
 * Computes a target position update with heavy FPU math (distance,
 * normalization, scaling) and stores the result into this->[0x444..0x44c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00419480(void *a);
extern void __stdcall FUN_0040c410(void *a);
extern void __stdcall FUN_00417d80(void *a, void *b);
extern void __stdcall FUN_00428730(void *a);
extern void __stdcall FUN_0040cb00(void);

__declspec(naked) void __stdcall FUN_005d6060(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_007b220c;
extern int DAT_0076d064;
extern int DAT_0077d0fc;
extern int DAT_0078816c;
extern int DAT_0076e1f0;
extern int DAT_0076f5d8;
extern int DAT_00788168;
extern int DAT_00788164;
extern int DAT_0076d598;
__asm {
sub     esp, 0x64
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x450]
        xor     ebx, ebx
        cmp     eax, ebx
        push    edi
        jz      L_6081
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x64
        ret     4

L_6081:
        mov     ebp, dword ptr [esp + 0x78]
        mov     eax, dword ptr [ebp + 0x514]
        cmp     eax, ebx
        jz      L_6097
        cmp     eax, esi
        jnz     L_62b9

L_6097:
        mov     eax, dword ptr [esi + 0x35c]
        fld     dword ptr [eax + 0x440]
        mov     byte ptr [esi + 0x458], bl
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_60bd
        mov     byte ptr [esi + 0x458], 0x1
L_60bd:
        mov     ecx, dword ptr [ebp + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [esi + 0x4d8], bl
        mov     dword ptr [esi + 0x454], ebp
        call    FUN_00419480
        lea     edx, [esp + 0x28]
        lea     edi, [esi + 0x438]
        push    edx
        mov     ecx, edi
        call    FUN_0040c410
        mov     ecx, dword ptr [esi + 0x454]
        mov     eax, dword ptr [ecx + 0x128]
        cmp     eax, ebx
        jnz     L_6107
        mov     eax, dword ptr [ecx + 0x124]
L_6107:
        mov     ecx, dword ptr [ebp + 0xd8]
        add     ecx, 0x80
        push    ecx
        add     eax, 0x10
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_00417d80
        mov     edx, dword ptr [esp + 0x70]
        lea     ebx, [esi + 0x444]
        push    edi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x7c], edx
        call    FUN_0040c410
        mov     ecx, dword ptr [esi + 0x454]
        mov     ecx, dword ptr [ecx + 0xd8]
        lea     eax, [esp + 0x1c]
        push    eax
        add     ecx, 0x80
        call    FUN_00428730
        mov     eax, dword ptr [esi + 0x35c]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        fsub    dword ptr [edi]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x2c], edx
        fstp    dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x30], eax
        fld     dword ptr [esp + 0x2c]
        fsub    dword ptr [edi + 0x4]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x30]
        fsub    dword ptr [edi + 0x8]
        fst     dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x14]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x10]
        faddp   st(1), st
        fabs
        fstp    st(2)
        fstp    st(0)
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_61cc
        fld dword ptr [DAT_0076c5b0]
        jmp     L_61f9

L_61cc:
        lea     ecx, [esp + 0x10]
        call    FUN_0040cb00
        fsqrt
        fdivr dword ptr [DAT_0076d064]
        fld     st(0)
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x1c]
        faddp   st(1), st

L_61f9:
        mov     eax, dword ptr [esi + 0x35c]
        fld     dword ptr [eax + 0x440]
        fmul dword ptr [DAT_0077d0fc]
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_621a
        fchs
L_621a:
        fcomp dword ptr [DAT_0078816c]
        fld     dword ptr [esp + 0x78]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_6233
        fmul dword ptr [DAT_0076e1f0]
        jmp     L_6239
L_6233:
        fmul dword ptr [DAT_0076f5d8]
L_6239:
        fld     st(0)
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x20]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x18]
        fcom dword ptr [DAT_00788168]
        fnstsw  ax
        test    ah, 0x41
        jz      L_626a
        fstp    st(0)
        fld     dword ptr [esp + 0x10]
        jmp     L_628f
L_626a:
        fcomp dword ptr [DAT_00788164]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_62b9
        fld     dword ptr [esp + 0x10]
        fmul dword ptr [DAT_0076d598]
        fld     dword ptr [esp + 0x18]
        fmul dword ptr [DAT_0076d598]
        fstp    dword ptr [esp + 0x18]
L_628f:
        fadd    dword ptr [edi]
        mov     dword ptr [ebp + 0x514], esi
        mov     al, 0x1
        fstp    dword ptr [ebx]
        fld     dword ptr [esp + 0x14]
        fadd    dword ptr [edi + 0x4]
        fstp    dword ptr [ebx + 0x4]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [edi + 0x8]
        pop     edi
        pop     esi
        pop     ebp
        fstp    dword ptr [ebx + 0x8]
        pop     ebx
        add     esp, 0x64
        ret     4

L_62b9:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x64
        ret     4
    }


}
