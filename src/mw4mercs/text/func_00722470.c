/*
 * FUN_00722470 (extent 0x722470-0x7225ac) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00857f44;
extern int    g_00858138;
extern int    g_0085b4a0;
extern char   g_0087bc34;
extern char   g_0087bc35;
extern int    g_00896cc0;
extern void __cdecl FUN_0070e1b0(void);
extern void __cdecl FUN_0070e220(void);
extern void __cdecl FUN_007227f0(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_00755420(void);

__declspec(naked) void FUN_00722470(void)
{
    __asm {
        cmp    dword ptr [g_0085b4a0], 1
        push    esi
        je    L_24c0
        mov    eax, dword ptr [g_00857f44]
        test    eax, eax
        je    L_2489
        push    eax
        call    FUN_00755420
L_2489:
        mov    al, byte ptr [g_00858138]
        xor    esi, esi
        test    al, al
        jbe    L_24c0
        push    edi
        mov    edi, 0x857f48
L_249a:
        mov    byte ptr [esi + 0x857f88], 0
        mov    eax, dword ptr [edi]
        test    eax, eax
        je    L_24ad
        push    eax
        call    FUN_00755420
L_24ad:
        mov    eax, dword ptr [g_00858138]
        inc    esi
        and    eax, 0xff
        add    edi, 4
        cmp    esi, eax
        jl    L_249a
        pop    edi
L_24c0:
        pop    esi
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
        cmp    dword ptr [g_0085b4a0], 1
        jne    L_24fc
        mov    al, byte ptr [g_0087bc34]
        test    al, al
        je    L_24f0
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        je    L_24f0
        xor    eax, eax
        ret    4
L_24f0:
        push    1
        push    8
        call    FUN_0070e220
        ret    4
L_24fc:
        mov    al, byte ptr [esp + 4]
        test    al, al
        je    L_2580
        push    esi
        push    edi
        mov    edi, dword ptr [g_00896cc0]
        test    edi, edi
        je    L_253b
L_2510:
        mov    esi, dword ptr [edi]
        test    esi, esi
        je    L_2534
L_2516:
        mov    eax, dword ptr [esi + 0x48]
        test    eax, eax
        je    L_2523
        push    eax
        call    FUN_00740db0
L_2523:
        mov    dword ptr [esi + 0x48], 0
        mov    esi, dword ptr [esi + 0x100]
        test    esi, esi
        jne    L_2516
L_2534:
        mov    edi, dword ptr [edi + 8]
        test    edi, edi
        jne    L_2510
L_253b:
        mov    al, byte ptr [g_00858138]
        xor    edi, edi
        test    al, al
        jbe    L_2579
        mov    esi, 0x857f48
L_254b:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_2565
        push    eax
        call    FUN_00755420
        mov    eax, dword ptr [esi]
        push    eax
        call    FUN_00740db0
        mov    dword ptr [esi], 0
L_2565:
        mov    ecx, dword ptr [g_00858138]
        inc    edi
        and    ecx, 0xff
        add    esi, 4
        cmp    edi, ecx
        jl    L_254b
L_2579:
        call    FUN_007227f0
        pop    edi
        pop    esi
L_2580:
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        jne    L_259f
        mov    edx, dword ptr [g_00858138]
        push    1
        push    8
        and    edx, 0xff
        push    edx
        call    FUN_0070e1b0
L_259f:
        mov    eax, dword ptr [g_00858138]
        and    eax, 0xff
        ret    4
    }
}
