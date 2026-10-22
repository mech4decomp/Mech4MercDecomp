/*
 * FUN_006fca19 (extent 0x6fca19-0x6fcafe) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008567b8;
extern int    g_008567bc;
extern int    g_008567c0;
extern char   g_008567c4;
extern int    g_008567c8;
extern int    g_008567cc;
extern int    g_008567d0;
extern int    g_008567d4;
extern int    g_008567d8;
extern int    g_008567dc;
extern int    g_008567e0;
extern int    g_008567e4;
extern char   g_008567e8;
extern char   g_008567e9;
extern int    g_008567ec;
extern int    g_008567f0;
extern int    g_00856820;
extern int    g_00856824;
extern char   g_00856828;
extern char   g_00856829;
extern int    g_0085682c;
extern int    g_00856830;
extern void __cdecl FUN_006f9000(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_006fca19(void)
{
    __asm {
        mov    dword ptr [g_00856820], eax
        mov    dword ptr [g_00856824], eax
        mov    byte ptr [g_00856828], al
        mov    byte ptr [g_00856829], al
        mov    dword ptr [g_0085682c], eax
        mov    dword ptr [g_00856830], eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        /* __emit: reference uses near jmp E9 0B 00 00 00 (rel32) to L_ca50;
           MSVC6 collapses the nearby forward jump to short EB 0B, shifting the
           following layout by 3 bytes. Emit the near form verbatim. */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_ca50:
        xor    eax, eax
        or    ecx, 0xffffffff
        mov    dword ptr [g_008567bc], eax
        mov    dword ptr [g_008567c0], eax
        mov    dword ptr [g_008567b8], eax
        mov    byte ptr [g_008567c4], al
        mov    dword ptr [g_008567c8], eax
        mov    dword ptr [g_008567cc], eax
        mov    dword ptr [g_008567d0], ecx
        mov    dword ptr [g_008567d4], ecx
        mov    dword ptr [g_008567d8], eax
        mov    dword ptr [g_008567dc], eax
        mov    dword ptr [g_008567e0], eax
        mov    dword ptr [g_008567e4], eax
        mov    byte ptr [g_008567e8], al
        mov    byte ptr [g_008567e9], al
        mov    dword ptr [g_008567ec], eax
        mov    dword ptr [g_008567f0], eax
        ret    
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
        mov    eax, dword ptr [ebp + 0xc]
        test    eax, eax
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_cad2
        test    ecx, ecx
        je    L_cad6
        push    ecx
        push    eax
        mov    eax, dword ptr [ebp + 8]
        push    eax
        call    FUN_006f9000
        mov    al, 1
        pop    ebp
        ret    0xc
L_cad2:
        test    ecx, ecx
        jne    L_cadf
L_cad6:
        test    eax, eax
        mov    ecx, 0x7741dc
        jne    L_cae4
L_cadf:
        mov    eax, 0x7741dc
L_cae4:
        push    ecx
        push    eax
        push    0x7a034c
        call    FUN_006fabf0
        add    esp, 0xc
        test    eax, eax
        je    L_caf8
        int 3    
L_caf8:
        xor    al, al
        pop    ebp
        ret    0xc
    }
}
