/*
 * FUN_00760F00 (139 B) — __cdecl, one stack param, returns short (AX).
 *
 * Scans a short array for a zero entry, using FUN_00760e50 as a
 * block-probe helper with a halving stride (0x80 -> 1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern short __cdecl FUN_00760e50(void *p, int n);

__declspec(naked) short __cdecl FUN_00760f00(void *param1)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        xor     esi, esi
        xor     ecx, ecx
        push    edi
        mov     dword ptr [esp + 0x14], 0x0
        mov     dword ptr [esp + 0x10], ecx
        mov     ebp, 0x80
L_1c:
        lea     ebx, [ecx + ecx*0x1]
        cmp     ebx, esi
        jc      L_4b
        test    ebp, ebp
        jbe     L_45
        mov     eax, dword ptr [esp + 0x1c]
        lea     edi, [esi + eax*0x1]
L_2e:
        push    ebp
        push    edi
        call    FUN_00760e50
        add     esp, 0x8
        test    ax, ax
        jnz     L_41
        shr     ebp, 0x1
        jnz     L_2e
L_41:
        mov     ecx, dword ptr [esp + 0x10]
L_45:
        add     esi, ebp
        cmp     ebx, esi
        jnc     L_72
L_4b:
        mov     eax, ebx
L_4d:
        mov     edx, dword ptr [esp + 0x1c]
        cmp     word ptr [edx + eax*0x1], 0x0
        jz      L_66
        add     eax, 0x2
        inc     ecx
        cmp     eax, esi
        jc      L_4d
        mov     dword ptr [esp + 0x10], ecx
        jmp     L_72
L_66:
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], 0x1
L_72:
        test    ebp, ebp
        jbe     L_7e
        cmp     word ptr [esp + 0x14], 0x0
        jz      L_1c
L_7e:
        mov     ax, word ptr [esp + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
    }
}
