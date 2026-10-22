/*
 * FUN_007492e0 (extent 0x7492e0-0x74937d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b204;
extern int    g_00857f34;
extern char   g_00858990;
extern char   g_008b79ec;
extern void __cdecl FUN_00749cd0(void);

__declspec(naked) void FUN_007492e0(void)
{
    __asm {
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
        sub    esp, 0x94
        __emit 0x8D  // 141 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        push    eax
        mov    dword ptr [esp + 4], 0x94
        call    dword ptr [g_0076b204]
        cmp    dword ptr [esp + 0x10], 2
        mov    byte ptr [g_008b79ec], 1
        jne    L_9331
        cmp    dword ptr [esp + 4], 5
        jge    L_9331
        xor    eax, eax
        mov    byte ptr [g_008b79ec], al
        mov    dword ptr [g_00857f34], eax
        add    esp, 0x94
        ret    
L_9331:
        mov    dword ptr [g_00857f34], 0
        add    esp, 0x94
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
        mov    al, byte ptr [g_008b79ec]
        test    al, al
        push    esi
        je    L_937b
        mov    al, byte ptr [g_00858990]
        test    al, al
        jne    L_937b
        mov    esi, dword ptr [g_00857f34]
        test    esi, esi
        je    L_937b
L_936d:
        mov    ecx, esi
        call    FUN_00749cd0
        mov    esi, dword ptr [esi + 0x38]
        test    esi, esi
        jne    L_936d
L_937b:
        pop    esi
        ret    
    }
}
