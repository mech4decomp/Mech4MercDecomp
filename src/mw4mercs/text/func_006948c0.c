/*
 * FUN_006948C0 (132 B) — __thiscall (ECX = this), RET 4 (1 param).
 *
 * Constructor: calls FUN_00694680(param), initializes float fields at
 * this+0x30/0x34/0x38, then looks up three named resources via
 * FUN_00411a10 and binds them via FUN_00694450. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00694680(void);
extern void __cdecl FUN_00411a10(void);
extern void __cdecl FUN_00694450(void);

__declspec(naked) void __stdcall FUN_006948c0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     esi, ecx
        push    edi
        call    FUN_00694680
        lea     ebx, [esi + 0x30]
        lea     ebp, [esi + 0x34]
        push    0x799494
        mov     ecx, edi
        mov     dword ptr [ebx], 0x0
        mov     dword ptr [ebp], 0x3f800000
        mov     dword ptr [esi + 0x38], 0x3f000000
        call    FUN_00411a10
        test    eax, eax
        jz      L_694904
        push    ebx
        push    eax
        call    FUN_00694450
        add     esp, 0x8
L_694904:
        push    0x799490
        mov     ecx, edi
        call    FUN_00411a10
        test    eax, eax
        jz      L_69491e
        push    ebp
        push    eax
        call    FUN_00694450
        add     esp, 0x8
L_69491e:
        push    0x796dec
        mov     ecx, edi
        call    FUN_00411a10
        test    eax, eax
        jz      L_69493b
        lea     ecx, [esi + 0x38]
        push    ecx
        push    eax
        call    FUN_00694450
        add     esp, 0x8
L_69493b:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
