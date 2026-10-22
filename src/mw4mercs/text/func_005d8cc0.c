/*
 * FUN_005d8cc0 (870 B) — Rail graph path check: compute grid-cell
 * direction from two points, walk a line of cells checking connectivity
 * flags via FUN_005d8c20. Heavy FPU math. RET 0x18.
 *
 * __thiscall (ECX = this), six stack params, RET 0x18.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_005d8cc0(void *this)
{
    

extern int DAT_0076c5b0;
extern int DAT_0076d598;
extern int DAT_0076d970;
extern void __cdecl FUN_0075da40(void);
extern int DAT_0076d5f4;
extern int DAT_0076d3c8;
extern void __cdecl FUN_0075d975(void);
extern void __cdecl FUN_0075d8d2(void);
extern void __cdecl FUN_0075d8c4(void);
extern void __cdecl FUN_0075d862(void);
extern void __cdecl FUN_0075d857(void);
extern void __cdecl FUN_1005d891e(void);
extern void __cdecl FUN_1005d88f3(void);
__asm {
sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     ecx, edx
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, 0x66666667
        imul    edx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     ebx, edx
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, 0x66666667
        imul    edx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        push    edi
        mov     edi, edx
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, 0x66666667
        imul    edx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     ecx, edi
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x24], edx
        jnz     L8D43
        cmp     ebx, edx
        jz      L901A
L8D43:
        fild    dword ptr [esp + 0x1c]
        fild    dword ptr [esp + 0x20]
        fsub    st, st(1)
        fild    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        fild    dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x1c]
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L8D7C
        fld     st(0)
        fmul dword ptr [DAT_0076d598]
        fstp    dword ptr [esp + 0x20]
        jmp     L8D80
L8D7C:
        fst     dword ptr [esp + 0x20]
L8D80:
        fld     dword ptr [esp + 0x1c]
        fcomp dword ptr [DAT_0076c5b0]
        fld     dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x1
        jz      L8D9B
        fmul dword ptr [DAT_0076d598]
L8D9B:
        fld     dword ptr [esp + 0x20]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jnz     L8E75
        fstp    st(0)
        fld     dword ptr [esp + 0x1c]
        fdiv    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x1c]
        fcom qword ptr [DAT_0076d970]
        fld     st(0)
        fnstsw  ax
        test    ah, 0x1
        jz      L8DCF
        fmul dword ptr [DAT_0076d598]
L8DCF:
        call FUN_0075da40
        fcomp dword ptr [DAT_0076c5b0]
        mov     dword ptr [esp + 0x28], eax
        fnstsw  ax
        test    ah, 0x1
        jz      L8E08
        fld     dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x24], 0xbf800000
        fcomp dword ptr [DAT_0076d5f4]
        fnstsw  ax
        test    ah, 0x1
        jz      L8E50
        mov     ebx, 0x7
        jmp     L8F2D
L8E08:
        fld     dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x24], 0x3f800000
        fcomp dword ptr [DAT_0076d5f4]
        fnstsw  ax
        test    ah, 0x1
        jz      L8E2B
        mov     ebx, 0x1
        jmp     L8F2D
L8E2B:
        fld     dword ptr [esp + 0x1c]
        fcomp dword ptr [DAT_0076d3c8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L8E46
        mov     ebx, 0x3
        jmp     L8F2D
L8E46:
        mov     ebx, 0x2
        jmp     L8F2D
L8E50:
        fld     dword ptr [esp + 0x1c]
        fcomp dword ptr [DAT_0076d3c8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L8E6B
        mov     ebx, 0x5
        jmp     L8F2D
L8E6B:
        mov     ebx, 0x6
        jmp     L8F2D
L8E75:
        fxch
        fdiv    st, st(1)
        fstp    dword ptr [esp + 0x24]
        fstp    st(0)
        fld     dword ptr [esp + 0x1c]
        fcomp qword ptr [DAT_0076d970]
        fld     dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x1
        jz      L8E9A
        fmul dword ptr [DAT_0076d598]
L8E9A:
        call FUN_0075d975
        fld     dword ptr [esp + 0x1c]
        fcomp dword ptr [DAT_0076c5b0]
        mov     dword ptr [esp + 0x28], eax
        fnstsw  ax
        test    ah, 0x1
        jz      L8ED4
        fld     dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x1c], 0xbf800000
        fcomp dword ptr [DAT_0076d5f4]
        fnstsw  ax
        test    ah, 0x1
        jz      L8F13
        mov     ebx, 0x7
        jmp     L8F2D
L8ED4:
        fld     dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x1c], 0x3f800000
        fcomp dword ptr [DAT_0076d5f4]
        fnstsw  ax
        test    ah, 0x1
        jz      L8EF4
        mov     ebx, 0x5
        jmp     L8F2D
L8EF4:
        fld     dword ptr [esp + 0x24]
        fcomp dword ptr [DAT_0076d3c8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L8F0C
        mov     ebx, 0x3
        jmp     L8F2D
L8F0C:
        mov     ebx, 0x4
        jmp     L8F2D
L8F13:
        fld     dword ptr [esp + 0x24]
        fcomp dword ptr [DAT_0076d3c8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L8F2B
        mov     ebx, 0x1
        jmp     L8F2D
L8F2B:
        xor     ebx, ebx
L8F2D:
        mov     ecx, dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x10], ecx
        fld     dword ptr [esp + 0x10]
        call FUN_0075d8d2
        fld     dword ptr [esp + 0x20]
        mov     edi, eax
        shl     edi, 0x9
        call FUN_0075d8c4
        mov     edx, dword ptr [esi + 0x3c]
        add     edi, eax
        mov     eax, dword ptr [edx + 0x8]
        test    byte ptr [eax + edi*2 + 0x40200], 0x80
        jz      L8F6E
L8F62:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x8
        ret     0x18
L8F6E:
        mov     eax, dword ptr [esp + 0x28]
        test    eax, eax
        jz      L901A
        mov     esi, dword ptr [esp + 0x2c]
        and     esi, 0xffff
        mov     dword ptr [esp + 0x2c], esi
L8F88:
        fld     dword ptr [esp + 0x20]
        mov     edi, dword ptr [esp + 0x28]
        fadd    dword ptr [esp + 0x24]
        dec     edi
        mov     dword ptr [esp + 0x28], edi
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x20]
        call FUN_0075d862
        fld     dword ptr [esp + 0x10]
        mov     edi, eax
        call FUN_0075d857
        mov     ecx, dword ptr [esp + 0x14]
        push    esi
        push    ebx
        mov     ebp, eax
        push    ebp
        push    edi
        call FUN_1005d891e
        test    al, al
        jz      L8F62
        mov     al, byte ptr [esp + 0x30]
        test    al, al
        jz      L900E
        mov     esi, 0x7b552c
L8FDD:
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    ebx
        add     edx, ebp
        push    edx
        add     eax, edi
        push    eax
        call FUN_1005d88f3
        test    al, al
        jz      L8F62
        add     esi, 0x8
        cmp     esi, 0x7b556c
        jl      L8FDD
        mov     esi, dword ptr [esp + 0x2c]
L900E:
        mov     eax, dword ptr [esp + 0x28]
        test    eax, eax
        jnz     L8F88
L901A:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x8
        ret     0x18
    }


}
