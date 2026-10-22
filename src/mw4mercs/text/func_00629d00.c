/*
 * FUN_00629D00 (131 B) — __thiscall (ECX = this), RET 4 (one param).
 * Finds an entry (28-byte stride) matching param_1 in a range, invokes two
 * virtual methods on sub-objects, then shifts the remaining entries down
 * (rep movsd, 7 dwords) and decrements the end pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00629d00(void)
{
    __asm {
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x54]
        push    esi
        mov     esi, dword ptr [ebp + 0x50]
        cmp     esi, eax
        jz      L_7e
        mov     ecx, dword ptr [esp + 0xc]
L_12:
        cmp     dword ptr [esi], ecx
        jz      L_22
        add     esi, 0x1c
        cmp     esi, eax
        jnz     L_12
        pop     esi
        pop     ebp
        ret     4
L_22:
        mov     ecx, dword ptr [esi + 4]
        test    ecx, ecx
        jz      L_2f
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_2f:
        mov     ecx, dword ptr [esi + 8]
        test    ecx, ecx
        jz      L_3c
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_3c:
        push    ebx
        mov     ebx, dword ptr [ebp + 0x54]
        lea     eax, [esi + 0x1c]
        cmp     eax, ebx
        push    edi
        jz      L_76
        mov     ecx, ebx
        sub     ecx, eax
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        mov     edi, esi
        jle     L_76
L_65:
        dec     edx
        lea     eax, [edi + 0x1c]
        mov     ecx, 7
        mov     esi, eax
        rep movsd
        mov     edi, eax
        jnz     L_65
L_76:
        add     ebx, -0x1c
        pop     edi
        mov     dword ptr [ebp + 0x54], ebx
        pop     ebx
L_7e:
        pop     esi
        pop     ebp
        ret     4
    }
}
