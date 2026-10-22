/*
 * FUN_0060ae80 (296 B) — __thiscall (ECX=this), RET 8 (2 stack args).
 *
 * Reads a set of scalar values from a sub-object (via indirect vtable
 * call), computes derived values with FPU math + _ftol, clamps each to
 * [0,100], and writes them into the param_1 output struct.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d048;               /* scale constant */
extern void __cdecl FUN_0075db4a(void);   /* _ftol */
extern void __cdecl FUN_00590c10(void);

__declspec(naked) void __stdcall FUN_0060ae80(void *this, void *param_1, void *param_2)
{
    __asm {
        push    ecx
        push    edi
        mov     edi, dword ptr [ecx + 0x4]
        test    edi, edi
        jz      L_ret
        mov     edx, dword ptr [edi + 0x78]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esi + 0x1c]
        mov     eax, dword ptr [esi + 0x14]
        mov     ebx, dword ptr [esi + 0x10]
        mov     ebp, dword ptr [esi + 0x18]
        mov     dword ptr [esp + 0x18], ecx
        lea     ecx, [edi + 0x78]
        mov     dword ptr [esp + 0x10], eax
        call    dword ptr [edx + 0x4]
        fld     dword ptr [edi + 0x3b8]
        mov     ecx, eax
        mov     eax, dword ptr [esi + 0x4]
        mov     edx, dword ptr [ecx + 0x634]
        mov     dword ptr [eax], edx
        mov     eax, dword ptr [esi + 0x8]
        mov     edx, dword ptr [esi + 0xc]
        fstp    dword ptr [eax]
        mov     eax, dword ptr [ecx + 0x70]
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [edi + 0x3bc]
        cdq
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        mov     dword ptr [ebx], eax
        jns     L_clamp1_hi
        mov     dword ptr [ebx], 0
        jmp     L_after1
L_clamp1_hi:
        cmp     eax, 0x64
        jle     L_after1
        mov     dword ptr [ebx], 0x64
L_after1:
        mov     edx, dword ptr [edi + 0x504]
        fld     dword ptr [edx + 0x18c]
        fsub    dword ptr [ecx + 0x2c8]
        fld     dword ptr [ecx + 0x2bc]
        fsub    dword ptr [ecx + 0x2c8]
        fdivp   st(1), st(0)
        fmul    dword ptr [g_76d048]
        call    FUN_0075db4a
        test    eax, eax
        mov     dword ptr [ebp], eax
        jge     L_clamp2_hi
        mov     dword ptr [ebp], 0
        jmp     L_after2
L_clamp2_hi:
        cmp     eax, 0x64
        jle     L_after2
        mov     dword ptr [ebp], 0x64
L_after2:
        mov     eax, dword ptr [edi + 0x9a4]
        fld     dword ptr [eax + 0x1b0]
        call    FUN_0075db4a
        mov     ecx, dword ptr [esp + 0x18]
        pop     esi
        lea     eax, [eax + eax*4]
        test    eax, eax
        pop     ebp
        mov     dword ptr [ecx], eax
        pop     ebx
        jge     L_clamp3_hi
        mov     dword ptr [ecx], 0
        jmp     L_after3
L_clamp3_hi:
        cmp     eax, 0x64
        jle     L_after3
        mov     dword ptr [ecx], 0x64
L_after3:
        mov     ecx, edi
        call    FUN_00590c10
        test    eax, eax
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [ecx], eax
        jge     L_clamp4_hi
        mov     dword ptr [ecx], 0
        mov     eax, 0x1
        pop     edi
        pop     ecx
        ret     0x8
L_clamp4_hi:
        cmp     eax, 0x64
        jle     L_ret
        mov     dword ptr [ecx], 0x64
L_ret:
        mov     eax, 0x1
        pop     edi
        pop     ecx
        ret     0x8
    }
}
