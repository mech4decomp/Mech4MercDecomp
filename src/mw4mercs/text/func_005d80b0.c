/*
 * FUN_005d80b0 (239 B) — Clean up a rail graph: free the int array at
 * +0x10, rebuild the object array at +0x1c (reallocating each node's
 * sub-array via FUN_005da5a0 and FUN_0040ccd0), then reset the end
 * pointer at +0x14.
 *
 * __fastcall (ECX = this), no stack params, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005d80b0(void *param)
{
    

extern void __cdecl FUN_1004084bd(void);
extern void __cdecl FUN_005da53a(void);
extern void __cdecl FUN_10040cc3a(void);
__asm {
sub     esp, 0xc
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x14]
        mov     esi, dword ptr [edi + 0x10]
        sub     eax, esi
        sar     eax, 0x2
        test    eax, eax
        mov     dword ptr [esp + 0x14], edi
        jle     L80EC
        mov     ebx, eax
L80CD:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L80E0
        test    eax, eax
        jz      L80E0
        push    eax
        call FUN_1004084bd
        add     esp, 0x4
L80E0:
        mov     dword ptr [esi], 0x0
        add     esi, 0x4
        dec     ebx
        jnz     L80CD
L80EC:
        mov     eax, dword ptr [edi + 0x20]
        mov     esi, dword ptr [edi + 0x1c]
        sub     eax, esi
        sar     eax, 0x2
        test    eax, eax
        jle     L8177
        push    ebp
        mov     ebp, esi
        mov     dword ptr [esp + 0x14], eax
L8102:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      L8168
        mov     ecx, dword ptr [esp + 0x18]
        push    0x0
        mov     esi, eax
        mov     edx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [esi + 0x18]
        push    ecx
        push    edx
        push    eax
        push    eax
        call FUN_005da53a
        mov     ebx, dword ptr [esi + 0x20]
        mov     dword ptr [esi + 0x18], eax
        mov     edi, dword ptr [esi + 0x24]
        mov     ecx, edi
        sub     ecx, edi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        add     esp, 0x14
        test    edx, edx
        jle     L8161
        mov     dword ptr [esp + 0x10], edx
L8148:
        push    edi
        mov     ecx, ebx
        call FUN_10040cc3a
        mov     eax, dword ptr [esp + 0x10]
        add     edi, 0xc
        add     ebx, 0xc
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jnz     L8148
L8161:
        mov     edi, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x24], ebx
L8168:
        mov     eax, dword ptr [esp + 0x14]
        add     ebp, 0x4
        dec     eax
        mov     dword ptr [esp + 0x14], eax
        jnz     L8102
        pop     ebp
L8177:
        mov     eax, dword ptr [edi + 0x14]
        mov     edx, dword ptr [edi + 0x10]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 0x2
        test    ecx, ecx
        jle     L8195
L8188:
        mov     esi, dword ptr [eax]
        mov     dword ptr [edx], esi
        add     eax, 0x4
        add     edx, 0x4
        dec     ecx
        jnz     L8188
L8195:
        mov     dword ptr [edi + 0x14], edx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
    }


}
