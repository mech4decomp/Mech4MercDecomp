/*
 * FUN_005b1140 (138 B) — __thiscall constructor (ECX = this, RET 0x10).
 * Calls FUN_005b4200 with 4 args, initializes four sub-objects at
 * this+0x5AC/0x5B4/0x5BC/0x5C4 via FUN_0041fc80, sets vtables, then
 * calls FUN_005b12c0. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005b4200(void);
extern void __stdcall FUN_0041fc80(void);
extern void __stdcall FUN_005b12c0(void);

__declspec(naked) void *__fastcall FUN_005b1140(void *this)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, dword ptr [esp + 0xC]
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    ebx
        push    edx
        mov     ecx, esi
        call    FUN_005b4200
        lea     edi, [esi + 0x5AC]
        push    0x0
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77CEAC
        lea     edi, [esi + 0x5B4]
        push    0x0
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77CEAC
        lea     edi, [esi + 0x5BC]
        push    0x0
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77CEAC
        lea     edi, [esi + 0x5C4]
        push    0x0
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77CEAC
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esi], 0x785F4C
        call    FUN_005b12c0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
