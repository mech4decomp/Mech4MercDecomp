/*
 * FUN_005DCB70 (54 B) — Stores param into [this+0x170], calls FUN_005FAEB0(this),
 * then if FUN_005DD280() is nonzero, calls FUN_005DD280([this+0x170]->0x30)
 * and FUN_006525A0 on the result.
 *
 * __thiscall (ECX = this), one stack param, RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005FAEB0(void *this);
extern int  __cdecl FUN_005DD280(void *arg);
extern void __stdcall FUN_006525A0(void *this);

__declspec(naked) void __stdcall FUN_005DCB70(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    esi
        mov     dword ptr [esi + 0x170], ecx
        call    FUN_005FAEB0
        call    FUN_005DD280
        test    eax, eax
        jz      done
        mov     eax, dword ptr [esi + 0x170]
        mov     ecx, dword ptr [eax + 0x30]
        push    ecx
        call    FUN_005DD280
        mov     ecx, eax
        call    FUN_006525A0
done:
        pop     esi
        ret     4
    }
}
