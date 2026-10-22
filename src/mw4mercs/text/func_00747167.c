/*
 * FUN_00747167 (extent 0x747167-0x74720d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d970;
extern int    g_008b27e0;
extern int    g_008b27ec;

__declspec(naked) void FUN_00747167(void)
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
        nop    
        mov    eax, dword ptr [g_008b27ec]
        fld    qword ptr [g_0076d970]
        sub    esp, 8
        dec    eax
        je    L_71a6
        sub    eax, 2
        je    L_7198
        dec    eax
        jne    L_71c5
        mov    eax, dword ptr [esp + 0xc]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fild    qword ptr [eax + 8]
        add    esp, 8
        ret    4
L_7198:
        mov    ecx, dword ptr [esp + 0xc]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fild    qword ptr [ecx]
        add    esp, 8
        ret    4
L_71a6:
        mov    eax, dword ptr [esp + 0xc]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 8]
        add    edx, ecx
        mov    ecx, dword ptr [eax + 0xc]
        adc    ecx, dword ptr [eax + 4]
        __emit 0x89  // mov dword ptr [esp], edx
__emit 0x54
__emit 0x24
__emit 0x00
        mov     dword ptr [esp + 4], ecx
        /* __emit: fild qword ptr [esp+0] disp8-0 form DF 6C 24 00 (MSVC6 emits DF 2C 24) */
        __emit 0xDF
        __emit 0x6C
        __emit 0x24
        __emit 0x00
L_71c5:
        add    esp, 8
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [g_008b27e0]
        test    eax, eax
        je    L_7207
        mov    eax, dword ptr [ebp + 8]
        test    eax, eax
        je    L_7207
        push    esi
        mov    esi, dword ptr [ebp + 8]
        xor    ecx, ecx
        rdpmc    
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], edx
        mov    ecx, 1
        rdpmc    
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0xc], edx
        mov    eax, 1
        pop    esi
        pop    ebp
        ret    4
L_7207:
        xor     eax, eax
        pop     ebp
        /* __emit: ret 4 truncated at extent end (only C2 04, missing 00) */
        __emit 0xC2
        __emit 0x04
    }
}

