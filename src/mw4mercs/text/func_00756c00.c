/*
 * FUN_00756c00 (extent 0x756c00-0x756cf7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern int    g_008aadc8;
extern void __cdecl FUN_006f4940(void);
extern void __cdecl FUN_00727150(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_00757c70(void);
extern void __cdecl FUN_007586b0(void);

__declspec(naked) void FUN_00756c00(void)
{
    __asm {
        push    esi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        je    L_6c25
        push    1
        lea    ecx, [esi + 0x1c]
        push    ecx
        push    eax
        call    FUN_007586b0
        mov    byte ptr [esi + 0x75], 1
L_6c25:
        push    0x858ac8
        call    dword ptr [g_0076b100]
        pop    esi
        ret    
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
        push    esi
        push    edi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    edi, dword ptr [esi]
        test    edi, edi
        je    L_6cd1
        push    edi
        call    FUN_00757c70
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        je    L_6c68
        push    eax
        call    FUN_00740db0
L_6c68:
        mov    al, byte ptr [esi + 0x99]
        test    al, al
        jne    L_6cae
        push    edi
        call    FUN_00740db0
        mov    eax, dword ptr [esi + 0x70]
        test    eax, eax
        je    L_6cd1
        mov    eax, dword ptr [esi + 0x9c]
        test    eax, eax
        je    L_6cd1
        cmp    eax, 1
        je    L_6cd1
        mov    al, byte ptr [esi + 0x9a]
        test    al, al
        jne    L_6cd1
        mov    eax, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [g_008aadc8]
        push    1
        neg    eax
        push    eax
        push    ecx
        call    FUN_006f4940
        jmp    L_6cd1
L_6cae:
        mov    eax, dword ptr [esi + 0x9c]
        test    eax, eax
        je    L_6cbd
        cmp    eax, 1
        jne    L_6cd1
L_6cbd:
        mov    ecx, dword ptr [esi + 0x70]
        test    ecx, ecx
        push    edi
        je    L_6ccc
        call    FUN_00727150
        jmp    L_6cd1
L_6ccc:
        call    FUN_00740db0
L_6cd1:
        push    0x858ac8
        mov    dword ptr [esi + 4], 0
        mov    dword ptr [esi], 0
        mov    byte ptr [esi + 0x9a], 0
        mov    byte ptr [esi + 0x74], 0
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        ret    
    }
}
