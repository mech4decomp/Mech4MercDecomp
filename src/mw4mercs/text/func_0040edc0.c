/*
 * FUNC_0040edc0 (292 B) — __thiscall, RET 0x4. Creates/returns a config value
 * object for a named key, inserting it into the config table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  DAT_007b8810;   /* global */

extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004118c0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004128e0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_0040fed0(void);
extern void __cdecl FUN_0040f0d0(void);
extern void __cdecl FUN_0040f190(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0040edc0(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007b8810]
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        push    0x20
        mov     byte ptr [esi+4], 0x1
        call    FUN_004084c0
        add     esp, 0x8
        test    eax, eax
        jz      loc_40EDED
        push    esi
        mov     ecx, eax
        call    FUN_004118c0
        mov     ebp, eax
        jmp     loc_40EDEF
loc_40EDED:
        xor     ebp, ebp
loc_40EDEF:
        mov     eax, dword ptr [esp+0x24]
        test    eax, eax
        lea     edi, [ebp+0x14]
        jnz     loc_40EE01
        push    0x76b768
        jmp     loc_40EE02
loc_40EE01:
        push    eax
loc_40EE02:
        mov     ecx, edi
        call    FUN_00412780
        mov     ecx, edi
        call    FUN_004128e0
        push    ebp
        lea     ecx, [esi+0x44]
        call    FUN_004179b0
        mov     esi, dword ptr [esi+0x4c]
        push    edi
        lea     ecx, [esp+0x18]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp+0x18], esi
        call    FUN_0040fed0
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [esi]
        mov     dword ptr [esp+0x24], eax
        jz      loc_40EE6D
        mov     esi, dword ptr [eax+0x10]
        mov     ecx, dword ptr [edi]
loc_40EE3C:
        mov     bl, byte ptr [ecx]
        mov     dl, bl
        cmp     bl, byte ptr [esi]
        jnz     loc_40EE60
        test    dl, dl
        jz      loc_40EE5C
        mov     bl, byte ptr [ecx+1]
        mov     dl, bl
        cmp     bl, byte ptr [esi+1]
        jnz     loc_40EE60
        add     ecx, 0x2
        add     esi, 0x2
        test    dl, dl
        jnz     loc_40EE3C
loc_40EE5C:
        xor     ecx, ecx
        jmp     loc_40EE65
loc_40EE60:
        sbb     ecx, ecx
        sbb     ecx, -0x1
loc_40EE65:
        test    ecx, ecx
        jge     loc_40EED5
        mov     esi, dword ptr [esp+0x10]
loc_40EE6D:
        mov     edi, dword ptr [edi]
        test    edi, edi
        mov     dword ptr [esp+0x18], edi
        jz      loc_40EE7A
        inc     byte ptr [edi-1]
loc_40EE7A:
        lea     edx, [esp+0x18]
        push    edx
        push    ecx
        lea     eax, [esp+0x2c]
        mov     ecx, esp
        push    eax
        mov     dword ptr [esp+0x28], 0x0
        call    FUN_0040f0d0
        lea     ecx, [esp+0x18]
        push    ecx
        mov     ecx, esi
        call    FUN_0040f190
        mov     ecx, dword ptr [esp+0x18]
        test    ecx, ecx
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x24], eax
        jz      loc_40EED5
        lea     eax, [ecx-1]
        dec     byte ptr [eax]
        jnz     loc_40EED1
        push    eax
        call    FUN_004084e0
        mov     edx, dword ptr [esp+0x28]
        add     esp, 0x4
        mov     dword ptr [edx+0x14], ebp
        mov     eax, ebp
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x4
loc_40EED1:
        mov     eax, dword ptr [esp+0x24]
loc_40EED5:
        pop     edi
        mov     dword ptr [eax+0x14], ebp
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x4
    }
}
