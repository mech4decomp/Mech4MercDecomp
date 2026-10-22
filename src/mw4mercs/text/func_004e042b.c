/*
 * FUN_004e042b (extent 0x4e042b-0x4e0517) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db080;
extern int    g_007dc6d0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_004cc1b0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004e042b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x24]
        sub    eax, 0
        je    L_04a2
        dec    eax
        je    L_046a
        dec    eax
        jne    L_04b4
        mov    eax, dword ptr [edi + 0x18]
        mov    ecx, dword ptr [g_007db080]
        mov    edx, dword ptr [g_007dab44]
        push    eax
        mov    eax, dword ptr [edx]
        push    ecx
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004cc1b0
        jmp    L_04b4
L_046a:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007db080]
        push    ebx
        mov    ebx, dword ptr [edi + 0x18]
        push    esi
        xor    edx, dword ptr [g_007dab40]
        mov    esi, dword ptr [edx + 0x14]
        push    ebx
        xor    esi, 0x85739531
        push    eax
        mov    ecx, esi
        call    FUN_004cc1b0
        mov    edx, dword ptr [esi]
        push    ebx
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        pop    esi
        pop    ebx
        jmp    L_04b4
L_04a2:
        push    0x76d414
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_04b4
        int 3    
L_04b4:
        test    edi, edi
        je    L_04c0
        mov    eax, dword ptr [edi]
        push    1
        mov    ecx, edi
        call    dword ptr [eax]
L_04c0:
        pop    edi
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
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_050c
        mov    ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x773ac0
        push    0x1c4
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007dc6d0], eax
        ret    
L_050c:
        mov    dword ptr [g_007dc6d0], 0
        ret    
    }
}
