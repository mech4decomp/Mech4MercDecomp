/*
 * FUN_10033a40 (138 B) - __thiscall, RET 0x8.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10033cc0(void);   /* rel32 call */

__declspec(naked) void FUN_10033a40(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        test    ebp, ebp
        push    esi
        push    edi
        mov     esi, ecx
        jz      L_55
        mov     dword ptr [ebp], 0
L_55:
        mov     ecx, esi
        call    FUN_10033cc0
        mov     bx, word ptr [esp + 0x14]
        mov     edi, eax
        xor     eax, eax
        mov     ax, bx
        add     eax, 0xc
        cmp     eax, 0x10000
        jc      L_7e
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80070057
        pop     ebx
        ret     8
L_7e:
        mov     ecx, dword ptr [esi + 8]
        mov     edx, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [esi + 0xc]
        sub     eax, 0xc
        push    eax
        push    ecx
        call    dword ptr [edx + 0x10]
        test    eax, eax
        jz      L_b3
        mov     ecx, dword ptr [esi + 4]
        xor     edx, edx
        mov     dx, di
        mov     dword ptr [eax], ecx
        lea     ecx, [eax + 0xc]
        mov     dword ptr [esi + 0xc], ecx
        mov     word ptr [esi + 0x14], bx
        add     edx, ecx
        test    ebp, ebp
        mov     dword ptr [esi + 0x10], edx
        jz      L_b3
        mov     dword ptr [ebp], ecx
L_b3:
        xor     ecx, ecx
        test    eax, eax
        setnz   cl
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        dec     ecx
        and     ecx, 0x8007000e
        mov     eax, ecx
        ret     8
    }
}
