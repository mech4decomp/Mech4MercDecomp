/*
 * FUN_006f2f18 (extent 0x6f2f18-0x6f2fc0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void FUN_006f2f18(void)
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
        add    ecx, 0x38
        jmp    FUN_0041fd80
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        mov    esi, ecx
        push    edi
        lea    edi, [esi + 0x60]
        mov    ecx, edi
        call    FUN_0041fcb0
        mov    ebx, dword ptr [esp + 0x10]
        push    ebx
        mov    ecx, edi
        call    FUN_0041fcd0
        cmp    dword ptr [esi], 1
        jne    L_2f74
        mov    al, byte ptr [esi + 0x69]
        test    al, al
        je    L_2f74
        lea    edi, [esi + 8]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_2f74
        mov    ecx, edi
        call    FUN_0041fd80
        cmp    eax, ebx
        jne    L_2f74
        mov    byte ptr [esi + 0x6a], 1
L_2f74:
        lea    edi, [esi + 0x10]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_2fba
        mov    ecx, edi
        call    FUN_0041fd80
        cmp    eax, ebx
        jne    L_2fba
        push    ebp
        mov    ecx, edi
        call    FUN_0041fd80
        lea    ebx, [esi + 0x30]
        mov    ecx, ebx
        mov    ebp, eax
        call    FUN_0041fd80
        cmp    eax, ebp
        pop    ebp
        jne    L_2fad
        mov    ecx, ebx
        call    FUN_0041fcb0
L_2fad:
        mov    ecx, edi
        call    FUN_0041fcb0
        mov    dword ptr [esi], 3
L_2fba:
        pop    edi
        pop    esi
        pop    ebx
        ret    4
    }
}
