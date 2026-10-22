/*
 * FUN_005b2bb0 (203 B) — __thiscall (ECX=this), RET 4. Vector math:
 * computes a normalized direction from ESI (param) and this's transform,
 * then calls a virtual method and FUN_0075db4a / FUN_005d9030.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0075db4a(void);
extern void FUN_005d9030(void);

__declspec(naked) void FUN_005b2bb0(void)
{
    extern float DAT_0076d064;
    extern double DAT_007860c8;
    extern int DAT_007f2440;
    __asm {
        sub     esp, 0x24
        mov     ecx, dword ptr [ecx + 0x35c]
        mov     eax, dword ptr [ecx + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        push    esi
        mov     esi, dword ptr [esp + 0x2c]
        fld     dword ptr [esi]
        mov     dword ptr [esp + 0x10], edx
        fsub    dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x18], eax
        fld     dword ptr [esi + 0x8]
        mov     edx, dword ptr [ecx + 0x78]
        fsub    dword ptr [esp + 0x18]
        add     ecx, 0x78
        fst     dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x24]
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fsqrt
        fdivr   dword ptr [DAT_0076d064]
        fstp    dword ptr [esp + 0x2c]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0xc]
        call    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x2bc]
        fmul    qword ptr [DAT_007860c8]
        fld     st(0)
        fmul    dword ptr [esp + 0x4]
        fstp    dword ptr [esp + 0x4]
        fmul    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x4]
        fadd    dword ptr [esi]
        fstp    dword ptr [esp + 0x4]
        fadd    dword ptr [esi + 0x8]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x4]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x1c]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x18]
        push    eax
        call    FUN_0075db4a
        mov     ecx, dword ptr [DAT_007f2440]
        push    eax
        call    FUN_005d9030
        pop     esi
        add     esp, 0x24
        ret     4
    }
}
