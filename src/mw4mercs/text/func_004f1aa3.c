/*
 * FUN_004f1aa3 (extent 0x4f1aa3-0x4f1b97) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc844;
extern int    g_007dc84c;
extern int    g_007dc850;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_004f1450(void);
extern void __cdecl FUN_004f2130(void);

__declspec(naked) void FUN_004f1aa3(void)
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi + 0x1c]
        shr    eax, 3
        test    al, 1
        jne    L_1ad8
        mov    edx, dword ptr [esi + 0x20]
        lea    eax, [esp + 8]
        push    eax
        push    esi
        add    ecx, 0x38
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00416a90
        or    dword ptr [esi + 0x1c], 8
L_1ad8:
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x30
        mov    eax, dword ptr [g_007dc844]
        push    esi
        mov    esi, ecx
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_004f2130
        mov    ecx, dword ptr [esp + 0x38]
        mov    esi, dword ptr [esi + 0x28]
        mov    dword ptr [esp + 0x2c], 0
        mov    dword ptr [esp + 0x28], 0
        mov    dword ptr [esp + 4], 0x774ea8
        mov    dword ptr [esp + 0x30], ecx
L_1b18:
        test    esi, esi
        je    L_1b31
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_1b31
        mov    edx, dword ptr [ecx]
        lea    eax, [esp + 4]
        push    eax
        call    dword ptr [edx + 0x10]
        jmp    L_1b18
L_1b31:
        lea    ecx, [esp + 4]
        call    FUN_004f1450
        pop    esi
        add    esp, 0x30
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
        je    L_1b8c
        mov    ecx, dword ptr [g_007dc84c]
        push    ecx
        push    0x774f84
        push    0x1ec
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007dc850], eax
        ret    
L_1b8c:
        mov    dword ptr [g_007dc850], 0
        ret    
    }
}
