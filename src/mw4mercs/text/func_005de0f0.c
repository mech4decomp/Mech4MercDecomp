/*
 * FUN_005de0f0 (123 B) — Allocates a 0xC-byte node, initializes it from
 * param_2+0x44, calls a virtual method on param_1, then walks a linked
 * list of nodes calling FUN_005de750 for each, and frees the node.
 *
 * __cdecl (RET), 2 stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084c0(unsigned int size, void *pool);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_005de750(void *a, void *b);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_005de0f0(void *param_1, void *param_2)
{
    

extern int DAT_007b8810;
__asm {
        mov eax, dword ptr [DAT_007b8810]
        push    esi
        push    edi
        push    eax
        push    0xC
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        jz      L_120
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx + 0x44]
        add     ecx, 0x44
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76CD64
        mov     esi, eax
        jmp     L_122
L_120:
        xor     esi, esi
L_122:
        mov     ecx, dword ptr [esi + 0x4]
        call    FUN_00417a40
        mov     edi, dword ptr [esp + 0xC]
        push    0x4
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x24]
L_140:
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_15F
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esi + 0x8], edx
        jz      L_15F
        push    ecx
        push    edi
        call    FUN_005de750
        add     esp, 8
        jmp     L_140
L_15F:
        push    esi
        call    FUN_004084e0
        add     esp, 4
        pop     edi
        pop     esi
        ret
    }


}
