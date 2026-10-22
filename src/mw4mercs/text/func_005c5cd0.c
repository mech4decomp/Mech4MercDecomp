/*
 * FUN_005c5cd0 (79 B) — __thiscall, RET 4. Time-based float update and a
 * virtual dispatch.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(void);

__declspec(naked) void __stdcall FUN_005c5cd0(void *param)
{
    

extern int DAT_0076c5b0;
__asm {
push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x568]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_5cff
        push    0x0
        call    FUN_00707e70
        fsub    dword ptr [esi + 0x568]
        fadd    dword ptr [esi + 0x56c]
        fstp    dword ptr [esi + 0x56c]
L_5cff:
        push    0x0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x568]
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x60]
        mov     dword ptr [esi + 0x570], eax
        pop     esi
        ret     4
    }


}
