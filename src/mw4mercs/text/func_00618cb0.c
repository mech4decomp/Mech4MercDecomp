/*
 * FUN_00618cb0 (358 B) — __thiscall animation/motion lookup routine. Searches
 * a list (EDI = this->0x10) for a matching entry using a string comparison
 * loop, and returns a bool (AL). Returns via RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00599220(void);
extern void __cdecl FUN_005991b0(void);
extern void __cdecl FUN_00598bf0(void);
extern void __cdecl FUN_005996c0(void);
extern void __cdecl FUN_00598b60(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_005982d0(void);
extern void __cdecl FUN_00598420(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00618cb0(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx+0x10]
        test    edi, edi
        jz      L_8def
        lea     eax, [esp+0x30]
        push    eax
        lea     ecx, [esp+0x18]
        push    ecx
        mov     ecx, edi
        call    FUN_00599220
        lea     edx, [esp+0x30]
        mov     esi, eax
        push    edx
        lea     eax, [esp+0x1c]
        push    eax
        mov     ecx, edi
        call    FUN_005991b0
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp+0x1c], ecx
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x1c]
        push    eax
        lea     ecx, [esp+0x28]
        mov     dword ptr [esp+0x24], edx
        call    FUN_00598bf0
        mov     ecx, dword ptr [esp+0x30]
        mov     eax, dword ptr [esp+0x28]
        push    ecx
        mov     ecx, dword ptr [esp+0x28]
        lea     edx, [esp+0x14]
        push    edx
        push    eax
        push    ecx
        mov     dword ptr [esp+0x20], 0x0
        call    FUN_005996c0
        mov     eax, dword ptr [esp+0x20]
        add     esp, 0x10
        test    eax, eax
        jbe     L_8def
        lea     edx, [esp+0x30]
        push    edx
        lea     eax, [esp+0x1c]
        push    eax
        mov     ecx, edi
        call    FUN_00598b60
        mov     ebp, dword ptr [eax]
        cmp     ebp, dword ptr [edi]
        mov     dword ptr [esp+0x10], ebp
        jz      L_8d81
        mov     eax, dword ptr [esp+0x30]
        mov     esi, dword ptr [ebp+0x10]
        mov     ecx, eax
    L_8d54:
        mov     bl, byte ptr [ecx]
        mov     dl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_8d78
        test    dl, dl
        jz      L_8d74
        mov     bl, byte ptr [ecx+0x1]
        mov     dl, bl
        cmp     bl, byte ptr [esi+0x1]
        jnz     L_8d78
        add     ecx, 0x2
        add     esi, 0x2
        test    dl, dl
        jnz     L_8d54
    L_8d74:
        xor     ecx, ecx
        jmp     L_8d7d
    L_8d78:
        sbb     ecx, ecx
        sbb     ecx, -0x1
    L_8d7d:
        test    ecx, ecx
        jge     L_8dc9
    L_8d81:
        lea     ecx, [esp+0x30]
        push    ecx
        lea     ecx, [esp+0x20]
        call    FUN_0040f060
        lea     edx, [esp+0x1c]
        push    edx
        push    ecx
        lea     eax, [esp+0x18]
        mov     ecx, esp
        push    eax
        mov     byte ptr [esp+0x2c], 0x0
        call    FUN_005982d0
        lea     ecx, [esp+0x1c]
        push    ecx
        mov     ecx, edi
        call    FUN_00598420
        mov     edx, dword ptr [eax]
        lea     ecx, [esp+0x1c]
        mov     dword ptr [esp+0x10], edx
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp+0x30]
        mov     ebp, dword ptr [esp+0x10]
    L_8dc9:
        test    eax, eax
        mov     bl, byte ptr [ebp+0x14]
        jz      L_8de3
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_8de3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_8de3:
        mov     al, bl
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0x4
    L_8def:
        mov     eax, dword ptr [esp+0x30]
        test    eax, eax
        jz      L_8e0a
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_8e0a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_8e0a:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x1c
        ret     0x4
    }
}
