/*
 * FUN_005457ba (extent 0x5457ba-0x545876) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004da550(void);
extern void __cdecl FUN_00545a40(void);

__declspec(naked) void FUN_005457ba(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        push    esi
        jl    L_57f5
        cmp    eax, 7
        jg    L_57f5
        mov    esi, dword ptr [ecx + eax*4 + 0x204d00]
        test    esi, esi
        je    L_57f5
        mov    ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je    L_57f5
        mov    ecx, esi
        call    FUN_0041fd80
        mov    eax, dword ptr [eax + 0x514]
        pop    esi
        ret    4
L_57f5:
        mov    eax, 8
        pop    esi
        ret    4
        nop    
        nop    
        push    ebx
        mov    ebx, ecx
        mov    al, byte ptr [ebx + 0x17]
        test    al, al
        push    esi
        push    edi
        je    L_5836
        xor    esi, esi
        lea    edi, [ebx + 0x353b]
L_5814:
        cmp    byte ptr [edi], 0
        je    L_5823
        push    0
        push    esi
        mov    ecx, ebx
        call    FUN_00545a40
L_5823:
        inc    esi
        add    edi, 0x2038
        cmp    esi, 0xff
        jl    L_5814
        pop    edi
        pop    esi
        pop    ebx
        ret    
L_5836:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x10]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        test    ecx, ecx
        jle    L_5872
        mov    esi, dword ptr [eax + 0x18]
        add    esi, 0x14
        mov    edi, ecx
L_585a:
        mov    ecx, dword ptr [esi]
        call    FUN_0041fd80
        test    eax, eax
        je    L_586c
        mov    ecx, eax
        call    FUN_004da550
L_586c:
        add    esi, 0x1c
        dec    edi
        jne    L_585a
L_5872:
        pop    edi
        pop    esi
        pop    ebx
        ret    
    }
}
