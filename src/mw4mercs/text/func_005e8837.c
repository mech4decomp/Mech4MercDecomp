/*
 * FUN_005e8837 (extent 0x5e8837-0x5e8998) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004da2f0(void);
extern void __cdecl FUN_004da620(void);
extern void __cdecl FUN_005faa90(void);
extern void __cdecl FUN_005fad50(void);
extern void __cdecl FUN_005fbc40(void);

__declspec(naked) void FUN_005e8837(void)
{
    __asm {
        /* __emit: jump-table DATA of preceding function (reloc dwords),
           mis-decoded as code by gen_bigfunc; emit raw bytes */
        __emit 0x90
        __emit 0x1e
        __emit 0x86
        __emit 0x5e
        __emit 0x00
        __emit 0x33
        __emit 0x86
        __emit 0x5e
        __emit 0x00
        __emit 0x63
        __emit 0x86
        __emit 0x5e
        __emit 0x00
        __emit 0x99
        __emit 0x86
        __emit 0x5e
        __emit 0x00
        __emit 0x1e
        __emit 0x86
        __emit 0x5e
        __emit 0x00
        __emit 0x51
        __emit 0x86
        __emit 0x5e
        __emit 0x00
        __emit 0x63
        __emit 0x86
        __emit 0x5e
        __emit 0x00
        __emit 0x75
        __emit 0x86
        __emit 0x5e
        __emit 0x00
        __emit 0x33
        __emit 0x86
        __emit 0x5e
        __emit 0x00
        __emit 0x87
        __emit 0x86
        __emit 0x5e
        __emit 0x00
        __emit 0x99
        __emit 0x86
        __emit 0x5e
        __emit 0x00
        __emit 0xa5
        __emit 0x86
        __emit 0x5e
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        sub    esp, 0xc
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x1c]
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        push    edi
        jne    L_893f
        mov    ecx, dword ptr [esi + 0x2fc]
        test    ecx, ecx
        je    L_889d
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x12c]
L_889d:
        mov    eax, dword ptr [esp + 0x20]
        push    eax
        mov    ecx, esi
        call    FUN_004da2f0
        cmp    ebp, 3
        je    L_88b8
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xd8]
L_88b8:
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        mov    edi, eax
        mov    eax, dword ptr [esi + 0xd8]
        mov    ecx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    dword ptr [esp + 0x10], ecx
        mov    edx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 0x14], edx
        mov    eax, dword ptr [eax + 0x2c]
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    edx, [edi + 0x68]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], eax
        call    FUN_005faa90
        lea    ebx, [esi + 0x148]
        mov    ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jne    L_8935
        mov    dx, word ptr [edi + 0x66]
        push    ecx
        mov    cx, word ptr [edi + 0x64]
        mov    eax, esp
        mov    word ptr [eax], cx
        mov    ecx, esi
        mov    word ptr [eax + 2], dx
        call    FUN_005fad50
        mov    edi, eax
        test    edi, edi
        je    L_8935
        mov    ecx, ebx
        call    FUN_0041fcb0
        push    edi
        mov    ecx, ebx
        call    FUN_0041fcd0
L_8935:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xd4]
L_893f:
        mov    ecx, dword ptr [esp + 0x20]
        push    ebp
        push    ecx
        mov    ecx, esi
        call    FUN_004da620
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xc
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
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_005fbc40
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
        mov    byte ptr [ecx + 0x4a4], 1
        ret    
    }
}
