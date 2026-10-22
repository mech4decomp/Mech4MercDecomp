/*
 * FUN_004223e6 (extent 0x4223e6-0x422484) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007b95c8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004223e6(void)
{
    __asm {
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
        mov    eax, dword ptr [ecx + 0x48]
        push    ebx
        push    esi
        mov    esi, dword ptr [ecx + 0x20]
        or    esi, 4
        test    eax, eax
        mov    dword ptr [ecx + 0x20], esi
        mov    ebx, esi
        jle    L_242b
        mov    esi, dword ptr [ecx + 0x4c]
        push    ebp
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        mov    ebp, eax
L_240f:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_2423
        test    byte ptr [eax + 0x18], 1
        jne    L_2423
        mov    edx, dword ptr [edi]
        push    ebx
        push    eax
        mov    ecx, edi
        call    dword ptr [edx]
L_2423:
        add    esi, 4
        dec    ebp
        jne    L_240f
        pop    edi
        pop    ebp
L_242b:
        pop    esi
        pop    ebx
        ret    4
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_243d
        mov    edx, dword ptr [ecx + 0x20]
        mov    dword ptr [eax], edx
L_243d:
        mov    eax, dword ptr [ecx + 0x44]
        mov    ecx, dword ptr [ecx + 0x4c]
        mov    eax, dword ptr [ecx + eax*4]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_2479
        mov    ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x76dda0
        push    0x78
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007b95c8], eax
        ret    
L_2479:
        mov    dword ptr [g_007b95c8], 0
        ret    
    }
}
