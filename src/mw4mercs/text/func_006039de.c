/*
 * FUN_006039de (extent 0x6039de-0x603b0f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f27a0;
extern int    g_007f27a4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_004dd190(void);
extern void __cdecl FUN_004dd1a0(void);
extern void __cdecl FUN_004dd220(void);
extern void __cdecl FUN_00603a50(void);
extern void __cdecl FUN_00605530(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_006039de(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007f27a4]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x8c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3a20
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [g_007f27a0]
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_00603a50
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_3a20:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004dd190
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004dd1a0
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_004dd220
        lea    edi, [esi + 0x40]
        xor    ebx, ebx
        push    ebx
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x78b8c0
        lea    edi, [esi + 0x48]
        push    ebx
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x78b8c0
        lea    edi, [esi + 0x50]
        push    ebx
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x78b8c0
        mov    edi, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x58], ebx
        mov    dword ptr [esi + 0x5c], ebx
        mov    dword ptr [esi + 0x60], ebx
        mov    dword ptr [esi + 0x64], ebx
        mov    dword ptr [esi + 0x68], ebx
        mov    dword ptr [esi + 0x6c], ebx
        mov    dword ptr [esi + 0x70], ebx
        mov    dword ptr [esi + 0x74], ebx
        mov    dword ptr [esi + 0x78], ebx
        push    0x28
        mov    dword ptr [esi + 0x7c], ebx
        mov    dword ptr [esi], 0x78b8b0
        mov    byte ptr [esi + 0x1c], bl
        mov    dword ptr [esi + 0x18], edi
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_3ae6
        push    edi
        push    0x5f8be0
        mov    ecx, eax
        call    FUN_00605530
        jmp    L_3ae8
L_3ae6:
        xor    eax, eax
L_3ae8:
        mov    dword ptr [esi + 0x3c], eax
        pop    edi
        mov    dword ptr [esi + 0x30], ebx
        mov    dword ptr [esi + 0x34], ebx
        mov    byte ptr [esi + 0x1d], bl
        mov    byte ptr [esi + 0x1e], bl
        mov    byte ptr [esi + 0x1f], bl
        mov    byte ptr [esi + 0x20], bl
        mov    dword ptr [esi + 0x24], ebx
        mov    dword ptr [esi + 0x28], 0xffffffff
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0xc
    }
}
