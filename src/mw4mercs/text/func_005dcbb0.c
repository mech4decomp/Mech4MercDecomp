/*
 * FUN_005DCBB0 (80 B) — Stores two params into [this+0xe4]/[this+0xe8].
 * If [this+0x178] is set, clears it and, when [this+0x170] is nonzero,
 * calls FUN_00415230(DAT_007f25c0); if that returns nonzero, dispatches
 * virtual method at [*[this+0x170]]+0x148.
 *
 * __thiscall (ECX = this), two stack params, RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __stdcall FUN_00415230(void *arg);

__declspec(naked) void __stdcall FUN_005DCBB0(void *param1, void *param2)
{
    

extern int DAT_007f25c0;
__asm {
mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [ecx + 0xe4], eax
        mov     al, byte ptr [ecx + 0x178]
        test    al, al
        push    esi
        mov     dword ptr [ecx + 0xe8], edx
        jz      done
        mov     esi, dword ptr [ecx + 0x170]
        test    esi, esi
        mov     byte ptr [ecx + 0x178], 0x0
        jz      done
        mov eax, dword ptr [DAT_007f25c0]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      done
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x148]
done:
        pop     esi
        ret     8
    }


}
