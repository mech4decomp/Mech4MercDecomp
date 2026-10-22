/*
 * FUN_00678010 (85 B) — __cdecl (1 stack arg, RET). Calls virtual methods on
 * an object, then FUN_006746E0, then FUN_00411CB0 with (0x7973C4, &tmp, 0);
 * on success stores [arg] into [esi+0x6C], else stores -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006746E0(void);
extern void __cdecl FUN_00411CB0(void);

__declspec(naked) void FUN_00678010(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x70
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_006746E0
        mov     edx, dword ptr [esi]
        add     esp, 4
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     ecx, dword ptr [edi + 4]
        mov     esi, eax
        push    0
        lea     eax, [esp + 0x10]
        push    eax
        push    0x7973c4
        mov     dword ptr [esi], 0x70
        call    FUN_00411CB0
        test    al, al
        je      loc_67805b
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        mov     dword ptr [esi + 0x6c], ecx
        pop     esi
        ret
loc_67805b:
        pop     edi
        mov     dword ptr [esi + 0x6c], 0xffffffff
        pop     esi
        ret
    }
}
