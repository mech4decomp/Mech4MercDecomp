/*
 * FUN_006812f0 (559 B) — HUD element family: iterates several linked lists of
 * HUD elements (at this+0x30/0x40/0x50/0x68, then 0x38/0x48/0x58/0x60, then
 * 0x20/0x28), collecting them into local lists via FUN_00681520 and dispatching
 * via FUN_00681050. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00681520(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_004179f0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_00681050(void);

__declspec(naked) void FUN_006812f0(void)
{
    __asm {
        sub     esp, 0x34
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        lea     eax, [esi+0x68]
        xor     ebx, ebx
        mov     dword ptr [esp+0x30], eax
        lea     ecx, [esi+0x50]
        lea     edx, [esi+0x40]
        lea     eax, [esi+0x30]
        push    edi
        mov     dword ptr [esp+0x24], ebx
        mov     dword ptr [esp+0x20], ebx
        mov     dword ptr [esp+0x1c], ebx
        mov     dword ptr [esp+0x18], ebx
        mov     dword ptr [esp+0x38], ecx
        mov     dword ptr [esp+0x3c], edx
        mov     dword ptr [esp+0x40], eax
        lea     edi, [esp+0x34]
        mov     ebp, 0x4
    L_81330:
        mov     eax, dword ptr [edi]
        mov     dword ptr [esp+0x2c], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x30], eax
        mov     dword ptr [esp+0x28], 0x798a40
    L_81344:
        test    eax, eax
        jz      L_8136b
        mov     eax, dword ptr [eax]
        test    eax, eax
        jz      L_8136b
        push    eax
        lea     ecx, [esp+0x24]
        push    ecx
        mov     ecx, esi
        inc     ebx
        call    FUN_00681520
        lea     ecx, [esp+0x28]
        call    FUN_00417ad0
        mov     eax, dword ptr [esp+0x30]
        jmp     L_81344
    L_8136b:
        add     edi, 0x4
        dec     ebp
        jnz     L_81330
        lea     edx, [esi+0x60]
        mov     dword ptr [esp+0x34], edx
        lea     eax, [esi+0x58]
        lea     ecx, [esi+0x48]
        lea     edx, [esi+0x38]
        mov     dword ptr [esp+0x38], eax
        mov     dword ptr [esp+0x3c], ecx
        mov     dword ptr [esp+0x40], edx
        mov     dword ptr [esp+0x14], 0x0
        lea     edi, [esp+0x34]
        mov     ebp, 0x4
    L_8139e:
        mov     eax, dword ptr [edi]
        mov     dword ptr [esp+0x2c], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x30], eax
        mov     dword ptr [esp+0x28], 0x798a40
    L_813b2:
        test    eax, eax
        jz      L_813e1
        mov     eax, dword ptr [eax]
        test    eax, eax
        jz      L_813e1
        mov     ecx, dword ptr [esp+0x14]
        inc     ecx
        push    eax
        lea     eax, [esp+0x1c]
        mov     dword ptr [esp+0x18], ecx
        push    eax
        mov     ecx, esi
        call    FUN_00681520
        lea     ecx, [esp+0x28]
        call    FUN_00417ad0
        mov     eax, dword ptr [esp+0x30]
        jmp     L_813b2
    L_813e1:
        add     edi, 0x4
        dec     ebp
        jnz     L_8139e
        test    ebx, ebx
        lea     ecx, [esi+0x28]
        lea     edx, [esi+0x20]
        mov     dword ptr [esp+0x34], ecx
        mov     dword ptr [esp+0x38], edx
        mov     dword ptr [esp+0x10], 0x0
        jz      L_81471
        lea     edi, [esp+0x34]
        mov     ebp, 0x2
    L_8140a:
        mov     eax, dword ptr [edi]
        mov     dword ptr [esp+0x2c], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x30], eax
        mov     dword ptr [esp+0x28], 0x798a40
    L_8141e:
        test    eax, eax
        jz      L_81445
        mov     eax, dword ptr [eax]
        test    eax, eax
        jz      L_81445
        push    eax
        lea     eax, [esp+0x24]
        push    eax
        mov     ecx, esi
        inc     ebx
        call    FUN_00681520
        lea     ecx, [esp+0x28]
        call    FUN_00417ad0
        mov     eax, dword ptr [esp+0x30]
        jmp     L_8141e
    L_81445:
        add     edi, 0x4
        dec     ebp
        jnz     L_8140a
        mov     edi, dword ptr [esp+0x20]
    L_8144f:
        test    edi, edi
        jz      L_81471
    L_81453:
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        mov     edi, dword ptr [edi+0x4]
        jz      L_81471
        mov     edx, dword ptr [esp+0x10]
        mov     eax, dword ptr [esp+0x48]
        push    edx
        push    eax
        call    FUN_00681050
        inc     dword ptr [esp+0x10]
        jmp     L_8144f
    L_81471:
        mov     eax, dword ptr [esp+0x14]
        test    eax, eax
        jz      L_814f1
        lea     edi, [esp+0x34]
        mov     ebx, 0x2
    L_81482:
        mov     eax, dword ptr [edi]
        mov     dword ptr [esp+0x2c], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x30], eax
        mov     dword ptr [esp+0x28], 0x798a40
    L_81496:
        test    eax, eax
        jz      L_814c5
        mov     eax, dword ptr [eax]
        test    eax, eax
        jz      L_814c5
        mov     edx, dword ptr [esp+0x14]
        push    eax
        lea     ecx, [esp+0x1c]
        inc     edx
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp+0x1c], edx
        call    FUN_00681520
        lea     ecx, [esp+0x28]
        call    FUN_00417ad0
        mov     eax, dword ptr [esp+0x30]
        jmp     L_81496
    L_814c5:
        add     edi, 0x4
        dec     ebx
        jnz     L_81482
        mov     esi, dword ptr [esp+0x18]
    L_814cf:
        test    esi, esi
        jz      L_814f1
    L_814d3:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi+0x4]
        jz      L_814f1
        mov     edx, dword ptr [esp+0x10]
        mov     eax, dword ptr [esp+0x48]
        push    edx
        push    eax
        call    FUN_00681050
        inc     dword ptr [esp+0x10]
        jmp     L_814cf
    L_814f1:
        lea     ecx, [esp+0x20]
        call    FUN_004179f0
        lea     ecx, [esp+0x18]
        call    FUN_004179f0
        lea     ecx, [esp+0x18]
        call    FUN_00417980
        lea     ecx, [esp+0x20]
        call    FUN_00417980
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0x4
    }
}
