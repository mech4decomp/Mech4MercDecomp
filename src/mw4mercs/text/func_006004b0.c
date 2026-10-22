/*
 * FUN_006004B0 (189 B) — __thiscall (ECX=this, RET 4) that walks a
 * linked list at this+0x22b4, processing each node via several helpers.
 *
 * Scales the float param by 0x0078b360, iterates nodes, and dispatches
 * to FUN_006991d0 / FUN_00699160 / FUN_006992f0 / FUN_00605740 based on
 * a comparison against 0x0076c5b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_b360;   /* 0x0078b360 */
extern float g_c5b0;   /* 0x0076c5b0 */

extern void __cdecl FUN_006055f0(void);
extern void __cdecl FUN_00699530(void);
extern void __cdecl FUN_006991d0(void);
extern void __cdecl FUN_00699160(void);
extern void __cdecl FUN_00605740(void);
extern void __cdecl FUN_006992f0(void);
extern void __cdecl FUN_00605700(void);
extern void __cdecl FUN_00605760(void);

__declspec(naked) void FUN_006004b0(void)
{
    __asm {
        fld     dword ptr [esp + 0x4]
        push    ebx
        fmul    dword ptr [g_b360]
        push    ebp
        mov     ebp, ecx
        mov     ebx, dword ptr [ebp + 0x22bc]
        test    ebx, ebx
        fstp    dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [ebp + 0x22b4]
        jz      l_67
        push    esi
        push    0x3f800000
        mov     ecx, ebx
        call    FUN_006055f0
        test    edi, edi
        jz      l_4d
    l_e4:
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 0x4]
        jz      l_4d
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    FUN_00699530
        test    al, al
        jz      l_43
        mov     ecx, esi
        call    FUN_006991d0
        fcom    dword ptr [g_c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_28
        mov     ecx, esi
        fstp    st(0)
        call    FUN_00699160
        push    esi
        mov     ecx, ebx
        call    FUN_00605740
        __emit 0xEB  /* __emit: backward jmp rel8 off-by-4 (call-reloc between branch and target) */
        __emit 0xBC
    l_28:
        mov     ecx, dword ptr [esi + 0x18]
        mov     eax, dword ptr [ecx + 0x4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 0x8]
        mov     ecx, esi
        fmul    st(0), st(1)
        fstp    dword ptr [esp]
        fstp    st(0)
        call    FUN_006992f0
    l_43:
        push    esi
        mov     ecx, ebx
        call    FUN_00605740
        __emit 0xEB  /* __emit: backward jmp rel8 off-by-4 (call-reloc between branch and target) */
        __emit 0x97
    l_4d:
        mov     ecx, ebx
        call    FUN_00605700
        mov     edx, dword ptr [ebp + 0x22c0]
        push    0x0
        push    0x0
        push    edx
        mov     ecx, ebx
        call    FUN_00605760
        pop     esi
    l_67:
        pop     edi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
