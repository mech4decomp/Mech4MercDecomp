/*
 * FUN_004a85f0 (99 B) — __thiscall MLR object method: initializes sub-objects
 * and performs virtual calls on param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a9430(void);
extern void __cdecl FUN_004ae560(void);
extern void __cdecl FUN_004adf40(void);
extern void __cdecl FUN_004add70(void);

__declspec(naked) void FUN_004a85f0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_004a9430
        push    esi
        lea     ecx, [edi+0x2b8]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi+0x2c4]
        call    FUN_004adf40
        mov     eax, dword ptr [esi]
        push    0x1
        lea     ecx, [edi+0x2d8]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        push    esi
        lea     ecx, [edi+0x2e0]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi+0x2e8]
        call    FUN_004adf40
        mov     edx, dword ptr [esi]
        push    0x1
        add     edi, 0x2fc
        push    edi
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        pop     edi
        pop     esi
        ret     4
    }
}
