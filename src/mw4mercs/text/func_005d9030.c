/*
 * FUN_005d9030 (610 B) — Rail graph line-of-sight check: walk a line of
 * grid cells between two points, verifying connectivity flags. Heavy
 * FPU math + _ftol. RET 0x10.
 *
 * __thiscall (ECX = this), four stack params, RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned int __fastcall FUN_005d9030(void *this)
{
    

extern int DAT_0080da5c;
extern int DAT_00787ebc;
extern void __cdecl FUN_0075dae2(void);
extern int DAT_0080da60;
extern void __cdecl FUN_0075dab1(void);
extern int DAT_0076c5b0;
extern int DAT_0076d598;
extern int DAT_0076d970;
extern void __cdecl FUN_0075da0d(void);
extern void __cdecl FUN_0075d9be(void);
extern void __cdecl FUN_0075d99c(void);
extern void __cdecl FUN_0075d96b(void);
extern void __cdecl FUN_0075d962(void);
extern void __cdecl FUN_0075d954(void);
extern void __cdecl FUN_0075d91c(void);
extern void __cdecl FUN_0075d90e(void);
__asm {
push    ecx
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, 0x66666667
        imul    ecx
        mov     ecx, dword ptr [esp + 0x10]
        sar     edx, 0x3
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        push    ebp
        push    esi
        mov     esi, edx
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x3
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, edx
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x3
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     ecx, edx
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, 0x66666667
        imul    edx
        sar     edx, 0x3
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     esi, ecx
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x20], edx
        jnz     L90EA
        cmp     edi, edx
        jnz     L90EA
        fld dword ptr [DAT_0080da5c]
        fmul dword ptr [DAT_00787ebc]
        call FUN_0075dae2
        fld dword ptr [DAT_0080da60]
        mov     ecx, dword ptr [ebx + 0x40]
        fmul dword ptr [DAT_00787ebc]
        mov     ebx, dword ptr [ecx + 0x8]
        sub     edi, eax
        call FUN_0075dab1
        mov     edx, dword ptr [ebx + edi*4]
        sub     edx, eax
        mov     cl, byte ptr [edx + esi*1]
        pop     edi
        pop     esi
        xor     eax, eax
        test    cl, cl
        pop     ebp
        setz    al
        pop     ebx
        pop     ecx
        ret     0x10
L90EA:
        fild    dword ptr [esp + 0x18]
        fild    dword ptr [esp + 0x1c]
        fsub    st, st(1)
        fild    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x24]
        fild    dword ptr [esp + 0x20]
        fsub    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x18]
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L9123
        fld     st(0)
        fmul dword ptr [DAT_0076d598]
        fstp    dword ptr [esp + 0x1c]
        jmp     L9127
L9123:
        fst     dword ptr [esp + 0x1c]
L9127:
        fld     dword ptr [esp + 0x18]
        fcomp dword ptr [DAT_0076c5b0]
        fld     dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x1
        jz      L9142
        fmul dword ptr [DAT_0076d598]
L9142:
        fld     dword ptr [esp + 0x1c]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jnz     L919C
        fstp    st(0)
        fld     dword ptr [esp + 0x18]
        fdiv    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x18]
        fcom qword ptr [DAT_0076d970]
        fld     st(0)
        fnstsw  ax
        test    ah, 0x1
        jz      L9172
        fmul dword ptr [DAT_0076d598]
L9172:
        call FUN_0075da0d
        fcomp dword ptr [DAT_0076c5b0]
        mov     dword ptr [esp + 0x1c], eax
        fnstsw  ax
        test    ah, 0x1
        jz      L9192
        mov     dword ptr [esp + 0x20], 0xbf800000
        jmp     L91EB
L9192:
        mov     dword ptr [esp + 0x20], 0x3f800000
        jmp     L91EB
L919C:
        fxch
        fdiv    st, st(1)
        fstp    dword ptr [esp + 0x20]
        fstp    st(0)
        fld     dword ptr [esp + 0x18]
        fcomp qword ptr [DAT_0076d970]
        fld     dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x1
        jz      L91C1
        fmul dword ptr [DAT_0076d598]
L91C1:
        call FUN_0075d9be
        fld     dword ptr [esp + 0x18]
        fcomp dword ptr [DAT_0076c5b0]
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x18], 0xbf800000
        fnstsw  ax
        test    ah, 0x1
        jnz     L91EB
        mov     dword ptr [esp + 0x18], 0x3f800000
L91EB:
        fld     dword ptr [esp + 0x24]
        fld dword ptr [DAT_0080da5c]
        fmul dword ptr [DAT_00787ebc]
        call FUN_0075d99c
        fld dword ptr [DAT_0080da60]
        fmul dword ptr [DAT_00787ebc]
        mov     esi, eax
        mov     eax, dword ptr [ebx + 0x40]
        mov     edi, dword ptr [eax + 0x8]
        call FUN_0075d96b
        fld     st(0)
        mov     ebx, eax
        call FUN_0075d962
        fld     st(1)
        sub     eax, esi
        mov     ebp, dword ptr [edi + eax*4]
        sub     ebp, ebx
        call FUN_0075d954
        cmp     byte ptr [eax + ebp*1], 0x0
        jz      L9244
L9236:
        pop     edi
        fstp    st(0)
        pop     esi
        fstp    st(0)
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret     0x10
L9244:
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      L9284
L924C:
        mov     eax, dword ptr [esp + 0x1c]
        fxch
        fadd    dword ptr [esp + 0x20]
        dec     eax
        fxch
        mov     dword ptr [esp + 0x1c], eax
        fadd    dword ptr [esp + 0x18]
        fld     st(0)
        call FUN_0075d91c
        fld     st(1)
        sub     eax, esi
        mov     ebp, dword ptr [edi + eax*4]
        sub     ebp, ebx
        call FUN_0075d90e
        cmp     byte ptr [eax + ebp*1], 0x0
        jnz     L9236
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jnz     L924C
L9284:
        pop     edi
        fstp    st(0)
        pop     esi
        fstp    st(0)
        pop     ebp
        mov     al, 0x1
        pop     ebx
        pop     ecx
        ret     0x10
    }


}
