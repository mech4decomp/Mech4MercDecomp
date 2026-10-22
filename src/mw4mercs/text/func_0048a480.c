/*
 * FUN_0048a480 (183 B) __thiscall MLR light constructor: builds a
 * normalized light direction vector via FPU math and zeroes a slot array.
 *
 * CFLAGS: /O1
 */

extern float g_007b9468;
extern float g_007b9478;
extern int g_007b946c;
extern float g_007b9488;
extern int g_007b947c;
extern int g_007b948c;
extern float g_0076d064;
extern void __cdecl FUN_004911e0(void);
extern void __cdecl FUN_0041ccb0(void);

__declspec(naked) void FUN_0048a480(void)
{
    __asm {
        sub     esp, 0x10
        push    esi
        mov     esi, ecx
        push    edi
        lea     ecx, [esi+4]
        call    FUN_004911e0
        fld     dword ptr [g_007b9468]
        fld     dword ptr [g_007b9478]
        mov     eax, dword ptr [g_007b946c]
        fstp    dword ptr [esp+0x10]
        fld     dword ptr [g_007b9488]
        mov     ecx, dword ptr [g_007b947c]
        fst     dword ptr [esp+0x14]
        fmul    dword ptr [esp+0x14]
        mov     edx, dword ptr [g_007b948c]
        fld     st(1)
        mov     dword ptr [esi+0x24], 0
        fmul    st(0), st(2)
        mov     dword ptr [esi], 0
        mov     dword ptr [esi+0xc], eax
        mov     dword ptr [esi+0x10], ecx
        faddp   st(1), st(0)
        mov     dword ptr [esi+0x14], edx
        fld     dword ptr [esp+0x10]
        push    0x7b9460
        fmul    dword ptr [esp+0x14]
        lea     ecx, [esi+0x28]
        faddp   st(1), st(0)
        fsqrt
        fdivr   dword ptr [g_0076d064]
        fstp    dword ptr [esp+0xc]
        fmul    dword ptr [esp+0xc]
        fstp    dword ptr [esi+0x18]
        fld     dword ptr [esp+0xc]
        fmul    dword ptr [esp+0x14]
        fstp    dword ptr [esi+0x1c]
        fld     dword ptr [esp+0x18]
        fmul    dword ptr [esp+0xc]
        fstp    dword ptr [esi+0x20]
        call    FUN_0041ccb0
        xor     eax, eax
        lea     edi, [esi+0x98]
        mov     ecx, 8
        rep     stosd
        mov     dword ptr [esi+0xb8], eax
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0x10
        ret
    }
}
