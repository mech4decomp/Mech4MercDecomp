/*
 * FUN_0063b840 (183 B) — ABL/game-logic region. Compares two objects'
 * virtual "id" (vtable+0x60) results; if different and not the special
 * sentinel object, iterates a list of items and dispatches a virtual
 * call (vtable+0x10) on each.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;

extern void __cdecl FUN_00600940(void);
extern void __cdecl FUN_005faef0(void);
extern void __cdecl FUN_0064e5a0(void);
extern void __cdecl FUN_0064df60(void);

__declspec(naked) void FUN_0063b840(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp+0x10]
        mov     eax, dword ptr [ebp+0x10]
        shr     eax, 0x13
        and     al, 0x1
        cmp     al, 0x1
        push    esi
        push    edi
        jz      L_b8f2
        mov     edi, dword ptr [esp+0x14]
        mov     ecx, dword ptr [edi+0x10]
        shr     ecx, 0x13
        and     cl, 0x1
        cmp     cl, 0x1
        jz      L_b8f2
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx+0x60]
        mov     esi, eax
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax+0x60]
        cmp     eax, esi
        jz      L_b8f2
        mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_007dab40]
        mov     edx, dword ptr [eax+0x1c]
        xor     edx, 0x85739531
        cmp     ebp, edx
        jz      L_b8f2
        mov     ecx, dword ptr [eax+0x20]
        xor     ecx, 0x85739531
        call    FUN_00600940
        mov     ecx, edi
        mov     ebx, eax
        call    FUN_005faef0
        mov     esi, dword ptr [eax]
        mov     ecx, edi
        call    FUN_005faef0
        cmp     esi, dword ptr [eax+0x4]
        jz      L_b8f2
    L_b8c3:
        mov     eax, dword ptr [esi]
        push    eax
        mov     ecx, ebx
        call    FUN_0064e5a0
        mov     ecx, eax
        call    FUN_0064df60
        test    eax, eax
        jz      L_b8e3
        mov     ecx, dword ptr [ebp+0x30]
        mov     edx, dword ptr [eax]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x10]
    L_b8e3:
        mov     ecx, edi
        add     esi, 0x4
        call    FUN_005faef0
        cmp     esi, dword ptr [eax+0x4]
        jnz     L_b8c3
    L_b8f2:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
