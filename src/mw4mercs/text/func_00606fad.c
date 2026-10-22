/*
 * FUN_00606fad (extent 0x606fad-0x607140) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b320;
extern int    g_007f24d8;
extern int    g_007f24fc;
extern int    g_007f27c8;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004e24d0(void);
extern void __cdecl FUN_004e25e0(void);
extern void __cdecl FUN_004e2850(void);
extern void __cdecl FUN_005dc370(void);
extern void __cdecl FUN_006e2150(void);

__declspec(naked) void FUN_00606fad(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f24d8]
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        push    esi
        je    L_6ffd
        lea    ecx, [edi + 0x1e4]
        call    FUN_004179b0
        mov    ecx, dword ptr [g_007f24fc]
        mov    edx, dword ptr [esi + 0xd8]
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 8]
        mov    eax, dword ptr [esi + 0x10]
        and    eax, 0xfffffeff
        or    eax, 0x80
        pop    edi
        mov    dword ptr [esi + 0x10], eax
        pop    esi
        ret    4
L_6ffd:
        mov    ecx, edi
        call    FUN_004e24d0
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f24d8]
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_704f
        add    edi, 0x1e4
        push    edi
        mov    ecx, esi
        call    FUN_004154d0
        mov    ecx, dword ptr [g_007f24fc]
        mov    edx, dword ptr [esi + 0xd8]
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0xc]
        pop    edi
        pop    esi
        ret    4
L_704f:
        push    esi
        mov    ecx, edi
        call    FUN_004e25e0
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        and    esp, 0xfffffff8
        push    ecx
        push    ebx
        mov    ebx, dword ptr [ebp + 8]
        push    esi
        mov    esi, dword ptr [ecx + 0x1e4]
        push    edi
        mov    edi, dword ptr [ebp + 0xc]
        mov    dword ptr [esp + 0xc], ecx
L_707a:
        test    esi, esi
        je    L_709c
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_709c
        mov    eax, dword ptr [ecx + 0xe0]
        cmp    dword ptr [eax + 0x14], 1
        je    L_707a
        push    edi
        push    ebx
        call    FUN_005dc370
        jmp    L_707a
L_709c:
        mov    ecx, dword ptr [esp + 0xc]
        push    edi
        push    ebx
        call    FUN_004e2850
        mov    ecx, dword ptr [esp + 0xc]
        mov    esi, dword ptr [ecx + 0x1e4]
L_70b1:
        test    esi, esi
        je    L_70d3
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_70d3
        mov    edx, dword ptr [ecx + 0xe0]
        cmp    dword ptr [edx + 0x14], 1
        je    L_70b1
        mov    eax, dword ptr [ecx]
        push    edi
        push    ebx
        call    dword ptr [eax + 0x40]
        jmp    L_70b1
L_70d3:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007f27c8]
        test    ecx, ecx
        je    L_70f4
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_006e2150
L_70f4:
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
        sub    esp, 0x100
        push    0xff
        lea    eax, [esp + 4]
        push    0x7b4630
        push    eax
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        push    ecx
        mov    ecx, dword ptr [esp + 0x108]
        mov    byte ptr [esp + 0x103], 0
        call    FUN_006e2150
        mov    al, 1
        add    esp, 0x100
        ret    
    }
}
