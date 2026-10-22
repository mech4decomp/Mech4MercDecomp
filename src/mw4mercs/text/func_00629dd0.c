/*
 * FUN_00629dd0 (151 B) — __thiscall (ECX=this), RET 4.
 *
 * Iterates an array of 0x1c-byte elements between this+0x50 and
 * this+0x54, summing FUN_00624420() results for elements matching
 * a key (type==2, name byte, name word).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00624420(void);

__declspec(naked) int __stdcall FUN_00629dd0(char *param_1)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x50]
        mov     ecx, dword ptr [esi + 0x54]
        sub     ecx, eax
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     eax, edx
        push    edi
        xor     edi, edi
        shr     eax, 0x1f
        xor     ebx, ebx
        add     edx, eax
        mov     dword ptr [esp + 0xc], edi
        jz      L_629e5e
        mov     edi, dword ptr [esi + 0x50]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
    L_629e03:
        mov     ecx, dword ptr [edi]
        cmp     dword ptr [ecx + 0x4], 0x2
        jnz     L_629e2f
        mov     eax, ecx
        mov     dl, byte ptr [eax + 0x18]
        mov     cl, byte ptr [ebp]
        add     eax, 0x18
        cmp     dl, cl
        jnz     L_629e2f
        mov     ax, word ptr [eax + 0x2]
        cmp     ax, word ptr [ebp + 0x2]
        jnz     L_629e2f
        mov     ecx, dword ptr [edi]
        call    FUN_00624420
        add     dword ptr [esp + 0x10], eax
    L_629e2f:
        mov     edx, dword ptr [esi + 0x50]
        mov     ecx, dword ptr [esi + 0x54]
        sub     ecx, edx
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     ecx, edx
        shr     ecx, 0x1f
        inc     ebx
        add     edx, ecx
        add     edi, 0x1c
        cmp     ebx, edx
        jc      L_629e03
        mov     eax, dword ptr [esp + 0x10]
        pop     ebp
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    L_629e5e:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    }
}
