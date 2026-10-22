/*
 * FUN_006faa78 (extent 0x6faa78-0x6fab12) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_00849eac;
extern char   g_00849ead;
extern int    g_00849eb8;
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_006faa78(void)
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
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_aa90
        mov    cl, byte ptr [g_00849eac]
        mov    byte ptr [eax], cl
L_aa90:
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_aaa0
        mov    dl, byte ptr [g_00849ead]
        mov    byte ptr [eax], dl
L_aaa0:
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
        push    ebp
        mov    ebp, esp
        push    ecx
        wait    
        fnstcw    word ptr [ebp - 4]
        mov    eax, dword ptr [g_00849eb8]
        test    eax, eax
        jne    L_ab0e
        mov    al, byte ptr [g_00849eac]
        test    al, al
        je    L_aae2
        cmp    byte ptr [ebp - 4], 0x7a
        je    L_aae2
        push    0x7a014c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_aae2
        int 3    
L_aae2:
        mov    eax, dword ptr [g_00849eb8]
        test    eax, eax
        jne    L_ab0e
        mov    al, byte ptr [g_00849ead]
        test    al, al
        je    L_ab0e
        mov    eax, dword ptr [ebp - 4]
        test    ah, 0xff
        je    L_ab0e
        push    0x7a012c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_ab0e
        int 3    
L_ab0e:
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
