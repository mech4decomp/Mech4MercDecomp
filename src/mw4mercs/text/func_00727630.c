/*
 * FUN_00727630 (extent 0x727630-0x7277e5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b394;
extern float  g_0076d3c8;
extern float  g_0076dd60;
extern float  g_007b7118;
extern float  g_008816ac;
extern float  g_008816b0;
extern float  g_008816b4;
extern float  g_008816b8;
extern int    g_008816cc;
extern int    g_008816d8;
extern char   g_008816dc;
extern char   g_008816e6;
extern int    g_008816ec;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_007284a0(void);
extern void __cdecl FUN_00729560(void);
extern void __cdecl FUN_00732a20(void);
extern void __cdecl FUN_0075dc00(void);

__declspec(naked) void FUN_00727630(void)
{
    __asm {
        fild    dword ptr [esp + 4]
        fstp    dword ptr [g_008816b8]
        fild    dword ptr [esp + 8]
        fstp    dword ptr [g_008816b4]
        fild    dword ptr [esp + 0xc]
        fstp    dword ptr [g_008816b0]
        fild    dword ptr [esp + 0x10]
        fstp    dword ptr [g_008816ac]
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    eax, 0x200c
        call    FUN_0075dc00
        mov    ecx, dword ptr [g_008816cc]
        mov    edx, dword ptr [g_008816d8]
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        lea    eax, [ebp - 0x200c]
        push    esi
        mov    dword ptr [ebp - 4], eax
        mov    eax, dword ptr [ebp + 0x10]
        test    eax, eax
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 8], ecx
        mov    dword ptr [ebp - 0xc], edx
        mov    dword ptr [ebx], 0
        mov    dword ptr [edi], 0
        je    L_77de
        cmp    byte ptr [eax], 0
        je    L_77de
        lea    ecx, [ebp + 0x14]
        push    ecx
        push    eax
        lea    edx, [ebp - 0x200c]
        push    0x2000
        push    edx
        mov    byte ptr [ebp - 0xd], 4
        call    dword ptr [g_0076b394]
        mov    al, byte ptr [ebp - 0xd]
        add    esp, 0x10
        cmp    al, 4
        je    L_76e8
        push    0x79cbf4
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_76e8
        int 3    
L_76e8:
        mov    esi, dword ptr [ebp - 4]
        cmp    byte ptr [esi], 0x2f
        jne    L_76fc
        lea    eax, [ebp - 4]
        push    eax
        call    FUN_00729560
        mov    esi, dword ptr [ebp - 4]
L_76fc:
        mov    al, byte ptr [g_008816dc]
        test    al, al
        mov    eax, dword ptr [g_008816cc]
        je    L_771c
        fild    dword ptr [eax + 0x128]
        fdivr    dword ptr [g_008816d8]
        fstp    dword ptr [g_007b7118]
L_771c:
        mov    ecx, dword ptr [eax + 0x75c]
        test    ecx, ecx
        je    L_7735
        push    ebx
        push    edi
        push    esi
        call    FUN_00732a20
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
L_7735:
        mov    dword ptr [ebx], 0
        xor    edi, edi
L_773d:
        lea    ecx, [ebp + 0xc]
        push    ecx
        push    esi
        call    FUN_007284a0
        mov    ecx, dword ptr [ebx]
        mov    edx, dword ptr [g_008816ec]
        add    ecx, edx
        cmp    eax, edi
        mov    dword ptr [ebx], ecx
        jbe    L_7759
        mov    edi, eax
L_7759:
        mov    eax, dword ptr [ebp + 0xc]
        cmp    esi, eax
        je    L_7767
        cmp    byte ptr [eax], 0
        mov    esi, eax
        jne    L_773d
L_7767:
        test    edi, edi
        mov    ecx, dword ptr [ebp + 8]
        mov    dword ptr [ecx], edi
        je    L_77b0
        mov    al, byte ptr [g_008816e6]
        test    al, al
        je    L_77b0
        mov    eax, dword ptr [g_008816cc]
        fild    dword ptr [eax + 0x128]
        fdivr    dword ptr [g_008816d8]
        fimul    dword ptr [eax + 0x124]
        fmul    dword ptr [g_0076d3c8]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp + 8]
        and    eax, 0x7fffff
        lea    edx, [eax + edi - 0x400000]
        mov    dword ptr [ecx], edx
L_77b0:
        sub    esi, dword ptr [ebp - 4]
        cmp    esi, 0x2000
        jb    L_77cd
        push    0x7a5644
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_77cd
        int 3    
L_77cd:
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    dword ptr [g_008816cc], eax
        mov    dword ptr [g_008816d8], ecx
L_77de:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
