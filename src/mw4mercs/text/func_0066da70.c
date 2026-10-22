/*
 * FUN_0066DA70 (1332 B) — __thiscall (ECX = this), RET 0x8 (two double args
 * at [EBP+8]/[EBP+0xc]). GameData update/validation routine with two loops
 * and a large repetitive per-key block.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0066d9e0(void);
extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_00641010(void);

extern double _DAT_0076d970;   /* 0x0076d970 */
extern double _DAT_0077eca8;   /* 0x0077eca8 */
extern double _DAT_0078d0c0;   /* 0x0078d0c0 */
extern float  _DAT_0079719c;   /* 0x0079719c */
extern float  _DAT_00797148;   /* 0x00797148 */
extern float  _DAT_0078b7a4;   /* 0x0078b7a4 */
extern float  _DAT_0076d070;   /* 0x0076d070 */
extern float  _DAT_00770168;   /* 0x00770168 */
extern float  _DAT_00797198;   /* 0x00797198 */
extern float  _DAT_007880f8;   /* 0x007880f8 */

__declspec(naked) void __fastcall FUN_0066da70(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xac
        push    ebx
        push    esi
        mov     esi, ecx
        fld     qword ptr [esi + 0x50]
        push    edi
        fcomp   qword ptr [_DAT_0076d970]
        fnstsw  ax
        test    ah, 0x40
        jz      l_66da9d
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [esi + 0x50], eax
        mov     dword ptr [esi + 0x54], ecx
l_66da9d:
        fld     qword ptr [esi + 0x90]
        fcomp   qword ptr [_DAT_0076d970]
        fnstsw  ax
        test    ah, 0x40
        jz      l_66dac2
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [esi + 0x90], edx
        mov     dword ptr [esi + 0x94], eax
l_66dac2:
        fld     qword ptr [esi + 0x90]
        fcomp   qword ptr [ebp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      l_66db2e
        lea     edi, [esi + 0xa8]
        lea     ebx, [esi + 0xac]
l_66dade:
        push    0x0
        push    edi
        mov     ecx, esi
        call    FUN_0066d9e0
        push    0x0
        push    ebx
        mov     ecx, esi
        call    FUN_0066d9e0
        push    0x0
        lea     eax, [esi + 0xb0]
        push    eax
        mov     ecx, esi
        call    FUN_0066d9e0
        push    0x0
        lea     eax, [esi + 0xb4]
        push    eax
        mov     ecx, esi
        call    FUN_0066d9e0
        fld     qword ptr [esi + 0x90]
        fadd    qword ptr [_DAT_0077eca8]
        fst     qword ptr [esi + 0x90]
        fcomp   qword ptr [ebp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_66dade
l_66db2e:
        fld     qword ptr [esi + 0x50]
        fcomp   qword ptr [ebp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      l_66df8f
l_66db3f:
        fld     dword ptr [esi + 0x58]
        fadd    dword ptr [_DAT_0079719c]
        fst     dword ptr [esi + 0x58]
        fld     dword ptr [_DAT_00797148]
        fadd    st(0), st(0)
        fxch
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jnz     l_66db65
        xor     ebx, ebx
        mov     dword ptr [esi + 0x58], ebx
        jmp     l_66db67
l_66db65:
        xor     ebx, ebx
l_66db67:
        cmp     dword ptr [esi + 0x7c], ebx
        jz      l_66df60
        cmp     dword ptr [esi + 0x70], ebx
        jz      l_66decc
        fld     dword ptr [esi + 0x6c]
        fsub    dword ptr [_DAT_0078b7a4]
        fst     dword ptr [esi + 0x6c]
        fcomp   dword ptr [_DAT_0076d070]
        fnstsw  ax
        test    ah, 0x1
        jz      l_66db99
        mov     dword ptr [esi + 0x6c], 0x3f000000
l_66db99:
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x5c]
        lea     edi, [esi + 0x38]
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x2
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x48]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x28], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, dword ptr [edx]
        jz      l_66dbda
        mov     ecx, dword ptr [esp + 0xc]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_66dc17
l_66dbda:
        lea     edx, [esp + 0x28]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x90]
        mov     dword ptr [esp + 0x30], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x2c]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x8c]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x24], eax
l_66dc17:
        fld     dword ptr [esi + 0x6c]
        mov     eax, dword ptr [eax + 0x14]
        fstp    dword ptr [eax + 0x30]
        fld     dword ptr [esi + 0x6c]
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x54]
        fstp    dword ptr [eax + 0x34]
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x3
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x78]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [edx]
        jz      l_66dc64
        mov     ecx, dword ptr [esp + 0xc]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_66dc9e
l_66dc64:
        lea     edx, [esp + 0x30]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0xa0]
        mov     dword ptr [esp + 0x38], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x48]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x18], eax
l_66dc9e:
        fld     dword ptr [esi + 0x6c]
        mov     eax, dword ptr [eax + 0x14]
        fstp    dword ptr [eax + 0x30]
        fld     dword ptr [esi + 0x6c]
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x84]
        fstp    dword ptr [eax + 0x34]
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x4
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x60]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x24], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, dword ptr [edx]
        jz      l_66dcee
        mov     ecx, dword ptr [esp + 0xc]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_66dd28
l_66dcee:
        lea     edx, [esp + 0x38]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0xb0]
        mov     dword ptr [esp + 0x40], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x28]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x7c]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x20], eax
l_66dd28:
        fld     dword ptr [esi + 0x6c]
        mov     eax, dword ptr [eax + 0x14]
        fstp    dword ptr [eax + 0x30]
        fld     dword ptr [esi + 0x6c]
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x6c]
        fstp    dword ptr [eax + 0x34]
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x5
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x7c]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edx]
        jz      l_66dd75
        mov     ecx, dword ptr [esp + 0xc]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_66ddaf
l_66dd75:
        lea     edx, [esp + 0x2c]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x98]
        mov     dword ptr [esp + 0x34], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x1c]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x78]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x14], eax
l_66ddaf:
        fld     dword ptr [esi + 0x6c]
        mov     eax, dword ptr [eax + 0x14]
        fstp    dword ptr [eax + 0x30]
        fld     dword ptr [esi + 0x6c]
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x48]
        fstp    dword ptr [eax + 0x34]
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x6
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x4c]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, dword ptr [edx]
        jz      l_66ddfc
        mov     ecx, dword ptr [esp + 0xc]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_66de36
l_66ddfc:
        lea     edx, [esp + 0x34]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0xa8]
        mov     dword ptr [esp + 0x3c], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x24]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x5c]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x1c], eax
l_66de36:
        fld     dword ptr [esi + 0x6c]
        mov     eax, dword ptr [eax + 0x14]
        fstp    dword ptr [eax + 0x30]
        fld     dword ptr [esi + 0x6c]
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x60]
        fstp    dword ptr [eax + 0x34]
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x7
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x64]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [edx]
        jz      l_66de83
        mov     ecx, dword ptr [esp + 0xc]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_66debd
l_66de83:
        lea     edx, [esp + 0x3c]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0xb8]
        mov     dword ptr [esp + 0x44], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x18]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x74]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x10], eax
l_66debd:
        fld     dword ptr [esi + 0x6c]
        mov     eax, dword ptr [eax + 0x14]
        fstp    dword ptr [eax + 0x30]
        fld     dword ptr [esi + 0x6c]
        fstp    dword ptr [eax + 0x34]
l_66decc:
        fld     dword ptr [_DAT_00797148]
        fmul    dword ptr [_DAT_00770168]
        fmul    dword ptr [_DAT_00797198]
        fadd    dword ptr [esi + 0x74]
        fst     dword ptr [esi + 0x74]
        fld     dword ptr [_DAT_00797148]
        fadd    st(0), st(0)
        fstp    dword ptr [esp + 0xc]
        fcomp   dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_66defe
        mov     dword ptr [esi + 0x74], ebx
l_66defe:
        fld     dword ptr [_DAT_00797148]
        fmul    dword ptr [_DAT_007880f8]
        fmul    dword ptr [_DAT_00797198]
        fsubr   dword ptr [esi + 0x78]
        fst     dword ptr [esi + 0x78]
        fcomp   dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_66df24
        mov     dword ptr [esi + 0x78], ebx
l_66df24:
        mov     eax, dword ptr [esi + 0xb8]
        cmp     eax, 0xd2
        jnc     l_66df60
        add     eax, 0xa
        cmp     eax, 0xd2
        mov     dword ptr [esi + 0xb8], eax
        jbe     l_66df4b
        mov     dword ptr [esi + 0xb8], 0xd2
l_66df4b:
        mov     ecx, dword ptr [esi + 0xb8]
        shl     ecx, 0x18
        add     ecx, 0xffed29
        mov     dword ptr [esi + 0xbc], ecx
l_66df60:
        fld     qword ptr [esi + 0x50]
        fadd    qword ptr [_DAT_0078d0c0]
        fst     qword ptr [esi + 0x50]
        fcomp   qword ptr [ebp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_66db3f
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [esi + 0x2c], edx
        mov     dword ptr [esi + 0x30], eax
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
l_66df8f:
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ebp + 0xc]
        mov     dword ptr [esi + 0x2c], ecx
        pop     edi
        mov     dword ptr [esi + 0x30], edx
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
