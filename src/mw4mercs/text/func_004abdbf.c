/*
 * FUN_004abdbf (extent 0x4abdbf-0x4ac0da) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern int    g_007da93c;
extern int    g_007da9a0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_004939d0(void);
extern void __cdecl FUN_0049d410(void);
extern void __cdecl FUN_004ac9a0(void);
extern void __cdecl FUN_004adf10(void);
extern void __cdecl FUN_004ae4c0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004abdbf(void)
{
    __asm {
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
        mov    ecx, dword ptr [edi + 0x64]
        lea    edx, [edi + 0x68]
        mov    dword ptr [esi + 0x64], ecx
        push    edx
        lea    ecx, [esi + 0x68]
        call    FUN_004ae4c0
        mov    ecx, dword ptr [edi + 0x78]
        mov    eax, dword ptr [edi + 0x7c]
        mov    edx, dword ptr [edi + 0x88]
        mov    dword ptr [esi + 0x78], ecx
        mov    ecx, dword ptr [edi + 0x94]
        mov    dword ptr [esi + 0x7c], eax
        mov    eax, dword ptr [edi + 0x84]
        mov    dword ptr [esi + 0x88], edx
        mov    edx, dword ptr [edi + 0x90]
        mov    dword ptr [esi + 0x94], ecx
        mov    dword ptr [esi + 0x84], eax
        mov    eax, dword ptr [edi + 0x9c]
        lea    ecx, [edi + 0xa0]
        push    ecx
        mov    dword ptr [esi + 0x90], edx
        lea    ecx, [esi + 0xa0]
        mov    dword ptr [esi + 0x9c], eax
        call    FUN_004adf10
        lea    edx, [edi + 0xb8]
        push    edx
        lea    ecx, [esi + 0xb8]
        call    FUN_004ae4c0
        lea    eax, [edi + 0xc4]
        push    eax
        lea    ecx, [esi + 0xc4]
        call    FUN_004ae4c0
        mov    cl, byte ptr [edi + 0xd0]
        lea    edx, [edi + 0xd8]
        mov    byte ptr [esi + 0xd0], cl
        push    edx
        lea    ecx, [esi + 0xd8]
        call    FUN_004ae4c0
        lea    eax, [edi + 0xe4]
        push    eax
        lea    ecx, [esi + 0xe4]
        call    FUN_004adf10
        mov    cl, byte ptr [edi + 0xf8]
        mov    edx, dword ptr [edi + 0x104]
        mov    eax, dword ptr [edi + 0x110]
        mov    dword ptr [esi + 0x104], edx
        mov    dl, byte ptr [edi + 0x114]
        mov    byte ptr [esi + 0xf8], cl
        mov    ecx, dword ptr [edi + 0x10c]
        mov    dword ptr [esi + 0x10c], ecx
        mov    ecx, dword ptr [edi + 0x12c]
        mov    dword ptr [esi + 0x110], eax
        mov    eax, dword ptr [edi + 0x120]
        mov    byte ptr [esi + 0x114], dl
        mov    edx, dword ptr [edi + 0x128]
        mov    dword ptr [esi + 0x120], eax
        mov    al, byte ptr [edi + 0x130]
        mov    dword ptr [esi + 0x12c], ecx
        mov    ecx, dword ptr [edi + 0x13c]
        mov    dword ptr [esi + 0x128], edx
        mov    edx, dword ptr [edi + 0x148]
        mov    dword ptr [esi + 0x13c], ecx
        mov    cl, byte ptr [edi + 0x14c]
        mov    byte ptr [esi + 0x130], al
        mov    eax, dword ptr [edi + 0x144]
        mov    dword ptr [esi + 0x148], edx
        lea    edx, [edi + 0x154]
        mov    byte ptr [esi + 0x14c], cl
        push    edx
        lea    ecx, [esi + 0x154]
        mov    dword ptr [esi + 0x144], eax
        call    FUN_004adf10
        lea    eax, [edi + 0x168]
        push    eax
        lea    ecx, [esi + 0x168]
        call    FUN_0049d410
        mov    cl, byte ptr [edi + 0x174]
        lea    edx, [edi + 0x17c]
        mov    byte ptr [esi + 0x174], cl
        push    edx
        lea    ecx, [esi + 0x17c]
        call    FUN_004adf10
        lea    eax, [edi + 0x190]
        push    eax
        lea    ecx, [esi + 0x190]
        call    FUN_0049d410
        mov    cl, byte ptr [edi + 0x19c]
        lea    edx, [edi + 0x1a4]
        mov    byte ptr [esi + 0x19c], cl
        push    edx
        lea    ecx, [esi + 0x1a4]
        call    FUN_004adf10
        lea    eax, [edi + 0x1b8]
        push    eax
        lea    ecx, [esi + 0x1b8]
        call    FUN_0049d410
        mov    cl, byte ptr [edi + 0x1c4]
        lea    edx, [edi + 0x1cc]
        mov    byte ptr [esi + 0x1c4], cl
        push    edx
        lea    ecx, [esi + 0x1cc]
        call    FUN_004ae4c0
        lea    eax, [edi + 0x1d8]
        push    eax
        lea    ecx, [esi + 0x1d8]
        call    FUN_004ae4c0
        mov    cl, byte ptr [edi + 0x1e4]
        lea    edx, [edi + 0x1ec]
        mov    byte ptr [esi + 0x1e4], cl
        push    edx
        lea    ecx, [esi + 0x1ec]
        call    FUN_004ae4c0
        lea    eax, [edi + 0x1f8]
        push    eax
        lea    ecx, [esi + 0x1f8]
        call    FUN_0049d410
        mov    cl, byte ptr [edi + 0x204]
        lea    edx, [edi + 0x20c]
        mov    byte ptr [esi + 0x204], cl
        push    edx
        lea    ecx, [esi + 0x20c]
        call    FUN_004ae4c0
        lea    eax, [edi + 0x218]
        push    eax
        lea    ecx, [esi + 0x218]
        call    FUN_0049d410
        mov    cl, byte ptr [edi + 0x224]
        lea    edx, [edi + 0x228]
        mov    byte ptr [esi + 0x224], cl
        push    edx
        lea    ecx, [esi + 0x228]
        call    FUN_004ac9a0
        lea    eax, [edi + 0x248]
        push    eax
        lea    ecx, [esi + 0x248]
        call    FUN_004ac9a0
        mov    ecx, dword ptr [edi + 0x268]
        mov    dword ptr [esi + 0x268], ecx
        call    FUN_006f49a0
        pop    edi
        pop    esi
        ret    4
        nop    
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_c0ce
        mov    eax, dword ptr [g_007da93c]
        push    eax
        push    0x7b3230
        push    0x521
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0
        mov    dword ptr [esi + 0x18], 0
        mov    dword ptr [g_007da9a0], esi
        pop    esi
        ret    
L_c0ce:
        mov    dword ptr [g_007da9a0], 0
        pop    esi
        ret    
    }
}
