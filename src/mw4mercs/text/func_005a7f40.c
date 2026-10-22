/*
 * FUN_005a7f40 (100 B) — Calls virtual methods, then copies "site_light" string
 *                        to result+0x6c.
 *
 * __stdcall with one pointer parameter.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00523e60(void);
extern void __stdcall FUN_005f0a60(void);

__declspec(naked) void __stdcall FUN_005a7f40(void)
{
    

extern int DAT_0076b304;
__asm {
push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    edi
        push    0xec
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    esi
        push    ecx
        lea     edx, [esp + 0x14]
        mov     ecx, esp
        push    edx
        call    FUN_00523e60
        call    FUN_005f0a60
        mov     eax, dword ptr [esi]
        add     esp, 0x8
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        push    0x781fbc
        mov     esi, eax
        call dword ptr [DAT_0076b304]
        or      ecx, 0xffffffff
        mov     edi, eax
        add     esp, 0x4
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        lea     edx, [esi + 0x6c]
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        pop     edi
        pop     esi
        ret
    }


}
