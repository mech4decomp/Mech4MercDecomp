/*
 * FUN_00411b00 (116 B) — __thiscall: allocates a 0x1c-byte node via
 * FUN_004084c0, initializes it (vtable 0x76d1c0, back-pointer this),
 * then FUN_00412780(param) + FUN_004179b0(node). Returns the node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8810;
extern int g_007b8c10;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_00411b00(void)
{
    __asm {
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [g_007b8810]
        mov     eax, dword ptr [edi + 0x10]
        push    ecx
        push    0x1c
        mov     byte ptr [eax + 0x4], 0x1
        call    FUN_004084c0
        mov     esi, eax
        xor     ebp, ebp
        add     esp, 0x8
        cmp     esi, ebp
        jz      L_411b4a
        mov     edx, dword ptr [g_007b8c10]
        push    edx
        mov     ecx, esi
        call    FUN_00415180
        mov     dword ptr [esi + 0x14], ebp
        mov     dword ptr [esi + 0x18], ebp
        mov     dword ptr [esi + 0x8], ebp
        mov     dword ptr [esi + 0xc], ebp
        mov     dword ptr [esi], 0x76d1c0
        mov     dword ptr [esi + 0x10], edi
        jmp     L_411b4c
L_411b4a:
        xor     esi, esi
L_411b4c:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        lea     ecx, [esi + 0x14]
        call    FUN_00412780
        mov     ecx, dword ptr [esi + 0x10]
        mov     edx, dword ptr [ecx + 0x10]
        push    esi
        lea     ecx, [edi + 0x18]
        mov     byte ptr [edx + 0x4], 0x1
        call    FUN_004179b0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0x4
    }
}
