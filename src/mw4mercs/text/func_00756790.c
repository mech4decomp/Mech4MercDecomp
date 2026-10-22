/*
 * FUN_00756790 (extent 0x756790-0x756862) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern int    g_00856b8c;
extern void __cdecl FUN_00757bf0(void);
extern void __cdecl FUN_00758160(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00756790(void)
{
    __asm {
        sub    esp, 8
        push    esi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x64], eax
        mov    eax, dword ptr [esi + 0x70]
        test    eax, eax
        mov    byte ptr [esi + 0x75], 1
        je    L_67f7
        mov    ecx, dword ptr [eax + 0x20]
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [esp + 4], edx
        mov    dword ptr [esp + 8], 0
        fild    qword ptr [esp + 4]
        fmul    dword ptr [esp + 0x10]
        call    FUN_0075db4a
        mov    edx, dword ptr [g_00856b8c]
        mov    ecx, dword ptr [edx + 0x1c]
        test    ecx, ecx
        je    L_67ee
        cmp    eax, ecx
        jbe    L_67e5
        mov    eax, ecx
L_67e5:
        mov    ecx, dword ptr [edx + 0x18]
        cmp    eax, ecx
        jae    L_67ee
        mov    eax, ecx
L_67ee:
        push    eax
        mov    eax, dword ptr [esi]
        push    eax
        call    FUN_00757bf0
L_67f7:
        push    0x858ac8
        call    dword ptr [g_0076b100]
        pop    esi
        add    esp, 8
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x20], eax
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        mov    dword ptr [esi + 0x24], ecx
        mov    dword ptr [esi + 0x28], edx
        je    L_684f
        push    1
        mov    ecx, edx
        mov    edx, dword ptr [esp + 0x10]
        push    ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    edx
        push    ecx
        push    eax
        call    FUN_00758160
L_684f:
        push    0x858ac8
        mov    byte ptr [esi + 0x75], 1
        call    dword ptr [g_0076b100]
        pop    esi
        ret    0xc
    }
}
