/*
 * FUN_00618f90 (464 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * Looks up / inserts a named entry in a collection, with a string-compare
 * loop and a reference-counted buffer release at the end.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00599480(void);
extern void __cdecl FUN_00599410(void);
extern void __cdecl FUN_00598c30(void);
extern void __cdecl FUN_00599780(void);
extern void __cdecl FUN_005994f0(void);
extern void __cdecl FUN_00492cf0(void);
extern void __cdecl FUN_00598c70(void);
extern void __cdecl FUN_00598c10(void);
extern void __cdecl FUN_004925b0(void);
extern void __cdecl FUN_00599560(void);
extern void __cdecl FUN_00599330(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_00492650(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_00618f90(void *param1, void *param2)
{
    __asm {
        sub     esp, 0x24
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x18]
        test    edi, edi
        jz      L_c89
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, edi
        call    FUN_00599480
        lea     edx, [esp + 0x34]
        mov     esi, eax
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, edi
        call    FUN_00599410
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x18], ecx
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x20], edx
        call    FUN_00598c30
        mov     ecx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x1c], 0x0
        call    FUN_00599780
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 0x10
        test    eax, eax
        jbe     L_bef
        lea     edx, [esp + 0x34]
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, edi
        call    FUN_005994f0
        push    eax
        lea     ecx, [esp + 0x38]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, edi
        call    FUN_00492cf0
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_00598c70
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00598c10
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00598c10
        lea     ecx, [esp + 0xc]
        push    ecx
        push    ecx
        lea     edx, [esp + 0x24]
        mov     ecx, esp
        push    edx
        mov     dword ptr [esp + 0x18], 0x0
        call    FUN_004925b0
        push    ecx
        lea     eax, [esp + 0x24]
        mov     ecx, esp
        push    eax
        call    FUN_004925b0
        call    FUN_00599560
        mov     ecx, dword ptr [esp + 0x28]
        add     esp, 0x8
        mov     eax, esp
        push    ecx
        mov     dword ptr [eax], ecx
        lea     edx, [esp + 0x20]
        mov     ecx, esp
        push    edx
        call    FUN_004925b0
        mov     ecx, edi
        call    FUN_00599330
L_bef:
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, edi
        call    FUN_00492cf0
        mov     ebp, dword ptr [eax]
        cmp     ebp, dword ptr [edi]
        mov     dword ptr [esp + 0xc], ebp
        jz      L_c3e
        mov     esi, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [esp + 0x34]
L_c11:
        mov     al, byte ptr [ecx]
        mov     dl, al
        cmp     al, byte ptr [esi]
        jnz     L_c35
        test    dl, dl
        jz      L_c31
        mov     al, byte ptr [ecx + 0x1]
        mov     dl, al
        cmp     al, byte ptr [esi + 0x1]
        jnz     L_c35
        add     ecx, 0x2
        add     esi, 0x2
        test    dl, dl
        jnz     L_c11
L_c31:
        xor     ecx, ecx
        jmp     L_c3a
L_c35:
        sbb     ecx, ecx
        sbb     ecx, -0x1
L_c3a:
        test    ecx, ecx
        jge     L_c82
L_c3e:
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_0040f060
        lea     edx, [esp + 0x18]
        push    edx
        push    ecx
        lea     eax, [esp + 0x14]
        mov     ecx, esp
        push    eax
        mov     dword ptr [esp + 0x28], 0x0
        call    FUN_004925b0
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, edi
        call    FUN_00492650
        mov     edx, dword ptr [eax]
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0xc], edx
        call    FUN_0040d9b0
        mov     ebp, dword ptr [esp + 0xc]
L_c82:
        mov     eax, dword ptr [esp + 0x38]
        mov     dword ptr [ebp + 0x14], eax
L_c89:
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        jz      L_ca4
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_ca4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_ca4:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x24
        ret     0x8
    }
}
