/*
 * FUN_00722390 (extent 0x722390-0x7224c2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b7104;
extern int    g_007b7108;
extern int    g_007b710c;
extern int    g_00849eb8;
extern int    g_00857f44;
extern int    g_00858138;
extern char   g_00858ae1;
extern int    g_0085b4a0;
extern char   g_0087dd0a;
extern void __cdecl FUN_00723a10(void);
extern void __cdecl FUN_00723cc0(void);
extern void __cdecl FUN_00755420(void);
extern void __cdecl FUN_00755460(void);

__declspec(naked) void FUN_00722390(void)
{
    __asm {
        push    ebx
        call    FUN_00723a10
        mov    eax, dword ptr [g_00857f44]
        test    eax, eax
        mov    ebx, 1
        mov    byte ptr [g_0087dd0a], bl
        je    L_23b0
        push    eax
        call    FUN_00755460
L_23b0:
        cmp    dword ptr [g_0085b4a0], ebx
        mov    byte ptr [g_0087dd0a], 0
        je    L_246e
        cmp    byte ptr [g_00858ae1], bl
        push    esi
        jne    L_242d
        mov    eax, dword ptr [g_00849eb8]
        test    eax, eax
        jne    L_242d
        mov    al, byte ptr [g_00858138]
        xor    esi, esi
        test    al, al
        jbe    L_242d
        push    edi
        mov    edi, 0x857f48
L_23e6:
        mov    eax, dword ptr [edi]
        test    eax, eax
        je    L_241a
        mov    cl, byte ptr [esi + 0x857f88]
        test    cl, cl
        jne    L_241a
        push    eax
        mov    byte ptr [g_0087dd0a], bl
        call    FUN_00755460
        test    eax, eax
        mov    byte ptr [g_0087dd0a], 0
        jge    L_241a
        cmp    eax, 0x80070005
        je    L_241a
        mov    byte ptr [esi + 0x857f88], bl
L_241a:
        mov    eax, dword ptr [g_00858138]
        inc    esi
        and    eax, 0xff
        add    edi, 4
        cmp    esi, eax
        jb    L_23e6
        pop    edi
L_242d:
        mov    eax, dword ptr [g_007b7104]
        cmp    eax, 2
        pop    esi
        je    L_2448
        push    eax
        push    0x90
        call    FUN_00723cc0
        mov    eax, dword ptr [g_007b7104]
L_2448:
        cmp    dword ptr [g_007b7108], 2
        je    L_2459
        push    eax
        push    0x14
        call    FUN_00723cc0
L_2459:
        mov    eax, dword ptr [g_007b710c]
        cmp    eax, 2
        je    L_246e
        push    eax
        push    0x91
        call    FUN_00723cc0
L_246e:
        pop    ebx
        ret    
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
    }
}
