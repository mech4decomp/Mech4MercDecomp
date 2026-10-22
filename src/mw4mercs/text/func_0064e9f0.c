/*
 * FUN_0064e9f0 (139 B) — __cdecl, 2 stack args (param_1, param_2), RET.
 *
 * Copies a vector-like structure from param_2 into param_1, allocating a
 * buffer via FUN_004084d0 and copying the element array via memmove (IAT
 * 0x0076b28c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void *g_76b28c;

__declspec(naked) void __cdecl FUN_0064e9f0(void *param_1, void *param_2)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        xor     ebp, ebp
        cmp     esi, ebp
        jz      L_ea78
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esi], ecx
        mov     ecx, dword ptr [eax + 0x8]
        mov     dword ptr [esi + 0x4], edx
        mov     dword ptr [esi + 0x8], ecx
        push    ebx
        and     ecx, 0xfffffffe
        push    edi
        mov     edi, dword ptr [eax + 0x10]
        mov     dword ptr [eax + 0x8], ecx
        mov     cl, byte ptr [eax + 0x14]
        mov     eax, dword ptr [eax + 0xc]
        mov     ebx, edi
        sub     ebx, eax
        sar     ebx, 0x2
        mov     dword ptr [esi + 0xc], ebp
        mov     byte ptr [esi + 0x14], cl
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esi + 0x10], ebp
        mov     dword ptr [esi + 0x14], ebp
        jz      L_ea50
        lea     eax, [ebx*4]
        push    eax
        call    FUN_004084d0
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 0x4
L_ea50:
        sub     edi, eax
        sar     edi, 0x2
        shl     edi, 0x2
        push    edi
        push    eax
        lea     ecx, [ebp + ebx*4]
        push    ebp
        mov     dword ptr [esi + 0xc], ebp
        mov     dword ptr [esi + 0x10], ebp
        mov     dword ptr [esi + 0x14], ecx
        call    dword ptr [g_76b28c]
        add     esp, 0xc
        add     edi, ebp
        mov     dword ptr [esi + 0x10], edi
        pop     edi
        pop     ebx
L_ea78:
        pop     esi
        pop     ebp
        ret
    }
}
