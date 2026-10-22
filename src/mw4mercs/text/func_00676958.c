/*
 * FUN_00676958 (extent 0x676958-0x6769ba) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00785970;
extern void __cdecl FUN_00676520(void);
extern void __cdecl FUN_00676990(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00676958(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    qword ptr [esp + 4]
        push    esi
        fmul    qword ptr [g_00785970]
        push    edi
        mov    esi, ecx
        call    FUN_0075db4a
        mov    edi, eax
        cmp    dword ptr [esi + 0xc], edi
        jge    L_6986
L_697a:
        mov    ecx, esi
        call    FUN_00676990
        cmp    dword ptr [esi + 0xc], edi
        jl    L_697a
L_6986:
        pop    edi
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 8]
        push    eax
        call    FUN_00676520
        mov    eax, dword ptr [esi + 8]
        mov    edx, dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0x10]
        inc    eax
        inc    edx
        cmp    eax, ecx
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0xc], edx
        jne    L_69b8
        mov    dword ptr [esi + 8], 0
L_69b8:
        pop    esi
        ret    
    }
}
