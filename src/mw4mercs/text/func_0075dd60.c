/*
 * FUN_0075dd60 (extent 0x75dd60-0x75de93) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b3b0;
extern int    g_0076b3b8;
extern int    g_0076b3bc;
extern int    g_0076b3c0;
extern int    g_0076b3c4;
extern int    g_0076b3c8;
extern int    g_0076b3cc;
extern int    g_0076b3d0;
extern int    g_0076b3d4;
extern int    g_0076b3d8;
extern int    g_0076b3dc;
extern int    g_0076b3e0;
extern int    g_0076b3e4;
extern int    g_0076b3e8;
extern int    g_0076b3ec;
extern int    g_0076b3f0;
extern int    g_0076b3f4;
extern int    g_0076b3f8;
extern int    g_0076b3fc;
extern int    g_0076b400;
extern int    g_0076b408;

__declspec(naked) void FUN_0075dd60(void)
{
    __asm {
        push    edi
        push    esi
        push    ebx
        xor    edi, edi
        mov    eax, dword ptr [esp + 0x14]
        or    eax, eax
        jge    L_dd81
        inc    edi
        mov    edx, dword ptr [esp + 0x10]
        neg    eax
        neg    edx
        sbb    eax, 0
        mov    dword ptr [esp + 0x14], eax
        mov    dword ptr [esp + 0x10], edx
L_dd81:
        mov    eax, dword ptr [esp + 0x1c]
        or    eax, eax
        jge    L_dd9d
        inc    edi
        mov    edx, dword ptr [esp + 0x18]
        neg    eax
        neg    edx
        sbb    eax, 0
        mov    dword ptr [esp + 0x1c], eax
        mov    dword ptr [esp + 0x18], edx
L_dd9d:
        or    eax, eax
        jne    L_ddb9
        mov    ecx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x14]
        xor    edx, edx
        div    ecx
        mov    ebx, eax
        mov    eax, dword ptr [esp + 0x10]
        div    ecx
        mov    edx, ebx
        jmp    L_ddfa
L_ddb9:
        mov    ebx, eax
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x10]
L_ddc7:
        shr    ebx, 1
        rcr    ecx, 1
        shr    edx, 1
        rcr    eax, 1
        or    ebx, ebx
        jne    L_ddc7
        div    ecx
        mov    esi, eax
        mul    dword ptr [esp + 0x1c]
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        mul    esi
        add    edx, ecx
        jb    L_ddf5
        cmp    edx, dword ptr [esp + 0x14]
        ja    L_ddf5
        jb    L_ddf6
        cmp    eax, dword ptr [esp + 0x10]
        jbe    L_ddf6
L_ddf5:
        dec    esi
L_ddf6:
        xor    edx, edx
        mov    eax, esi
L_ddfa:
        dec    edi
        jne    L_de04
        neg    edx
        neg    eax
        sbb    edx, 0
L_de04:
        pop    ebx
        pop    esi
        pop    edi
        ret    0x10
        jmp    dword ptr [g_0076b408]
        jmp    dword ptr [g_0076b3f8]
        jmp    dword ptr [g_0076b400]
        jmp    dword ptr [g_0076b3fc]
        jmp    dword ptr [g_0076b3ec]
        jmp    dword ptr [g_0076b3f4]
        jmp    dword ptr [g_0076b3f0]
        jmp    dword ptr [g_0076b3e0]
        jmp    dword ptr [g_0076b3e8]
        jmp    dword ptr [g_0076b3e4]
        jmp    dword ptr [g_0076b3d4]
        jmp    dword ptr [g_0076b3dc]
        jmp    dword ptr [g_0076b3d8]
        jmp    dword ptr [g_0076b3c8]
        jmp    dword ptr [g_0076b3d0]
        jmp    dword ptr [g_0076b3cc]
        jmp    dword ptr [g_0076b3bc]
        jmp    dword ptr [g_0076b3c4]
        jmp    dword ptr [g_0076b3c0]
        jmp    dword ptr [g_0076b3b0]
        jmp    dword ptr [g_0076b3b8]
        mov    eax, ecx
        mov    dword ptr [eax], 0x7afae8
        ret    4
    }
}
