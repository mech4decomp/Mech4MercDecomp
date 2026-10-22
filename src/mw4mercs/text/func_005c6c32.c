/*
 * FUN_005c6c32 (extent 0x5c6c32-0x5c6d88) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2460;
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00566570(void);
extern void __cdecl FUN_005c83f0(void);
extern void __cdecl FUN_005ceb50(void);
extern void __cdecl FUN_005cf880(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_005d3020(void);

__declspec(naked) void FUN_005c6c32(void)
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
        nop    
        nop    
        nop    
        nop    
        jmp    FUN_005d3020
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
        push    ecx
        mov    eax, dword ptr [g_007f2460]
        push    esi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    ecx, esi
        call    FUN_005ceb50
        test    dword ptr [esi + 0x4e0], 0xfffffffc
        je    L_6cd5
        lea    ecx, [esi + 0x4f0]
        push    ecx
        mov    ecx, esi
        call    FUN_005c83f0
        push    0
        mov    byte ptr [esi + 0x548], 1
        call    FUN_00707e70
        fstp    dword ptr [esp + 4]
        mov    eax, dword ptr [esi + 0x608]
        mov    edx, dword ptr [esi + 0x60c]
        cmp    eax, edx
        lea    ecx, [esi + 0x604]
        je    L_6cc0
        test    eax, eax
        je    L_6cb2
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [eax], edx
L_6cb2:
        add    eax, 4
        mov    dword ptr [ecx + 4], eax
        call    FUN_006f49a0
        pop    esi
        pop    ecx
        ret    
L_6cc0:
        push    1
        lea    edx, [esp + 8]
        push    edx
        push    eax
        call    FUN_00566570
        call    FUN_006f49a0
        pop    esi
        pop    ecx
        ret    
L_6cd5:
        mov    ecx, dword ptr [esi + 0x5f4]
        test    ecx, 0xfffffffc
        je    L_6ceb
        and    ecx, 0xfffffffc
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x34]
L_6ceb:
        call    FUN_006f49a0
        pop    esi
        pop    ecx
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
        push    ecx
        mov    eax, dword ptr [g_007f2460]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    ebp, ecx
        push    eax
        mov    dword ptr [esp + 0x14], ebp
        call    FUN_006f4950
        mov    ecx, dword ptr [esp + 0x18]
        mov    ebx, dword ptr [ecx + 4]
        xor    edi, edi
        test    ebx, ebx
        jbe    L_6d64
        add    ebp, 0x1c8
        xor    esi, esi
L_6d2b:
        mov    ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        je    L_6d49
        mov    ecx, ebp
        call    FUN_0041fd80
        mov    edx, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [edx]
        cmp    dword ptr [ecx + esi + 8], eax
        je    L_6d53
L_6d49:
        inc    edi
        add    esi, 0x38
        cmp    edi, ebx
        jb    L_6d2b
        jmp    L_6d64
L_6d53:
        push    0
        call    FUN_00707e70
        mov    edx, dword ptr [esp + 0x10]
        fstp    dword ptr [edx + 0x574]
L_6d64:
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        mov    ecx, dword ptr [esp + 0x18]
        call    FUN_005cf880
        mov    bl, al
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, bl
        pop    ebx
        pop    ecx
        ret    8
    }
}
