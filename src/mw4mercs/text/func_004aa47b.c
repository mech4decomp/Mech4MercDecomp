/*
 * FUN_004aa47b (extent 0x4aa47b-0x4aa51f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004aa3e0(void);
extern void __cdecl FUN_004abcc0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_004aa47b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x274
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_a4be
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        push    0x522
        mov    ecx, eax
        call    FUN_004aa3e0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_a4be:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        push    ebx
        mov    ebx, dword ptr [ebp + 8]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x268]
        mov    eax, 0x400
        cmp    ecx, eax
        jle    L_a509
        test    bl, bl
        je    L_a517
        mov    dword ptr [esi + 0x268], eax
        mov    eax, dword ptr [esi + 4]
        push    eax
        push    0x7b30d4
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_a509
        int 3    
L_a509:
        push    ebx
        mov    ecx, esi
        call    FUN_004abcc0
        pop    esi
        pop    ebx
        pop    ebp
        ret    4
L_a517:
        pop    esi
        xor    al, al
        pop    ebx
        pop    ebp
        ret    4
    }
}
