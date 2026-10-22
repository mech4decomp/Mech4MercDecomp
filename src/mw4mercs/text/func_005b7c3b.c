/*
 * FUN_005b7c3b (extent 0x5b7c3b-0x5b7d8c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern float  g_00858940;
extern float  g_00858944;
extern void __cdecl FUN_004d9400(void);
extern void __cdecl FUN_005b7e60(void);
extern void __cdecl FUN_005b7ee0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_005b7c3b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    ebp
        lea    edx, [ecx + 0x471]
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0xc], edx
        mov    byte ptr [edx], 0
        mov    dl, byte ptr [ecx + 0x16a]
        test    dl, dl
        push    edi
        lea    eax, [ecx + 0x174]
        lea    ebx, [ecx + 0x273]
        lea    ebp, [ecx + 0x372]
        mov    byte ptr [eax], 0
        mov    byte ptr [ebx], 0
        mov    byte ptr [ebp], 0
        push    esi
        je    L_7cb5
        mov    edi, dword ptr [g_0076b420]
        push    0x76c690
        push    eax
        call    edi
        push    esi
        push    0x76c690
        push    ebx
        call    edi
        push    esi
        push    0x76c690
        push    ebp
        call    edi
        mov    eax, dword ptr [esp + 0x34]
        push    esi
        push    0x76c690
        push    eax
        call    edi
        add    esp, 0x30
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    8
L_7cb5:
        mov    edi, dword ptr [g_0076b420]
        push    0x7869c0
        push    eax
        call    edi
        push    esi
        push    0x7869b0
        push    ebx
        call    edi
        push    esi
        push    0x7869a0
        push    ebp
        call    edi
        mov    ecx, dword ptr [esp + 0x34]
        push    esi
        push    0x786990
        push    ecx
        call    edi
        add    esp, 0x30
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    8
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    0x47c
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        push    esi
        mov    ecx, edi
        call    FUN_004d9400
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [edi + 0x170]
        pop    edi
        mov    dword ptr [eax + 0x60], ecx
        mov    dword ptr [eax], 0x47c
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [eax + 4]
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
        nop    
        fild    dword ptr [g_00858940]
        push    esi
        push    edi
        mov    esi, ecx
        fmul    dword ptr [esp + 0xc]
        call    FUN_0075db4a
        fild    dword ptr [g_00858944]
        mov    edi, eax
        fmul    dword ptr [esp + 0x10]
        call    FUN_0075db4a
        push    eax
        push    edi
        push    0
        mov    ecx, esi
        call    FUN_005b7e60
        push    eax
        mov    ecx, esi
        call    FUN_005b7ee0
        pop    edi
        pop    esi
        ret    8
    }
}
