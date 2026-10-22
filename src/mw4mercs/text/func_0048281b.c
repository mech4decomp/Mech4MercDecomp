/*
 * FUN_0048281b (extent 0x48281b-0x482a6e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b955c;
extern int    g_007da6bc;
extern int    g_007da6c0;
extern int    g_007da6c4;
extern int    g_007da6c8;
extern int    g_007da6cc;
extern int    g_007da6d0;
extern int    g_007da720;
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00423d10(void);

__declspec(naked) void FUN_0048281b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [ecx + 0xc]
        mov    eax, dword ptr [esp + 4]
        fmul    dword ptr [ecx + 8]
        mov    eax, dword ptr [eax + 4]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld    dword ptr [ecx + 0x10]
        fmul    dword ptr [ecx + 8]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [ecx + 0x14]
        fmul    dword ptr [ecx + 8]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [eax + 8]
        ret    4
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [ecx + 0xc]
        mov    eax, dword ptr [esp + 4]
        fmul    dword ptr [ecx + 8]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld    dword ptr [ecx + 0x10]
        fmul    dword ptr [ecx + 8]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [ecx + 0x14]
        fmul    dword ptr [ecx + 8]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [eax + 8]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        push    0x14
        call    FUN_004084d0
        xor    ebx, ebx
        add    esp, 4
        cmp    eax, ebx
        je    L_28ce
        mov    ecx, dword ptr [g_007da720]
        push    ecx
        push    0x76fb1c
        push    0x5e
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007da6d0], eax
        jmp    L_28d4
L_28ce:
        mov    dword ptr [g_007da6d0], ebx
L_28d4:
        push    edi
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, ebx
        je    L_2929
        push    0x1000
        mov    dword ptr [esi], ebx
        mov    dword ptr [esi + 4], 0x400
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        cmp    edi, ebx
        je    L_291d
        push    0x423df0
        push    0x400
        push    4
        push    edi
        call    FUN_00406c90
        mov    dword ptr [esi], edi
        mov    dword ptr [g_007da6cc], esi
        jmp    L_292f
L_291d:
        xor    edi, edi
        mov    dword ptr [esi], edi
        mov    dword ptr [g_007da6cc], esi
        jmp    L_292f
L_2929:
        mov    dword ptr [g_007da6cc], ebx
L_292f:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, ebx
        je    L_2983
        push    0x4000
        mov    dword ptr [esi], ebx
        mov    dword ptr [esi + 4], 0x400
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        cmp    edi, ebx
        je    L_2977
        push    0x4844c0
        push    0x400
        push    0x10
        push    edi
        call    FUN_00406c90
        mov    dword ptr [esi], edi
        mov    dword ptr [g_007da6c8], esi
        jmp    L_2989
L_2977:
        xor    edi, edi
        mov    dword ptr [esi], edi
        mov    dword ptr [g_007da6c8], esi
        jmp    L_2989
L_2983:
        mov    dword ptr [g_007da6c8], ebx
L_2989:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, ebx
        je    L_29b2
        push    0x400
        mov    ecx, esi
        mov    dword ptr [esi], ebx
        mov    dword ptr [esi + 4], ebx
        call    FUN_00423d10
        mov    dword ptr [g_007da6c4], esi
        jmp    L_29b8
L_29b2:
        mov    dword ptr [g_007da6c4], ebx
L_29b8:
        push    8
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        cmp    edi, ebx
        je    L_2a0c
        push    0x2000
        mov    dword ptr [edi], ebx
        mov    dword ptr [edi + 4], 0x400
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, ebx
        je    L_2a00
        push    0x423b70
        push    0x400
        push    8
        push    esi
        call    FUN_00406c90
        mov    dword ptr [edi], esi
        mov    dword ptr [g_007da6c0], edi
        jmp    L_2a12
L_2a00:
        xor    esi, esi
        mov    dword ptr [edi], esi
        mov    dword ptr [g_007da6c0], edi
        jmp    L_2a12
L_2a0c:
        mov    dword ptr [g_007da6c0], ebx
L_2a12:
        push    8
        call    FUN_004084d0
        add    esp, 4
        mov    esi, eax
        cmp    esi, ebx
        pop    edi
        je    L_2a65
        mov    eax, dword ptr [g_007b955c]
        cmp    eax, ebx
        mov    dword ptr [esi], ebx
        mov    dword ptr [esi + 4], ebx
        je    L_2a5c
        jbe    L_2a51
        lea    edx, [eax*4]
        push    edx
        mov    dword ptr [esi + 4], eax
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esi], eax
        mov    dword ptr [g_007da6bc], esi
        pop    esi
        pop    ebx
        ret    
L_2a51:
        push    ebx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi], ebx
L_2a5c:
        mov    dword ptr [g_007da6bc], esi
        pop    esi
        pop    ebx
        ret    
L_2a65:
        pop    esi
        mov    dword ptr [g_007da6bc], ebx
        pop    ebx
        ret    
    }
}
