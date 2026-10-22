/*
 * FUN_004faa50 (415 B) — Adept::Mover object constructor variant
 * (__thiscall, RET 0x8, 2 params). Calls base ctor FUN_004d94d0,
 * initializes sub-objects at +0x1e0/+0x1f8/+0x198/+0x1b0, and branches on
 * the ExecutionState value (+0xe0->+0x14) to call FUN_004fafc0 /
 * FUN_004faed0 or to copy motion state via a virtual call.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d94d0(void);
extern void __cdecl FUN_00767430(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_004fafc0(void);
extern void __cdecl FUN_004faed0(void);

extern float g_0076c5b0;   /* DAT_0076c5b0 */

__declspec(naked) void FUN_004faa50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        sub     esp, 0x60
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x74]
        push    eax
        mov     esi, ecx
        push    edi
        call    FUN_004d94d0
        lea     ebx, [edi + 0x60]
        push    ebx
        lea     ecx, [esi + 0x1e0]
        call    FUN_00767430
        lea     ebp, [edi + 0x78]
        push    ebp
        lea     ecx, [esi + 0x1f8]
        call    FUN_00767430
        fld     dword ptr [edi + 0x50]
        fcomp   dword ptr [g_0076c5b0]
        __emit  0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x41
        jnz     LB61
        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx + 0x14]
        sub     eax, 0x4
        jz      LB4B
        dec     eax
        jnz     LB61
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 0x4]
        mov     ecx, dword ptr [eax + 0x2c]
        mov     edx, dword ptr [eax + 0x30]
        mov     dword ptr [esi + 0x1c8], ecx
        mov     ecx, dword ptr [eax + 0x34]
        mov     dword ptr [esi + 0x1cc], edx
        mov     edx, dword ptr [eax + 0x38]
        mov     dword ptr [esi + 0x1d0], ecx
        mov     ecx, dword ptr [eax + 0x3c]
        mov     dword ptr [esi + 0x1d4], edx
        mov     edx, dword ptr [eax + 0x40]
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        mov     dword ptr [esi + 0x1d8], ecx
        push    eax
        lea     ecx, [esp + 0x44]
        mov     dword ptr [esi + 0x1dc], edx
        call    FUN_004206b0
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     edx, [esi + 0x1b0]
        push    edx
        lea     ecx, [esi + 0x180]
        call    FUN_0041c680
        lea     eax, [esp + 0x40]
        push    eax
        lea     ecx, [esi + 0x1bc]
        push    ecx
        lea     ecx, [esi + 0x18c]
        call    FUN_0041c680
        push    0x0
        call    FUN_00707e70
        sub     esp, 0x8
        mov     ecx, esi
        fstp    qword ptr [esp]
        call    FUN_004fafc0
        jmp     LB79
LB4B:
        push    0x0
        call    FUN_00707e70
        sub     esp, 0x8
        mov     ecx, esi
        fstp    qword ptr [esp]
        call    FUN_004faed0
        jmp     LB79
LB61:
        push    ebx
        lea     ecx, [esi + 0x198]
        call    FUN_00767430
        push    ebp
        lea     ecx, [esi + 0x1b0]
        call    FUN_00767430
LB79:
        lea     edx, [esi + 0xf4]
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_004206b0
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esi + 0x198]
        push    ecx
        lea     ecx, [esi + 0x168]
        call    FUN_0041c680
        lea     edx, [esp + 0x10]
        push    edx
        lea     eax, [esi + 0x1a4]
        push    eax
        lea     ecx, [esi + 0x174]
        call    FUN_0041c680
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esi + 0x1b0]
        push    edx
        lea     ecx, [esi + 0x180]
        call    FUN_0041c680
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esi + 0x1bc]
        push    ecx
        lea     ecx, [esi + 0x18c]
        call    FUN_0041c680
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x60
        ret     0x8
    }
}
