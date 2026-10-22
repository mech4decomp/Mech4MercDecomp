/*
 * FUN_004f9237 (extent 0x4f9237-0x4f92c4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc12c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_004f92d0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004f9237(void)
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
        mov    eax, dword ptr [g_007dc12c]
        push    ebx
        push    esi
        push    edi
        push    eax
        mov    ebx, ecx
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        mov    edi, dword ptr [esp + 0x14]
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_92aa
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [edx]
        test    eax, eax
        push    ecx
        mov    ecx, esp
        mov    dword ptr [ecx], eax
        je    L_9296
        inc    byte ptr [eax - 1]
L_9296:
        push    ecx
        mov    ecx, esp
        push    edi
        call    FUN_004ea0f0
        mov    ecx, esi
        call    FUN_004f92d0
        mov    esi, eax
        jmp    L_92ac
L_92aa:
        xor    esi, esi
L_92ac:
        call    FUN_006f49a0
        push    edi
        push    esi
        lea    ecx, [ebx + 0x19c]
        call    FUN_00416a90
        pop    edi
        pop    esi
        pop    ebx
        ret    8
    }
}
