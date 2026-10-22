/*
 * FUN_006f1130 (810 B) — __thiscall state/random-update routine (RET 8).
 *
 * Compares a float parameter against a series of thresholds, calls rand()
 * and applies division magic to pick a new state, then dispatches through
 * two jump tables to set the object's state field.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;
extern float g_7899ec;
extern float g_79f654;
extern float g_79f650;
extern float g_797228;
extern void *g_76b414;   /* IAT: rand */
extern char g_6f1468[];
extern void __cdecl FUN_006f3960(void);

__declspec(naked) void __stdcall FUN_006f1130(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        cmp     byte ptr [esi + 0x2c], 1
        push    edi
        jnz     L_1453
        fld     dword ptr [esp + 0x18]
        xor     ebx, ebx
        fcomp   dword ptr [g_76c5b0]
        mov     byte ptr [esi + 0x2c], bl
        fld     dword ptr [esp + 0x18]
        fnstsw  ax
        fcomp   dword ptr [g_7899ec]
        test    ah, 0x41
        fnstsw  ax
        jnz     L_11b0
        test    ah, 0x41
        jz      L_11b5
        call    dword ptr [g_76b414]
        cdq
        mov     ecx, 3
        idiv    ecx
        cmp     edx, 1
        jnz     L_1195
        push    0x3ff80000
        push    ebx
        mov     ecx, esi
        call    FUN_006f3960
        pop     edi
        mov     dword ptr [esi + 0x28], 7
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    L_1195:
        push    0x40000000
        push    ebx
        mov     ecx, esi
        call    FUN_006f3960
        pop     edi
        mov     dword ptr [esi + 0x28], 9
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    L_11b0:
        test    ah, 0x41
        jnz     L_1219
    L_11b5:
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_79f654]
        fnstsw  ax
        test    ah, 0x41
        jz      L_122e
        cmp     byte ptr [esi + 0x2e], bl
        jz      L_11d0
        mov     byte ptr [esi + 0x2e], bl
        jmp     L_11e3
    L_11d0:
        call    dword ptr [g_76b414]
        cdq
        mov     ecx, 3
        idiv    ecx
        cmp     edx, 1
        jnz     L_11fa
    L_11e3:
        push    0x3ff00000
        push    ebx
        mov     ecx, esi
        call    FUN_006f3960
        pop     edi
        mov     dword ptr [esi + 0x28], ebx
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    L_11fa:
        push    0x40080000
        push    ebx
        mov     ecx, esi
        call    FUN_006f3960
        pop     edi
        mov     byte ptr [esi + 0x2e], 1
        mov     dword ptr [esi + 0x28], 4
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    L_1219:
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_79f654]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_130f
    L_122e:
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_79f650]
        fnstsw  ax
        test    ah, 0x41
        jz      L_130f
        cmp     byte ptr [esi + 0x2e], bl
        mov     ebp, dword ptr [g_76b414]
        jz      L_1288
        call    ebp
        mov     edi, dword ptr [esi + 0x28]
        mov     ecx, eax
        mov     eax, 0xbffa003
        imul    ecx
        sar     edx, 8
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, edi
        jnz     L_1283
    L_126a:
        call    ebp
        mov     ecx, eax
        mov     eax, 0xbffa003
        imul    ecx
        sar     edx, 8
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        cmp     edx, edi
        jz      L_126a
    L_1283:
        mov     byte ptr [esi + 0x2e], bl
        jmp     L_12bd
    L_1288:
        call    ebp
        mov     edi, dword ptr [esi + 0x28]
        mov     ecx, eax
        mov     eax, 0x67fbf029
        imul    ecx
        sar     edx, 0xa
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, edi
        jnz     L_12bd
    L_12a4:
        call    ebp
        mov     ecx, eax
        mov     eax, 0x67fbf029
        imul    ecx
        sar     edx, 0xa
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        cmp     edx, edi
        jz      L_12a4
    L_12bd:
        cmp     edx, 0xc
        ja      L_1453
        xor     eax, eax
        mov     al, byte ptr [edx + g_6f1468]
        __emit 0xFF   /* __emit: MSVC6 re-bases FF 24 85 [eax*4+imm32] jump-table dispatch via EBX */
        __emit 0x24
        __emit 0x85
        __emit 0x5C
        __emit 0x14
        __emit 0x6F
        __emit 0x00
    L_12d5:
        push    0x40000000
        push    ebx
        mov     ecx, esi
        call    FUN_006f3960
        pop     edi
        mov     dword ptr [esi + 0x28], 1
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    L_12f0:
        push    0x40080000
        push    ebx
        mov     ecx, esi
        call    FUN_006f3960
        pop     edi
        mov     dword ptr [esi + 0x28], 5
        mov     byte ptr [esi + 0x2e], 1
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    L_130f:
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_797228]
        fld     dword ptr [esp + 0x18]
        fnstsw  ax
        fcomp   dword ptr [g_79f650]
        test    ah, 0x41
        fnstsw  ax
        jnz     L_1372
        test    ah, 0x41
        jz      L_137b
        call    dword ptr [g_76b414]
        cdq
        mov     ecx, 3
        idiv    ecx
        push    0x40000000
        push    ebx
        mov     ecx, esi
        cmp     edx, 1
        jnz     L_135f
        call    FUN_006f3960
        pop     edi
        mov     dword ptr [esi + 0x28], 7
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    L_135f:
        call    FUN_006f3960
        pop     edi
        mov     dword ptr [esi + 0x28], 2
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    L_1372:
        test    ah, 0x41
        jnz     L_1453
    L_137b:
        cmp     byte ptr [esi + 0x2e], bl
        mov     ebp, dword ptr [g_76b414]
        jz      L_13b2
        call    ebp
        mov     edi, dword ptr [esi + 0x28]
        cdq
        and     edx, 0x3fff
        add     eax, edx
        sar     eax, 0xe
        cmp     eax, edi
        jnz     L_13ad
    L_139b:
        call    ebp
        cdq
        and     edx, 0x3fff
        add     eax, edx
        sar     eax, 0xe
        cmp     eax, edi
        jz      L_139b
    L_13ad:
        mov     byte ptr [esi + 0x2e], bl
        jmp     L_13e2
    L_13b2:
        call    ebp
        mov     edi, dword ptr [esi + 0x28]
        cdq
        and     edx, 0x1fff
        add     eax, edx
        sar     eax, 0xd
        cmp     eax, edi
        jnz     L_13e2
    L_13c7:
        call    ebp
        mov     ecx, eax
        mov     eax, 0x2fffa001
        imul    ecx
        mov     eax, edx
        sar     eax, 0xb
        mov     edx, eax
        shr     edx, 0x1f
        add     eax, edx
        cmp     eax, edi
        jz      L_13c7
    L_13e2:
        cmp     eax, 3
        ja      L_1453
        __emit 0xFF   /* __emit: MSVC6 re-bases FF 24 85 [eax*4+imm32] jump-table dispatch via EBX */
        __emit 0x24
        __emit 0x85
        __emit 0x78
        __emit 0x14
        __emit 0x6F
        __emit 0x00
    L_13ee:
        push    0x40000000
        push    ebx
        mov     ecx, esi
        call    FUN_006f3960
        pop     edi
        mov     dword ptr [esi + 0x28], 8
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    L_1409:
        push    0x3ff80000
        push    ebx
        mov     ecx, esi
        call    FUN_006f3960
        pop     edi
        mov     dword ptr [esi + 0x28], ebx
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    L_1420:
        push    0x3ff80000
        push    ebx
        mov     ecx, esi
        call    FUN_006f3960
        pop     edi
        mov     dword ptr [esi + 0x28], 0xa
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    L_143b:
        push    0x40080000
        push    ebx
        mov     ecx, esi
        call    FUN_006f3960
        mov     dword ptr [esi + 0x28], 3
        mov     byte ptr [esi + 0x2e], 1
    L_1453:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
