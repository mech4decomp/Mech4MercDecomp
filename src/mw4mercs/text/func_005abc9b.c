/*
 * FUN_005abc9b (extent 0x5abc9b-0x5abd7b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc140;
extern int    g_007f20c8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);
extern void __cdecl FUN_005ac340(void);

__declspec(naked) void FUN_005abc9b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    al, al
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        test    edi, edi
        mov    esi, ecx
        je    L_bd0d
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x14]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x17fc]
        test    al, al
        je    L_bd0d
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        fld    dword ptr [eax + 0x34]
        push    1
        fchs    
        push    ecx
        mov    ecx, edi
        /* __emit: ref uses no-disp fstp dword ptr [esp] = D9 1C 24 */
        __emit 0xD9
        __emit 0x1C
        __emit 0x24
        call    FUN_005ac340
        mov    dword ptr [esi + 0x17c], eax
L_bd0d:
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
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_bd70
        mov    ecx, dword ptr [g_007dc140]
        push    0
        push    0
        push    ecx
        push    0x78593c
        push    0x49c
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007f20c8], eax
        ret    
L_bd70:
        mov    dword ptr [g_007f20c8], 0
        ret    
    }
}
