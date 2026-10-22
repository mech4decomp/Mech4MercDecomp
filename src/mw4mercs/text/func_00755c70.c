/*
 * FUN_00755c70 (extent 0x755c70-0x755d42) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern char   g_0087dd0a;
extern void __cdecl FUN_00756c00(void);
extern void __cdecl FUN_00757c70(void);
extern void __cdecl FUN_00757cb0(void);
extern void __cdecl FUN_00757cf0(void);
extern void __cdecl FUN_00757f00(void);

__declspec(naked) void FUN_00755c70(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        mov    edi, dword ptr [esi]
        lea    eax, [esp + 0xc]
        push    eax
        xor    ebx, ebx
        push    edi
        mov    byte ptr [esi + 0x98], bl
        call    FUN_00757cb0
        test    byte ptr [esp + 0xc], 1
        jne    L_5c9a
        cmp    byte ptr [esi + 0x83], bl
        je    L_5ca7
L_5c9a:
        push    edi
        call    FUN_00757c70
        push    ebx
        push    edi
        call    FUN_00757cf0
L_5ca7:
        pop    edi
        mov    byte ptr [esi + 0x82], bl
        mov    byte ptr [esi + 0x83], bl
        pop    esi
        pop    ebx
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    esi
        push    edi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    edi, dword ptr [esi]
        lea    eax, [esp + 8]
        push    eax
        push    edi
        call    FUN_00757cb0
        mov    al, byte ptr [esi + 0x83]
        test    al, al
        jne    L_5cf6
        test    byte ptr [esp + 8], 1
        jne    L_5cf6
        push    0
        push    edi
        call    FUN_00757cf0
L_5cf6:
        mov    ecx, esi
        call    FUN_00756c00
        mov    dl, byte ptr [esi + 0x80]
        xor    ecx, ecx
        test    dl, dl
        mov    edx, dword ptr [esi]
        setne    cl
        mov    byte ptr [esi + 0x83], 0
        mov    byte ptr [esi + 0x82], 1
        mov    byte ptr [g_0087dd0a], 1
        push    ecx
        push    0
        push    0
        push    edx
        call    FUN_00757f00
        push    0x858ac8
        mov    byte ptr [g_0087dd0a], 0
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        pop    ecx
        ret    
    }
}
