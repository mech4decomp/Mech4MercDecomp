/*
 * FUN_0075b0d0 (extent 0x75b0d0-0x75b162) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_007af400;
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_0075b0d0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0x10]
        mov    edx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ecx
        push    edx
        push    edi
        call    dword ptr [eax + 0x28]
        mov    esi, eax
        test    esi, esi
        jge    L_b116
        fild    qword ptr [ebp + 0xc]
        sub    esp, 8
        fmul    qword ptr [g_007af400]
        fstp    qword ptr [esp]
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7af3d8
        call    FUN_006fabf0
        add    esp, 0x18
        test    eax, eax
        je    L_b116
        int 3    
L_b116:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0xc
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0xc]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ebx
        push    ecx
        push    edi
        call    dword ptr [eax + 0x10]
        mov    esi, eax
        test    esi, esi
        jge    L_b159
        push    ebx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7af408
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_b159
        int 3    
L_b159:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
    }
}
