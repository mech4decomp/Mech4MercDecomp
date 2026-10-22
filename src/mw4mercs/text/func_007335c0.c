/*
 * FUN_007335c0 (extent 0x7335c0-0x73363d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00857f38;
extern char   g_008aa280;
extern int    g_008aa284;
extern char   g_008aa288;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4850(void);
extern void __cdecl FUN_00734110(void);
extern void __cdecl FUN_00734410(void);

__declspec(naked) void FUN_007335c0(void)
{
    __asm {
        mov    al, byte ptr [g_008aa288]
        test    al, al
        jne    L_35ef
        push    esi
        mov    esi, dword ptr [g_00857f38]
L_35d0:
        test    esi, esi
        mov    eax, esi
        je    L_35e7
        mov    ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_35e7
        call    FUN_00734410
        jmp    L_35d0
L_35e7:
        mov    byte ptr [g_008aa280], 0
        pop    esi
L_35ef:
        ret    
        mov    al, byte ptr [g_008aa288]
        test    al, al
        push    esi
        push    edi
        jne    L_3623
        mov    esi, dword ptr [g_00857f38]
L_3601:
        test    esi, esi
        mov    eax, esi
        je    L_3623
        mov    edi, dword ptr [eax + 0xc]
        test    edi, edi
        mov    esi, dword ptr [esi + 4]
        je    L_3623
        mov    ecx, edi
        call    FUN_00734110
        push    edi
        call    FUN_004084e0
        add    esp, 4
        jmp    L_3601
L_3623:
        mov    eax, dword ptr [g_008aa284]
        push    1
        push    eax
        call    FUN_006f4850
        pop    edi
        mov    dword ptr [g_008aa284], 0
        pop    esi
        ret    
    }
}
