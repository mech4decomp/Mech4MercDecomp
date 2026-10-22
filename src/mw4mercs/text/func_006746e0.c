/*
 * FUN_006746E0 (130 B) — __cdecl, RET (one param). Constructs a sub-object
 * via virtual calls and string-keyed property setters (FUN_00411cb0 /
 * FUN_00411bf0), then stores a byte result from FUN_004e7e60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00501b70(void);
extern void FUN_00411cb0(void);
extern void FUN_00411bf0(void);
extern void FUN_004e7e60(void);

__declspec(naked) void __cdecl FUN_006746e0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x6c
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00501b70
        mov     edx, dword ptr [esi]
        add     esp, 4
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     edi, dword ptr [edi + 4]
        mov     esi, eax
        lea     eax, [esi + 0x68]
        push    0
        push    eax
        push    0x797264
        mov     ecx, edi
        mov     dword ptr [esi], 0x6c
        mov     dword ptr [eax], 0
        call    FUN_00411cb0
        lea     eax, [esi + 0x60]
        push    0
        push    eax
        push    0x797254
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_00411cb0
        push    1
        lea     eax, [esp + 0x10]
        push    eax
        push    0x797240
        mov     ecx, edi
        call    FUN_00411bf0
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        call    FUN_004e7e60
        add     esp, 4
        pop     edi
        mov     byte ptr [esi + 0x64], al
        pop     esi
        ret
    }
}
