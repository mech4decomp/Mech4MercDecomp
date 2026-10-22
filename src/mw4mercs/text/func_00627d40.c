/*
 * FUN_00627D40 (701 B) — ABL point/coordinate transform + clamp/store.
 *
 * __thiscall (ECX = this, RET 0x1c). Transforms a 3D point through a
 * matrix, computes/clamps two scalar coordinates (this->d0/d4), and
 * writes the result into the object at this->field_0x10c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_77d140;
extern float g_76c5b0;
extern float g_76d064;
extern float g_7b220c;
extern float g_76d598;
extern void __cdecl FUN_0048c160(void);
extern void __cdecl FUN_00628000(void);

__declspec(naked) void __fastcall FUN_00627d40(void *this)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        mov     eax, dword ptr [ebp + 0xc]
        fld     dword ptr [eax + 0x4]
        push    esi
        fcomp   dword ptr [g_77d140]
        mov     esi, ecx
        fnstsw  ax
        test    ah, 0x1
        jz      l_627d9a
        mov     esi, dword ptr [esi + 0x10c]
        mov     eax, 0xbf800000
        mov     byte ptr [esi + 0x6c], 0x0
        mov     byte ptr [esi + 0x6d], 0x0
        mov     byte ptr [esi + 0x6e], 0x0
        mov     byte ptr [esi + 0x6f], 0x0
        mov     byte ptr [esi + 0x71], 0x0
        mov     dword ptr [esi + 0x80], eax
        mov     dword ptr [esi + 0x84], eax
        mov     dword ptr [esi + 0x88], eax
        mov     dword ptr [esi + 0x8c], eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x1c
    l_627d9a:
        mov     ecx, dword ptr [ebp + 0x8]
        push    ebx
        push    edi
        mov     edi, dword ptr [ecx + 0x24]
        mov     ecx, edi
        call    dword ptr [edi + 0x1c]
        mov     ebx, dword ptr [edi + 0x26c]
        lea     edx, [edi + 0x284]
        push    edx
        add     edi, 0x80
        push    edi
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x8], ebx
        call    FUN_0048c160
        add     ebx, 0xb4
        lea     eax, [ebp - 0x18]
        mov     dword ptr [ebp - 0x4], ebx
        mov     dword ptr [ebp + 0x8], eax
        mov     edx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp + 0xc]
        fld     dword ptr [eax]
        fld     dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp + 0x8]
        fld     dword ptr [edx + 0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx + 0x38]
        fmul    st(0), st(2)
        fxch
        fadd    dword ptr [edx + 0x3c]
        fld     dword ptr [edx + 0x30]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld     dword ptr [edx + 0x10]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x24]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax + 0x4]
        fadd    dword ptr [edx + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax + 0x8]
        fadd    dword ptr [edx + 0xc]
        fld     dword ptr [edx]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [ebp - 0x18]
        fdiv    dword ptr [ebp - 0xc]
        mov     ecx, 0x3f800000
        fst     dword ptr [esi + 0xd0]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_627e8f
        fstp    st(0)
        mov     dword ptr [esi + 0xd0], 0x0
        jmp     l_627ea2
    l_627e8f:
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_627ea2
        mov     dword ptr [esi + 0xd0], ecx
    l_627ea2:
        fld     dword ptr [esi + 0xd0]
        fmul    dword ptr [g_76d064]
        fsubr   dword ptr [g_76d064]
        fmul    dword ptr [ebp + 0x14]
        fadd    dword ptr [ebp + 0x1c]
        fstp    dword ptr [esi + 0xd0]
        fld     dword ptr [ebp - 0x14]
        fdiv    dword ptr [ebp - 0xc]
        fst     dword ptr [esi + 0xd4]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_627ee7
        fstp    st(0)
        mov     dword ptr [esi + 0xd4], 0x0
        jmp     l_627efa
    l_627ee7:
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_627efa
        mov     dword ptr [esi + 0xd4], ecx
    l_627efa:
        fld     dword ptr [esi + 0xd4]
        mov     ecx, dword ptr [ebp + 0x10]
        fmul    dword ptr [g_76d064]
        fsubr   dword ptr [g_76d064]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ebp + 0x20]
        fstp    dword ptr [esi + 0xd4]
        fld     dword ptr [ecx + 0x8]
        fld     dword ptr [ecx + 0x4]
        fld     dword ptr [ecx]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fcomp   dword ptr [g_7b220c]
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        fstp    st(0)
        jnz     l_627f78
        mov     edx, dword ptr [ebp - 0x8]
        lea     ebx, [esi + 0xd8]
        push    ebx
        lea     edi, [esi + 0xdc]
        push    edi
        push    ecx
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_00628000
        fld     dword ptr [ebp + 0x18]
        fmul    dword ptr [ebx]
        fchs
        fstp    dword ptr [ebx]
        fld     dword ptr [ebp + 0x14]
        fmul    dword ptr [edi]
        fchs
        fstp    dword ptr [edi]
        jmp     l_627f90
    l_627f78:
        lea     edi, [esi + 0xdc]
        lea     ebx, [esi + 0xd8]
        mov     dword ptr [edi], 0x0
        mov     dword ptr [ebx], 0x0
    l_627f90:
        fld     dword ptr [ebx]
        fld     dword ptr [edi]
        pop     edi
        fld     dword ptr [esi + 0xd4]
        pop     ebx
        fld     dword ptr [esi + 0xd0]
        mov     esi, dword ptr [esi + 0x10c]
        fcom    dword ptr [g_76d598]
        mov     byte ptr [esi + 0x6c], 0x0
        mov     byte ptr [esi + 0x6d], 0x0
        mov     byte ptr [esi + 0x6e], 0x0
        mov     byte ptr [esi + 0x6f], 0x0
        fnstsw  ax
        test    ah, 0x40
        jnz     l_627fda
        fld     st(1)
        fcomp   dword ptr [g_76d598]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_627fda
        mov     byte ptr [esi + 0x71], 0x1
        jmp     l_627fde
    l_627fda:
        mov     byte ptr [esi + 0x71], 0x0
    l_627fde:
        fstp    dword ptr [esi + 0x80]
        fstp    dword ptr [esi + 0x84]
        fstp    dword ptr [esi + 0x88]
        fstp    dword ptr [esi + 0x8c]
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x1c
    }
}
