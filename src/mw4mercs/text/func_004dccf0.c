/*
 * FUN_004dccf0 (147 B) — cdecl component factory. Matches a component name
 * against "EarComponent" / "AudioFXComponent" via _stricmp (IAT at
 * 0x0076b2ac) and dispatches to the appropriate component-creation routine
 * (FUN_00505270 / FUN_00504d30 / FUN_00503000), using a virtual call
 * (vtable+0x24) to set a component type id.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_0076b2ac)(const char *a, const char *b);
extern void __cdecl FUN_00505270(void *p);
extern void __cdecl FUN_00504d30(void *a, void *b);
extern void __cdecl FUN_00503000(void *a, void *b, void *c);

__declspec(naked) void FUN_004dccf0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        mov     ebp, dword ptr [g_0076b2ac]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, dword ptr [edi]
        push    0x7737c8
        push    ebx
        call    ebp
        add     esp, 0x8
        test    eax, eax
        jnz     L_audio
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], 0x22e
        call    dword ptr [eax + 0x24]
        push    edi
        call    FUN_00505270
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
L_audio:
        push    0x7737b4
        push    ebx
        call    ebp
        add     esp, 0x8
        test    eax, eax
        jnz     L_default
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], 0x22f
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    edi
        call    FUN_00504d30
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
L_default:
        mov     edx, dword ptr [esp + 0x1c]
        push    edx
        push    edi
        push    ebx
        call    FUN_00503000
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
