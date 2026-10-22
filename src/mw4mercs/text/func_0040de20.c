/*
 * FUN_0040de20 (152 B) — __fastcall object teardown/destructor in the loader
 * region. Frees a linked list of items (FUN_0040f930/FUN_0040f2a0), then
 * releases sub-objects (FUN_004179f0/FUN_00417980/FUN_00412b60).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040f930(void);
extern void __cdecl FUN_0040f2a0(void);
extern void __cdecl FUN_0040f300(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004179f0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_00412b60(void);

__declspec(naked) void FUN_0040de20(void)
{
    __asm {
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        mov     edi, dword ptr [ebp+0x4c]
        test    edi, edi
        jz      L_de83
        mov     eax, dword ptr [edi+4]
        test    eax, eax
        jz      L_de70
        mov     eax, dword ptr [edi]
        mov     esi, dword ptr [eax+4]
        test    esi, esi
        jz      L_de5a
        push    ebx
L_de3d:
        mov     ecx, dword ptr [esi+0xc]
        push    ecx
        mov     ecx, edi
        call    FUN_0040f930
        mov     ebx, dword ptr [esi+8]
        push    esi
        mov     ecx, edi
        call    FUN_0040f2a0
        test    ebx, ebx
        mov     esi, ebx
        jnz     L_de3d
        pop     ebx
L_de5a:
        mov     eax, dword ptr [edi]
        mov     dword ptr [eax+8], eax
        mov     dword ptr [eax+4], 0
        mov     dword ptr [eax+0xc], eax
        mov     dword ptr [edi+4], 0
L_de70:
        mov     edx, dword ptr [edi]
        push    1
        push    edx
        call    FUN_0040f300
        push    edi
        call    FUN_004084e0
        add     esp, 0xc
L_de83:
        lea     esi, [ebp+0x44]
        mov     ecx, esi
        call    FUN_004179f0
        mov     ecx, esi
        call    FUN_00417980
        lea     ecx, [ebp+0xc]
        call    FUN_00412b60
        mov     eax, dword ptr [ebp]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        jz      L_deb7
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_deb7
        push    eax
        call    FUN_004084e0
        pop     ecx
L_deb7:
        ret
    }
}
