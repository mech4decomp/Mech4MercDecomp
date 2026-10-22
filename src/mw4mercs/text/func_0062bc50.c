/*
 * FUN_0062BC50 (558 B) — Recursive array-of-0x1c-struct partition/sort
 * routine. Computes element counts via magic-number division by 0x1c,
 * swaps 7-dword (0x1c byte) records, and recurses.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0062b5c0(void);
extern void __cdecl FUN_0062c120(void);
extern void __cdecl FUN_0062c2c0(void);

__declspec(naked) void FUN_0062BC50(void)
{
    __asm {
        sub     esp, 0x38
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x44]
        push    esi
        mov     esi, dword ptr [esp + 0x4c]
        mov     ecx, esi
        sub     ecx, ebp
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, 0x10
        push    edi
        jle     loc_62be76
        jmp     loc_62bc85
loc_62bc81:
        mov     esi, dword ptr [esp + 0x50]
loc_62bc85:
        mov     eax, dword ptr [esp + 0x58]
        test    eax, eax
        jz      loc_62bddd
        mov     edi, eax
        mov     ecx, esi
        sub     ecx, ebp
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     ecx, edx
        mov     eax, edx
        shr     ecx, 0x1f
        add     eax, ecx
        cdq
        sub     eax, edx
        sar     eax, 0x1
        dec     edi
        lea     edx, [eax*8]
        sub     edx, eax
        mov     dword ptr [esp + 0x58], edi
        lea     edi, [esi - 0x1c]
        lea     esi, [ebp + edx*4]
        push    esi
        mov     ecx, ebp
        call    FUN_0062b5c0
        test    al, al
        push    edi
        jz      loc_62bcec
        mov     ecx, esi
        call    FUN_0062b5c0
        test    al, al
        jnz     loc_62bd09
        push    edi
        mov     ecx, ebp
        call    FUN_0062b5c0
        test    al, al
        jz      loc_62bcf7
        jmp     loc_62bd07
loc_62bcec:
        mov     ecx, ebp
        call    FUN_0062b5c0
        test    al, al
        jz      loc_62bcfb
loc_62bcf7:
        mov     esi, ebp
        jmp     loc_62bd09
loc_62bcfb:
        push    edi
        mov     ecx, esi
        call    FUN_0062b5c0
        test    al, al
        jz      loc_62bd09
loc_62bd07:
        mov     esi, edi
loc_62bd09:
        mov     ecx, 0x7
        lea     edi, [esp + 0x10]
        rep movsd
        mov     esi, dword ptr [esp + 0x50]
        mov     ebx, ebp
loc_62bd1a:
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, ebx
        call    FUN_0062b5c0
        test    al, al
        jz      loc_62bd3d
loc_62bd2a:
        lea     ecx, [esp + 0x10]
        add     ebx, 0x1c
        push    ecx
        mov     ecx, ebx
        call    FUN_0062b5c0
        test    al, al
        jnz     loc_62bd2a
loc_62bd3d:
        sub     esi, 0x1c
        push    esi
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x50], esi
        call    FUN_0062b5c0
        test    al, al
        jz      loc_62bd67
loc_62bd52:
        sub     esi, 0x1c
        push    esi
        lea     ecx, [esp + 0x14]
        call    FUN_0062b5c0
        test    al, al
        jnz     loc_62bd52
        mov     dword ptr [esp + 0x4c], esi
loc_62bd67:
        cmp     ebx, esi
        jnc     loc_62bd9e
        mov     eax, dword ptr [esp + 0x4c]
        mov     esi, ebx
        mov     ecx, 0x7
        lea     edi, [esp + 0x2c]
        rep movsd
        mov     edi, ebx
        mov     ecx, 0x7
        mov     esi, eax
        rep movsd
        mov     ecx, 0x7
        lea     esi, [esp + 0x2c]
        mov     edi, eax
        rep movsd
        add     ebx, 0x1c
        mov     esi, eax
        jmp     loc_62bd1a
loc_62bd9e:
        mov     edx, dword ptr [esp + 0x58]
        mov     eax, dword ptr [esp + 0x50]
        push    edx
        push    0x0
        push    eax
        push    ebx
        call    FUN_0062BC50
        mov     dword ptr [esp + 0x60], ebx
        sub     ebx, ebp
        mov     eax, 0x92492493
        imul    ebx
        add     edx, ebx
        sar     edx, 0x4
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        add     esp, 0x10
        cmp     edx, 0x10
        jg      loc_62bc81
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x38
        ret
loc_62bddd:
        push    0x0
        push    0x0
        push    esi
        push    ebp
        call    FUN_0062c120
        mov     ebx, esi
        sub     esi, ebp
        mov     eax, 0x92492493
        imul    esi
        add     edx, esi
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        add     esp, 0x10
        cmp     edx, 0x1
        jle     loc_62be76
loc_62be07:
        mov     eax, ebx
        add     ebx, -0x1c
        mov     ecx, 0x7
        mov     esi, ebx
        lea     edi, [esp + 0x2c]
        rep movsd
        sub     esp, 0x1c
        sub     eax, ebp
        mov     ecx, 0x7
        mov     esi, ebp
        mov     edi, ebx
        rep movsd
        mov     edi, esp
        sub     eax, 0x1c
        mov     ecx, 0x7
        lea     esi, [esp + 0x48]
        rep movsd
        mov     ecx, eax
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        push    edx
        push    0x0
        push    ebp
        call    FUN_0062c2c0
        mov     ecx, ebx
        sub     ecx, ebp
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        add     esp, 0x28
        cmp     edx, 0x1
        jg      loc_62be07
loc_62be76:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x38
        ret
    }
}
