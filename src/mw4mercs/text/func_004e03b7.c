/*
 * FUN_004e03b7 (extent 0x4e03b7-0x4e041e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc6cc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004e0060(void);
extern void __cdecl FUN_004e0420(void);

__declspec(naked) void FUN_004e03b7(void)
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
        mov    eax, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x10]
        push    esi
        push    eax
        mov    eax, dword ptr [g_007dc6cc]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_004e0060
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [esi + 0x24], eax
        mov    dword ptr [esi], 0x773ab4
        mov    dword ptr [esi + 0x20], ecx
        mov    dword ptr [esi + 0x1c], edx
        mov    eax, esi
        pop    esi
        ret    0x18
        push    esi
        mov    esi, ecx
        call    FUN_004e0420
        test    byte ptr [esp + 8], 1
        je    L_0418
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_0418:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
