/*
 * FUN_00722f70 (extent 0x722f70-0x723157) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00858138;
extern int    g_0085b4a0;
extern char   g_0087bc34;
extern char   g_0087bc35;
extern int    g_00896cc0;
extern void __cdecl FUN_0070e1b0(void);
extern void __cdecl FUN_0070e220(void);
extern void __cdecl FUN_0072f600(void);

__declspec(naked) void FUN_00722f70(void)
{
    __asm {
        sub    esp, 8
        mov    eax, dword ptr [g_0085b4a0]
        xor    ecx, ecx
        cmp    eax, 1
        push    esi
        mov    dword ptr [esp + 8], ecx
        mov    dword ptr [esp + 4], ecx
        jne    L_2fcb
        mov    al, byte ptr [g_0087bc34]
        test    al, al
        je    L_2f9e
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        jne    L_30b3
L_2f9e:
        xor    esi, esi
L_2fa0:
        push    4
        push    8
        call    FUN_0070e220
        mov    byte ptr [esp + esi + 4], al
        inc    esi
        cmp    esi, 8
        jb    L_2fa0
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [eax], ecx
        mov    dword ptr [eax + 4], edx
        pop    esi
        add    esp, 8
        ret    8
L_2fcb:
        mov    eax, dword ptr [esp + 0x10]
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x858128]
        and    ecx, 0xbfff0fff
        push    edi
        mov    edi, eax
        shl    edi, 5
        add    edi, 0x858684
        mov    dword ptr [esp + 8], edi
        and    edx, 1
        shl    edx, 0x1e
        or    edx, ecx
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x858058]
        mov    esi, edx
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x85813b]
        and    esi, 0xc000ffff
        and    ecx, 1
        shl    ecx, 4
        and    edx, 0xf
        or    ecx, edx
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x85814b]
        shl    ecx, 4
        and    edx, 0xf
        or    ecx, edx
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x85815b]
        shl    ecx, 5
        lea    eax, [eax + eax*2]
        and    edx, 0x1f
        or    ecx, edx
        shl    ecx, 0x10
        or    esi, ecx
        mov    dword ptr [esp + 0xc], esi
        xor    ecx, ecx
L_3046:
        mov    dl, byte ptr [ecx + eax*4 + 0x857f98]
        test    dl, dl
        je    L_307c
        mov    edx, esi
        and    edx, 0xfffff000
        add    edx, 0x1000
        xor    edx, esi
        and    edx, 0xf000
        xor    esi, edx
        mov    edx, 1
        shl    edx, cl
        or    edx, esi
        xor    edx, esi
        and    edx, 0xfff
        xor    esi, edx
L_307c:
        inc    ecx
        cmp    ecx, 0xc
        jl    L_3046
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        mov    dword ptr [esp + 0xc], esi
        jne    L_30a9
        push    ebx
        xor    ebx, ebx
L_3092:
        xor    eax, eax
        mov    al, byte ptr [esp + ebx + 0xc]
        push    4
        push    8
        push    eax
        call    FUN_0070e1b0
        inc    ebx
        cmp    ebx, 8
        jb    L_3092
        pop    ebx
L_30a9:
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [eax], edi
        mov    dword ptr [eax + 4], esi
        pop    edi
L_30b3:
        pop    esi
        add    esp, 8
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        cmp    edi, -1
        jne    L_3120
        mov    al, byte ptr [g_00858138]
        xor    edi, edi
        test    al, al
        jbe    L_3152
        push    ebx
        mov    ebx, 0x857f48
L_30dc:
        cmp    dword ptr [ebx], 0
        je    L_3108
        mov    al, byte ptr [edi + 0x857f88]
        test    al, al
        jne    L_3108
        mov    esi, dword ptr [g_00896cc0]
        test    esi, esi
        je    L_3108
L_30f5:
        cmp    edi, dword ptr [esi + 0xc]
        jne    L_3101
        mov    ecx, esi
        call    FUN_0072f600
L_3101:
        mov    esi, dword ptr [esi + 8]
        test    esi, esi
        jne    L_30f5
L_3108:
        mov    eax, dword ptr [g_00858138]
        inc    edi
        and    eax, 0xff
        add    ebx, 4
        cmp    edi, eax
        jb    L_30dc
        pop    ebx
        pop    edi
        pop    esi
        ret    4
L_3120:
        mov    eax, dword ptr [edi*4 + 0x857f48]
        test    eax, eax
        je    L_3152
        mov    al, byte ptr [edi + 0x857f88]
        test    al, al
        jne    L_3152
        mov    esi, dword ptr [g_00896cc0]
        test    esi, esi
        je    L_3152
L_313f:
        cmp    edi, dword ptr [esi + 0xc]
        jne    L_314b
        mov    ecx, esi
        call    FUN_0072f600
L_314b:
        mov    esi, dword ptr [esi + 8]
        test    esi, esi
        jne    L_313f
L_3152:
        pop    edi
        pop    esi
        ret    4
    }
}
