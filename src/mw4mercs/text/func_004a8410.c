/*
 * FUN_004a8410 (201 B) — __thiscall MLR object constructor: initializes
 * sub-objects, installs vtable 0x77040c, performs virtual calls on param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a9250(void);
extern void __cdecl FUN_004ae3c0(void);
extern void __cdecl FUN_004ae5a0(void);
extern void __cdecl FUN_004adf70(void);
extern void __cdecl FUN_004add90(void);

__declspec(naked) void FUN_004a8410(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp+0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x10]
        push    ebx
        push    edi
        mov     esi, ecx
        push    0x524
        call    FUN_004a9250
        lea     ecx, [esi+0x2b8]
        mov     dword ptr [esi+0x2b4], 0x6
        call    FUN_004ae3c0
        mov     eax, 0x2
        mov     dword ptr [esi+0x2c4], eax
        mov     dword ptr [esi+0x2dc], 0x9
        mov     dword ptr [esi+0x2e0], 0x0
        push    ebx
        mov     dword ptr [esi+0x2e8], eax
        push    edi
        lea     ecx, [esi+0x2b8]
        mov     dword ptr [esi], 0x77040c
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi+0x2c4]
        call    FUN_004adf70
        mov     eax, dword ptr [edi]
        push    0x1
        lea     ecx, [esi+0x2d8]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax+0x20]
        push    ebx
        push    edi
        lea     ecx, [esi+0x2e0]
        call    FUN_004add90
        push    ebx
        push    edi
        lea     ecx, [esi+0x2e8]
        call    FUN_004adf70
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi+0x2fc]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        pop     edi
        mov     dword ptr [esi+0x26c], 0xc8
        mov     dword ptr [esi+0x270], 0x74
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     8
    }
}
