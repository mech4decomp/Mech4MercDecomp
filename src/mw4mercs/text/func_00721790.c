/*
 * FUN_00721790 (extent 0x721790-0x7218eb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0e8;
extern int    g_0076b0ec;
extern int    g_0076b128;
extern int    g_0076b15c;
extern int    g_0076b164;
extern int    g_0076b294;
extern int    g_0076b2d0;
extern int    g_0076b59c;
extern char   g_0087cf30;

__declspec(naked) void FUN_00721790(void)
{
    __asm {
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        cmp    ebp, 0xfde8
        push    esi
        push    edi
        jg    L_17cb
        mov    ebx, dword ptr [esp + 0x18]
        test    ebx, ebx
        je    L_17cb
        mov    edi, dword ptr [g_0076b128]
        push    1
        push    ebx
        lea    esi, [ebx + 1]
        call    edi
        test    eax, eax
        jne    L_17cb
L_17ba:
        cmp    byte ptr [esi], 0
        je    L_17d4
        mov    eax, esi
        push    1
        push    eax
        inc    esi
        call    edi
        test    eax, eax
        je    L_17ba
L_17cb:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        ret    0xc
L_17d4:
        sub    esi, ebx
        cmp    esi, 0x104
        jg    L_17cb
        push    0
        push    0x8000000
        push    3
        push    0
        push    1
        push    0x80000000
        push    ebx
        call    dword ptr [g_0076b0e8]
        mov    esi, eax
        cmp    esi, -1
        je    L_17cb
        push    0
        push    esi
        call    dword ptr [g_0076b15c]
        mov    edi, eax
        push    edi
        call    dword ptr [g_0076b294]
        add    esp, 4
        push    0
        mov    ebx, eax
        lea    eax, [esp + 0x20]
        push    eax
        push    edi
        push    ebx
        push    esi
        call    dword ptr [g_0076b164]
        push    esi
        call    dword ptr [g_0076b0ec]
        add    edi, ebx
        cmp    ebx, edi
        mov    eax, ebx
        jae    L_1851
L_1834:
        cmp    ebp, 1
        jle    L_1851
        cmp    byte ptr [eax], 0xa
        je    L_184b
L_183e:
        cmp    eax, edi
        jae    L_184b
        mov    cl, byte ptr [eax + 1]
        inc    eax
        cmp    cl, 0xa
        jne    L_183e
L_184b:
        inc    eax
        dec    ebp
        cmp    eax, edi
        jb    L_1834
L_1851:
        mov    esi, dword ptr [esp + 0x14]
        mov    edx, esi
L_1857:
        mov    cl, byte ptr [eax]
        cmp    cl, 0x20
        je    L_1863
        cmp    cl, 9
        jne    L_186a
L_1863:
        cmp    eax, edi
        jae    L_186a
        inc    eax
        jmp    L_1857
L_186a:
        mov    cl, byte ptr [eax]
        cmp    cl, 0xa
        je    L_1899
L_1871:
        cmp    cl, 0xd
        je    L_1899
        cmp    eax, edi
        jae    L_1899
        cmp    cl, 9
        jne    L_1884
        mov    byte ptr [edx], 0x20
        jmp    L_1886
L_1884:
        mov    byte ptr [edx], cl
L_1886:
        inc    edx
        lea    ecx, [esi + 0xfc]
        inc    eax
        cmp    edx, ecx
        ja    L_1899
        mov    cl, byte ptr [eax]
        cmp    cl, 0xa
        jne    L_1871
L_1899:
        mov    byte ptr [edx], 0xa
        push    ebx
        mov    byte ptr [edx + 1], 0
        call    dword ptr [g_0076b2d0]
        add    esp, 4
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
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
        mov    eax, dword ptr [esp + 4]
        push    0x400
        push    0x87cf30
        push    0x3ef
        push    eax
        call    dword ptr [g_0076b59c]
        mov    al, byte ptr [g_0087cf30]
        neg    al
        sbb    eax, eax
        and    eax, 0x87cf30
        ret    4
    }
}
