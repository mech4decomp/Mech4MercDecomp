/*
 * FUN_004a3914 (extent 0x4a3914-0x4a3ada) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern int    g_007da93c;
extern int    g_007da980;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_004939d0(void);
extern void __cdecl FUN_004ae4c0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004a3914(void)
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
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004939d0
        mov    eax, dword ptr [g_007da920]
        push    eax
        call    FUN_006f4950
        lea    ecx, [edi + 0x64]
        push    ecx
        lea    ecx, [esi + 0x64]
        call    FUN_004ae4c0
        mov    edx, dword ptr [edi + 0x78]
        mov    cl, byte ptr [edi + 0x7c]
        mov    eax, dword ptr [edi + 0x74]
        mov    dword ptr [esi + 0x78], edx
        lea    edx, [edi + 0x84]
        mov    byte ptr [esi + 0x7c], cl
        push    edx
        lea    ecx, [esi + 0x84]
        mov    dword ptr [esi + 0x74], eax
        call    FUN_004ae4c0
        mov    eax, dword ptr [edi + 0x98]
        mov    ecx, dword ptr [edi + 0x94]
        mov    dl, byte ptr [edi + 0x9c]
        mov    dword ptr [esi + 0x98], eax
        lea    eax, [edi + 0xa4]
        mov    dword ptr [esi + 0x94], ecx
        push    eax
        lea    ecx, [esi + 0xa4]
        mov    byte ptr [esi + 0x9c], dl
        call    FUN_004ae4c0
        mov    ecx, dword ptr [edi + 0xb8]
        mov    edx, dword ptr [edi + 0xb4]
        mov    al, byte ptr [edi + 0xbc]
        mov    dword ptr [esi + 0xb8], ecx
        lea    ecx, [edi + 0xc4]
        push    ecx
        lea    ecx, [esi + 0xc4]
        mov    dword ptr [esi + 0xb4], edx
        mov    byte ptr [esi + 0xbc], al
        call    FUN_004ae4c0
        mov    eax, dword ptr [edi + 0xd4]
        mov    edx, dword ptr [edi + 0xd8]
        mov    cl, byte ptr [edi + 0xdc]
        mov    dword ptr [esi + 0xd4], eax
        mov    eax, dword ptr [edi + 0xf4]
        mov    dword ptr [esi + 0xd8], edx
        mov    edx, dword ptr [edi + 0xe8]
        mov    byte ptr [esi + 0xdc], cl
        mov    ecx, dword ptr [edi + 0xf0]
        mov    dword ptr [esi + 0xe8], edx
        mov    dl, byte ptr [edi + 0xf8]
        mov    dword ptr [esi + 0xf4], eax
        lea    eax, [edi + 0x100]
        mov    dword ptr [esi + 0xf0], ecx
        push    eax
        lea    ecx, [esi + 0x100]
        mov    byte ptr [esi + 0xf8], dl
        call    FUN_004ae4c0
        lea    ecx, [edi + 0x10c]
        push    ecx
        lea    ecx, [esi + 0x10c]
        call    FUN_004ae4c0
        mov    dl, byte ptr [edi + 0x118]
        mov    al, byte ptr [edi + 0x11c]
        mov    cl, byte ptr [edi + 0x11d]
        mov    byte ptr [esi + 0x118], dl
        mov    dl, byte ptr [edi + 0x11e]
        mov    byte ptr [esi + 0x11c], al
        mov    byte ptr [esi + 0x11d], cl
        mov    byte ptr [esi + 0x11e], dl
        call    FUN_006f49a0
        pop    edi
        pop    esi
        ret    4
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
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3ace
        mov    eax, dword ptr [g_007da93c]
        push    eax
        push    0x7b2ec8
        push    0x529
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0
        mov    dword ptr [esi + 0x18], 0
        mov    dword ptr [g_007da980], esi
        pop    esi
        ret    
L_3ace:
        mov    dword ptr [g_007da980], 0
        pop    esi
        ret    
    }
}
