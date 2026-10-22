/*
 * FUN_005f378c (extent 0x5f378c-0x5f3978) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077deac;
extern float  g_0078a300;
extern float  g_0078a30c;
extern int    g_007b8ce8;
extern int    g_007b8cec;
extern int    g_007b8cf0;
extern int    g_007b8d88;
extern int    g_007b8d8c;
extern int    g_007b8d90;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0075db50(void);

__declspec(naked) void FUN_005f378c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0xe0]
        mov    edx, dword ptr [eax + 0x14]
        mov    dword ptr [ecx + 0x428], edx
        mov    edx, dword ptr [eax]
        push    0
        push    0xd
        mov    ecx, eax
        call    dword ptr [edx + 4]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov    ecx, dword ptr [esi + 0xe0]
        cmp    dword ptr [ecx + 0x14], 0xd
        jne    L_37da
        mov    edx, dword ptr [esi + 0x428]
        mov    eax, dword ptr [ecx]
        push    0
        push    edx
        call    dword ptr [eax + 4]
L_37da:
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        mov    esi, ecx
        or    eax, 0xffffffff
        lea    ecx, [esi + 0x78]
        mov    dword ptr [esi + 0x470], eax
        mov    dword ptr [esi + 0x46c], eax
        mov    eax, dword ptr [ecx]
        mov    dword ptr [esi + 0x428], 0xb
        call    dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 0x50]
        cmp    eax, 5
        ja    L_3841
        jmp    dword ptr [eax*4 + 0x5f3978]
        push    0x82
        jmp    L_382e
        push    0x84
        jmp    L_382e
        push    0x86
        jmp    L_382e
        push    0x88
L_382e:
        call    FUN_00637b40
        mov    ecx, eax
        call    FUN_00637a20
        call    FUN_0075db50
        jmp    L_3847
L_3841:
        fld    dword ptr [g_0078a300]
L_3847:
        mov    cx, word ptr [g_007db0ac]
        fst    dword ptr [esi + 0x450]
        fld    dword ptr [g_0078a30c]
        mov    dx, word ptr [g_007db0ae]
        fmul    dword ptr [g_0077deac]
        xor    ebx, ebx
        mov    dword ptr [esi + 0x45c], ebx
        mov    word ptr [esi + 0x4b0], cx
        fadd st(0), st(1)
        lea    ecx, [esi + 0x4b4]
        mov    dword ptr [esi + 0x42c], ebx
        fstp    dword ptr [esi + 0x44c]
        mov    dword ptr [esi + 0x430], ebx
        mov    dword ptr [esi + 0x434], ebx
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [esi + 0x438], ebx
        mov    dword ptr [esi + 0x43c], ebx
        mov    dword ptr [esi + 0x440], ebx
        mov    dword ptr [esi + 0x444], ebx
        mov    dword ptr [esi + 0x448], ebx
        mov    dword ptr [esi + 0x4a4], ebx
        mov    dword ptr [esi + 0x460], ebx
        mov    dword ptr [esi + 0x464], ebx
        mov    byte ptr [esi + 0x468], bl
        mov    byte ptr [esi + 0x469], bl
        mov    byte ptr [esi + 0x4a0], bl
        mov    byte ptr [esi + 0x4a1], bl
        mov    dword ptr [esi + 0x478], ebx
        mov    dword ptr [esi + 0x474], ebx
        mov    dword ptr [esi + 0x47c], ebx
        mov    dword ptr [esi + 0x480], ebx
        mov    byte ptr [esi + 0x4bc], 0xff
        mov    word ptr [esi + 0x4b2], dx
        call    FUN_0041fcb0
        mov    eax, dword ptr [g_007b8d88]
        mov    ecx, dword ptr [g_007b8d8c]
        mov    edx, dword ptr [g_007b8d90]
        mov    dword ptr [esi + 0x4d4], eax
        mov    eax, dword ptr [g_007b8cec]
        mov    dword ptr [esi + 0x4d8], ecx
        mov    ecx, dword ptr [g_007b8ce8]
        mov    dword ptr [esi + 0x4dc], edx
        mov    edx, dword ptr [g_007b8cf0]
        mov    dword ptr [esi + 0x4e4], eax
        mov    dword ptr [esi + 0x4e0], ecx
        mov    byte ptr [esi + 0x4d0], bl
        mov    byte ptr [esi + 0x4d1], bl
        mov    dword ptr [esi + 0x4ec], ebx
        mov    dword ptr [esi + 0x4f0], ebx
        mov    byte ptr [esi + 0x4bd], 1
        mov    dword ptr [esi + 0x4e8], edx
        pop    esi
        pop    ebx
        ret    4
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x005F3978 (0 relocated pointers)
    }
}
