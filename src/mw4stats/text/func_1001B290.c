/*
 * FUN_1001b290 (631 B) - __stdcall (2 args, RET 0x8). Serializes a stats
 * object (EBX = param_1) into a log/stream (ESI = param_2) via
 * FUN_10001680 (thiscall) writes, FUN_10011e20 (thiscall) value writes,
 * and FUN_100016b0 (thiscall) wide-string writes (wcslen via IAT
 * 0x100210f4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001680(void);
extern void __cdecl FUN_10011e20(void);
extern void __cdecl FUN_100016b0(void);
extern void *g_100210f4;          /* IAT: wcslen */
extern unsigned short g_100262cc; /* global wide string */

__declspec(naked) void __cdecl FUN_1001b290(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    ebp
        push    esi
        mov     eax, dword ptr [ebx + 0x34]
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        push    0x100262d8
        mov     edi, dword ptr [eax + 4]
        mov     ecx, esi
        call    FUN_10001680
        push    0x1002673c
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    edi
        mov     ecx, esi
        call    FUN_10011e20
        mov     ebp, dword ptr [g_100210f4]
        mov     ecx, 0x100262cc
        test    ecx, ecx
        jz      L_wcs1
        cmp     word ptr [g_100262cc], 0
        jz      L_wcs1
        push    ecx
        call    ebp
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    0x100262cc
        call    FUN_100016b0
L_wcs1:
        mov     eax, dword ptr [ebx + 0xe0]
        test    eax, eax
        jz      L_e0
        jbe     L2_e0
        mov     edi, dword ptr [ebx + 0xd4]
        jmp     L3_e0
L2_e0:
        mov     edi, 0x100274ec
L3_e0:
        push    0x100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    0x100266b0
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    edi
        mov     ecx, esi
        call    FUN_10001680
        mov     edx, 0x100262cc
        test    edx, edx
        jz      L_wcs2
        cmp     word ptr [g_100262cc], 0
        jz      L_wcs2
        push    edx
        call    ebp
        add     esp, 4
        mov     ecx, esi
        shl     eax, 1
        push    eax
        push    0x100262cc
        call    FUN_100016b0
L_e0:
L_wcs2:
        mov     eax, dword ptr [ebx + 0x178]
        test    eax, eax
        jz      L_178
        jbe     L2_178
        mov     edi, dword ptr [ebx + 0x16c]
        jmp     L3_178
L2_178:
        mov     edi, 0x100274ec
L3_178:
        push    0x100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    0x100266a0
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    edi
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262cc
        mov     ecx, esi
        call    FUN_10001680
L_178:
        mov     eax, dword ptr [ebx + 0x210]
        test    eax, eax
        jz      L_210
        jbe     L2_210
        mov     edi, dword ptr [ebx + 0x204]
        jmp     L3_210
L2_210:
        mov     edi, 0x100274ec
L3_210:
        push    0x100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    0x10026698
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    edi
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262cc
        mov     ecx, esi
        call    FUN_10001680
L_210:
        mov     eax, dword ptr [ebx + 0x2a8]
        test    eax, eax
        jz      L_2a8
        jbe     L2_2a8
        mov     edi, dword ptr [ebx + 0x29c]
        jmp     L3_2a8
L2_2a8:
        mov     edi, 0x100274ec
L3_2a8:
        push    0x100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    0x10026690
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    edi
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262cc
        mov     ecx, esi
        call    FUN_10001680
L_2a8:
        mov     eax, dword ptr [ebx + 0x340]
        test    eax, eax
        jz      L_340
        jbe     L2_340
        mov     edi, dword ptr [ebx + 0x334]
        jmp     L3_340
L2_340:
        mov     edi, 0x100274ec
L3_340:
        push    0x100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    0x10026804
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    edi
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262cc
        mov     ecx, esi
        call    FUN_10001680
L_340:
        mov     eax, dword ptr [ebx + 0x3d8]
        test    eax, eax
        jz      L_3d8
        jbe     L2_3d8
        mov     ebx, dword ptr [ebx + 0x3cc]
        jmp     L3_3d8
L2_3d8:
        mov     ebx, 0x100274ec
L3_3d8:
        push    0x100262d8
        mov     ecx, esi
        call    FUN_10001680
        push    0x10026688
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262d0
        mov     ecx, esi
        call    FUN_10001680
        push    ebx
        mov     ecx, esi
        call    FUN_10001680
        push    0x100262cc
        mov     ecx, esi
        call    FUN_10001680
L_3d8:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
    }
}
