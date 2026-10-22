/*
 * FUN_006199f0 (271 B) — Tree/container copy constructor.
 *
 * __thiscall (ECX = this = EBP), RET 4 (one stack param at ESP+0xC).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_00599590(void);
extern void __cdecl FUN_00619ee0(void);
extern void __cdecl FUN_0061a060(void);

__declspec(naked) void __stdcall FUN_006199f0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        mov     al, byte ptr [ebx]
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        mov     byte ptr [ebp], al
        push    0x18
        mov     dword ptr [ebp], 0
        call    FUN_004084d0
        mov     ecx, dword ptr [ebx]
        mov     esi, dword ptr [ecx + 0x4]
        mov     edi, eax
        mov     al, byte ptr [ebx + 0x8]
        add     esp, 4
        test    esi, esi
        mov     dword ptr [ebp], edi
        mov     dword ptr [ebp + 0x4], 0
        mov     byte ptr [ebp + 0x8], al
        mov     byte ptr [edi], 0
        jnz     L_619a4c
        mov     ecx, dword ptr [ebx + 0x4]
        mov     dword ptr [edi + 0x4], 0
        mov     dword ptr [edi + 0x8], edi
        mov     dword ptr [edi + 0xc], edi
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x4], ecx
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     4
L_619a4c:
        lea     edx, [esi + 0x10]
        push    edx
        mov     ecx, ebp
        call    FUN_00599590
        mov     ebx, eax
        mov     al, byte ptr [esi]
        xor     ecx, ecx
        mov     byte ptr [ebx], al
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, ecx
        mov     dword ptr [ebx + 0x8], ecx
        mov     dword ptr [ebx + 0xc], ecx
        mov     dword ptr [ebx + 0x4], edi
        jz      L_619a7b
        push    ebx
        push    eax
        mov     ecx, ebp
        call    FUN_00619ee0
        mov     dword ptr [ebx + 0xc], eax
L_619a7b:
        mov     edi, dword ptr [esi + 0x8]
        test    edi, edi
        mov     dword ptr [esp + 0x10], ebx
        jz      L_619ab8
L_619a86:
        push    edi
        mov     ecx, ebp
        call    FUN_0061a060
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x8], esi
        mov     dword ptr [esi + 0x4], eax
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        jz      L_619aad
        push    esi
        push    eax
        mov     ecx, ebp
        call    FUN_00619ee0
        mov     dword ptr [esi + 0xc], eax
L_619aad:
        mov     edi, dword ptr [edi + 0x8]
        test    edi, edi
        mov     dword ptr [esp + 0x10], esi
        jnz     L_619a86
L_619ab8:
        mov     edx, dword ptr [ebp]
        mov     dword ptr [edx + 0x4], ebx
        mov     eax, ebx
        mov     ebx, dword ptr [ebx + 0x8]
        test    ebx, ebx
        jz      L_619ad2
L_619ac9:
        mov     ecx, ebx
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        __emit  0x75            /* __emit: backward jnz rel-offset miscomputed by MSVC6 (off-by-2); ref 75 F7 */
        __emit  0xF7
L_619ad2:
        mov     dword ptr [edx + 0x8], eax
        mov     ecx, dword ptr [edx + 0x4]
        mov     eax, dword ptr [ecx + 0xc]
        test    eax, eax
        jz      L_619ae8
L_619adf:
        mov     ecx, eax
        mov     eax, dword ptr [ecx + 0xc]
        test    eax, eax
        jnz     L_619adf
L_619ae8:
        mov     ebx, dword ptr [esp + 0x18]
        pop     edi
        mov     dword ptr [edx + 0xc], ecx
        mov     ecx, dword ptr [ebx + 0x4]
        pop     esi
        mov     dword ptr [ebp + 0x4], ecx
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     4
    }
}
