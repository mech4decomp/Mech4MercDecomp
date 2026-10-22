/*
 * FUN_0072c006 (extent 0x72c006-0x72c088) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00858bf8;
extern int    g_008825c8;
extern int    g_008825dc;
extern int    g_008aad58;
extern int    g_008aad64;
extern int    g_008aad68;

__declspec(naked) void FUN_0072c006(void)
{
    __asm {
        mov    edi, edi
        int 3    
        mov    edi, 0xbec30072
        jb    L_c010
L_c010:
        test    eax, 0xda0072bf
        mov    edi, 0x3000072
        add    eax, dword ptr [ebx]
        add    dword ptr [ebx], eax
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [ebx]
        add    eax, dword ptr [edx]
        add    dword ptr [eax - 0x6f6f6f70], edx
        mov    eax, dword ptr [g_00858bf8]
        push    esi
        push    edi
        push    eax
        xor    esi, esi
        call    dword ptr [g_008aad68]
        mov    edi, eax
        test    edi, edi
        je    L_c076
        mov    eax, dword ptr [g_008825c8]
        cmp    eax, 0x3a8
        je    L_c07b
        cmp    eax, 0x3b6
        je    L_c07b
        push    edi
        call    dword ptr [g_008aad58]
        mov    ecx, dword ptr [g_00858bf8]
        mov    esi, eax
        neg    esi
        push    edi
        sbb    esi, esi
        push    ecx
        neg    esi
        call    dword ptr [g_008aad64]
L_c076:
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
L_c07b:
        mov    eax, dword ptr [g_008825dc]
        pop    edi
        and    eax, 0xff
        pop    esi
        ret    
    }
}
