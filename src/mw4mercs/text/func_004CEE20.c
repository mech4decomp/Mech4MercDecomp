/*
 * FUN_004CEE20 (133 B) — __thiscall (this in ECX), RET 0x8 (2 params).
 * Initializes a stack struct via FUN_0041EE70, conditionally fills an
 * output object, copies a buffer (rep movsd/movsb), and calls
 * FUN_004CC1B0 with g_007db080, then FUN_0041EF60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007db080;

extern void __cdecl FUN_0041EE70(void);
extern void __cdecl FUN_004CC1B0(void);
extern void __cdecl FUN_0041EF60(void);

__declspec(naked) void FUN_004CEE20(void)
{
    __asm {
        sub     esp, 0x28
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x3c]
        push    edi
        mov     edi, dword ptr [esi]
        mov     ebp, ecx
        lea     ebx, [edi + 0x10]
        push    ebx
        lea     ecx, [esp + 0x14]
        call    FUN_0041EE70
        mov     eax, dword ptr [esp + 0x24]
        xor     edx, edx
        cmp     eax, edx
        je      L4cee5e
        mov     ecx, dword ptr [esi + 0xc]
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 4], 3
        mov     dword ptr [eax + 0xc], ecx
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x24]
    L4cee5e:
        mov     ecx, dword ptr [esp + 0x28]
        add     eax, 0x10
        cmp     eax, ecx
        mov     dword ptr [esp + 0x24], eax
        jbe     L4cee71
        mov     dword ptr [esp + 0x28], eax
    L4cee71:
        mov     ecx, edi
        mov     edi, eax
        mov     eax, ecx
        shr     ecx, 2
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [g_007db080]
        push    edx
        push    ecx
        mov     ecx, ebp
        call    FUN_004CC1B0
        lea     ecx, [esp + 0x10]
        call    FUN_0041EF60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret     8
    }
}
