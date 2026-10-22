/*
 * FUN_004f48b7 (extent 0x4f48b7-0x4f49a1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc89c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004dd1c0(void);
extern void __cdecl FUN_004dd220(void);
extern void __cdecl FUN_004dd250(void);
extern void __cdecl FUN_004f1ae0(void);

__declspec(naked) void FUN_004f48b7(void)
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
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_48f5
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [g_007dc89c]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_004dd220
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [esi + 0x18], edx
        mov    dword ptr [esi], 0x7753fc
        mov    eax, esi
        pop    esi
        ret    
L_48f5:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 8], 1
        je    L_4918
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_4918:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    ebx
        push    esi
        push    edi
        mov    ebx, ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov    ecx, ebx
        call    FUN_004dd250
        sub    eax, 5
        je    L_4968
        dec    eax
        jne    L_4989
        mov    esi, dword ptr [ebx + 0x18]
        add    esi, 0xd0
        mov    edi, 2
L_494c:
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        je    L_4959
        push    4
        call    FUN_004f1ae0
L_4959:
        add    esi, 4
        dec    edi
        jne    L_494c
        mov    eax, dword ptr [ebx + 0x14]
        pop    edi
        pop    esi
        pop    ebx
        ret    8
L_4968:
        mov    esi, dword ptr [ebx + 0x18]
        add    esi, 0xd0
        mov    edi, 2
L_4976:
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        je    L_4983
        push    5
        call    FUN_004f1ae0
L_4983:
        add    esi, 4
        dec    edi
        jne    L_4976
L_4989:
        mov    eax, dword ptr [ebx + 0x14]
        pop    edi
        pop    esi
        pop    ebx
        ret    8
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
        ret    
    }
}
