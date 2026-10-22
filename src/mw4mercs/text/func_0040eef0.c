/*
 * FUNC_0040eef0 (138 B) — __thiscall, RET 0x4. Looks up a config value by
 * name; if found, marks the config dirty and releases the value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004128e0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0040fe00(void);
extern void __cdecl FUN_0040f0b0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0040eef0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [esp+0x10]
        push    edi
        mov     ebx, ecx
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00412570
        test    esi, esi
        jz      loc_40EF13
        lea     ecx, [esp+0x14]
        call    FUN_004128e0
        jmp     loc_40EF21
loc_40EF13:
        push    0x76b768
        lea     ecx, [esp+0x18]
        call    FUN_00412780
loc_40EF21:
        mov     edi, dword ptr [ebx+0x4c]
        lea     eax, [esp+0x14]
        push    eax
        lea     ecx, [esp+0x10]
        push    ecx
        mov     ecx, edi
        call    FUN_0040fe00
        mov     esi, dword ptr [eax]
        cmp     esi, dword ptr [edi]
        jz      loc_40EF58
        push    ecx
        mov     eax, esp
        mov     ecx, edi
        mov     dword ptr [eax], esi
        call    FUN_0040f0b0
        mov     ecx, dword ptr [esi+0x14]
        test    ecx, ecx
        jz      loc_40EF54
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
loc_40EF54:
        mov     byte ptr [ebx+4], 0x1
loc_40EF58:
        mov     eax, dword ptr [esp+0x14]
        test    eax, eax
        jz      loc_40EF73
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_40EF73
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_40EF73:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
