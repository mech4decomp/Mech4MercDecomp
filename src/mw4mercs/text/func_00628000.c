/*
 * FUN_00628000 (580 B) — Transforms 8 3-float vectors through a 4x4
 * matrix (row-major, 0x30-byte stride) and computes min/max extents,
 * clamping against world bounds.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;
extern float g_76d064;
extern float g_78d064;

__declspec(naked) void __stdcall FUN_00628000(int a, int b, int c, float *d, float *e)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x80
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        fld     dword ptr [eax]
        fsub    dword ptr [ecx]
        push    esi
        mov     dword ptr [ebp - 0xc], 0xbf800000
        mov     dword ptr [ebp - 0x4], 0xbf800000
        fst     dword ptr [ebp - 0x2c]
        mov     dword ptr [ebp - 0x8], 0x40000000
        fst     dword ptr [ebp - 0x50]
        mov     dword ptr [ebp + 0x10], 0x40000000
        fst     dword ptr [ebp - 0x5c]
        mov     esi, 0x8
        fstp    dword ptr [ebp - 0x80]
        fld     dword ptr [eax]
        fadd    dword ptr [ecx]
        fst     dword ptr [ebp - 0x38]
        fst     dword ptr [ebp - 0x44]
        fst     dword ptr [ebp - 0x68]
        fstp    dword ptr [ebp - 0x74]
        fld     dword ptr [eax + 0x4]
        fsub    dword ptr [ecx + 0x4]
        fst     dword ptr [ebp - 0x34]
        fst     dword ptr [ebp - 0x28]
        fst     dword ptr [ebp - 0x58]
        fstp    dword ptr [ebp - 0x64]
        fld     dword ptr [ecx + 0x4]
        fadd    dword ptr [eax + 0x4]
        fst     dword ptr [ebp - 0x40]
        fst     dword ptr [ebp - 0x4c]
        fst     dword ptr [ebp - 0x70]
        fstp    dword ptr [ebp - 0x7c]
        fld     dword ptr [eax + 0x8]
        fsub    dword ptr [ecx + 0x8]
        fst     dword ptr [ebp - 0x54]
        fst     dword ptr [ebp - 0x60]
        fst     dword ptr [ebp - 0x6c]
        fstp    dword ptr [ebp - 0x78]
        fld     dword ptr [ecx + 0x8]
        lea     ecx, [ebp - 0x20]
        fadd    dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp + 0x8]
        add     eax, 0xb4
        mov     dword ptr [ebp + 0x8], ecx
        fst     dword ptr [ebp - 0x24]
        mov     dword ptr [ebp - 0x10], eax
        fst     dword ptr [ebp - 0x30]
        lea     ecx, [ebp - 0x80]
        fst     dword ptr [ebp - 0x3c]
        fstp    dword ptr [ebp - 0x48]
        mov     dword ptr [ebp + 0xc], ecx
loc_6280ad:
        mov     edx, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ebp + 0xc]
        fld     dword ptr [eax]
        fld     dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp + 0x8]
        fld     dword ptr [edx + 0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx + 0x38]
        fmul    st(0), st(2)
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
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
        fld     dword ptr [ebp - 0x20]
        fdiv    dword ptr [ebp - 0x14]
        fst     dword ptr [ebp + 0xc]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0); MSVC6 inserts 9B WAIT */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 01); MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      loc_62815e
        mov     dword ptr [ebp + 0xc], 0x0
        jmp     loc_628175
loc_62815e:
        fld     dword ptr [ebp + 0xc]
        fcomp   dword ptr [g_76d064]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 41); MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     loc_628175
        mov     dword ptr [ebp + 0xc], 0x3f800000
loc_628175:
        fld     dword ptr [ebp - 0x1c]
        fdiv    dword ptr [ebp - 0x14]
        fcom    dword ptr [g_76c5b0]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz      loc_628192
        fstp    st(0)
        fld     dword ptr [g_76c5b0]
        jmp     loc_6281a7
loc_628192:
        fcom    dword ptr [g_76d064]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jnz     loc_6281a7
        fstp    st(0)
        fld     dword ptr [g_76d064]
loc_6281a7:
        fld     dword ptr [ebp - 0xc]
        fcomp   dword ptr [ebp + 0xc]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz      loc_6281ba
        mov     edx, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp - 0xc], edx
loc_6281ba:
        fld     dword ptr [ebp - 0x8]
        fcomp   dword ptr [ebp + 0xc]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jnz     loc_6281cd
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp - 0x8], eax
loc_6281cd:
        fld     dword ptr [ebp - 0x4]
        fcomp
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz      loc_6281dc
        fst     dword ptr [ebp - 0x4]
loc_6281dc:
        fld     dword ptr [ebp + 0x10]
        fcomp
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jnz     loc_6281ed
        fstp    dword ptr [ebp + 0x10]
        jmp     loc_6281ef
loc_6281ed:
        fstp    st(0)
loc_6281ef:
        add     ecx, 0xc
        dec     esi
        __emit 0x0F /* __emit: backward jnz loc_6280ad; MSVC6 miscomputes rel (B7 vs ref B4) */
        __emit 0x85
        __emit 0xB4
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
        fld     dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0x18]
        fsub    dword ptr [ebp - 0x4]
        mov     edx, dword ptr [ebp + 0x14]
        pop     esi
        fst     dword ptr [ebp + 0xc]
        fstp    dword ptr [ecx]
        fld     dword ptr [ebp - 0x8]
        fsub    dword ptr [ebp - 0xc]
        fld     st(0)
        fstp    dword ptr [edx]
        fld     dword ptr [ebp + 0xc]
        fcomp   dword ptr [g_78d064]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jnz     loc_62822b
        mov     dword ptr [ecx], 0xbd4ccccd
loc_62822b:
        fcomp   dword ptr [g_78d064]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        jnz     loc_62823e
        mov     dword ptr [edx], 0xbd4ccccd
loc_62823e:
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}
