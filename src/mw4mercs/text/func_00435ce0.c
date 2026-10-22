/*
 * FUN_00435ce0 (228 B) — MLR light/material setup. __thiscall, RET 0xc.
 * Sets up the renderer's light/material buffers (EDI = this+0xa8) and
 * drives virtual calls on the light source object (ESI).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00454f60(void);
extern int  __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00435ce0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x10]
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        push    edi
        push    eax
        mov     ebx, ecx
        mov     ecx, dword ptr [ebp + 0x8]
        push    esi
        push    ecx
        mov     ecx, ebx
        call    FUN_00454f60
        mov     eax, dword ptr [ebp + 0x10]
        cmp     eax, 0x3
        lea     edi, [ebx + 0xa8]
        mov     dword ptr [edi], 0x0
        mov     dword ptr [edi + 0x4], 0x0
        mov     dword ptr [ebx], 0x76e430
        jge     L_435d41
        push    0x76e300
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_435dc4
        int     3
        mov     dword ptr [ebx + 0xb0], edi
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        pop     ebp
        ret     0xc
L_435d41:
        cmp     eax, 0xb
        jge     L_435d74
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebp + 0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [esi]
        lea     ecx, [eax*4]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        mov     dword ptr [ebx + 0xb0], edi
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        pop     ebp
        ret     0xc
L_435d74:
        mov     edx, dword ptr [esi]
        lea     eax, [edi + 0x4]
        push    0x4
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        mov     dword ptr [ebp + 0x10], eax
        jbe     L_435da8
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [esi]
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [ebp + 0x10]
        lea     ecx, [eax*4]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        jmp     L_435dae
L_435da8:
        mov     dword ptr [edi], 0x0
L_435dae:
        mov     ecx, dword ptr [ebx + 0xac]
        mov     eax, 0x100
        cmp     ecx, eax
        jbe     L_435dc4
        mov     edx, dword ptr [edi]
        mov     dword ptr [edi], edx
        mov     dword ptr [edi + 0x4], eax
L_435dc4:
        mov     dword ptr [ebx + 0xb0], edi
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
