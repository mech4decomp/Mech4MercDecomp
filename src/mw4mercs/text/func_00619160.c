/*
 * FUN_00619160 (361 B) — __thiscall (ECX = this), RET 4 (one stack param).
 * Looks up a string in a container (EDI = [this+0x18]) via several helper
 * calls, does an inline strcmp-style comparison, and returns a member
 * pointer (or NULL). Frees a temporary string buffer on some paths.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00599480(void);
extern void __cdecl FUN_00599410(void);
extern void __cdecl FUN_00598c30(void);
extern void __cdecl FUN_00599780(void);
extern void __cdecl FUN_00492cf0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_004925b0(void);
extern void __cdecl FUN_00492650(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __fastcall FUN_00619160(void *param)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x18]
        test    edi, edi
        jz      L_6192a2
        lea     eax, [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, edi
        call    FUN_00599480
        lea     edx, [esp + 0x30]
        mov     esi, eax
        push    edx
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, edi
        call    FUN_00599410
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x1c], ecx
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x24], edx
        call    FUN_00598c30
        mov     ecx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x28]
        push    ecx
        mov     ecx, dword ptr [esp + 0x28]
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x20], 0x0
        call    FUN_00599780
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0x10
        test    eax, eax
        jbe     L_6192a2
        lea     edx, [esp + 0x30]
        push    edx
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, edi
        call    FUN_00492cf0
        mov     ebp, dword ptr [eax]
        cmp     ebp, dword ptr [edi]
        mov     dword ptr [esp + 0x10], ebp
        jz      L_619231
        mov     eax, dword ptr [esp + 0x30]
        mov     esi, dword ptr [ebp + 0x10]
        mov     ecx, eax
L_619204:
        mov     bl, byte ptr [ecx]
        mov     dl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_619228
        test    dl, dl
        jz      L_619224
        mov     bl, byte ptr [ecx + 0x1]
        mov     dl, bl
        cmp     bl, byte ptr [esi + 0x1]
        jnz     L_619228
        add     ecx, 0x2
        add     esi, 0x2
        test    dl, dl
        jnz     L_619204
L_619224:
        xor     ecx, ecx
        jmp     L_61922d
L_619228:
        sbb     ecx, ecx
        sbb     ecx, -0x1
L_61922d:
        test    ecx, ecx
        jge     L_61927c
L_619231:
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_0040f060
        lea     edx, [esp + 0x1c]
        push    edx
        push    ecx
        lea     eax, [esp + 0x18]
        mov     ecx, esp
        push    eax
        mov     dword ptr [esp + 0x2c], 0x0
        call    FUN_004925b0
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, edi
        call    FUN_00492650
        mov     edx, dword ptr [eax]
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x10], edx
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x30]
        mov     ebp, dword ptr [esp + 0x10]
L_61927c:
        test    eax, eax
        mov     esi, dword ptr [ebp + 0x14]
        jz      L_619296
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_619296
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_619296:
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0x4
L_6192a2:
        mov     eax, dword ptr [esp + 0x30]
        test    eax, eax
        jz      L_6192bd
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_6192bd
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6192bd:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x1c
        ret     0x4
    }
}
