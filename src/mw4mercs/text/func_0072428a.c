/*
 * FUN_0072428a (extent 0x72428a-0x724349) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00856b94;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00756940(void);

__declspec(naked) void FUN_0072428a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00856b94]
        test    eax, eax
        je    L_42ab
        push    0x76d414
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_42ab
        int 3    
L_42ab:
        xor    eax, eax
        ret    4
        mov    eax, dword ptr [g_00856b94]
        test    eax, eax
        je    L_42cb
        push    0x76d414
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_42cb
        int 3    
L_42cb:
        ret    8
        nop    
        nop    
        mov    eax, dword ptr [g_00856b94]
        test    eax, eax
        push    esi
        je    L_4340
        mov    esi, dword ptr [esp + 8]
        mov    ecx, dword ptr [esi*4 + 0x856a8c]
        cmp    dword ptr [ecx + 0x9c], 5
        jne    L_42fe
        mov    eax, dword ptr [ecx + 0x70]
        mov    ecx, dword ptr [eax + 0xec]
        mov    eax, dword ptr [ecx + 0xc]
        pop    esi
        ret    4
L_42fe:
        cmp    dword ptr [ecx], 0
        je    L_4340
        mov    al, byte ptr [ecx + 0x83]
        test    al, al
        je    L_4316
        mov    eax, 2
        pop    esi
        ret    4
L_4316:
        cmp    byte ptr [ecx + 0x82], 1
        jne    L_4340
        call    FUN_00756940
        test    al, al
        je    L_4340
        mov    edx, dword ptr [esi*4 + 0x856a8c]
        mov    cl, byte ptr [edx + 0x80]
        xor    eax, eax
        test    cl, cl
        setne    al
        pop    esi
        ret    4
L_4340:
        mov    eax, 4
        pop    esi
        ret    4
    }
}
