/*
 * FUN_0064e320 (347 B) — ABL list/object helper (__thiscall, RET 0x8).
 * Searches a list for a matching element, then inserts/updates entries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005faef0(void);
extern void __cdecl FUN_0064e8d0(void);
extern void __cdecl FUN_0064dde0(void);
extern void __cdecl FUN_0064e110(void);
extern void __cdecl FUN_0064e6f0(void);
extern void __cdecl FUN_0064e660(void);
extern void __cdecl FUN_00580670(void);
extern void __cdecl FUN_0064e710(void);
extern void __cdecl FUN_0064e6e0(void);
extern void __cdecl FUN_0064e2d0(void);

__declspec(naked) void FUN_0064e320(void)
{
    __asm {
        sub     esp, 0x34
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x48]
        mov     ebp, ecx
        mov     ecx, edi
        call    FUN_005faef0
        mov     ebx, dword ptr [eax + 4]
        mov     ecx, edi
        call    FUN_005faef0
        mov     esi, dword ptr [eax]
        cmp     esi, ebx
        jz      L353
        mov     eax, dword ptr [esp + 0x4c]
L348:
        cmp     dword ptr [esi], eax
        jz      L353
        add     esi, 4
        cmp     esi, ebx
        jnz     L348
L353:
        mov     ecx, edi
        call    FUN_005faef0
        cmp     esi, dword ptr [eax + 4]
        jnz     L471
        lea     eax, [esp + 0x4c]
        push    eax
        lea     ecx, [esp + 0x4c]
        push    ecx
        mov     ecx, ebp
        call    FUN_0064e8d0
        mov     esi, dword ptr [eax]
        cmp     esi, dword ptr [ebp]
        jnz     L435
        mov     edx, dword ptr [esp + 0x4c]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_0064dde0
        mov     eax, dword ptr [edi + 0x30]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_0064e110
        mov     ecx, dword ptr [esp + 0x4c]
        mov     edx, dword ptr [esp + 0x18]
        lea     eax, [esp + 0x1c]
        mov     dword ptr [esp + 0x2c], ecx
        push    eax
        lea     ecx, [esp + 0x38]
        mov     dword ptr [esp + 0x34], edx
        call    FUN_0064e6f0
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x3c]
        call    FUN_0064e660
        mov     ecx, edi
        call    FUN_005faef0
        mov     ecx, dword ptr [eax + 4]
        cmp     ecx, dword ptr [eax + 8]
        jz      L3e7
        test    ecx, ecx
        jz      L3df
        mov     edx, dword ptr [esp + 0x4c]
        mov     dword ptr [ecx], edx
L3df:
        add     ecx, 4
        mov     dword ptr [eax + 4], ecx
        jmp     L3f6
L3e7:
        push    1
        lea     edx, [esp + 0x50]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_00580670
L3f6:
        lea     eax, [esp + 0x2c]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, ebp
        call    FUN_0064e710
        lea     ecx, [esp + 0x38]
        call    FUN_0064e6e0
        lea     ecx, [esp + 0x34]
        call    FUN_0064e2d0
        lea     ecx, [esp + 0x20]
        call    FUN_0064e6e0
        lea     ecx, [esp + 0x1c]
        call    FUN_0064e2d0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     8
L435:
        mov     ecx, edi
        call    FUN_005faef0
        mov     ecx, dword ptr [eax + 4]
        cmp     ecx, dword ptr [eax + 8]
        jz      L456
        test    ecx, ecx
        jz      L44e
        mov     edx, dword ptr [esp + 0x4c]
        mov     dword ptr [ecx], edx
L44e:
        add     ecx, 4
        mov     dword ptr [eax + 4], ecx
        jmp     L465
L456:
        push    1
        lea     edx, [esp + 0x50]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_00580670
L465:
        mov     eax, dword ptr [edi + 0x30]
        push    eax
        lea     ecx, [esi + 0x14]
        call    FUN_0064e110
L471:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     8
    }
}
