/*
 * FUN_0068c880 (758 B) — __thiscall HUD element update/positioning routine.
 * Reads 3 globals (0x7b8ce8/ec/f0), builds a vector via several helper
 * calls, clamps a 2D position against min/max bounds (FPU + fnstsw/test ah),
 * and copies the result into the object. Uses extern data symbols for all
 * absolute-memory FPU/integer operands.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8ce8;
extern int g_007b8cec;
extern int g_007b8cf0;
extern float g_0077016c;
extern float g_0076d048;
extern float g_0080da60;
extern float g_0080da5c;
extern float g_0080da58;
extern float g_0080da54;
extern float g_0077de8c;
extern float g_0076d5ec;
extern int g_007b220c;
extern int g_007dc728;

extern void FUN_0041acb0(void *p);
extern void FUN_00419480(void *p);
extern void FUN_0040c410(void *p);
extern void FUN_0040d560(void *p);
extern int FUN_004e2f40(void *p);
extern void FUN_004e8dc0(int a, void *p);
extern void FUN_0040d030(void *p);
extern void FUN_0040c9e0(void *a, void *b);
extern char __cdecl FUN_0041c540(void *a, void *b, int c);
extern void FUN_00767550(void *p);
extern void FUN_0041a070(void *p);
extern void FUN_004daa20(void *p);

__declspec(naked) void FUN_0068c880(void)
{
    __asm {
        sub     esp, 0xb0
        mov     eax, dword ptr [g_007b8cec]
        mov     edx, dword ptr [g_007b8cf0]
        push    ebx
        mov     ebx, dword ptr [esp + 0xb8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [g_007b8ce8]
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [ebx + 0xd8]
        push    edi
        lea     edi, [eax + 0x80]
        mov     dword ptr [esp + 0x24], ecx
        push    edi
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x30], edx
        call    FUN_0041acb0
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x24], ecx
        push    edi
        lea     ecx, [esp + 0x78]
        mov     dword ptr [esp + 0x2c], eax
        mov     dword ptr [esp + 0x30], edx
        call    FUN_00419480
        push    esi
        lea     ecx, [esp + 0x10]
        call    FUN_0040c410
        push    0x7b8d08
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x58], 0x41a00000
        call    FUN_0040d560
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_0040c410
        fld     dword ptr [esp + 0x78]
        fadd    dword ptr [g_0077016c]
        lea     ecx, [esp + 0x3c]
        lea     eax, [esp + 0x5c]
        mov     dword ptr [esp + 0x5c], ecx
        mov     ecx, dword ptr [g_007dc728]
        fstp    dword ptr [esp + 0x40]
        lea     edx, [esp + 0x80]
        push    eax
        mov     dword ptr [esp + 0x64], edx
        mov     dword ptr [esp + 0x68], 0x0
        mov     dword ptr [esp + 0x70], ebx
        mov     dword ptr [esp + 0x74], 0x1000
        call    FUN_004e2f40
        test    eax, eax
        jz      L1
        mov     edx, dword ptr [esp + 0x54]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    edx
        jmp     L2
L1:
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_0040c410
        fld     dword ptr [esp + 0x78]
        fadd    dword ptr [g_0076d048]
        lea     ecx, [esp + 0x5c]
        push    ecx
        mov     ecx, dword ptr [g_007dc728]
        fstp    dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x58], 0x447a0000
        call    FUN_004e2f40
        test    eax, eax
        jz      L3
        mov     eax, dword ptr [esp + 0x54]
        lea     edx, [esp + 0xc]
        push    edx
        push    eax
        jmp     L2
L3:
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x1c], 0x0
        mov     dword ptr [esp + 0x20], 0x3f800000
        mov     dword ptr [esp + 0x24], 0x0
        call    FUN_0040d560
        mov     ecx, dword ptr [g_007dc728]
        lea     edx, [esp + 0x5c]
        push    edx
        call    FUN_004e2f40
        test    eax, eax
        jz      L4
        mov     ecx, dword ptr [esp + 0x54]
        lea     eax, [esp + 0xc]
        push    eax
        push    ecx
L2:
        lea     ecx, [esp + 0x44]
        call    FUN_004e8dc0
L4:
        mov     al, byte ptr [esi + 0x24]
        test    al, al
        jz      L5
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x28]
        fstp    dword ptr [esp + 0x10]
L5:
        fld     dword ptr [g_0080da60]
        fadd    dword ptr [g_0077de8c]
        fld     dword ptr [esp + 0xc]
        fcomp   st(1)
        __emit 0xDF          /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L6
        fstp    dword ptr [esp + 0xc]
        jmp     L7
L6:
        fstp    st(0)
L7:
        fld     dword ptr [g_0080da5c]
        fadd    dword ptr [g_0077de8c]
        fld     dword ptr [esp + 0x14]
        fcomp   st(1)
        __emit 0xDF          /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L8
        fstp    dword ptr [esp + 0x14]
        jmp     L9
L8:
        fstp    st(0)
L9:
        fld     dword ptr [g_0080da58]
        fsub    dword ptr [g_0077de8c]
        fld     dword ptr [esp + 0xc]
        fcomp   st(1)
        __emit 0xDF          /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L10
        fstp    dword ptr [esp + 0xc]
        jmp     L11
L10:
        fstp    st(0)
L11:
        fld     dword ptr [g_0080da54]
        fsub    dword ptr [g_0077de8c]
        fld     dword ptr [esp + 0x14]
        fcomp   st(1)
        __emit 0xDF          /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L12
        fstp    dword ptr [esp + 0x14]
        jmp     L13
L12:
        fstp    st(0)
L13:
        lea     edx, [esp + 0xc]
        push    edx
        lea     ecx, [esp + 0x90]
        call    FUN_0040d030
        lea     edi, [esi + 0x18]
        push    edi
        add     esi, 0xc
        push    esi
        lea     ecx, [esp + 0x38]
        call    FUN_0040c9e0
        fld     dword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x34]
        mov     eax, dword ptr [g_007b220c]
        fld     dword ptr [esp + 0x38]
        push    eax
        fmul    dword ptr [esp + 0x3c]
        push    0x7b8d68
        push    edi
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x3c]
        fmul    dword ptr [esp + 0x3c]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x64]
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L14
        mov     ecx, dword ptr [g_007b220c]
        push    ecx
        push    0x7b8d68
        push    esi
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L14
        fld     dword ptr [esp + 0x58]
        fcomp   dword ptr [g_0076d5ec]
        __emit 0xDF          /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L14
        push    esi
        lea     ecx, [esp + 0x1c]
        call    FUN_00767550
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x2c], 0x0
L14:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [esi + 0x8]
        mov     dword ptr [edi], ecx
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     ecx, [esp + 0x90]
        mov     dword ptr [edi + 0x4], edx
        mov     dword ptr [edi + 0x8], eax
        call    FUN_0041a070
        lea     edx, [esp + 0x8c]
        push    edx
        mov     ecx, ebx
        call    FUN_004daa20
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xb0
        ret     0x10
    }
}
